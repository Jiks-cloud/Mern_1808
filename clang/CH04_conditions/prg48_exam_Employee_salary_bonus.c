#include <stdio.h>
void main()
{
    int emp_id, choice;
    float basic_salary, HRA, DA, Tax, bonus, net_salary;
    printf("Enter Employee ID:");
    scanf("%d", &emp_id);
    printf("Enter Basic Salary:");
    scanf("%f", &basic_salary);
    printf("1 for HRA..\n");
    printf("2 for DA..\n");
    printf("3 for Tax..\n");
    printf("4 for Exit..\n");
    do
    {
        printf("\nEnter Your Choice of Designation:");
        scanf("%d", &choice);

         switch (choice)
        {
        case 1:
            HRA = basic_salary * 0.20;
            printf("HRA salary is : %.2f", HRA);
            if (basic_salary > 50000)
            {
                bonus = 5000;
                printf("\nBouns : 5000");
            }
            else
            {
                bonus = 2000;
                printf("\nBonus : 2000");
            }
            net_salary = basic_salary + HRA + bonus;
            printf("\nNet Salary : %.2f", net_salary);
            break;
        case 2:
            DA = basic_salary * 0.15;
            printf("DA salary is : %.2f", DA);
            if (basic_salary > 50000)
            {
                bonus = 5000;
                printf("\nBouns : 5000");
            }
            else
            {
                bonus = 2000;
                printf("\nBonus : 2000");
            }
            net_salary = basic_salary + DA + bonus;
            printf("\nNet Salary : %.2f", net_salary);
            break;
        case 3:
            Tax = basic_salary * 0.10;
            printf("Tax salary is : %.2f", Tax);
            if (basic_salary > 50000)
            {
                bonus = 5000;
                printf("\nBouns : 5000");
            }
            else
            {
                bonus = 2000;
                printf("\nBonus : 2000");
            }
            net_salary = basic_salary + Tax + bonus;
            printf("\nNet Salary : %.2f", net_salary);
            break;
        case 4:
            printf("Exit....");
            break;
        default:
            printf("You Entered Wrong Choice Of Designation");
            break;
        }
    } while (choice != 4);
}