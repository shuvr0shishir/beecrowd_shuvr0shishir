#include <stdio.h>

int main(){
    int x,y;
    scanf("%d.%d",&x,&y);
    
    int notes[6]={100,50,20,10,5,2};
    int a[6]={0};
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        a[i]=x/notes[i];
        x%=notes[i];
        printf("%d nota(s) de R$ %d.00\n",a[i],notes[i]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",x);
  
    int coins[5]={50,25,10,5,1};
    int b[5]={0};
    for (int i = 0; i < 5; i++)
    {
        b[i]= y/coins[i];
        y%= coins[i];
        printf("%d moeda(s) de R$ %.2f\n",b[i],(float)coins[i]/100);
    }
    

return 0;
}