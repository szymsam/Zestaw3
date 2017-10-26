#include <stdio.h>
int pow(int k, int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return k*pow(k,n-1);
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int wynik=pow(a,b);
    printf("%d",wynik);

    return 0;
}