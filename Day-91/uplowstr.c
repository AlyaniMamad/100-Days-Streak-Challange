// convert the given input string to uppercase and lowercase without using built in function

#include <stdio.h>

int main(){

    char str[100],upstr[100],lowstr[100];
    int i;

    printf("\nEnter String : ");
    gets(str);

    //int len=strlen(str);

    for(i=0;str[i]!='\0';i++){
        if(((str[i] >='A') && (str[i] <='Z')) || str[i]==' '){
            upstr[i]=str[i];
        }else{
            upstr[i]=str[i]-32;
        }
        if(((str[i] >='a') && (str[i] <='z')) || str[i]==' '){
            lowstr[i]=str[i];
        }else{
            lowstr[i]=str[i]+32;
        }
    }
    upstr[i]='\0';
    lowstr[i]='\0';
    printf("\nORIGINAL STR : %s",str);
    printf("\nUPPERCASED STR : %s",upstr);
    printf("\nLOWERCASED STR : %s",lowstr);

    return 0;
}