#include <stdio.h>

int main(void){
    unsigned long long fib[60];
    fib[0]=0;
    fib[1]=1;
    for (int i = 2; i <=60; i++)
    {
        fib[i]= fib[i-1]+fib[i-2];
    }

    int t;
    scanf("%d",&t);
    for (int i = 0; i <t; i++)
    {
        int n;
        scanf("%d",&n);
        printf("Fib(%d) = %llu\n",n,fib[n]);
    }
    
return 0;
}
//BEE 1176