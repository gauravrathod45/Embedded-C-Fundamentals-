#include <stdio.h>

/* Structure declaration */
struct Student {
    int id;
    char name[20];
    int age;
};

int main() {
    struct Student s1;

    printf("Enter student id: ");
    scanf("%d", &s1.id);

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter student age: ");
    scanf("%d", &s1.age);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return 0;
}
