//#include <iostream>
//#include <climits>
//using namespace std;

/*int main(){
    int size=8;
    int marks[size];
    

    for(int i=0;i<size;i++){
        cin>>marks[i];
    }

    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;

    }
    return 0;
}*/

/*int main(){
    int num[]={111,2435,556,64667,-8984,777};
    int size =6,;
    
    int smallest= INT_MAX; 
    int largest= INT_MIN;  // infinity 

    for(int i=0;i<size;i++){//from 0 to 6
        //if(num[i]<smallest){  // written such that it always comes true .
            //smallest=num[i];
        smallest=min(num[i],smallest);
        largest=max(num[i],largest);
        }
    
    cout<<"smallest= "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    return 0;
}*/

/*void changearr(int arr[],int size){
    cout<<"in function\n";
    for(int i=0;i<=size;i++){
        arr[i]=2*arr[i];
    }

}
int main(){
    int arr[]={4,5,6};

    changearr(arr,3);
    cout<<"in main\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

//output====
in function
in main
8 10 12
// internally main arr also changes*/


// linear search 
/*int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<i<<"\n";
            cout<<"target exist";
        }
        else{
            if(i==size){
                cout<<"target doesn't exist";
            }
            else{
                
            }
            
        }
    }
    return 0;
}

int main(){
    int arr[]={21,45,756,857,9998,476};
    linearsearch(arr,6,21);
    return 0;
}*/

//REVERSE ARRAY===  two pointer approch very imp concept

/*void reverse(int arr[],int sz){
    int start=0,end=sz-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,2,7,8,1,23,34};
    int sz=7;
    reverse(arr,sz);
    for(int i=0;i<=sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/


/*int calculation(int arr[],int sz){
    int sum=0,pro=1;
    for(int i=0;i<=sz;i++){
        sum+=arr[i];
        pro*=arr[i];
        
    }
    cout<<"product of array="<<sum;
    cout<<"  sum of array="<<pro;
    return 0;
}

int main(){
    int arr[]={33,34,65,63,37,65};
    calculation(arr,6);
    return 0;
}*/

#include <stdio.h>
/*int main() {
    char *arr[]={"hello","yash","singh"};
    char **ptr=arr;
    *(*(ptr + 0)+0)='y';
    printf("%c\n",arr);
    return 0;
    
}*/

int main(){
    char arr[10];
    int size=10;
    int count=0;
    printf("enter your statement",gets(arr));
    for(int i=0;i<size;i++){
        if(arr[i]!=" "){
            count+=1;


        }
        }
    return count ;
    return 0;
}


