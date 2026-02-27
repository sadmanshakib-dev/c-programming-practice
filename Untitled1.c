#include<stdio.h>
int main(){
int a=-5,b=10;
if(a>0&&b<0){
    a++;
}
else if(a<0&&b<0){
    a--;
}
else if(a<0&&b>0){
    a--;
}
else{b--;}
printf("%d\n",a+b);

}
