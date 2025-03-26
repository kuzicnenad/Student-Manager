#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void show_menu() {
    printf("\n=== Student Manager ===\n");
    printf("1. Add student\n");
    printf("2. Show all students\n");
    printf("3. Calculate average grade\n");
    printf("4. Save to file\n");
    printf("5. Load from file\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int option;
    while (1) {
        show_menu();
        scanf("%d", &option);
        getchar(); // to catch newline

        switch (option) {
            case 1:
                add_student();
                break;
            case 2:
                print_students();
                break;
            case 3:
                calculate_average();
                break;
            case 4:
                save_to_file();
                break;
            case 5:
                load_from_file();
                break;
            case 0:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid option. Try again.\n");
        }
    }
    return 0;
}
