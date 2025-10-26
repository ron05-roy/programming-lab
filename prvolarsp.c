#include<stdio.h>
int main()
{
    float rad , volume =0.0, area=0.0 ;
    printf("enter the radius of the sphere :");
    scanf("%f",&rad);

    area = 4*3.14*rad*rad ;
    printf("%f",area);
    
    volume = 1.3*3.14*rad*rad*rad ;
    printf("%f",volume);
     
    return 0;
}
