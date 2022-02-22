#include <iostream>
#include "countHeads.h"
using namespace std;

int main(){
    int N = 0, r = 0;
    char userInput = 'y';
    
    do{
    cout << "How many coins would you like to flip? ";
    cin >> N;
    cout << "How many heads do you want? ";
    cin >> r;
    cout << "Flipping " << N << " coins, we can get " << r << " heads " << choose(N,r) << " ways." << endl;
    cout << "Flip again? (y/n) ";
    cin >> userInput;
    }while (userInput == 'y');
    


    return 0;
}