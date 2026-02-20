#include <iostream>
#include <vector>
using namespace std;
//a pointer stores the address of a variable ;
/*int main(){
    int a=10;
    int *ptr=&a;//storing address

    cout<<ptr<<endl;// gives address of variable a 
    cout<<&a<<endl;
    return 0;

}*/

//output:0x61ff08
//       0x61ff08
/*
int main(){
    float price=200.89;
    float *ptr=&price;

    cout<<&ptr<<endl;// address of pointer is different 
    cout<<&price<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;// here it will give the value at the stored address(this is also called as dereferencing )
    cout<<price<<endl;
    return 0;
}*/
/*output:
0x61ff08
0x61ff0c
0x61ff0c
200.89
200.89*/


//pointer to pointer
// a pointer stores the address of another pointer
/*int main(){
    int a=10;
    int *ptr=&a;//storing address

    int **parptr=&ptr;// parent pointer

    cout<<&ptr<<endl;//the address of the first pointer 
    cout<<parptr<<endl;//stores the address of the first pointer 

    //to print the value of the variable using parent we use dereferancing 
    cout<<**parptr<<endl;
    return 0;

}*/
/*output :
0x61ff04
0x61ff04
10    */

// NULL pointer (a pointer that pointes to nothing )
/*int main(){

    int *ptr=NULL;//storing address

    cout<<ptr<<endl;
    cout<<*ptr<<endl;// a null pointer can't be dereferance
    
    return 0;

}*/
/*output:
0  */


//pass by reference and pass by value 
/*void changeA(int a){// pass by value
    a=20;
}
int main(){
    int a=10;
    changeA(a);
    
    
    cout<<"value of a in the main function ="<<a<<endl;
    return 0;
}*/

//if we use the address of variable using pointers 
/*void change(int*ptr){//pass by reference 
    *ptr=20;
}
int main(){
    int a=10;
   
    change(&a);
    
    cout<<"value of a in the main function ="<<a<<endl;
    return 0;
}  
*/
//ARRAY pointers 

int main(){
    int arr[]={1,2,3,4,5};

    cout<<*arr<<endl;// default prints value at index  0;
    return 0;
}
