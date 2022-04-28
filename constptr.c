#include<stdio.h>
int main ()
{
    int a = 10, b = 20;
    const int *p;
    p = &a;
    printf ("value of a is %d, *p is %d \n", a, *p);
    *p = 5;  //can not change value at address
    printf ("value of a is %d, *p is %d \n", a, *p);
    p = &b;  // address can be changed
    return 0;
}
