#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"
#include "Gradebook.h"

class Course {
    private:
    int id;
    std::string name;
    std::vector<Person*> students;
    Gradebook gradebook;

    public:
    Course(int id, std::string name);
    void addStudent(Person* student);
    Gradebook& getGradebook();

};

#endif