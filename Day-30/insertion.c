#include <stdio.h>

int main()
{
   
    int n;
    printf("\nEnter No : ");
    scanf("%d",&n);

    int array[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, key;

    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}