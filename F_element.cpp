#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    int target = 35;

    auto it = lower_bound(v.begin(), v.end(), target);

    if (it != v.end())
        cout << "First element >= " << target << " is " << *it;
    else
        cout << "No such element";

    return 0;
}
