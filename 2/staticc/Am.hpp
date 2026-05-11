#ifndef AM_HPP
#define AM_HPP

class Am {
public:
    static int r;
    static void f(){
        r +=1;
    }
};

// ❌ WRONG: defining in header
// int Am::r = 0;

#endif