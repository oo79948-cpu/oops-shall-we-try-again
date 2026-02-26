#pragma once

#include <string>

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