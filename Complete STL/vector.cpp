#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1, 2, 3, 4, 5};
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    vec.emplace_back(6);

    vec.erase(vec.begin() + 2);     // index delet
    vec.insert(vec.begin() +2, 100);    // index insert.


    vec.pop_back();         // last number remove
    for(int val : vec){
        cout<< val << " ";
    }
    cout<<endl;
    cout<<"Front "<< vec.front() << endl;
    cout<<"Back "<< vec.back() <<endl;
    return 0;
}