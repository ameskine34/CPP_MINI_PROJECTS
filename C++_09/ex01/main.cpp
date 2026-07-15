#include "RPN.hpp"
#include <cmath>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}

	std::string expr = av[1];
	RPN rpn;
	double result = 0.0;
	if (!rpn.evaluate(expr, result))
	{
		std::cout << "Error" << std::endl;
		return 1;
	}

	// Print result: if integer-valued, print without decimals
	double intpart = 0.0;
	if (modf(result, &intpart) == 0.0)
		std::cout << static_cast<long>(intpart) << std::endl;
	else
		std::cout << result << std::endl;

	return 0;
}
