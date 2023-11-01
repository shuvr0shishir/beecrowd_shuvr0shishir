#include <stdio.h>

void printEven(int e[]);
void printOdd(int o[]);

int main(void){
    int e[5],o[5],x=0,y=0;
    
    for (int i = 0; i < 15; i++)
    {
        int t;
        scanf("%d",&t);
        if (t%2!=0)
        {
            o[y]=t;
            y++;
            if (y==5)
            {
                printOdd(o);
                y=0;
            }
            
        }
        else if (t%2==0)
        {
            e[x]=t;
            x++;
            if (x==5)
            {
                printEven(e);
                x=0;
            }
        }
    }
    printOdd(o);
    printEven(e);

return 0;
}
void printEven(int e[]){
    for (int i = 0; i< 5 ; i++)
    {
        if (e[i]==0) break;
        printf("par[%d] = %d\n",i,e[i]);
        e[i]=0;
    }
}
void printOdd(int o[]){
    for (int i = 0; i<5; i++)
    {
        if (o[i]==0) break;
        printf("impar[%d] = %d\n",i,o[i]);
        o[i]=0;
    }
}