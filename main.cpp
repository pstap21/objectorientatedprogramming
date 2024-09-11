#include <iostream>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Grade.h"

int main() {

    //create a uni
    University myUniversity ("University of Adelaide" , "Adelaide City");

    //create a course
    Course* course = new Course(0015, "Object Orientated Programming");

    //add the course into the uni
    myUniversity.addCourse(course);
    
    
    //create a student
    Student* student = new Student("Paige Stapleton" , 123456);

    //add student to the course
    course->addStudent(student);

    //add grade for student
    Grade grade(123456, 99.0);
    course-> getGradebook().addGrade(grade);

    std::cout << "University, course, student, and grades added!!" << std::endl;

    return 0;
        
    
    
    }