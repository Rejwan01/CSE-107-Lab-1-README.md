// C Program to Find Surface Area and Volume of Sphere //

#include <stdio.h>

int main()

{
 
    float radius,surface_area, volume;
 
    printf("Enter radius of the sphere : \n");
 
    scanf("%f", &radius);
 
    surface_area =  4 * (22/7) * radius * radius;
 
    volume = (4/3) * (22/7) * radius * radius * radius;
 
    printf("Surface area of sphere is: %.3f", surface_area);
 
    printf("\n Volume of sphere is : %.3f", volume);
 
    return 0;
 
}
