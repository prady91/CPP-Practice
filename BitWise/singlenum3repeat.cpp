#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//All the numbers are reapated 3 times except for 1 number which is unique, find it


int singleNumber(vector<int>& nums) {

        int sum,i,l;


        l = nums.size();
        int ones=0,twos=0,common=0;

//ones keep track of the numbers which are encountered first time
//twos keep track of the nums which are encountered second time
//we achieve this by twos|(ones&nums[i])

//for discarding the numbers which are obtained 3rd time, we find the
//common bits btn "ones" & "twos" and take negation which gives
//0's in the common bits position, now & this common wiht ones and twos
//to remove the 3rd encountered number


        for(i=0;i<l;i++){

            twos |= (ones&nums[i]);

            ones ^= nums[i];

            common = (ones&twos);

            twos &= ~(common);
            ones &= ~(common);

        }

        return ones;
}


int main(){



    int tmparr[] = {1,1,1,4,3,3,3};

    vector<int> inp(tmparr,tmparr+ sizeof(tmparr)/sizeof(tmparr[0]));

    int res = singleNumber(inp);

    int i;

    cout<<res<<endl;



}