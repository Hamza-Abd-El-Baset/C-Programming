#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#define STUDENTS_NO 10


int main()
{
    Student students[STUDENTS_NO];
    read_students(students,STUDENTS_NO);
    print_students(students,STUDENTS_NO);
    return 0;
}


