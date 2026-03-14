#include<stdio.h>
int main ( ) {
    
    int a, b, temp;
    
    printf("Enter a number :");
    scanf("%d",&a);
    
    printf("Enter b number :");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf("a=%d and b=%d",a,b);
    
    return 0;
}
    
