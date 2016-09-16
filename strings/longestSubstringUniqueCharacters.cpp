

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;


    int lengthOfLongestSubstring(string s) {

     unordered_map<char,int> map;

     if(s.length() == 0){
         return 0;
     }

     map[s[0]] = 0;
     int i,l;
     l = s.length();
     int maxl=1,maxIndex=0;
     int curr_l = 1;
     int curr_Index = 0;
     int pre;
     for(i=1;i<l;i++){

        if(map.find(s[i]) == map.end() || map[s[i]]<curr_Index){

            map[s[i]] = i;
            curr_l++;

        }else{

            if(curr_l > maxl){
                maxl = curr_l;
                maxIndex = map[s[i]];
            }
            pre = map[s[i]];
            curr_Index = pre+1;
            curr_l = i-curr_Index+1;
            map[s[i]] = i;

        }


     }
     if(curr_l>maxl){
         maxl = curr_l;
     }


     return maxl;


    }


    int main(){

        string s = "abcabcbb";


        cout << lengthOfLongestSubstring(s)<<endl;

    }