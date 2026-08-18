#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> vec = {33,44,55,66,77};

    sort(vec.begin(), vec.end(), greater<int>());

    for(auto val : vec) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
