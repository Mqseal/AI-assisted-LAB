#pragma once
#include <string>
#include <vector>

struct Grade {
    std::string assignment;
    double score;
};

class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;
private:
    std::vector<Grade> grades; 
};