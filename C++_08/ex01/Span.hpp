#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>

class Span{
    private:
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
    addNumber();
    unsigned int shortestSpan();
    unsigned int longestSpan();
};


#endif