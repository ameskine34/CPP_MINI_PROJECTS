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
        throw "Error!!!!!!!!1";
    vec.push_back(n);
}
unsigned int Span::shortestSpan(){

}
unsigned int Span::longestSpan(){
    vec
}