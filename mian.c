#include<stdio.h>
#include"add.h"
// #include<sub.h>
// #include<mul.h>
int main()
{
    int a,b;
    printf("enter a,b values:");
    scanf("%d%d",&a,&b);
    printf("addtion is %d\n",add(a,b));
    // printf("addtion is %d\n",sub(a,b));
    // printf("addtion is %d\n",mul(a,b));
    return 0;
}