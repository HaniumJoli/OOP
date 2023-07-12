/* In C++, you can restrict a function to throw only certain exceptions 
by using the function declaration or definition with the throw keyword 
followed by a comma-separated list of exception types. This informs 
the compiler and users of the function about the specific exceptions 
that the function is allowed to throw. Here's an example: */

#include <iostream>
#include <stdexcept>

void foo() throw(std::runtime_error) {
    throw std::runtime_error("This is a runtime error.");
}

int main() {
    try {
        foo();
    } catch (const std::runtime_error& ex) {
        std::cout << "Caught exception: " << ex.what() << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception." << std::endl;
    }
    return 0;
}

/*
In this example, the function foo() is declared to throw only std::runtime_error exceptions. 
If the function throws any other type of exception, it will result in a compile-time error. 
In the main() function, we catch the specific std::runtime_error exception and print its message. 
If any other exception is thrown from foo() or an unknown exception occurs, we catch it using the ellipsis catch (...) block. 

Note that in modern C++, it is generally recommended to use exception specifications sparingly 
or avoid them altogether. The throw() specification, which restricts the function from throwing any exceptions, 
has been deprecated in C++11 and removed in C++17. The throw(Type) specification, as shown in the example, 
is still supported but not commonly used. It's generally preferred to use proper exception handling and documentation 
to communicate the exceptions that a function can throw. 
*/






//void f() throw (int, char, runtime_error);
// This function can throw an int, a char, or a runtime_error.
// If the function throws any other type of exception, the program will terminate.
// If you don't specify any exception types, the function can throw any type of exception.
// If you specify an empty list of exception types, the function cannot throw any type of exception.
// If you specify an ellipsis (...) in the list of exception types, the function can throw any type of exception.
// If you specify a list of exception types that includes an ellipsis, the ellipsis must be the last item in the list.
// If you specify a list of exception types that includes an ellipsis, the function can throw any type of exception,
// but the compiler will not be able to check the exception types.
