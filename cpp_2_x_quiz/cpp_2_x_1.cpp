#include "io.h"
#include <iostream>

int main(){
    int a{readNumber()}, b{readNumber()};
    int ans{};
    ans = a+b;
    writeAnswer(ans);
    return 0;
}
