#include<stdio.h>
int main()
{
    float rad, area , perimeter ;
    printf("enter the vradius of the circle :");
    scanf(":%f",& rad);
    
    area = 3.14*rad*rad ;
    printf("the area of the circle is : %f/n" area);

    perimeter = 2*3.14*rad ;
    printf("the perimewter of the circle is : %f/n", perimeter);
    
    return 0 ;
}