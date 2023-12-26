/*
Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;
    void get()
    {
        cout<<"\n\n Enter the name :";
        cin>>name;
        cout<<"\n\n Enter the roll.no :";
        cin>>roll_no;
    }
};
class mark
{
    public:
    int mark[4],i;
    void get_marks()
    {
        for(i=0;i<4;i++)
        {
        cout<<"\n\n Enter the marks of subject "<<i+1<<":";
            cin>>mark[i];
        }
    }
};
class marksheet:public student,public mark
{
    public:
    int total;
    float avg;
    void calc()
    {
        total=mark[0]+mark[1]+mark[2]+mark[3];
        avg=total/4;
    }
    void dis()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll.no :"<<roll_no<<endl;
        cout<<"Marks entered :";
        for(i=0;i<4;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<endl;
        cout<<"Total marks :"<<total<<endl;
        cout<<"Average :"<<avg<<endl;
    }
};
main()
{
    
    marksheet m1;
    m1.get();
    m1.get_marks();
    m1.calc();
    m1.dis();
}
