#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 10, 30, 10, 40};

    v.erase(remove(v.begin(), v.end(), 10), v.end());

    for (int x : v)
        cout << x << " ";

    return 0;
}
