#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;
int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);        
    s.insert(7);

    cout<<"lower bound = " << *(s.lower_bound(4)) << endl;      // 4
    cout<<"upper bound = " << *(s.upper_bound(4)) << endl;      // 5
    cout<< s.size() <<endl;
    for(auto val : s) {
        cout<< val << " ";
    }
    cout<<endl;
    return 0;
}