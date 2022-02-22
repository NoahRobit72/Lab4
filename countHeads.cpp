#include <iostream>
using namespace std;

// Function to calculate the factorial of each input
int factorialResult(int num);

int choose (int N, int r){
    int factorial, Nfactorial, rFactorial, minusFactorial;
    
    // Calculate the factorial of each conponent of the equation
    Nfactorial = factorialResult(N);
    rFactorial = factorialResult(r);
    minusFactorial = factorialResult(N-r);

    factorial = Nfactorial / (rFactorial * minusFactorial);

    return factorial;
}

int factorialResult(int num) {

    int factorial = 1;

    for(int i = 1; i <= num; ++i) {
            factorial *= i;
    }

    return factorial;
}

// Input Testing 
#ifdef UserTesting
int main(){
    int num;
    long double factorial;
    cout << "Please input a number";
    cin >> num;

    factorial = factorialResult(num);
    cout << "The factorial is: " << factorial << endl;

    return 0;
}
#endif