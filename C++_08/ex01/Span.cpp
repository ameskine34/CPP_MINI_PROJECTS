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
void Span::addNumber(int n)
{
    if (vec.size() >= N)
        throw "Error!!!!!!!!";
    vec.push_back(n);
};

unsigned int Span::shortestSpan(){
    if (vec.size() <= 1)
        throw "Error!!!!!!!!";
    std::sort(vec.begin(), vec.end());
    unsigned int min = vec[1] - vec[0];
    for (size_t i = 1; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] < min)
            min = vec[i + 1] - vec[i];
    }
    return min;
};

unsigned int Span::longestSpan(){
    if (vec.size() <= 1)
        throw "Error!!!!!!!!";
    std::sort(vec.begin(), vec.end());
    return vec[vec.size() - 1] - vec[0];
};