#include <iostream>

int main(){
    int num1{}, num2{};
    std::cout<< "Enter two values that to be added and subtracted "<<'\n';
    std::cin >> num1 >>num2;
    std::cout << "Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<".\n";
    std::cout << "Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<".\n";
    return 0;
}
