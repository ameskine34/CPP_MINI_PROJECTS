#include "RPN.hpp"

RPN::RPN(){
};

RPN::~RPN(){
};

bool RPN::evaluate(const std::string& expr, double &outValue) 
{
	std::stack<double> st;
	std::stringstream ss(expr);
	std::string token;
	while (ss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (st.size() < 2) //means there is 3 tokens
				return false;
			double b = st.top();
			st.pop();
			double a = st.top(); 
			st.pop();
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
			char *end = NULL;
			errno = 0;
			double val = std::strtod(token.c_str(), &end);
			if (errno == ERANGE || end == token.c_str()) //just to check the overflow
				return false;
			// ensure the token contained only a number
			while (*end != '\0')
			{
				if (!isspace(*end))
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