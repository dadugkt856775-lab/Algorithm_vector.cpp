#include<iostream>
#include<map>
using namespace std;
int main(){
    map <string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    // m.erase("tv");             (optional)

    m.insert({"Airpods", 500});
    m.emplace("camera", 25);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"Laptop count = "<<m.count("laptop")<<endl;
    cout<<"Laptop value = "<<m["laptop"]<<endl;

    if(m.find("camera") != m.end()){
        cout<<"Found\n";
    } else {
        cout<<"Not found\n";
    }
    return 0 ;
}