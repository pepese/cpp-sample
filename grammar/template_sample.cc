#include <iostream>
#include <string>

#include "template_sample_class.h"

// テンプレート関数
// template <typename T>
// T add(T x, T y){
//     return x + y;
// }

int main(){
    // std::cout << add<int>(1, 2) << std::endl;
    // std::cout << add<std::string>("A", "B") << std::endl;
    // return 0;

    TemplateSample<int> int_obj;
    int_obj.set(1, 2);
    std::cout << int_obj.add() << std::endl;

    TemplateSample<std::string>* obj_string = new TemplateSample<std::string>();
    obj_string->set("A", "B");
    std::cout << obj_string->add() << std::endl;
    delete obj_string;
    return 0;
}
