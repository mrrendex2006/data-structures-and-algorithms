#include <iostream>
#include <vector>
using namespace std;
/*int main(){
    vector<int> vec(5,8);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
    return 0;
}*/


int main(){
    vector<char> vec={'a','b','c','d','e','f'};//character should be in '  '
    for(char val : vec){ // for each loop (iterator(val on index):name of vct )
        cout<<val<<endl;
    }
   
    return 0;
}

//vector functions 
//size ,push_back,pop_back,front,back,at;
/*int main(){
    vector<char> vec;
    cout<<"size  ="<<vec.size()<<endl;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    vec.push_back('e');
    
    cout<<"size after pushback="<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    for(char val : vec){
        cout<<val<<endl;
    }
    cout<<vec.at<<endl;
   
    return 0;
}*/

/*int main(){
    vector<int> vec;
    cout<<"size  ="<<vec.size()<<endl;
    vec.push_back('1');
    vec.push_back('2');
    vec.push_back('34');
    vec.push_back('57');
    vec.push_back('46');
    
    cout<<"size after pushback="<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.pop_back('34')
    cout<<vec.back()<<endl;
    for(int val : vec){
        cout<<val<<endl;
    }
    cout<<vec.at<<endl;
   
    return 0;
}*/