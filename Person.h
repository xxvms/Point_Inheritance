//
// Created by tombr on 17/08/2017.
//

#ifndef POINT_INHERITANCE_PERSON_H
#define POINT_INHERITANCE_PERSON_H

#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
public:
    Person(std::string first, std::string last, int arbitrary);
    virtual ~Person(); // if you have one virtual function then destructor need to have virtual destructor.
    virtual std::string Get_name()const; // I have to add virtual here  not in CPP file, in derived classes I can add for documentation purposes
    int Get_number() const { return  arbitrary_number; }
    void Set_number(int number) { arbitrary_number = number; }
    void Set_First_Name(std::string first) {first_name = first;}
};



#endif //POINT_INHERITANCE_PERSON_H
