#include <stdio.h>

int main(){

    int r,c,a[100][100],b[100][100];

    printf("\nEnter Row : ");
    scanf("%d",&r);
    printf("\nEnter Col : ");
    scanf("%d",&c);

    printf("\nEnter %dX%d Matrix : \n",r,c);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}