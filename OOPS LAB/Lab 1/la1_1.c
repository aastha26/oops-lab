#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter a number=");
    scanf("%d",&i);
    printf("from divisible to =");
    scanf("%d",&j);
    k=i%j;
    if(k==0)
        printf("%d",k);
    else
        printf("largest multiple=%d",i+j-k);
}
