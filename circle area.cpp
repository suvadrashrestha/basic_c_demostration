#include<stdio.h>
#include<math.h>
# define PI 3.14
 void  main()
{ 

float radius,area;
printf ("Enter the radius: \n");
scanf("%f",&radius);
area=PI * radius * radius;
printf("The area of the circle is %.2f",area);
 return 0;
	

}
