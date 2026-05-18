// draw an empty chessboard, mark dark fields with []
// light fields and two spaces. use dibisibility by two

#include<stdio.h>

int main()
{
	
	for(int col = 1; col <= 8 ; ++col){
		for (int row = 1; row <= 8; row++){
			printf( (row + col) % 2 == 0 ? "  " : "[]");
		}
		printf("\n");
	}	
}
