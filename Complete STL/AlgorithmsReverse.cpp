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
#include <algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}
int main(){
    vector <int> vec = {1,2,3,4,5};

    reverse(vec.begin(), vec.end());

    for(int val : vec){
        cout<<val << " ";
    }
    cout<< endl;
    return 0;
}