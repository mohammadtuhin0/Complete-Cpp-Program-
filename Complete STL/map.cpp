#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int main(){
    map<string, int> m;

    m["Tv"] = 100;
    m["Laptop"] = 400;
    m["Headphones"] = 50;
    m["Tablet"] = 120;
    m["watch"] = 50;

    m.insert({"Camera", 250});

    for(auto p: m){
        cout<<p.first << " "<< p.second << endl;
    }
    cout<< "Count = "<<m.count({"Laptop"}) << endl;

    if(m.find("Camera") != m.end()){
        cout<< "Found\n";
    } else {
        cout<<"Not found\n";
    }
    return 0;
}