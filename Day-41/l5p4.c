// . Write a C program to accept a coordinate point in a XY coordinate system and
// determine in which quadrant the coordinate point lies

#include <stdio.h>

int main(){

    int x,y;

    printf("\nEnter X,Y : ");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("\nX & Y lies in 1st Quadrant");
    }else if(x>0 && y<0){
        printf("\nX & Y lies in 4th Quadrant");
    }else if(x<0 && y<0){
        printf("\nX & Y lies in 3rd Quadrant");
    }else if(x<0 && y>0){
        printf("\nX & Y lies in 2nd Quadrant");
    }else{
        printf("\nInvalid Input");
    }

    return 0;
}