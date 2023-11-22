#include <iostream>

template <typename T, unsigned int size> // 이런 식으로 만들거다 약간 생성자 느낌도 가지고 있군
class CustomArray { // template를 통한 선언
public:
    void print() {
        std::cout << size << std::endl;
    }
};

CustomArray<float, 100> myArray;

int main() {
    myArray.print();
    return 0;
}