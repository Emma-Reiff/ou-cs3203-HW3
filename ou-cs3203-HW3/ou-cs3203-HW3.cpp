
#include <iostream>
using namespace std;

int add(int arr[]) {

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    return sum;
}