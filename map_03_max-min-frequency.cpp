#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    vector<string>v={"Md","Tanvir","Alam","Emon","Araf","roni","Tanvir","Araf","Emon","Tanvir","Md","Araf","Md","Tanvir"};
    for(auto u:v){
        m[u]++;
    }
    for(auto u:m){
        cout<<u.first<<" "<<u.second<<endl;
    }
    int mx=0;
    for(auto u:m){
        mx=max(mx,u.second);
    }
    cout<<mx<<endl;
    int mn=INT_MAX;
    for(auto u:m){
        mn=min(mn,u.second);
    }
    cout<<mn<<endl;
}
