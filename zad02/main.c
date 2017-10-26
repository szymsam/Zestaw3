#include <stdio.h>

    void dz ()
    {
        int a,k=1;
        scanf("%d",&a);

        while(k<=a)
        {
            if(a%k==0)
            {
                printf("%d ",k);
            }
            k++;
        }
    }
 int main()
 {
     dz();
    return 0;
}