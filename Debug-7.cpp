#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cmath>
using namespace std;

// This code is designed to approximate the square root of 2.
// Remember that the square root of 2 is simply the number that square to 2.
double square(double x){
	// the interger that is x should be a double for it can be a decimal.
   double a =  x*x;
	//cout doesnt need to be right at start of the code.
	// I need to make a double to make x*x equal sommething.
    return a;
	// then you have to retunr a so that it will do x times x to get the square root of 2
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
