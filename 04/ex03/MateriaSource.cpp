#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i < 4 && arr[i])
        delete arr[i];
}

MateriaSource::MateriaSource()
{
    int i = -1;
    while (++i < 4)
        arr[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria* new_mat)
{
    int i = 0;
    while (i < 4 && arr[i])
        i++;
    if (i < 4)
    arr[i] = new_mat;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4 && arr[i] && arr[i]->getType() != type)
        i++;
    if (i < 4)
        return arr[i]->clone();
    return nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this == &other)
        return *this;
    int i = -1;
    while (++i < 4 && arr[i])
    {
        delete arr[i];
        arr[i] = other.arr[i]->clone();
    }
    return *this;
}