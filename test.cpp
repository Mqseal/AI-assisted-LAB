#include "GradeBook.h"
#include <iostream>

int main() {
    // Test 1: Empty GradeBook
    std::cout << "Test 1: Empty GradeBook" << std::endl;
    GradeBook gb1;
    std::cout << "Number of grades: " << gb1.numGrades() << " (expected: 0)" << std::endl;
    std::cout << "Average: " << gb1.getAverage() << " (expected: 0.0)" << std::endl;
    std::cout << "Highest: " << gb1.getHighest() << " (expected: 0.0)" << std::endl;
    std::cout << std::endl;

    // Test 2: Single grade
    std::cout << "Test 2: Single grade (100.0)" << std::endl;
    GradeBook gb2;
    gb2.addGrade("Final Exam", 100.0);
    std::cout << "Number of grades: " << gb2.numGrades() << " (expected: 1)" << std::endl;
    std::cout << "Average: " << gb2.getAverage() << " (expected: 100.0)" << std::endl;
    std::cout << "Highest: " << gb2.getHighest() << " (expected: 100.0)" << std::endl;
    std::cout << std::endl;

    // Test 3: Multiple grades with different values
    std::cout << "Test 3: Multiple grades (85, 90, 95)" << std::endl;
    GradeBook gb3;
    gb3.addGrade("Assignment1", 85.0);
    gb3.addGrade("Assignment2", 90.0);
    gb3.addGrade("Assignment3", 95.0);
    std::cout << "Number of grades: " << gb3.numGrades() << " (expected: 3)" << std::endl;
    std::cout << "Average: " << gb3.getAverage() << " (expected: 90.0)" << std::endl;
    std::cout << "Highest: " << gb3.getHighest() << " (expected: 95.0)" << std::endl;
    std::cout << std::endl;

    // Test 4: Grades with same values
    std::cout << "Test 4: Same grades (80, 80, 80)" << std::endl;
    GradeBook gb4;
    gb4.addGrade("Quiz1", 80.0);
    gb4.addGrade("Quiz2", 80.0);
    gb4.addGrade("Quiz3", 80.0);
    std::cout << "Number of grades: " << gb4.numGrades() << " (expected: 3)" << std::endl;
    std::cout << "Average: " << gb4.getAverage() << " (expected: 80.0)" << std::endl;
    std::cout << "Highest: " << gb4.getHighest() << " (expected: 80.0)" << std::endl;
    std::cout << std::endl;

    // Test 5: Including zero and negative (though not validated)
    std::cout << "Test 5: Mixed values (0, -10, 50)" << std::endl;
    GradeBook gb5;
    gb5.addGrade("Edge1", 0.0);
    gb5.addGrade("Edge2", -10.0);
    gb5.addGrade("Edge3", 50.0);
    std::cout << "Number of grades: " << gb5.numGrades() << " (expected: 3)" << std::endl;
    std::cout << "Average: " << gb5.getAverage() << " (expected: 13.333...)" << std::endl;
    std::cout << "Highest: " << gb5.getHighest() << " (expected: 50.0)" << std::endl;
    std::cout << std::endl;

    return 0;
}