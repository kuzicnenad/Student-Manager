#include <stdio.h>
#include <string.h>
#include "student.h"

Student students[MAX_STUDENTS];
int student_count = 0;

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Cannot add more students.\n");
        return;
    }

    Student s;
    printf("Enter name: ");
    fgets(s.name, NAME_LENGTH, stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter grade: ");
    scanf("%f", &s.grade);
    getchar(); // Catch newline

    students[student_count++] = s;
    printf("Student added successfully.\n");
}

void print_students() {
    if (student_count == 0) {
        printf("No students to show.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < student_count; i++) {
        printf("%d. %s, Age: %d, Grade: %.2f\n",
               i + 1, students[i].name, students[i].age, students[i].grade);
    }
}

void calculate_average() {
    if (student_count == 0) {
        printf("No students to calculate average.\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < student_count; i++) {
        sum += students[i].grade;
    }

    printf("Average grade: %.2f\n", sum / student_count);
}
