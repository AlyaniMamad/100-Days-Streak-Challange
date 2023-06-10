#include<stdio.h>
#define SIZE 5

int items[5],front=-1,rear=-1;
void enque(int val){
    if(rear==NULL)
    {
        printf("\nQueue Is full");
    }else{
        if(front==-1)
            front=0;

        rear++;
        items[rear]=val;
    }
}
void dequeue()
{
    //Enque code will be here
}
void display(){
    //Code For Display
}
int main(){


    return 0;
}
