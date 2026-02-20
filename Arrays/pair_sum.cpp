
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// brute force approach;easist way to find pair sum
/*vector<int> pairsum(vector<int> &nums,int target){//using pass by reference boz of accessing org val from ans amd num
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<=n;i++){
        for (int j = i+1; j < n; j++)
        {
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;//stop after finding pair;
            }
        }
        
    }
    return ans;
}
int main(){
    vector<int> num={2,7,11,15};
    int target=26;
    vector<int> ans=pairsum(num,target);
    if(!ans.empty()){
        cout<<ans[0]<<" , "<<ans[1];

    }else{
        cout<<"result not found";
    }
    return 0;
}*/
// TWO pointer approach an optimised approch to find pairsum
// important condition : vector should be shorted
/*
vector<int> pairsum(vector<int> &nums,int target){//using pass by reference boz of accessing org val from ans amd num
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1;// i from starting and j from ending element;
    while (i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }else if (pairsum<target)
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;// imp to return here
            

        }
    }
    return ans;
}

    

    int main(){
        vector<int> nums={2,7,11,15};
        int target=17;
        vector<int> ans=pairsum(nums,target);
        cout<<ans[0]<<" , "<<ans[1]<<endl;
        return 0;
    }*/

// ***************MAJORITY ELEMENT ***************
//brute force approch;
int majorityele(vector<int> &num){
    int n=num.size();
    for(int val:num){
        int freq=0;
        for(int ele:num){
            if(ele==val){
                freq++;
            }
        }
        if(freq>n/2);
        return val;
    }
    return 0;
}

int main(){
        vector<int> num={3,4,4,3,3,3,4};
        cout<<majorityele(num)<<endl;
        return 0;
    }