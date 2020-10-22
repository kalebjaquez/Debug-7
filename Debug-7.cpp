#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cmath>
using namespace std;

// This code is designed to approximate the square root of 2.
// Remember that the square root of 2 is simply the number that square to 2.
// put double for x variable and cout wont be at the start of the code to get x*x
// will be new double variable that is a and it will then equal what the square root of 2 is or x*x
double square(double x){
    double a = x*x;
    return a;
	// then I would have to return it to get the answer
}
double lowApprox = 1;
double highApprox = 2;
double middle;

int main() {

// The algorithm is fine. It's worthwhile to look it over and decipher it's inner-workings.    
if (square(lowApprox)<2 && square(highApprox)>2){
    while (abs(lowApprox-highApprox)>.0000001){
        middle = (lowApprox+highApprox)/2;
        if (square(middle)<2){
            lowApprox = middle;
        }
        if (square(middle)>2){
            highApprox = middle;
        }
	if (square(middle)==2){
	    break;
	}        
    }
}
cout << "The square root of 2 is approximately " << middle;
	return 0;
}
