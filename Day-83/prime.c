#include <stdio.h>

int main()
{

    int no, flag = 0;

    printf("\nEnter Number : ");
    scanf("%d", &no);

    if (no >= 2)
    {

        int i = 2;

        while (i < no)
        {
            if (no % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }

        if (flag == 0)
        {
            printf("\nPrime No");
        }
        else
        {
            printf("\nNot Prime No");
        }
    }else{
        printf("\nPlease Enter Valid Input");
    }

    return 0;
}