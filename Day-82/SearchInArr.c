#include <stdio.h>

int main(){

    int n,target,flag=0;
    printf("\nEnter N : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d Elements : ",n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter Target : ");
    scanf("%d",&target);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            printf("index : %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("-1");

    return 0;
}