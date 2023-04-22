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
        printf("\n Please Enter Student[%d] Data : \n\n",i);

        printf("Student[%d].name: ",i);
        scanf("%s",students[i].name);

        printf("Student[%d].id: ",i);
        scanf("%d",&students[i].id);

        printf("Student[%d].grade: ",i);
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
        printf("student[%d].name: %s \n",i,students[i].name);
        printf("student[%d].id: %d \n",i,students[i].id);
        printf("student[%d].grade: %d \n",i,students[i].grade);

    }

}


#endif
