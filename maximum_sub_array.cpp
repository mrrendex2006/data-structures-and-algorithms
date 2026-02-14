#include <iostream>
#include<climits>
#include <vector>
using namespace std;
// to find all the subarrays associated to an array 
/*
int main(){
    int n=5,arr[5]={1,2,3,4,5};   //total number of sub array=(n*(n+1))/2
    for(int start=0;start<n;start++){ // starting point inc after one iteration ;
        for(int end=start;end<n;end++){//end point increases to make all the possible pair
            for(int i=start;i<=end;i++){// ther loop is used to assces the required element:
                cout<<arr[i];
            }
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}*/

//maximum subarray sum :
/*int main(){
    int n=5, arr[5]={1,2,3,4,5};
    int maxsum=INT_MAX;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
        }
    }
    cout<<"max subarray sum="<<maxsum<<endl;
    return 0;
}
*/
//********************* KADANE'S ALGORITHUM *********************
int maxsumarray(vector<int> & nums){
    int currsum=0 ,maxsum=INT_MIN;
    for(int val:nums){
        currsum+=val;
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> num={1,2,3,4,5};
  
    cout<<maxsumarray(num);
    return 0;
}