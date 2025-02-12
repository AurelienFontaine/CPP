#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits.h>
# include <float.h>

class Scalar 
{
    private :


                                Scalar(void);
    public :
                                Scalar(std::string str);
                                Scalar(Scalar const &toCopy);
                                Scalar &operator=(Scalar const &toCopy);
                                ~Scalar();


                void            setScalar(std::string string);
                std::string     getScalar();

                static int      convert(std::string output);   
};
    
std::ostream    &operator<<(std::ostream &flux, Scalar &rhs);

#endif
