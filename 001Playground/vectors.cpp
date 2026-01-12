#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    std::cout<<v[0]<<std::endl;

    vector<vector<int>> coor;
    coor.push_back({1, 2});
    std::cout<<coor[0]<<std::endl;
}