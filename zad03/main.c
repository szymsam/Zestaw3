#include <stdio.h>

int suma (int n)
{
    int suma=0, i;
    for(i=0; i<=n; i++)
    {
        if(i%2!=0)
        {
            suma+=i;
        }
    }
    return suma;
}
int main()
{
    printf("%d",suma (8));
    return 0;
}