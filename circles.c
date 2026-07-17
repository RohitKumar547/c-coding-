#include<stdio.h>
#include<math.h>
int main(){
    double radius = 0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double voulume = 0.0;
    const double PI = 3.14167;

    printf("enter the radius :");
    scanf("%lf",&radius);

    area = PI * pow(radius,2);
    surfaceArea = 4 * PI * pow(radius,2);
    voulume = (4.0/3.0)*PI * pow(radius,3);


    printf("area =%.2lfcm\n",area);
    printf("surface area =%.2lfcm\n",surfaceArea);
    printf("volume =%.2lfcm\n",voulume);
}