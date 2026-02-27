#include<stdio.h>
int main(){
int x,a,b,i;
scanf("%d",&x);
for(i=1;i<=x;i++){
    scanf("%d%d ",&a ,&b);
    if(b==0){
        printf("divisao impossivel\n");
    }else{
    printf("%.1f\n",(float)a/b);
    }
}
return 0;
}

