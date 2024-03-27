#include <iostream>
#include <string>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a+b;
}

int main() {
    std::cout<<"C++ teste C++20 - Cmake Linux/Windows"<<std::endl;

    int a{6};
    int b{6};

    auto result = add(a, b)
    std::cout<< "Resultado: " << result << std::endl;
    return 0;
}