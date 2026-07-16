#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <cctype>
#include <cmath>

class RPN
{
	public:
		RPN();
		~RPN();
	bool evaluate(const std::string& expr, double &outValue);
};


#endif
