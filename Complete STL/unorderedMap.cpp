#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;
int main(){
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("fridge", 100);
    m.emplace("light", 100);

    m.erase(m.find("tv"));
    for(auto p: m){
        cout<<p.first << " "<< p.second << endl;
    }
    return 0;
}