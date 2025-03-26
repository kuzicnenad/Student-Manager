#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int age;
    float grade;
} Student;

extern Student students[MAX_STUDENTS];
extern int student_count;

// Core functions
void add_student();
void print_students();
void calculate_average();

// File I/O
void save_to_file();
void load_from_file();

#endif
