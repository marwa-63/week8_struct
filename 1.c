#include <stdio.h>
#include <stdlib.h>

 struct employee
 {
     char *name;
     int salary;
     int bonus;
     int deductions;
     int final_salary;

 };
int main()
{
    struct employee a[3];
    a[0].name="Mohsen";
     a[1].name="Maged";
      a[2].name="Mariam";
      for(int i=0 ; i<3;i++)
      {
    printf("Enter %s's (salary - bonus - deductions):\n",a[i].name);
    scanf("%d %d %d",&a[i].salary,&a[i].bonus,&a[i].deductions);
       a[i].final_salary=a[i].salary+a[i].bonus-a[i].deductions;
      }
      printf("__________________________________________________________________\n");
      for(int i=0 ; i<3;i++)
      {
          printf("%s's salary: %d\n",a[i].name,a[i].final_salary);
      }
    return 0;
}
