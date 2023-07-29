#include <stdio.h>

int isprime(int no){
    if(no<2){
        return 0;
    }else{
        for(int i=2;i<no;i++){
            if(no%i==0){
                return 0;
            }
        }
    }
    return 1;
}


int main(){

    int a,b;

    printf("\nEnter Range : ");
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }

    return 0;
}