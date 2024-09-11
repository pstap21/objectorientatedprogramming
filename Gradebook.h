#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include "Grade.h"

class GRadebook {
    private:
    std::vector<Grade> grades;

    public:
    void addGrade(Grade grade);
};

#endif
