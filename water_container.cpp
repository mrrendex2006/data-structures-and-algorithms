#include <iostream>
#include <vector>
using namespace std;
// CONTAINER WITH MOST WATER 
//BRUTE APPROACH

int maxarea(vector<int>& height){
    int maxwater=0;
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int currwater=w*ht;

            maxwater=max(maxwater,currwater);
        }
    }
    return maxwater;
}

int main(){
    vector<int> height={1,2,6,3,5,7,3,5,6,14};
     
    int result=maxarea(height);
    cout<<result<<endl;
    return 0;

}

//optimal approach(2 pointer)
/*int maxarea(vector<int>& height){
    int maxwater=0;
    int lp=0,rp=height.size()-1;

    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currwater=w*ht;
        maxwater=max(maxwater,currwater);

        height[lp]<height[rp]? lp++:rp--;

    }
    return maxwater;
 }
int main(){
    vector<int> height={1,2,6,3,5,7,3,5,6,14};
     
    int result=maxarea(height);
    cout<<result<<endl;
    return 0;

}*/

