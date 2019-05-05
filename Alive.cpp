//
// Created by mikh- on 05.05.2019.
//

#include <iostream>
#include "Alive.h"
#include "string"
using std::cout;
using std::cin;
void Alive::setAlive() {
    cout << "Is It Alive?" << std::endl;
    std::string a;
    if(a == "yes")
        alive = 1;
    else
        alive = 0;
}
void Bird::set_BirdName() {
    cout << "Enter Bird Name" << std::endl;
    cin >> name;
}
void Bird::get_BirdName() {
    cout << "Bird Name: " << name << std::endl;
}
void Fish::get_FishName() {
    cout << "Fish Name: " << name << std::endl;
}
void Fish::set_FishName() {
    cout << "Enter Fish Name" << std::endl;
    cin >> name;
}
void Animal::get_voise() {
    cout << "Dealing voise: " << voise << std::endl;
}
void Animal::set_voise() {
    cout << "Enter dealing voise: " << std::endl;
    cin >> voise;
}
void Dog::set_DogName() {
    cout << "Enter Dog Name" << std::endl;
    cin >> name;
}
void Dog::get_DogName() {
    cout << "Dog Name: " << name << std::endl;
}
void Cat::set_CatName() {
    cout << "Enter Cat Name" << std::endl;
    cin >> name;
}
void Cat::get_CatName() {
    cout << "Cat Name: " << name << std::endl;
}

