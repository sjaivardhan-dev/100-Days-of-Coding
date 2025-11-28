Q150 (Enum)
Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;  

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter age: ");
    scanf("%d", &ptr->age);
/
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}
