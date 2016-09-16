#include <vector>
#include <iostream>
using namespace std;
void printvector(vector<int> a){

    int i;

    for(i=0;i<a.size();i++){
        cout<<a[i]<<",";
    }
    cout<<endl;

}