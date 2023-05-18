#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter No : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter n Elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nSorted Array Is : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}