#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int count=0;

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count++;
        }
    }

    printf("\nNumber Of Vowels : %d",count);

    return 0;
}
