#include <stdio.h>
#include <string.h>

int main(){

    char str[100],str1[100];
    int j=0;

    printf("\nEnter Strig :");
    gets(str);

    int n=strlen(str);

    for(int i=0;i<n;i++){
        if(str[i]==' '){
            continue;
        }else{
            str1[j]=str[i];
            j++;
        }
    }

    str1[j]='\0';

    printf("\nOriginal Str : %s",str);
    printf("\nRemoved Sp Str : %s",str1);

    return 0;
}