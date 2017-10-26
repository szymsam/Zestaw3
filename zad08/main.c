#include <stdio.h>
int silnia (int n)
{
    if (n==0)return 1;
    else return silnia(n-1)*n;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",silnia (x));
    return 0;
}