//perimeter of rectangle

#include<stdio.h>
int main ( ) {
    
    int length, width, perimeter;
    
    printf("Enter length :");
    scanf("%d",&length);
    
    printf("Enter width :");
    scanf("%d",&width);
    
    perimeter=2*(length+width);
    
    printf("perimeter is %d",perimeter);
    
    return 0;
}
