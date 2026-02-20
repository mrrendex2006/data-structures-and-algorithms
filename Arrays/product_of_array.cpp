//product of an array except self
#include<iostream>
#include<vector>
using namespace std;
//BRUTE FORCE
/*vector<int> productexceptself(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,1);

    for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
            if(i != j){
                ans[i]*=nums[j];

            }
        }
        
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result=productexceptself(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}*/
//optimal approach
/*
vector<int> productexceptself(vector<int>& nums){
    int n= nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    //prefix
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1] * nums[i-1];

    }
    //suffix
    for(int i=n-2;i>=0;i--){ // here we are initializing i from n-2 bcoz n-1 will always be 1.
        suffix[i]=suffix[i+1] * nums[i+1];
        
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i] * suffix[i];
    }
    return ans ;

}


int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result=productexceptself(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}*/

// a bit more optimize extra space =0(1)
//without using extra prefix & suffix always 

vector<int> productexceptself(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n,1);
    //prefix
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    //suffix
    int right=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i]*right;
        right=right*nums[i];
    }
    return ans ;
}

int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result=productexceptself(nums);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
