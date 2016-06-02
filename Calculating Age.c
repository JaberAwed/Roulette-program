// Jaber Awed
// Calculating Age


#include <stdio.h>


int main()

{
	
	int birthyear;
	int age, currentyear;
	
	printf("Enter the current year\t");
	scanf("%d", &currentyear);
	printf("Enter your birth year\t");
	scanf("%d", &birthyear);
	
	age = currentyear - birthyear;
	
	printf("\nYou are %d years old this year",age);
	printf("\nThe current year is %d and your birth year is %d",currentyear,birthyear);
	

	
	
	
	
	
	return 0;
}
