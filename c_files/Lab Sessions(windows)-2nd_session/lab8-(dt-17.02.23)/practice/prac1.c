#include<stdio.h>
int main()
{
    int a = 18, b = 9, c, d, e = 10;
    c = b++;
    d = b;
    int f = a>b>d>c;
    printf("%d\n", f!=1);
    printf("%d\n", a+c == b>=e<c+d!=1);
    return 0;
}
