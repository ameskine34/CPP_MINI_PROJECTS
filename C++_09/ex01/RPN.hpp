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
	RPN() {}
	~RPN() {}

	// Evaluate an RPN expression given as a space-separated string.
	// On success returns true and places result in outValue.
	// On failure returns false.
	bool evaluate(const std::string& expr, double &outValue) const
	{
		std::stack<double> st;
		std::stringstream ss(expr);
		std::string token;

		while (ss >> token)
		{
			if (token == "+" || token == "-" || token == "*" || token == "/")
			{
				if (st.size() < 2)
					return false;
				double b = st.top(); st.pop();
				double a = st.top(); st.pop();
				double r = 0.0;
				if (token == "+")
					r = a + b;
				else if (token == "-")
					r = a - b;
				else if (token == "*")
					r = a * b;
				else if (token == "/")
				{
					if (b == 0.0)
						return false;
					r = a / b;
				}
				st.push(r);
			}
			else
			{
				// parse number (C++98): use strtod to detect invalid tokens
				char *end = NULL;
				errno = 0;
				double val = std::strtod(token.c_str(), &end);
				if (errno == ERANGE || end == token.c_str())
					return false;
				// ensure the token contained only a number
				while (*end != '\0')
				{
					if (!isspace(static_cast<unsigned char>(*end)))
						return false;
					++end;
				}
				st.push(val);
			}
		}
		if (st.size() != 1)
			return false;
		outValue = st.top();
		return true;
	}
};

#endif
