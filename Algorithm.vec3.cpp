#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> vec = {1234,2235,5543,5454};

    sort(vec.begin(), vec.end(), greater<int>());

    for(auto val : vec) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
