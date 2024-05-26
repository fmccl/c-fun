Blazingly fast ECMAScript compiler in C++. 
```cpp
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
```
# Features:
 - var, let, const
 - functions
 - console.log
 - if statements
 - switch statements
 - loose equality
 - undefined
 - methods
 - inheritance
# Caveats:
 - Code must go in the start function
 - Requires GCC and compiler flag -fpermissive for method support.
# Example code
```js
class Animal {
    noise() {
        console.log("Silence");
    }
};

class Dog extends Animal { // inheritance
    noise() {
        console.log("Woof!");
    }
};

function start() {

    let x = "hello, world!";

    let y = 12;

    if (x == y) { // true, loose equality
        console.log(x);
    }

    let dog = new Dog();

    dog.noise();

}
```