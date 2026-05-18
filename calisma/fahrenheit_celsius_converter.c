#include<stdio.h>
// Create a Fahrenheit-Celsius converter (C = (F - 32) / 1.8). Write [-20; 200] interval Fahrenheit values with a scale of 10, and the corresponding degree Celsius.

int main(){
	// printf("selam");	
	float fahrenheit;
	float celsius;
	printf("Enter the Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 1.8;
	
	printf("Celsius: %.2f\n", celsius);
	return 0;
}
