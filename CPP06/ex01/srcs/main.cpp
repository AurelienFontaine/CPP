#include "../includes/Serializer.hpp"

int main()
{
	try
	{
		Data d1(0, "TestName");
		std::cout << d1 << " adress: " << &d1  << std::endl;
		uintptr_t raw = Serializer::serialize(&d1);
		std::cout << "raw uintptr_t: " << raw <<" adress : " << &raw  << std::endl;
		Data *d2 = Serializer::deserialize(raw);
		std::cout << *d2 <<" adress : " << d2 << std::endl;
		std::cout << "///////////////////////////////" << std::endl;
		Data d3(-1, "Negative");
		std::cout << d3 << " adress: " << &d3  << std::endl;
		raw = Serializer::serialize(&d3);
		std::cout << "raw uintptr_t: " << raw <<" adress : " << &raw  << std::endl;
		Data *d4 = Serializer::deserialize(raw);
		std::cout << *d4 <<" adress : " << d4 << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what()  << std::endl;
	}
	return (0);
}

