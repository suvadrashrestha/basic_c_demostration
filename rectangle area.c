#include<stdio.h>
int main()
{
	//wap in c that finds the area of rectangle
	float length,breadth,area;
	printf("Enter the length: \n");
	scanf("%f",&length);
	printf("Enter the breadth: \n");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("The area of rectangle is %.2f",area);
	
	return 0;
}
