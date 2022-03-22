#include <stdio.h>
/*
& = address
* = deference operator/ indirect operator
*/
int main()
{
    int a = 76;
    printf("let's learn pointer\n");
    int *ptra = &a;
    printf("value of a is %d\n", a);
    printf("%d\n", *ptra);
    printf("%x\n", ptra); // hexadecimal value of ptra i.e. address of a
    printf("%p\n", ptra); // hexadecimal value of ptra i.e. address of a
    printf("%p\n", &a); // address of a

    return 0;
}
