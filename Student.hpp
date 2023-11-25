#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Course.hpp"
#include <string>
#include <map> 

class Student
{
public:
        Student() : studentID(0), firstName("N/A"), lastName("N/A"), numberOfCourses(0), tuitionWasPaid(false) {}

        void setStudent(Student& Obj); 

        void setStudentInfo(int studentID, std::string firstName, std::string lastName, bool tutitonWasPaid, 
                            std::multimap<Course, char> coursesCompleted); 

        int getID() const; 
        std::string getFirstName() const; 
        std::string getLastName() const;
        std::string getName(std::string& firstName, std::string& lastName) const; 
        int getNumberOfCourses() const; 
        int getUnitsCompleted() const; 
        int getCoursesCompleted() const; 
        bool isTuitionPaid(); 
        bool isCourseCompleted(Course coursesCompleted, Course courseNumber);
        double calculateGPA(); 
        double billingAmount(double tutitionRate);
        void printStudent() const; 
        void printStudentInfo(double tutitionRate) const; 

        ~Student() {}

        

private:
        int studentID; 
        std::string firstName;
        std::string lastName; 
        int numberOfCourses;
        bool tuitionWasPaid; 
        std::multimap <Course, char> coursesCompleted; 

};
#endif
