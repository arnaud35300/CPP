#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource: public IMateriaSource
{
private:
    AMateria*   _materia[4];
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const & src);
    ~MateriaSource(void);

    MateriaSource & operator=(MateriaSource const & rhs);
    void    learnMateria(AMateria *m);
    AMateria    *createMateria(std::string const & type);
};

# endif