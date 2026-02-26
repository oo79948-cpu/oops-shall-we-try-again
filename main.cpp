#include <iostream>

#include "src/oops.hpp"
#include "src/choice.hpp"

using namespace std;

int main() {
    InputParameters params;
    params.lowerBound = 0;
    params.upperBound = 100;
    params.defaultValue = 21;
    string prompt = "\nHow hot (Celsius) do you want your water bro?"
                  "\nOptions:"
                   "\n\t- Enter temperature value between 0 and 100"
                   "\n\t- Enter \"default\" to use the default value of 21 (nice and safe)"
                   "\n\t- Enter \"exit\" to leave the menu"
                   "\nWater temperature: ";
    params.prompt = prompt;
    params.errorMessage = "\nAre you crazy? That is not a valid water temperature!!!";
    Choice *userChoice = promptAndValidate(params);
    userChoice->print();
    delete userChoice; // or use smart pointers
}