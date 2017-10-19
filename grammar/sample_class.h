#ifndef _SAMPLE_CLASS_H_
#define _SAMPLE_CLASS_H_

class Sample {
public:
    Sample();  // コンストラクタ
    ~Sample(); // デストラクタ
    void setNum(int num);
    int  getNum();
    void countUp();
private:
    int num;
};

#endif //_SAMPLE_CLASS_H_
