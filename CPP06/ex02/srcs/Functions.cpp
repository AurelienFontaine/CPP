#include "../includes/Functions.hpp"

Base	*generate(void){
	std::srand(std::time(0));
	int r = std::rand();
	switch(r %3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p){ //dynamic_cast send a nullptr when failed using a pointer
	if (dynamic_cast<A*>(p))
		std::cout << "*Type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "*Type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "*Type is C" << std::endl;
	else
		std::cout << "*Type is " << "Unknown" << std::endl;
}

void	identify(Base &p){ //dynamic_cast send an exception when failed used with reference
	try {
		A test = dynamic_cast<A&>(p);
		std::cout << "&Type is A" << std::endl;
		return ;
	} catch (std::exception &e){
	}
	try {
		B test = dynamic_cast<B&>(p);
		std::cout << "&Type is B" << std::endl;
		return ;
	} catch (std::exception &e){
	}
	try {
		C test = dynamic_cast<C&>(p);
		std::cout << "&Type is C" << std::endl;
		return ;
	} catch (std::exception &e){
		std::cout << "&Type is " << "Unknown" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}