#include <iostream>
#include "Person.h"
#include "Tweeter.h"


int main() {
    Person* John = new Person("John", "Snow", 456);
    Tweeter* JohnSnow = new Tweeter("John", "Snow", 456, "Tweeter");

    Person* pJohnSnow = JohnSnow;

    std::cout << John->Get_name() << '\n';
    std::cout << JohnSnow->Get_name() << '\n';
    std::cout << pJohnSnow->Get_name() << '\n';

    delete JohnSnow;
    return 0;
}