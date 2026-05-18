// 4. Write a program that stores our name in a "player.txt"(given by CLA) file.

#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("One file name needed\n");
        return -1;
    }

    FILE *fp = fopen(argv[1], "w");

    if (fp == NULL)
    {
        printf("File openning failed\n");
        return -1;
    }

    fprintf(fp, "Hakeem\n");

    fclose(fp);
}
