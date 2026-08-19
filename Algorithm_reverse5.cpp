#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator (pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}
int main (){
    vector<int> vec = {432,221,568,906,324};

    reverse(vec.begin(), vec.end());

    for(auto val : vec) {
        cout<<val <<endl;
    }
    cout<<endl;
    return 0;
}
