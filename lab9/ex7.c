// Modify the solution of the previous task so that the program no longer asks the user for
//  a command line argument, but reads words from the user until the input is not EOF,
//   and then writes them out in reverse order. Use an array. Take care not to create memory garbage.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *str)
{

    int length = strlen(str);

    char *reversedStr = (char *)malloc((length + 1) * sizeof(char)); // +1 is for \0;

    for (int i = 0; i < length; i++)
    {
        reversedStr[i] = str[length - 1 - i];
    }

    reversedStr[length] = '\0';

    return reversedStr;
}

int main()
{

    char **strArr = (char **)malloc(1);

    int wordsCounter = 0;
    char tempStr[100];
    while (fscanf(stdin, "%s", tempStr) != EOF)
    {
        ////// preparing memory for the new word
        wordsCounter++;
        char **tempMemory = (char **)realloc(strArr, wordsCounter * sizeof(char *));
        if (tempMemory == NULL)
        {
            printf("Reallocation failed\n!");
            return 1;
        }
        strArr = tempMemory;
        strArr[wordsCounter - 1] = (char *)malloc((strlen(tempStr) + 1) * sizeof(char));
        /////////////////////////////////////////////////////////
        // store the value
        strcpy(strArr[wordsCounter - 1], tempStr);
    }

    printf("===================================\n");

    for (int i = 0; i < wordsCounter; ++i)
    {
        char *reversed = reverse(strArr[wordsCounter - i - 1]);
        printf("%s\n", reversed);
        free(reversed);
    }

    for (int i = 0; i < wordsCounter; ++i)
    {
        free(strArr[i]);
    }
    free(strArr);
}