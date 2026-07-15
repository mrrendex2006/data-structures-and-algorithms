#include <iostream>
#include <vector>
using namespace std;
// single shorted array 
//liner search 
int single_element(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        if((arr[i]!=arr[i-1])&&(arr[i]!=arr[i+1])){
            return i;
        }

    }return -1;
}

int main(){
    vector <int> array={1,1,2,2,3,4,4,8,8};
    int result=single_element(array);
    cout<<"index = "<<result<<endl;

    return 0;
}