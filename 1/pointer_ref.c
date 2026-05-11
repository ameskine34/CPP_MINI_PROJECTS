#include <stdio.h>

void swap(int *s, int *w)
{
    int p = *s;
    *s = *w;
    *w = p;
}
 
int main()
{
    // int a = 2;
    // int b = 5;
    swap(NULL, NULL);
}

// the error appear at the run time 
// while in c++ the error appear at the compile time
// not even till trying to run 