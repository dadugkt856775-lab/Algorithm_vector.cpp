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
   vector<int> vec = {111,112,113,114,115};
   cout<<binary_search(vec.begin(), vec.end(),4)<<endl;
   cout<<binary_search(vec.begin(), vec.end(),10)<<endl;
    return 0;
}
