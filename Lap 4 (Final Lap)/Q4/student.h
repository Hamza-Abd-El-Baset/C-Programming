#ifndef student_header
#define student_header

typedef struct student
{

    char name[20];
    int id;
    int grade;

} Student;


void read_students(Student * students, int students_no)
{

    for(int i=0; i<students_no; i++)
    {
        printf("\nPlease Enter Student[%d] Data : \n\n",i);

        printf("name: ");
        scanf("%s",students[i].name);

        printf("id: ");
        scanf("%d",&students[i].id);

        printf("grade: ");
        scanf("%d",&students[i].grade);


    }

}



void print_students(Student * students, int students_no)
{
    printf("\n\n====================OUTPUT======================\n");

    for(int i=0; i<students_no; i++)
    {
        printf("\n\nStudent[%d] Data : \n",i);
        printf("------------------------------\n");
        printf("name: %s \n",students[i].name);
        printf("id: %d \n",students[i].id);
        printf("grade: %d \n",students[i].grade);

    }

}


#endif
