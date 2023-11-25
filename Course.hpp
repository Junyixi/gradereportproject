#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>


class Course
{
public:  
        Course() : coursePrefix("N/A"), courseUnits(0), courseNumber(0) {} 

        void setCourseInfo(const std::string& CoursePrefix, int courseNumber, int courseUnits); 
        const std::string& getCoursePrefix() const; 
        
        int getCourseNumber() const ; 
        int getCourseUnits() const; 

        //Mystery Function
        bool operator<(const Course& rCourse) const;

        ~Course(); 

private:
        std::string coursePrefix; 
        int courseNumber; 
        int courseUnits; 

};

#endif