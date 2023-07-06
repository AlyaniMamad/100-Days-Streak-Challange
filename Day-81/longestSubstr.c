#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int cnt=1;

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str)-1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]!=str[j]){
                cnt++;
                
            }
        }
    }

    printf("Count : %d",cnt);

    return 0;
}