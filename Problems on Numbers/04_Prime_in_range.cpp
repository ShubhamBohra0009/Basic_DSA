#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int min, int max) {
    cout << "Prime numbers in this range are: ";
    for (int num = min; num <= max; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    printPrimesInRange(2, 10);
    return 0;
}
