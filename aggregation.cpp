/* 
 let's consider an example of aggregation, which represents a "has-a" relationship where 
 one class has another class as a member, 
 but the member class has an independent existence.
 */
class Wheel {
private:
    int size;

public:
    Wheel(int s) : size(s) {}
    // Other member functions and variables
};

class Car {
private:
    vector<Wheel> wheels;
    string color;

public:
    Car(vector<Wheel> w, string c) : wheels(w), color(c) {}
    // Other member functions and variables
};

/* 
 let's consider an example of aggregation, which represents a "has-a" relationship where 
 one class has another class as a member, but the member class has an independent existence.
 */