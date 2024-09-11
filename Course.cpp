#include "Course.h"

Course::Course(int id, std::string name) : id(id), name(name) {}

void Course::addStudent(Person* student) {
    students.push_back(student);

}

Gradebook& Course::getGradebook() {
    return gradebook;

}
