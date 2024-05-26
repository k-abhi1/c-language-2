// wap in cpp to input any two cpmlex number and find the summaction of both 
//complex numbers using binary operator overloading with default parametrized constructor

#include <iostream>
using namespace std;

class Complex {
    private:
        float real, imag;

    public:
        // Default parameterized constructor
        Complex(float r = 0.0, float i = 0.0) {
            real = r;   //.        
            imag = i;
        }
//

        // Overload the '+' operator
        Complex operator+(Complex &c) {
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }

        // Function to display the complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1, c2, sum;

    // Input the real and imaginary parts of the first complex number
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> c1.real >> c1.imag;

    // Input the real and imaginary parts of the second complex number
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> c2.real >> c2.imag;

    // Find the sum of the two complex numbers
    sum = c1 + c2;

    // Display the sum
    cout << "The sum of the two complex numbers is: ";
    sum.display();

    return 0;
}