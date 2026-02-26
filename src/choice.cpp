#include <iostream>
#include <ostream>
#include <string>
#include "choice.hpp"

using namespace std;

void ExitChoice::print() {}

void ValueChoice::print() {
    cout << "\nThe value chosen by the user is: " << value << endl;
}
