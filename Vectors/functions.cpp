#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ;
    
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.pop_back();
    cout<<"Size after pushback ="<<vec.size()<<endl;
    /*for(int val: vec){
    cout<<val<<endl;
    } */
   cout<<vec.front()<<endl;
   cout<<vec.back()<<endl;
   cout<<vec.at(0)<<endl;

    return 0;

}