#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    printf("\nEnter String :");
    gets(str);

    int flag=0;
    int n=strlen(str);

    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("\nPelindrom String he");
    }else{
        printf("\nNahi h");
    }

    return 0;
}