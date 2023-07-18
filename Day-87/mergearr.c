#include <stdio.h>

int main(){

    int n,m;
    printf("\nEnter First Array Size : ");
    scanf("%d",&n);
    int arr1[n];

    printf("\nEnter %d Elements :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    printf("\nEnter Second Array Size : ");
    scanf("%d",&m);
    int arr2[m];

    printf("\nEnter %d Elements :",m);
    for(int i=0;i<m;i++)
        scanf("%d",&arr2[i]);


    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[i];
    }

    printf("\nNew Array : ");
    for(int i=0;i<(n+m);i++){
        printf("%d ",arr1[i]);
    }

    return 0;
}