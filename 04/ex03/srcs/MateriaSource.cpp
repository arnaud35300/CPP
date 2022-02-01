# include "main.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    *this = src;
    return ;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
    }
    return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
        if (rhs._materia[i])
            this->_materia[i] = rhs._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            return ;
        }
    }
}
AMateria    *MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (NULL);
}