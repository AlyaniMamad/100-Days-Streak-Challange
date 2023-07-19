#include <stdio.h>

int main(){

    char str[100],newstr[100];
    printf("\nEnter String : ");
    gets(str);

    int j=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]==')' || str[i]=='[' || str[i]==']'){
            continue;
        }else{
            newstr[j]=str[i];
            j++;
        }
    }
    newstr[j]='\0';

    printf("%s",newstr);

    return 0;
}