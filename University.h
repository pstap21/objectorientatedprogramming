#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"

class University {
    private;
    std::string name;
    std::string location;
    std::vector<Course*> courses;

    public:
    University(std::string name, std::string location);
    ~University();
    void addCourse(Course* course);

};

#endif