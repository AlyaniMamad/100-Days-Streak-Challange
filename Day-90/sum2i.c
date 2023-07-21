#include<stdio.h>
  
int main(){

    int n,k;

    printf("\nEnter N :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Elements :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter Key :");
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if((i+j)==k){
                printf("( %d,%d ),",i,j);
            }
        }
    }

    return 0;
}