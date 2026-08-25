#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int target = 25;

    auto it = s.lower_bound(target);

    if (it != s.end())
        cout << "Smallest element >= " << target << " is " << *it;
    else
        cout << "No such element";

    return 0;
}
