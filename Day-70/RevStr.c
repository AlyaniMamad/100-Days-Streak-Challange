#include <stdio.h>
#include <string.h>

void fun(char str[],int n){
    int st=0,end=n-1;
        while(st<=end){
            char temp=str[st];
            str[st]=str[end];
            str[end]=temp;
            st++;end--;
        }
}

int main(){
    char str[100];

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);

    fun(str,n);
    
    printf("\nReversed STR :%s",str);
    return 0;

}