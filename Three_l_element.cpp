#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> v = {10, 50, 20, 80, 30, 70};

    priority_queue<int> pq;

    for (int x : v)
        pq.push(x);

    cout << "Three largest elements: ";

    for (int i = 0; i < 3; i++) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
