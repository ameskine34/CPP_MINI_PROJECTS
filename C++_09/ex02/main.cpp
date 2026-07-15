#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	PmergeMe pm;
	if (!pm.parseArgs(ac, av))
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	pm.processAndPrint();
	return 0;
}
