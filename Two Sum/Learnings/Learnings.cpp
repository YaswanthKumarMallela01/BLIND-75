#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    std::cout<<v[1]<<std::endl;
    std::cout<<v.size()<<std::endl;
    std::cout<<v.capacity()<<std::endl;
    
    unordered_map<int, string> mp;

    mp[1] = "One";
    mp[2] = "Two";

    cout << mp[1]; 
}
