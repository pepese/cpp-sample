#include "sample_class.h"
#include <iostream>

Sample::Sample() : num(0) {
    std::cout << "インスタンス生成" << std::endl;
}

Sample::~Sample() {
    std::cout << "インスタンス破棄" << std::endl;
}

void Sample::setNum(int num) {
    this->num = num;
}

int Sample::getNum() {
    return num;
}

void Sample::countUp() {
    num++;
}
