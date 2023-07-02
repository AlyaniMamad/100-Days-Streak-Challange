// Question 5: String Anagram Check
// Write a function that takes two strings as input and determines whether they are anagrams of each other. Anagrams are words or phrases formed by rearranging the letters of another word or phrase.

// Example:
// Input: "listen", "silent"
// Output: Anagrams

// Input: "hello", "world"
// Output: Not Anagrams

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100],str2[100];
    int flag=0;

    printf("\nEnter str1 : ");
    gets(str1);
    printf("\nEnter str2 : ");
    gets(str2);

    int n=strlen(str1)-1;
    int m=strlen(str2)-1;

    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(str1[i]>str1[j]){
                    char temp=str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp;
                }
                if(str2[i]>str2[j]){
                    char temp=str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }

            }
        }
    }else{
        flag=1;
    }

    printf("\n%s",str1);
    printf("\n%s",str2);

    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("\nAnagam");
    }else{
        printf("\nNot Anagam");
    }
    return 0;
}