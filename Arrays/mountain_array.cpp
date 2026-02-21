# include <iostream>
#include <vector>
using namespace std;
//Linear search to find mountain peak :
int peak_element(vector <int> array){
    for(int i=0;i<array.size()-1;i++){
        if((array[i]<=array[i-1])&&(array[i]>array[i+1])){
            return i;

        }
    }
    return -1;//if no peak found
}
/*
int main(){
    vector <int> array={1,6,8,6,4};
    int result=peak_element(array);
    cout<<"index = "<<result<<endl;

    return 0;
}*/

//binary search to find mountain peak:

int peakelement(vector<int>arr){
    int start=0,end=arr.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid-1]){
            end=mid-1;
        }else if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else{
            return mid;
        }
        return -1;
    }
}

int main(){
    vector <int> array={1,6,8,6,4};
    int result=peakelement(array);
    cout<<"index = "<<result<<endl;

    return 0;
}
