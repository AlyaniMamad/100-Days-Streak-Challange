#include <stdio.h>
#include <math.h>

int main(){

    int n1,n2;

    printf("\nEnter n1 : ");
    scanf("%d",&n1);
    printf("\nEnter n2 : ");
    scanf("%d",&n2);

    printf("\nRange Is : %d To %d",n1,n2);

    for(int i=n1;i<n2;i++){
        int p=0,orno=i,sum=0;
        while(i!=0){
            p++;
            i=i/10;
        }
        int on = orno;
        while(orno!=0){
            int rem=orno%10;
            sum =sum + pow(rem,p);
            orno/=10;
        }
        if(sum==on)
            printf("%d ",sum);
    }

    return 0;
}
