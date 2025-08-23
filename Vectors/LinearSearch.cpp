#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3,4,5} ;
    int key = 3;
    int index = 0;
    for(int val:vec){
        if(val==key){
            cout<<"Found at Index "<<index;
            return 0;
        }
        index++;
    }
    cout<<"Not Found";

}