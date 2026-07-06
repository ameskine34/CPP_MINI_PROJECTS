#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(20);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(4);
        sp.addNumber(5);
        sp.addNumber(7);
        sp.addNumber(8);
        sp.addNumber(10);
        sp.addNumber(12);
        sp.addNumber(13);
        sp.addNumber(14);
        sp.addNumber(15);
        sp.addNumber(16);
        sp.addNumber(18);
        sp.addNumber(19);    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char* e){
        std::cerr << e << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char* e){
        std::cerr << e << std::endl;
    }
    return (0);
}