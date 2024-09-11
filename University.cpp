#include "University.h"

University::University(std::string name, std::string location) : name(name), location(location) {}

University::~University() {
    for (Course* course  : courses) {
        delete course;
    }
}

void University::addCourse (Course* course) {
    courses.push_back(course);
}

