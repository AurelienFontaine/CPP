#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Tuto : ./convert <input> " << std::endl, 1);
    std::string output = av[1];
    return (Scalar::convert(output));
    
}