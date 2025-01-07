

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

void insertSort(vector<int>& nums){
  
    for(int i = 1; i < nums.size(); i++){
        int j =i;
        while(j > 0 && nums[j-1] > nums[j]){
           
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;     
            
            j--;

        }
    }
        cout << "The sorted array is:" << endl;
    for(auto i : nums){
        cout << i << endl;
    }

}


void recursiveInsertion(vector<int>& nums, int n){

    if(n >= nums.size() -1) {
        cout << "The recursive insertion sort:" << endl;
        for(auto i : nums){
            cout << i << endl;
        }
        return;
    }
    int j = n;
    while(j > 0 && nums[j-1] > nums[j]){
         int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;     
            
            j--;
    }
    recursiveInsertion(nums,n+1);

}

int partitionIndex(vector<int>& nums, int low, int high){
    int pivot = nums[low];
    int i = low;
    int j = high;
    while( i < j){
        while(nums[i] <= pivot && i < high){
            i++;
        }
        while(nums[j] >= pivot && j > low){
            j--;
        }

        if(i < j){
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
    
   
    
}
void quickSort(vector<int>& nums, int low, int high){
    if(low >= high){
        cout << "This is the quick sorted array:" << endl;
        for(auto i : nums){
            cout << i << endl;
        }
        return;
    }
    int p_index = partitionIndex(nums,low,high);
    quickSort(nums, low, p_index);
    quickSort(nums, p_index+1, high);
}

int main(){
   
  vector<int> nums = {14,15,9,12,6,8,13};
  quickSort(nums,0, nums.size()-1);


}
