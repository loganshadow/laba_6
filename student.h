//
// Created by mikh- on 05.05.2019.
//

#ifndef LABA_6_STUDENT_H
#define LABA_6_STUDENT_H

#include <string>
class student{
    std::string name;
    std::string sname;
    std::string group;
public:
    student(std::string  name = "Null", std::string sname = "Null", std::string group = "Null");
//    ~student();
    void get_Student ();
    void set_Student ();
};
class Headman: public student {
    std::string mail;
    std::string phone_number;
public:
    void get_HeadmansContactData();
    void set_HeadmansContactData();
};

#endif //LABA_6_STUDENT_H
