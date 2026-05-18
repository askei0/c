// Try operator chaining (a < b < c, a = b = c)
#include<stdio.h>

int main(){

	int a = 5, b = 6, c = 7;

	if (c < b < a){
		printf("Weird\n");
	}
	else{
		printf("Expected\n");
	}

	// (c < b) = false;
	
	// false < a = True;
	
	//a = b = c;
	//b = 7;
	//a = (b = c);
	//printf("%d\n", (a = 3));
	printf("%d %d %d\n", a, b, c);


}
