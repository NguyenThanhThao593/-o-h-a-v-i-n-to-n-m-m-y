#include<stdio.h> 
#include<conio.h>
#include <math.h> 
#define PI 3.14
int main()
{ 
int r;
float chuvi, dientich;
printf ("nhap ban kinh r:");
scanf ("%d",&r);
chuvi = 2*PI*r;
dientich = PI*r*r;
printf("chu vi hinh tron la: %0.2f\n", chuvi);
printf ("dien tich hinh tron la: %0.2f", dientich);
getch()
}
