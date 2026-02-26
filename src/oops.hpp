#pragma once

#include <string>
#include "choice.hpp"

using namespace std;

struct InputParameters {
    int lowerBound;
    int upperBound;
    int defaultValue;
    string prompt;
    string errorMessage;
};

Choice *promptAndValidate(InputParameters params);
