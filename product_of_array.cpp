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

vector<int> productexceptself(vector<int>& nums){
