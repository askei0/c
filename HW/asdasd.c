#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./grades <filename>\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "w");
    if (!file) return 1;

    fprintf(file, "Alice 85\nBob 92\nCarol 78\nDavid 95\nEve 60\n");
    fclose(file);

    file = fopen(argv[1], "r");
    if (!file) return 1;

    char names[100][50]; 
    int grades[100];     
    int count = 0, sum = 0, max_grade = -1, max_index = 0;

    while (!feof(file)) {
        fscanf(file, "%s %d", names[count], &grades[count]);
        sum += grades[count];
        if (grades[count] > max_grade) {
            max_grade = grades[count];
            max_index = count;
        }
        count++;
    }
    fclose(file);

    for (int i = 0; i < count; i++) {
        printf("%s\t- %d\n", names[i], grades[i]);
    }

    printf("\nTop student: %s (%d)\n", names[max_index], max_grade);
    printf("Class average: %.2f\n", (float)sum / count);

    return 0;
}
