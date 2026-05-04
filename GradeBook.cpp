#include "GradeBook.h"

GradeBook::GradeBook() {
}

void GradeBook::addGrade(const std::string& assignment, double score) {
    grades.push_back({assignment, score});
}

double GradeBook::getAverage() const {
    if (grades.empty()) return 0.0;
    double sum = 0.0;
    for (const auto& g : grades) sum += g.score;
    return sum / grades.size();
}

double GradeBook::getHighest() const {
    if (grades.empty()) return 0.0;
    double max = grades[0].score;
    for (const auto& g : grades) {
        if (g.score > max) max = g.score;
    }
    return max;
}

int GradeBook::numGrades() const {
    return grades.size();
}