#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int largestElement(vector<int> nums){
    int maxEl;
    for(int i : nums){
        maxEl = max(i,maxEl);
    }
    return maxEl;
}

int recursiveLargeInt(vector<int> nums, int size, int maxEl){
    if(size == 0){
        return maxEl;
    }

    return recursiveLargeInt(nums, size-1, max(maxEl,nums[size-1]));
}

void smallAndLarge(vector<int> nums){
    int small = INT_MAX;
    int high = INT_MIN;
    int small2nd = INT_MAX;
    int high2nd = INT_MIN;
    for(auto i : nums){
        small = min(small,i);
        high = max(high,i);
    }
    for(auto i : nums){
        if( i != small){
            small2nd = min(small2nd,i);
        }
        if( i != high){
            high2nd = max(high2nd,i);
        }
    }
    cout << "2nd Smallest Element:" << small2nd << endl << "2nd Highest Element:" << high2nd;
}

int smallandLargeAlternative(vector<int> nums){

    if(nums.size() < 2){
        return -1;
    }

    int small = INT_MAX, small2nd = INT_MAX;
    int high = INT_MIN, high2nd = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < small){
            small2nd = small;
            small = nums[i];
        }else if(nums[i] <= small2nd &&  nums[i] != small){
            small2nd = nums[i];
        }
    }


    for(int i =0; i < nums.size(); i++){
        if(nums[i] > high){
            high2nd = high;
            high = nums[i];
        }else if(nums[i] > high2nd && nums[i] != high){
            high2nd=nums[i];
        }
    }

    cout << "2nd Smallest Element:" << small2nd << endl << "2nd Highest Element:" << high2nd << endl;
    return 0;

}

int main(){
    vector<int> nums = {3,5,66,34,63,333,65,6,7,3,1,0};

   smallandLargeAlternative(nums);
}