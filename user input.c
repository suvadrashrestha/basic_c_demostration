#include<stdio.h>
int main()
{
	// declaring variable
	
	int firstnumber,secondnumber,add,sub,mul,div,mod;
	printf("Enter the first number: \n");
	scanf("%d",&firstnumber);
	printf("Enter the secondnumber: \n");
	scanf("%d", &secondnumber);
	// calculating
	add=firstnumber+secondnumber;
	sub=firstnumber-secondnumber;
	mul=firstnumber*secondnumber;
	div=firstnumber/secondnumber;
	mod=firstnumber%secondnumber;
	// printing 
	printf("The addition is %d\n",add);
	printf("The subtraction is %d\n",sub);
	printf("The multiplication is %d\n",mul);
	printf("The division is %d\n",div);
	printf("The modulus is %d\n",mod);
	
	
	
	
	
	return 0;
}
