#include "input.h"
#include "answer.h"
#include <iostream>

void writeAnswer()
{
    int a { readNumber() };
    int b { readNumber() };
    int sum {a + b};
    std::cout << sum;
}
