//http://www.usaco.org/index.php?page=viewproblem2&cpid=1059
#include <iostream>

using namespace std;

int main (){
    
    //take input in array

    double input[7] = {0};
    for (int i = 0; i < 7; i++){
    cin >> input[i];
    }
    
    //find smallest value

    int A = 1000;
    
    for (int j = 0; j < 7; j++) {
        if (input[j] <= A)
            A = input[j];
    }

    //find second smallest value

    int B = 1000;

    for (int k = 0; k < 7; k++) {
        if (input[k] == A)
            B = input[k];
        else if (input[k]> A && input[k] < B)
            B = input[k];

    }

    //find largest value - A+B+C

    int largest = 0;

    for (int m = 0; m < 7; m++) {
        if (input[m] > largest)
            largest = input[m];
    }

    cout << A << " " << B << " " << largest - (A+B); 

    return 0;
    
}