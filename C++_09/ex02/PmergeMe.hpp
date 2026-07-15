#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <cstdlib>
#include <cerrno>
#include <climits>

class PmergeMe
{
public:
	PmergeMe() {}
	~PmergeMe() {}

	bool parseArgs(int ac, char **av)
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string token;
			std::stringstream ss(av[i]);
			while (ss >> token)
			{
				if (!isNumber(token))
					return false;
				errno = 0;
				char *end = NULL;
				long val = std::strtol(token.c_str(), &end, 10);
				if (errno == ERANGE || end == token.c_str() || val > INT_MAX || val < 0)
					return false;
				int v = static_cast<int>(val);
				_vec.push_back(v);
				_deq.push_back(v);
			}
		}
		return !_vec.empty();
	}

	void processAndPrint() const
	{
		// print before
		std::cout << "Before: ";
		for (size_t i = 0; i < _vec.size(); ++i)
		{
			if (i) std::cout << " ";
			std::cout << _vec[i];
		}
		std::cout << std::endl;

		// vector timing
		std::vector<int> vecCopy = _vec;
		timeval t1, t2;
		gettimeofday(&t1, NULL);
		std::sort(vecCopy.begin(), vecCopy.end());
		gettimeofday(&t2, NULL);
		long elapsedVec = (t2.tv_sec - t1.tv_sec) * 1000000 + (t2.tv_usec - t1.tv_usec);

		// deque timing
		std::deque<int> deqCopy = _deq;
		gettimeofday(&t1, NULL);
		std::sort(deqCopy.begin(), deqCopy.end());
		gettimeofday(&t2, NULL);
		long elapsedDeq = (t2.tv_sec - t1.tv_sec) * 1000000 + (t2.tv_usec - t1.tv_usec);

		// print after (sorted)
		std::cout << "After: ";
		for (size_t i = 0; i < vecCopy.size(); ++i)
		{
			if (i) std::cout << " ";
			std::cout << vecCopy[i];
		}
		std::cout << std::endl;

		std::cout << "Time to process a range of " << vecCopy.size() << " elements with std::vector : " << elapsedVec << " us" << std::endl;
		std::cout << "Time to process a range of " << deqCopy.size() << " elements with std::deque  : " << elapsedDeq << " us" << std::endl;
	}

private:
	std::vector<int> _vec;
	std::deque<int> _deq;

	static bool isNumber(const std::string &s)
	{
		if (s.empty())
			return false;
		std::size_t i = 0;
		if (s[0] == '+')
			i = 1;
		for (; i < s.size(); ++i)
		{
			if (!std::isdigit(static_cast<unsigned char>(s[i])))
				return false;
		}
		return true;
	}
};

#endif

