// Capitalize first and last letter of each word

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{

    char str[100];
    int j=0;

    printf("\nEnter Str : ");
    gets(str);

    int n=strlen(str);

    for(int i=0;i<n;i++){
        if(i==0 || i==(n-1)){
            str[i]=toupper(str[i]);
        }else if(str[i]==' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
   
    printf("New Str : %s",str);

    return 0;
}