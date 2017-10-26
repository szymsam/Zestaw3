#include <stdio.h>

    float triangle(float a,float h) {
        float p = (a * h) / 2.0;
        return p;
    }
int main() {
    float a, h;
    printf("podaj podstawę: ");
    scanf("%f", &a);
    printf("podaj wysokosc: ");
    scanf("%f", &h);
    printf("%f\n",triangle(a, h));

    return 0;
}