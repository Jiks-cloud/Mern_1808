#include<stdio.h>
int main(){
    FILE *fp;
    char name[100];
    int age,i,n;
    float marks;

    fp = fopen("student.txt","w");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter name: ");
        scanf("%s",name);
        printf("Enter age: ");
        scanf("%d",&age);
        printf("Enter marks: ");
        scanf("%f",&marks);

        fprintf(fp,"---Student %d---\n",i+1);
        fprintf(fp,"Name: %s\n",name);
        fprintf(fp,"Age: %d\n",age);
        fprintf(fp,"Marks: %.2lf\n",marks);
    }
    
    printf("Students details written successfullyy!!");
    fclose(fp);
    return 0;
}