#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else {
        int sqrt_num = sqrt(num);
        for (int i = 3; i <= sqrt_num; i += 2) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Measuring time
    auto start_time = high_resolution_clock::now();

    if (is_prime(number))
        cout << number << " is a prime number" << endl;
    else
        cout << number << " is not a prime number" << endl;

    auto end_time = high_resolution_clock::now();
    auto time_taken = duration_cast<milliseconds>(end_time - start_time).count();
    cout << "Time taken: " << time_taken << " milliseconds" << endl;

    return 0;
}
