#include <stdio.h>
#include <string.h>

int main(){

    char str1[100],str2[100];

    gets(str1);gets(str2);

    int n = strlen(str1);int m = strlen(str2);

    if(n==m){
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            s1+=str1[i];
            s2+=str2[i];
        }
        printf("\n%d",s1);
        printf("\n%d",s2);

        if(s1==s2){
            printf("\nAnagram String");
        }else{
            printf("\nNot Anagram String");
        }

    }else{
        printf("\nNot Anagram Strings");
    }

    return 0;
}