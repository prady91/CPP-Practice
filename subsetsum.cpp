#include <iostream>
#include <vector>
#include "utils.h"
using namespace std;


bool isSubsetSum(vector<int> inp,int sum,int index){

    if(sum==0){
        return true;
    }
    if(index == inp.size() && sum!=0){
        return false;
    }

    return (isSubsetSum(inp,sum,index+1)||isSubsetSum(inp,sum-inp[index],index+1));



}

vector<int> subsetsum(vector<int> inp,int sum){

    int i,j,l,index;
    l = inp.size();
    index = 0;
    bool res = isSubsetSum(inp,sum,index);

    bool dp[sum+1][l+1];
    int pre[l+1];

    for(i=0;i<=l;i++){
        dp[0][i] = true;
    }

    for(i=1;i<=sum;i++){
        dp[i][0] = false;
    }

    for(i=1;i<=sum;i++){

        for(j=1;j<=l;j++){

            dp[i][j] = dp[i][j-1];

            if(i >= inp[j-1]){

                dp[i][j] = dp[i][j] || dp[i-inp[j-1]][j-1];
            }

        }


    }





    cout<<dp[sum][l]<<endl;
    cout<<res<<endl;

    return inp;
}


int main(){

    int arr[] = {3,34,4,12,5,2};

    vector<int> in(arr,arr+6);

    subsetsum(in,13);




}