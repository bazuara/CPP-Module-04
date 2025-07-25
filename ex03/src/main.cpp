#include <Character.hpp>
#include <Cure.hpp>
#include <IMateriaSource.hpp>
#include <Ice.hpp>
#include <MateriaSource.hpp>
#include <iostream>

void printSeparator(std::string title) {
  std::cout << "\n====== " << title << " ======\n";
}

int main() {
  printSeparator("SETUP");
  IMateriaSource* src = new MateriaSource();

  AMateria* iceModel = new Ice();
  AMateria* cureModel = new Cure();
  src->learnMateria(iceModel);
  src->learnMateria(cureModel);
  delete iceModel;
  delete cureModel;

  ICharacter* me = new Character("me");

  printSeparator("CREATING MATERIAS");
  AMateria* ice = src->createMateria("ice");
  AMateria* cure = src->createMateria("cure");
  AMateria* unknown = src->createMateria("fire");  // Should return NULL

  if (!unknown)
    std::cout << "[OK] Unknown materia type returns NULL\n";

  printSeparator("EQUIP MATERIAS");
  me->equip(ice);
  me->equip(cure);
  me->equip(src->createMateria("ice"));
  me->equip(src->createMateria("cure"));

  AMateria* over = src->createMateria("ice");
  me->equip(over);  // Should do nothing, inventory full
  std::cout << "[INFO] Attempted to equip a 5th materia (should be ignored)\n";
  delete over;

  printSeparator("USE MATERIAS");
  ICharacter* bob = new Character("bob");
  for (int i = 0; i < 4; ++i)
    me->use(i, *bob);  // Should use 4 materias

  me->use(4, *bob);  // Invalid index
  std::cout << "[INFO] Attempted to use invalid index (should do nothing)\n";

  printSeparator("UNEQUIP TESTS");
  me->unequip(1);  // Unequip one materia (cure)
  delete cure;

  me->use(1, *bob);  // Should do nothing
  std::cout << "[INFO] Unequipped slot 1 and attempted to use it\n";

  printSeparator("DEEP COPY TEST");
  Character original("original");
  AMateria* copyIce = src->createMateria("ice");
  original.equip(copyIce);
  Character clone = original;

  std::cout << "[INFO] Original uses materia: ";
  original.use(0, *bob);
  std::cout << "[INFO] Clone uses materia: ";
  clone.use(0, *bob);

  printSeparator("DESTRUCTORS");
  delete bob;
  delete me;
  delete src;

  return 0;
}
