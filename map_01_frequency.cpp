#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    vector<string>v={"Md","Tanvir","Alam","Emon","Araf","roni","Tanvir","Araf","Emon","Tanvir","Md","Araf","Md","Tanvir"};
    for(auto u:v){
        m[u]++;
    }
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}
