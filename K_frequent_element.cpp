#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {

    // Step 1: Count frequency
    unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    // Step 2: Min heap
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    // Step 3: Store frequency and element
    for (auto x : freq) {
        pq.push({x.second, x.first});

        if (pq.size() > k) {
            pq.pop();
        }
    }

    // Step 4: Store result
    vector<int> result;

    while (!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}

int main() {

    vector<int> nums = {
        1, 1, 1,
        2, 2,
        3,
        4, 4, 4, 4
    };

    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
