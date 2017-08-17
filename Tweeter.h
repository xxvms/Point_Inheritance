//
// Created by tombr on 17/08/2017.
//

#ifndef POINT_INHERITANCE_TWEETER_H
#define POINT_INHERITANCE_TWEETER_H
#include "Person.h"
#include <string>

class Tweeter : public Person {
private:
    std::string twitter_handle;
public:
    Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
    virtual ~Tweeter();
    virtual std::string Get_name() const; // virtual is not mandatory here but its good practise for as to know that this is overloaded method


};


#endif //POINT_INHERITANCE_TWEETER_H
