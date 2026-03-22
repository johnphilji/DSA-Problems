#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();

        for(int i=0; i<length; i++){
            if(nums[i] == val){
                for(int j=i; j<length-1; j++){
                    nums[j] = nums[j+1];
                }
                length--;
                i--;
            }
        }
        return length;
    }
};