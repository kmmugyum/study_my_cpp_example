#include <iostream>
/*
 * 이런 식으로 두개를 만드는 것은 메모리 낭비에 시간낭비, 가독성도 안 좋아짐
 * */
class Pairdouble {
public:
    Pairdouble(double x = 0, double y = 0)
    : x_(x), y_(y) {}
    double returnX() const {return x_;}
    double returnY() const {return y_;}
private:
    double x_;
    double y_;
};

class Pairfloat {
public:
    Pairfloat(float x = 0, float y = 0)
            : x_(x), y_(y) {}
    float returnX() const {return x_;}
    float returnY() const {return y_;}
private:
    float x_;
    float y_;
};


/*
 * 그래서 templete을 이용하여 하나만 만들어서 사용할 수 있다.
 */

template<typename T>
class Pair {
public:
    Pair(T x = T(0), T y = T(0))
    : x_(x), y_(y) {}
    T returnX() const {return x_;}
    T returnY() const {return y_;}
private:
    T y_;
    T x_;
};

int main () {


    return 0;
}