#include <stdio.h>

int main(){

    int arr[]={10,20,30,40,50};
    int flag=0,i;

    for(i=0;i<5;i++){
        if(arr[i]==-1){
            flag=1;
        }
    }
    if(flag==1){
        printf("\nFound At %d Position",i);
    }else{
        printf("\nNot Found");
    }
    return 0;
}