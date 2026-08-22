#include <iostream>

int square(int x){
    return x*x;
}

int main(){
    int num {};
    std::cout << "Enter the number that to be double: ";
    std::cin >> num;
    std::cout << "The value for doubled number provided is "<<square(num)<< "\n";
}
