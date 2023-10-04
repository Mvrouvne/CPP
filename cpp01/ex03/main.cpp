
#include <stdio.h>
int& fun(int& w)
{
    // w = 2;
    return(w);
}

int main()
{
    int a = 5;
    int x = fun(a);
    // x = 10;
    printf("%d", x);
}