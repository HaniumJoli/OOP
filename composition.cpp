/* 
Composition represents a "has-a" relationship, where one class is composed of another class. 
In this case, the Car class has a Engine class as one of its member variables.
 */
class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}
    // Other member functions and variables
};

class Car {
private:
    Engine engine;
    string color;

public:
    Car(int hp, string c) : engine(hp), color(c) {}
    // Other member functions and variables
};
