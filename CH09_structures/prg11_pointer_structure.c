#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student s1 = {104, "ROWAN", 88.5};
    struct Student *p = &s1;

    printf("Roll No: %d\n", p->rollNo);
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    p->marks = 95.0;
    printf("Updated Marks: %.2f\n", p->marks);
    return 0;
}