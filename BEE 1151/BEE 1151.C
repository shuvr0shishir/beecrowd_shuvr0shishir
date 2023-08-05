#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    if (N==1)
    {
        printf("0");
    }else if(N==2){
        printf("0 1");
    }else{
        int n1=0, n2=1;
        printf("%d %d", n1,n2);

        for (int i = 3 ; i <=N; i++){
            int ans = n1 + n2;
            n1=n2;
            n2=ans;
            printf(" %d",ans);
        } 
    }
    printf("\n");

    return 0;
}