#include <iostream>

int domath(int x, int y, int z);

int main(){
    int a{5}, b{5}, c{5};
    int result = domath(a,b,c);
    std::cout << "Result is:  "<< result<<std::endl;
    return 0;
}

int domath(int a, int b, int c){
    return a+b*c;
}
