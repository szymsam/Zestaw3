#include <stdio.h>
int f(int n)
{
    if (n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return n*n;
    }
    else
    {
        return n*n-5;
    }

}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}