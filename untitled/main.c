#include<stdio.h>

void f(float baza,float podwyzka, float prog){

    float n=baza;
    int i;
    for (i=0;n<prog;i++)
    {
        n+=n*podwyzka;
    }
    printf("%d",i);
}