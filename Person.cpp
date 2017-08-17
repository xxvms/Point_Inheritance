//
// Created by tombr on 17/08/2017.
//


#include <iostream>
#include "Person.h"
Person::Person(std::string first, std::string last, int arbitrary):
        first_name(first), last_name(last), arbitrary_number(arbitrary)// is not required as well  pResource(nullptr) - it will automatically initialize to empty
{}

Person::~Person() {
    std::cout << "Person destructor is calling" << '\n';

}

std::string Person::Get_name()const {
    return first_name + " " + last_name;
}



