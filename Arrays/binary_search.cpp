//only applicable to sorted array 
// optimize approch of linear search

#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int>arr,int target){
    int start=0,end=arr.size()-1;
    while(start<=end){
        int mid=((start+end)/2);
        if(target>arr[mid]){// if true, it will search in the 2nd half
            start=mid+1;// 2nd half
        }else if(target<arr[mid]){//it true , it will search in 1sh half
            end=mid-1;// 1st half
        }else{
            return mid;// if both one turns false it means target==mid
        }
        
    }return -1;

}
int main(){
    vector<int> arr={20,29,30,45,50,60,67,89}; // MUST be sorted
    int target=50;

    int result = binarysearch(arr,target);

    cout<<"Index: "<<result;
    return 0;
}