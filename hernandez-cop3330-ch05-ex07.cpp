/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Hernandez
 */

#include "std_lib_facilities.h"
using namespace std;

class Roots {
    public:
        void findRoots(int a, int b, int c) {
            //calculate b^2 - 4ac to see if it equals zero or not
            int discriminant = (b * b) - (4 * a * c);
            //variables to store the roots of the quadratic formula
            double root1, root2;
            //now check to see what the discrimant equals
            if(discriminant > 0) {
                //if greater than zero, the two roots will be different, so the quadratic formula will have two roots
                root1 = (double) (-b + sqrt(discriminant)) / 2 * a;
                root2 = (double) (-b - sqrt(discriminant)) / 2 * a;
                //now print the results
                cout << "The quadratic formula has two roots: " << root1 << " and " << root2;
            }
            else if(discriminant == 0) {
                //if the discriminant equals 0, that means that it only has one root
                root1 = (double) (-b + sqrt(discriminant)) / 2 * a;
                root2 = root1;
                cout << "The quadratic formula only has one root: " << root1;
            }
            else {
                //else, the quadratic formula has no roots
                cout << "The quadratic formula has no roots.";
            }
        }   
};

int main() {
    //necessary variables and object
    Roots roots;
    int b, a, c;
    //prompt the user to enter values for a, b and c for the quadratic formula
    cout << "Please give values to a, b and c for the quadratic formula: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    //find the roots of the quadratic formula (if any)
    roots.findRoots(a, b, c);
    //end main
    return 0;
}