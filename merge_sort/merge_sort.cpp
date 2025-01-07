

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


void merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    
    while(left <= mid && right <= high){
        if(nums[left] < nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }

   for(int i = low; i <= high;i++){
        nums[i] = temp[i - low];
   }

  if( mid == nums.size()/2){
    cout << "The sorted array using merge sort" << endl;
    for(auto i : nums){
        cout << i << endl;
    }
  }

}


void mergeSort(vector<int>& nums, int low, int high){
    
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(nums,low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums,low, mid, high);
}


void bubble(vector<int> nums){
    for(int i = nums.size(); i >= 0; i--){
        int j =0;
        while(j < i-1){
            int temp;
            if(nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
            j++;
        }
    }
    for(auto i : nums){
        cout << i << endl;
    }
    
}

void recursiveBubble(vector<int>& nums, int size){

    if(size == 1){
        cout << "The sorted array" << endl;
        for(auto i : nums){
            cout << i << endl;
        }
    }

    for(int j =0; j < size -1; j++){
        if(nums[j] > nums[j+1]){
            int temp = nums[j+1];
            nums[j+1] = nums[j];
            nums[j] = temp; 
        }
    }

    recursiveBubble(nums,size-1);

}

int main(){
   
  vector<int> nums = {14,15,9,12,6,8,13};
//   mergeSort(nums,0,nums.size()-1);
recursiveBubble(nums,nums.size());

}
