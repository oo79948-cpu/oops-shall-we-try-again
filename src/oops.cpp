#include <iostream>
#include <ostream>
#include <string>
#include "choice.hpp"
#include "oops.hpp"

using namespace std;

bool isInteger(const string &str) {
    return all_of(str.begin(), str.end(), [](char c) {
        return isdigit(c);
    });
}

Choice *promptAndValidate(InputParameters params){
    int value;
    string valueText;
    do {
        cout << params.prompt;
        cin >> valueText;
        if (valueText == "default") {
            return new ValueChoice(params.defaultValue);
        }
        if (valueText == "exit") {
            return new ExitChoice();
        }
        if (isInteger(valueText)) {
            value = stoi(valueText);
            if (value > params.lowerBound && value < params.upperBound) {
                return new ValueChoice(value);
            }
        }
        cout << params.errorMessage << endl;
    } while(true);
}
