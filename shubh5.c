// 5.	Write a C program – using pointers to swap the values of two variable.

#include<stdio.h>
void swap(int *a,int *b);
int main(){
int x,y;
printf("enter x :");
scanf("%d",&x);
printf("enter y : ");
scanf("%d",&y);
swap(&x,&y);
    return 0;
}
void swap(int *a,int *b){
int t;
t=*a;
*a=*b;
*b=t;
printf("x = %d\ny = %d\n",*a,*b);
}