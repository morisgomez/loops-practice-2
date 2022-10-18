#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    while (i <= 2022)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;
}
//We use the sum variable to track the sum of the program. 
//We use i to track iterations in the program.
//This program technically runs 2022 times?



