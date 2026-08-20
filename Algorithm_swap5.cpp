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
    int a=5243, b=1780;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    return 0;
}
