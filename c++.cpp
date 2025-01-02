
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


void printStarsAlternative(int n){
   for(int i = 0; i< n; i++){
    for(int j = 0; j < n-i-1; j++){
        cout << " ";
    }
    for(int j = 0; j < i*2+1; j++){
        cout << "*";
    }
    for(int j = 0; j < n-i-1; j++){
        cout << " ";
    }
    cout << "\n";
   }
}


void printStarsReverse(int n){
     for(int i = n; i > 0; i--){
    for(int j = 0; j < n-i; j++){
        cout << " ";
    }
    for(int j = 0; j < i*2-1; j++){
        cout << "*";
    }
    for(int j = 0; j < n-i; j++){
        cout << " ";
    }
    cout << "\n";
   }
}

void printStars(int n){
    int mid = round(n*2/2);
  vector<int> nums(1,mid);
  for(int i = 0; i < n; i++){
    
    if(i != 0){
        cout << "\n";
        nums.push_back(n+i);
        nums.push_back(n-i);
    }
    for(int j = 0; j <= (n*2)-1; j++){
        bool exists = false;
        for(int& num : nums){
            if(num == j){
                exists = true;
            }
        }
        if(exists){
            cout << "*";
        }else{
            cout << " ";
        }

    }
  }
}


void pattern10(int n){
    for(int i = 1; i < n*2-1; i++){
        int num = i;
        if( i > n){
            num = n*2 - i;
        }
        for(int j =1; j <= num; j++){
            cout << "*";
        }
        cout <<  endl;
    }
}

void pattern10Atlernative(int n){
    int num = n-1;
    for(int i =1; i<= n*2-1;i++){
        if(i > n){
      
            for(int j = 1; j <= num; j++){
              
            cout << "*";
        }
        num--;
        }
        else{
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 1;
    for( int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++ ){
            if(i == 0){
                cout << start;
            }else{

            if(start == 0){
                start++;
            }else{
                start--;
            }
            cout << start;
            }
            
        }
        cout << endl;
    }
}

void pattern13(int n){
     int start = 1;
    for( int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++ ){
            
            cout << start << " ";
            start++;
            
            
        }
        cout << endl;
    }
}

void pattern12(int n){
    int num = n*2;
    for(int i=1; i <= n; i++){
        num -= 2;
        for(int j =1; j <= i; j++){
            cout << j;
        }
        for(int j = 0; j < num; j++){
            cout << " ";
        }
          for(int j=i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i =0; i < n;i++){
        for(int j =65; j <= i+65; j++){
            cout << (char)j;
        }
    cout << endl;
    }
}

void pattern15(int n){
    for(int i = n; i >= 0; i--){
        for(int j = 'A'; j <= i+'A'; j++){
            cout << (char)j;
        }
        cout << endl;
    }
}

void pattern16(int n){
    for(int i =0; i < n; i++){
        for(int j='A'; j <= i+'A'; j++){
            cout << char(i+'A');
        }
        cout << endl;
    }
}

void pattern17(int n){
    for(int i =0; i < n; i++){
        int breakvalue = (i*2+1)/2;
        char c = 'A';
        for(int j =0; j<= n-i-1;j++){
            cout << " ";
        }
        for(int j =0; j < i*2+1; j++){
            cout << c;
           if( j < breakvalue) c++;
           else c--;
        }
        for(int j =0; j<= n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
    int c = 'A'+n-1;
    for(int i=0; i<n; i++){
        for(int j = 0; j <= i; j++){
            cout << char(c+j);
        }
        c--;
        cout << endl;
    }
}

void pattern19(int n){
    for(int i=1; i <= n; i++){
        for(int j =1; j <= n-i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < i*2-2; j++){
            cout << " ";
        }
          for(int j=1; j <= n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
     int num = n*2;
    for(int i=1; i <= n; i++){
        num -= 2;
        for(int j =1; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < num; j++){
            cout << " ";
        }
          for(int j=i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
}


void pattern20(int n){
     int num = n*2;
    for(int i=1; i <= n; i++){
        num -= 2;
        for(int j =1; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < num; j++){
            cout << " ";
        }
          for(int j=i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
     for(int i=2; i <= n; i++){
        for(int j =1; j <= n-i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < i*2-2; j++){
            cout << " ";
        }
          for(int j=1; j <= n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n){
    for(int i=0; i < n; i++){
        for(int j =0; j<n; j++){
            if(i == 0 || i == n-1){
                cout << "*";
            }else{
                if(j == 0 || j == n-1){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
}


void pattern22(int n){
    for(int i = n; i > 0; i--){
        for(int j =n; j > i; j--){
            cout << j;
        }

        for(int j =1; j <= i*2-1; j++){
            cout << i;
        }
       for(int j = i+1; j <= n; j++){
            cout << j;
        }
        cout << endl;  
    }
    for(int i = 1; i < n; i++){
        for(int j =n; j > i+1; j--){
            cout << j;
        }

        for(int j =1; j <= i*2+1; j++){
            cout << i+1;
        }
       for(int j = i+2; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
}


int count(int n){
    string value = to_string(n);
    int count = 0;
    for(int i =0; i < value.size(); i++){
        count++;
    }
    return count;
    
}

int reverse(int n){
    string value = to_string(n);
    string result = "";
    for(int i = value.size()-1 ; i >=0; i--){
       result += value[i];
    }
    return stoi(result);

}

int reverseAlternative(int n){
    int result = 0;
    while(n >0){
        result = result*10 + n%10;
        n = n/10;
    }
    return result;
}

int plaindrome(int n){
    int initalNum = n;
    int result = 0;
    while(n >0){
        result = result*10 + n%10;
        n = n/10;
    }
    return result == initalNum;
}

int GCD1(int a, int b){
    int gcd =1;
    for(int i =2; i <= min(a,b); i++){
        if(a% i ==0 && b % i ==0){
            gcd = i;
        }
    }
    return gcd;
}

int GCD2(int a, int b){
    for(int i = min(a,b); i >=1 ; i--){
        if( a%i == 0 && b%i == 0){
            return i;
        }
    }
    return 1;
}

int GCD3(int a, int b){
    while (a > 0 && b > 0){
        if(a > b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if( a== 0){
        return b;
    }else{
        return a;
    }
}

bool amstrong(int n){
    string num = to_string(n);
    int result = 0;
    for(int i =0; i < num.size(); i++){
        result+= pow(num[i]-'0',num.size());
    }
    return n == result;
}

bool amstrongalternative(int n){
    int initalNum = n;
    int power = to_string(n).size();
    int result = 0;
    while(n > 0){
        result+= pow(n%10,power);
        n = n/10;
    }
   return initalNum == result;
    
}

vector<int> allDivisors1(int n){
    vector<int> nums;
    for( int i = n; i >=1; i--){
        if(n%i == 0) nums.push_back(i);
    }
    for(auto i : nums){
        cout << i << endl;
    }
    return nums;
}

vector<int> allDivisors2(int n){
    vector<int> nums;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(i == sqrt(n)){
                nums.push_back(i);
            }else{

            nums.push_back(i);
            nums.push_back(n/i);
            }
        }
    }
    for(auto i : nums){
        cout << i << endl;
    }
    return nums;
}

bool prime1(int n){
    if(n == 1 || n == 2) return true;
    for(int i = 3; i <= sqrt(n); i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void simpleRecursion(int i, int n){
    if(i > n) return;
    cout << i << endl;
    simpleRecursion(i+1,n);
    cout << "printing" << i << endl;
}

void sum(int n, int summ){
    cout << "Sum" << summ << endl;
   if(n == 0){
        return;
   }
   sum(n-1,summ+n);
   
}

int sumAlternative(int n){
    if( n == 0){
        return 0;
    }
    return n + sumAlternative(n-1);
}

void factorial(int fac,int n){
    if(n ==0){
        cout << fac;
        return;
    }
    fac = fac*n;
    factorial(fac, n-1);
}

int factorialAlternative(int n){
    if( n ==0){
        return 1;
    }
    return n * factorialAlternative(n-1);
}
void reverse(vector<int> arr){
    int left = 0;
    int right = arr.size() -1;

    while(left < right){
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        right--;
        left++;
    }
    for(auto i : arr){
        cout << i;
    }
}

void reverserecur(vector<int> arr,int start,int end){

    if(start >= end){
        for(auto i : arr){
            cout << i << endl;
        }
        return;
    }

    int temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;
    reverserecur(arr, start+1, end-1);
}

bool palindrome(string s ){
    int left = 0;
    int right = s.length() -1;

    while(left <= right){
        if(s[left] != s[right] ) return false;
        left++;
        right--;
    }
    return true;
}

bool palindromerecur(int i, string s){
    if(i >= s.length()/2) return true;

    if(s[i] != s[s.length()-i-1]) return false;

    return palindromerecur(i-1,s);
}

int fibonacci(int n){
    if( n<=1){
        return n;
    }

    int start = fibonacci(n-1);
    int end = fibonacci(n-2);

    return start+end;
}

void frequency(vector<int> arr){
    unordered_map<int, int> mpp;
    for(int i =0; i < arr.size(); i++ ){
        mpp[arr[i]]++;
    }
    for(auto i : mpp){
        cout << i.first << "-->" << i.second << endl;
    }
}

void frequencyHighLow(vector<int> arr){
    unordered_map<int,int> mpp;
    for(int i =0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }
   
   int large = 0;
   int largeval;
   int small = 99999;
   int smallval;

    for(auto i : mpp){
        if(large <= i.second){
         largeval = i.first;
        }
        large = max(large,i.second);

       if(small >= i.second){
        smallval = i.first;
       }
        small = min(small, i.second);
    }
    cout << largeval << endl << smallval;
}

void selectionSort(vector<int> nums){
    for(int i =0; i < nums.size(); i ++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] > nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for(auto i : nums){
        cout << i << endl;
    }
}


void bubbleSort(vector<int> nums){
    for(int i = nums.size()-1; i >= 0; i--){
        bool swapped = false;
        for(int j = 0; j < i; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j]; 
                nums[j] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            cout << "breaked out" << endl;
            break;
        }
    }
    for(auto i : nums){
        cout << i << endl;
    }
}

void insertionSort(vector<int> arr){
   for(int i = 1; i < arr.size(); i++){
    int j = i;
    while (j > 0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
   }
        
    for(auto i : arr){
        cout << i << endl;
    }
}


int main(){
   
 
  insertionSort({14,15,9,12,6,8,13});

}

