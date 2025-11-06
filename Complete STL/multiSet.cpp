#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;
int main(){
    // multiset<int> s;          // sorted
    unordered_set<int> s;       // unsorted data

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);        
    s.insert(7);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<< s.size() <<endl;
    for(auto val : s) {
        cout<< val << " ";
    }
    cout<<endl;
    return 0;
}