#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    sort(A.begin(),A.end());

    int i,l,tmp;
    l = A.size();
    i = 0;
    while(i<l-1){

        swap(A[i],A[i+1]);

        i +=2;
    }


    return A;





}



int main(){



    int tmparr[] = {1,4,3};

    vector<int> inp(tmparr,tmparr+ sizeof(tmparr)/sizeof(tmparr[0]));

    wave(inp);

    int i;
    for(i=0;i<inp.size();i++){
        cout<<inp[i]<<" ";
    }
    cout<<endl;



}