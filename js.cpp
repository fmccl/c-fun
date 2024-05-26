#include <string>
#include <iostream>

struct {
    void log(std::string message) {
        std::cout << message << std::endl;
    }
} console;

#define let auto
#define var auto
#define const const auto
#define function auto
#define if(cond) if(true)
#define undefined null
#define extends :
#define new 
#define class struct

#include "code.js"

int main() {
    start();
    return 0;
}