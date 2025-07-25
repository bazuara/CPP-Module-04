#include <MateriaSource.hpp>

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; ++i)
    storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other) {
  *this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
  if (this != &other) {
    for (int i = 0; i < 4; ++i) {
      delete storage[i];
      if (other.storage[i])
        storage[i] = other.storage[i]->clone();
      else
        storage[i] = NULL;
    }
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; ++i)
    delete storage[i];
}

void MateriaSource::learnMateria(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (!storage[i]) {
      storage[i] = m->clone();
      break;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; ++i) {
    if (storage[i] && storage[i]->getType() == type)
      return storage[i]->clone();
  }
  return NULL;
}
