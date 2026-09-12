#include <iostream>
#include <vector>
#include <string>
// #include <random>

int debugger(){
    int test{5};
    std::cout<<"Test parameter" << test << "\n";
    return 1;
}

void printvalue(int x){
    std::cout<<"Entered value is: "<<x<<"\n";
}

int main(){
    // int guessing_number {};
    // std::cin >> guessing_number;
    std::cout << "Hello world";
    debugger();
    std::cout<< "after execution of continue";
    printvalue(5);
    printvalue(6);
    printvalue(7);
    return 0;
}
