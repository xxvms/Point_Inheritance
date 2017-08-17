//
// Created by tombr on 17/08/2017.
//

#include <iostream>
#include "Tweeter.h"

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) :
                    Person(first, last, arbitrary), twitter_handle(handle)
                    {}
Tweeter::~Tweeter() {

    std::cout << "Tweeter destructor is calling" << '\n';
}

std::string Tweeter::Get_name() const{
    return Person::Get_name() + " " + twitter_handle;
}
