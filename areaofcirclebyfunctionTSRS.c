#include<stdio.h>
float areaofcircle(int a);
int main()
{
    int r;
    printf("Enter the value of r = ");
    scanf("%d",&r);
    
    float s = areaofcircle(r);
    printf("area of circle = %f",s);
    return 0;

}
float areaofcircle(int a)
{
    float pie = 3.14;
    float A = pie*a*a;
    return A;

}