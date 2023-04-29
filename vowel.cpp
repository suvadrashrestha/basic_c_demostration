#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter the alphabet: \n");
	scanf("%c",&alphabet);
	int lowercase ,uppercase;
	lowercase=(alphabet=='a',alphabet=='e',alphabet=='i',alphabet=='o',alphabet=='u');
	uppercase=(alphabet=='A',alphabet=='E',alphabet=='I',alphabet=='O',alphabet=='U');
	if(lowercase||uppercase)
	printf(" %c is vowel",alphabet);
	
	else
	printf("%c is  consonant",alphabet);
	
	
	return 0;
	
}
