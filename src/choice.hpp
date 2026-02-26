#pragma once

#include <string>

using namespace std;

struct InputParameters {
    int lowerBound;
    int upperBound;
    int defaultValue;
    string prompt;
    string errorMessage;
};

class Choice {
    public:
    virtual ~Choice() = default;
    virtual void print() = 0;
};

class ExitChoice : public Choice {
    public:
    void print() override;
};

class ValueChoice : public Choice {
    int value;
public:
    explicit ValueChoice(const int value) : value(value) {}
    void print() override;
};