#include <iostream>
#include "student.h"
#include "Alive.h"
int main() {
//6_1
    student s1("Mikhail" , "Efremov", "IKBO-01-18");
    Headman h1;
    s1.get_Student();
    h1.set_Student();
    h1.set_HeadmansContactData();
    h1.get_Student();
    h1.get_HeadmansContactData();
//6_2 - 6_3
    Dog d;
    d.setAlive();
    d.set_voise();
    d.get_voise();
    d.set_DogName();
    d.get_DogName();


    return 0;
}