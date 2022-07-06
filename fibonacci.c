#include <stdio.h>
int fibonacci(int,int,int);
void main(){
int x1=0 ,x2=1,terms;

printf("enter number of terms\n");
scanf("%d",&terms);
printf("fibonacci series :%d  ",x1);
fibonacci(x1,x2,terms-2);

}
int fibonacci(int x1,int x2,int terms){
int temp;
if (terms!=0)
{printf("%d ",x1+x2);
temp=x2;
x2=x2+x1;
x1=temp;
terms--;
}
return fibonacci(x1,x2,terms);

}
