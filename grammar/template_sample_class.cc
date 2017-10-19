#include "template_sample_class.h"

#include <string>

template <typename T>
void TemplateSample<T>::set(T x, T y) {
    this->x = x;
    this->y = y;
}

template <typename T>
T TemplateSample<T>::add() {
    return this->x + this->y;
}

// 明示的テンプレートのインスタンス化
// 使用できる型を指定する
template class TemplateSample<int>;
template class TemplateSample<std::string>;
