#include<iostream>
using namespace std;
struct person
{
    int age;
    string name;
    double weight;
};
 person a[3];  
int main()
{   
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"enter the name of person"<<i+1<<"\n";
        cin>>a[i].name;
        cout<<"enter the age:\n";
        cin>>a[i].age;
        cout<<"enter the weight:\n";
        cin>>a[i].weight;
    }
    cout<<"The person whose age is less than 20 is \n";
    for(i=0;i<3;i++)
    {
        if(a[i].age<20)
        {
            cout<<"the person name is "<<a[i].name<<"\n";
            cout<<"the person age is "<<a[i].age<<"\n";
            cout<<"the person weight is "<<a[i].weight<<"\n";
        }
           cout<<endl;
    }
    return 0;
}


