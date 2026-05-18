// Draw an empty chessboard. Mark dark fields with [],
// light fields with two spaces. Use divisibility by two.

#include<stdio.h>

int main(){

    for (int col = 1; col <= 8; ++col)
    {
        for (int row = 1; row <= 8; ++row){
            printf( (row + col) % 2 == 0 ? "  " : "[]" );
        }
        printf("\n");
    }
    return 0;
}

