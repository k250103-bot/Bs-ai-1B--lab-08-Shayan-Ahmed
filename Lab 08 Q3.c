#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    int students = 0;
    int total_desks = rows * cols;

    printf("Classroom Seating Chart:\n");
    printf("=======================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int r = 0; r < rows; r++) {
        printf("Row %d ", r + 1);
        for (int c = 0; c < cols; c++) {
            if ((r + c) % 2 == 0) {
                printf("x ");
                students++;
            } else {
                printf("o ");
            }
        }
        printf("\n");
    }

    int empty_desks = total_desks - students;

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty_desks);
    printf("Total desks: %d\n", total_desks);

    return 0;
}
