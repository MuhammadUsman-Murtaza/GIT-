#include <stdio.h>
#include <conio.h>
float sum (int a , int b)
{   float c = a+b;    return c;    }
float sub (int a , int b )
    {  float c = a - b ;   return c;  }
float division(int a, int b) 
{ 
    // Calculate division of a by b
    float c = (float)a / b; 
    // Return the result as a float
    return c; 
}
float multiply(int a,int b)
{ float c = a*b; return c; }
int main(){
    int a , b ; char F;
    printf("Enter the 1st number :  "); scanf("%d",&a);
    printf("\nEnter the 2nd number :  "); scanf("%d",&b);
    printf("\nChoose the function to perform !\n(+ ,- , /,* )");
    F= getch();
    switch (F)
{
    case '+':
    printf("\nThe Sum of numbers %d and %d is %f",a,b,sum(a,b));break;
     case '-':
    printf("\nThe Sum of numbers %d and %d is %f",a,b,sub(a,b));break;
    case '/' :
     printf("\nThe Sum of numbers %d and %d is %f",a,b,division(a,b));break;
    case '*' :
     printf("\nThe Sum of numbers %d and %d is %f",a,b,multiply(a,b));break; 
}
   return 0;
}