




























/*struct student{
    
    int stdid;
    char sname[50];
    float c,cpp,java;
    int total,avg;

    
    void input(){
        cout<<"<----------------------------------+----------------------------+---------------"<<endl;
        cout<<"Enter student id :"<<endl;
        cin>>stdid;
        cout<<"Enter the name of student:"<<endl;
        cin>>sname;
        cout<<"Enter the mark of c:"<<endl;
        cin>>c;
        cout<<"Enter the no of c++:"<<endl;
        cin>>cpp;
        cout<<"Enter thr marks of java:"<<endl;
        cin>>java;
    }
    
    void calculate(){
       
        total=c+cpp+java;
        avg=total/3;

    }
    
    void display(){
        cout<<"<----------------------------------+----------------------------+---------------"<<endl;
        cout<<"student id is "<<stdid<<endl;
        cout<<"<----------------------------------+"<<endl;
        cout<<"name of student :           "<<sname<<endl;
        cout<<"<----------------------------------+"<<endl;
        cout<<"marks of c language:"<< c<< endl;
        cout<<"<----------------------------------+"<<endl;
        cout<<"marks of c++:\t"<<cpp<<endl;
        cout<<"<----------------------------------+"<<endl;
        cout<<"marks of java :\t"<<java<<endl;
        cout<<"<----------------------------------+"<<endl;
        cout<<"total marks of student: \t"<<total<<endl;
        cout<<"<----------------------------------+"<<endl;
        if(avg>50){
            cout<<"average of marks : "<<avg<<endl;
            cout<<"<-----------PASS--------------->"<<endl;
        }else{
            cout<<"<-----------FAIL--------------->"<<endl;
        }
    }

};
int main(){
    student details;
    details.input();
    details.calculate();
    details.display();
    return 0;

}*/
/*
class employee{
    private:
    int emp_id;
    string ename;
    int basic_pay,TA,DA,Total;
    double ITAX;
    public:
    void input(){
        cout<<"enter the name of the employee:                 "<<endl;
        getline(cin, ename);        // reads full name with spaces
        cout<<"enter the employee id of the employee:          "<<endl;
        cin>>emp_id;
        cout<<"enter the basic salary of the employee          "<<endl;
        cin>>basic_pay;

    }
    
    void calculate(){
     
        TA=0.05*basic_pay;
        DA=0.07*basic_pay;
        Total=basic_pay+TA+DA;
        if(Total>=120000){
            ITAX=0.15*Total;
        }else if(Total>=500000){
            ITAX=0.07*Total;
        }else{
            ITAX=0;
            cout<<"no taxation as per thr policy :       ";
        }

    }
    void display(){
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<"the name of the employee:                 "<< ename<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<"the employee id of the employee:          "<<emp_id<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<"the basic pay of the employee:            "<<basic_pay<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<" the DA :                                 "<<DA<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<" the TA :                                 "<<TA<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;
        cout<<" the income tex :                         "<<ITAX<<endl;
        cout<<"-----------------------------------------+--------------------"<<endl;


    }

};

int main(){
    employee details;
    details.input();
    details.calculate();
    details.display();
    return 0;

}*/

