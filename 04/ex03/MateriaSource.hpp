#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource{
private:
    AMateria *arr[4];
public:
    ~MateriaSource();
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource& operator=(const MateriaSource &other);
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};
#endif