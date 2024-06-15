#include<iostream>
#include<math.h>
using namespace std;
    bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
    }


    int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
    }


    bool isBostonNumber(int n) {
    int On = n;
    int sum = 0;

    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && isPrime(i)) {
            sum += sumOfDigits(i);
            n /= i;
        }
    }

    return sum == sumOfDigits(On);
    }
    
    int main()
    {

    int n;
    cin >> n;

    if (isBostonNumber(n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }



    return 0;
}
