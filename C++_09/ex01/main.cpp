#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	std::string expr = av[1];
	RPN rpn;
	double result = 0.0;
	if (!rpn.evaluate(expr, result))
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	double intpart = 0.0;
	if (modf(result, &intpart) == 0.0) //if no 0.5 or other found so the number not a double
		std::cout << static_cast<long>(intpart) << std::endl;
	else
		std::cout << result << std::endl;

	return 0;
}
