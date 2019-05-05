//
// Created by mikh- on 05.05.2019.
//

#ifndef LABA_6_ALIVE_H
#define LABA_6_ALIVE_H
class Alive{
private:
    bool alive;
public:
    void setAlive();
};
class Bird: public Alive{
private:
    std::string name;
public:
    void set_BirdName();
    void get_BirdName();
};

class Fish: public Alive {
private:
    std::string name;
public:
    void set_FishName();
    void get_FishName();
};

class Animal: public Alive {
private:
    std::string voise;
public:
    void set_voise();
    void get_voise();
};

class Dog: public Animal{
private:
    std::string name;
public:
    void get_DogName();
    void set_DogName();
};

class Cat: public Animal{
private:
    std::string name;
public:
    void get_CatName();
    void set_CatName();
};

#endif //LABA_6_ALIVE_H
