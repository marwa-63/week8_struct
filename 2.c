#include <stdio.h>
#include <stdlib.h>
struct student
{  int id;
   char Programming;
   char Data_Structures;
   char Discrete_Math ;
   char Algorithms;

};
int main()
{
    int id;
    struct student a[10] ={
                               {1000,'A','B','c','A'},{1010,'A','A','B','A'},
                               {1002,'C','A','A','B'},{1012,'A','B','C','A'},
                               {1004,'A','A','B','B'},{1014,'B','B','C','B'},
                               {1006,'A','B','B','c'},{1016,'A','B','C','B+'},
                               {1008,'A','A','A','A'},{1018,'A','A','B','A'}
                               };

                               label:

    printf("Enter your ID:");
    scanf("%d",&id);
    int i;
    for(i=0;i<10;i++)
    {
        if(id==a[i].id)
        {
            printf("Programming grade: %c\n",a[i].Programming);
             printf("Data Structures grade: %c\n",a[i].Data_Structures);
              printf("Discrete Math grade: %c\n",a[i].Discrete_Math);
               printf("Algorithms grade: %c\n",a[i].Algorithms);
               break;
        }
    }
    if(i==10)
    {
        printf("Wrong ID,Try Again\n");
        goto label;
    }
    return 0;
}
