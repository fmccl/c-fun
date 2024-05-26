class Animal {
    noise() {
        console.log("Silence");
    }
};

class Dog extends Animal {
    noise() {
        console.log("Woof!");
    }
};

function start() {

    let x = "hello, world!";

    let y = 12;

    if (x == y) {
        console.log(x);
    }

    let dog = new Dog();

    dog.noise();

}