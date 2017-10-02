#include<stdio.h>
int main()
{
    int  i=3,*j,**k;
    j=&i;
    k=&j;
    printf("address of i = %u\n",&i);
    printf("address of i = %u\n",j);
    printf("address of j = %u\n",&j);
    printf("address of j = %u\n",k);
    printf("address of k = %u\n",&k);
    printf("value of j: %u\n",j);
    printf("value of k: %u\n",k);
    printf("value of i:%d\n",i);
    printf("value of i:%d\n",*(&i));
    printf("value of i:%d\n",*j);
    printf("value of i:%d",**k);
    return 0;
}
