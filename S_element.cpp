#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "Sum = " << sum;

    return 0;
}
