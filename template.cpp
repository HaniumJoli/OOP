#include<bits/stdc++.h>
using namespace std;
template<typename T, typename U, typename V>
T add(U y, V z){
    return y+z;
}
int main(){
    cout<<add<int>(1.5,2.7)<<endl;
    cout<<add<double>(1.2,2.3)<<endl;
    //cout<<add<string>("hello","world")<<endl;
    return 0;
}