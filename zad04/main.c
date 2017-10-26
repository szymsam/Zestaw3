#include <stdio.h>

void s(int a);

int main()
{
    int a;
    scanf("%d",&a);
    s(a);

    return 0;
}

void s(int a)
{
    for (int i=1;1<=a;i=i+2)
        printf ("%d\n",i*i);
}