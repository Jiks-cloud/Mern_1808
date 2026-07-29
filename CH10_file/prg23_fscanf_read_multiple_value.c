#include <stdio.h>
int main() {
    FILE *fp;
    char name[100];
    int age;
    float marks;
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opeing file!!");
        return 1;
    }
    char line[100];

    while(fgets(line,sizeof(line),fp)!=NULL){
        fscanf(fp,"Name: %s\n",name);
        fscanf(fp,"Age: %d\n",&age);
        fscanf(fp,"Marks: %f\n",&marks);

        printf("Name: %s\n",name);
        printf("Age: %d\n",age);
        printf("Marks: %.2f\n",marks);
    }
    fclose(fp);
    return 0;
}