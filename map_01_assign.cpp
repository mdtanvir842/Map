#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    m["Tanvir"]=1;
    m["Alam"]=5;
    m["Emon"]=10;
    m["Araf"]=5;
    m["Md"]=1;
    m["Roni"]=7;
    //cout<<m["Roni"]<<endl;
    for(auto u:m){
        cout<<u.first<<" "<<u.second<<endl;
    }
    /*for(auto u:m){
        cout<<m[u.first]<<endl;
    }*/

}
