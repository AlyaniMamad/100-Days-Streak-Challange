// Prime Numbers in a Given Range in C

#include <stdio.h>

int main(){

    int a=1,b=200;

    for(int i=a;i<=b;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
            flag=0;
        }
    }

    return 0;
}