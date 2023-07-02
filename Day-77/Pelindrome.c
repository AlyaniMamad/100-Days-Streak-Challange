#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int flag=0;

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);
    int end=n-1;

    for(int st=0;st<=end;st++,end--){
        if(str[st]!=str[end]){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("\nPelindrom String");
    }else{
        printf("\nNot Pelindrom String");
    }

    return 0;
}