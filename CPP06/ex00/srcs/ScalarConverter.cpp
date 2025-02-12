
#include "../includes/ScalarConverter.hpp"


Scalar::Scalar()
{
    std::cout << "Default Scalar constructor called" << std::endl;
}

Scalar::Scalar(std::string string)
{

}

Scalar::Scalar(Scalar const &toCopy)
{
     if (this != &toCopy)
       *this = toCopy;
    return ;
}

Scalar &Scalar::operator=(Scalar const &toCopy)
{
    (void)toCopy;
    return (*this);
}

std::ostream &operator<<(std::ostream &flux, Scalar &rhs)
{
    flux << rhs.getScalar() << std::endl;
}

Scalar::~Scalar()
{
    std::cout << "Default Scalar destructor called" << std::endl;
}

bool isValid(std::string output)
{
    if ()

    else if ()

    else if ()

}

int Scalar::convert(std::string output)
{


    fromChar();
    fromInt();
    fromFloat();
    fromDouble();
}

void fromChar(std::string string)
{

}

void fromInt(std::string string)
{

}

void fromFloat(std::string string)
{

}

void fromDouble(std::string string)
{

}
