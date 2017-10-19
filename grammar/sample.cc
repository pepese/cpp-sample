#include <iostream>
#include "sample_class.h"

int main() {
    // Sample obj;
    // obj.setNum(1);
    // std::cout << obj.getNum() << std::endl;
    // obj.countUp();
    // std::cout << obj.getNum() << std::endl;
    Sample* obj = new Sample();
    obj->setNum(1);
    std::cout << obj->getNum() << std::endl;
    obj->countUp();
    std::cout << obj->getNum() << std::endl;
    delete obj;
}
