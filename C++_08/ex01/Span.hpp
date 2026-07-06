#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span{
    private:
        unsigned int N;
        std::vector<unsigned int> vec;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
    void addNumber(int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};


#endif