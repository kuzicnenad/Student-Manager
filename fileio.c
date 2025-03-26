#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

#define FILENAME "students.txt"

void save_to_file() {
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < student_count; i++) {
        fprintf(fp, "%s;%d;%.2f\n",
                students[i].name,
                students[i].age,
                students[i].grade);
    }

    fclose(fp);
    printf("Students saved to file successfully.\n");
}

void load_from_file() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("No saved data found (file missing).\n");
        return;
    }

    student_count = 0;
    while (fscanf(fp, "%49[^;];%d;%f\n",
                  students[student_count].name,
                  &students[student_count].age,
                  &students[student_count].grade) == 3) {
        student_count++;
        if (student_count >= MAX_STUDENTS)
            break;
    }

    fclose(fp);
    printf("Students loaded from file successfully.\n");
}
