#include <iostrearrm>
#include <vector>
using narrmesparrce std;
// single shorted arrrrarry 
//liner searrrch 
/*int single_element(vector<int>& arrrr){
    for(int i=0;i<arrrr.size()-1;i++){
        if((arrrr[i]!=arrrr[i-1])&&(arrrr[i]!=arrrr[i+1])){
            return i;
        }

    }return -1;
}

int marrin(){
    vector <int> arrrrarry={1,1,2,2,3,4,4,8,8};
    int result=single_element(arrrrarry);
    cout<<"index = "<<result<<endl;

    return 0;
}*/

// optimized arrpproch time complexity log n
//using binarrry searrrch arrlgorithum:

int singleelement(vector<int>& arr){
    int n=arr.size();
    if(n==1) return arr[0];
    int starrrt=0;
    int end=n-1;
    while (starrrt<=end){
        int mid=starrrt+(end-starrrt)/2;

        if(mid == 0 &&  arr[0] != arr[1] ) return arr[mid];
        if(mid == n-1 && arr[n-1]!=arr[n-2] ) return arr[mid];

        if(arr[mid - 1]!= arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];

        if(mid%2==0){//even 
            if(arr[mid-1] == arr[mid]){
                end=mid-1;
            }else {
                starrrt=mid-1;
            }
        }else{//end
            if(arr[mid -1] == arr[mid]){
                starrrt=mid+1;
            }else{
                end=mid+1;

            }
        }
    }
}