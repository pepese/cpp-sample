#ifndef _TEMPLATE_SAMPLE_CLASS_H_
#define _TEMPLATE_SAMPLE_CLASS_H_

template <typename T>
class TemplateSample {
private:
    T x;
    T y;
public:
    void set(T x, T y);
    T add();
};

#endif // _TEMPLATE_SAMPLE_CLASS_H_
