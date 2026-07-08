#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    while (!s.empty())    
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}

//top() return a reference to the element at the top of the stack 
//pop() removes the top element from the stack
//push() add x to the top of the stack it is a void 

// in the ex02:

//they want us to repair the injustice of the stack container for not 
//being iterable

//Under the hood, std::stack is an adapter that wraps an internal 
//container. By default, that container is a std::deque
//in the internal implementation of std::stack contain a container 
//protected member variable named *c*, cuz the c is protected and not 
//private MutantStack inherits it and can directly access it this->c
//std::deque does have iterators, .begin(), and .end() 
//the deque is like a tunnel from the both ends 