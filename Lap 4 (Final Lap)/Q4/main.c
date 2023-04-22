#include <stdio.h>
#include <stdlib.h>
#include "student.h"



int main()
{
    Student students[10];
    read_students(students,10);
    print_students(students,10);
    return 0;
}


