#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i * 2);
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Before: " << *it << std::endl;
		*it = 999;
		std::cout << "After: " << *it << std::endl;
	}
	catch (const char* msg)
	{
		std::cout << msg << std::endl;
	}
	return 0;
}