#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student students[MAX_STUDENTS];
int count = 0;

void clearScreen() {
    system("cls || clear");
}

void addStudent() {
    if (count >= MAX_STUDENTS) {
        printf("Student limit reached.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf("%s", students[count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    count++;
    printf("Student added successfully.\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

void searchStudent() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Student deleted successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void editStudent() {
    int id;
    printf("Enter ID to edit: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new Name: ");
            scanf("%s", students[i].name);
            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);
            printf("Student information updated successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void sortStudents() {
    int choice;
    printf("Sort by:\n1. ID\n2. Name\n3. Marks\nEnter your choice: ");
    scanf("%d", &choice);

    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if ((choice == 1 && students[i].id > students[j].id) ||
                (choice == 2 && strcmp(students[i].name, students[j].name) > 0) ||
                (choice == 3 && students[i].marks > students[j].marks)) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Students sorted successfully.\n");
}

void saveData() {
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(students, sizeof(struct Student), count, file);
    fclose(file);
    printf("Data saved successfully.\n");
}

void loadData() {
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("No data file found.\n");
        return;
    }
    fread(&count, sizeof(int), 1, file);
    fread(students, sizeof(struct Student), count, file);
    fclose(file);
    printf("Data loaded successfully.\n");
}

int main() {
    int choice;
    loadData();
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Edit Student\n6. Sort Students\n7. Save Data\n8. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        clearScreen();
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: editStudent(); break;
            case 6: sortStudents(); break;
            case 7: saveData(); break;
            case 8: saveData(); exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
