#include "Span.hpp"

Span::Span(){
};

Span::Span(unsigned int num):N(num){
};

Span::Span(const Span& other){
    this->N = other.N;
};

Span& Span::operator=(const Span& other){
    if (this != &other)
        this->N = other.N;
    return (*this);
};

Span::~Span(){
};
// unsigned int Span::addNumber();
unsigned int Span::shortestSpan();
unsigned int Span::longestSpan();