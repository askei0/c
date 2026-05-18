// Create nested scopes (blocks between "{}" pairs),
// introduce a variable in each. Examine which variables from which scope you reach!
//  When can you use scopes?
//  What is a stack and how does it connect to scope management?

#include <stdio.h>

int globalNum = 9;



void func(int num){
    int num1 = 0;
    globalNum = 8;
    num = 9;
}


int main()
{
    // num = 2;

    globalNum = 7;
    printf("%d\n", globalNum);
    int num = 5;
    printf("%d\n", num);

    {
        num = 8;
        int num2 = 9;
        printf("%d\n", num);
        printf("%d\n", num2);

        {
            num2 = 8;
            {
                {
                    {
                        globalNum = 0;
                        printf("%d\n", num2);
                        printf("%d\n", globalNum);
                    }
                }
            }
        }
    }

    // num2; NOT VISIBLE HERE

    for (int i = 0; i < 10; i++)
    {
        i = 9;
    }
    // i = 9;

    int var = 2;
    
    {
        int var = 7;
        var = 5;
        printf("%d\n", var); // 5
    }
    printf("%d\n", var); // 2
    var = 4;
    printf("%d\n", var); // 4



}
