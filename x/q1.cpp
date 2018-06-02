#include<iostream>
using namespace std;
class employee
{
    int id,day,month,year;
    char name[100];
    public:
    void input()
    {
        cout<<"Enter Employee id: ";
        cin>>id;
        cout<<"Enter Employee name: ";
        cin>>name;
        cout<<"Enter date of joinig(D M Y): ";
        cin>>day>>month>>year;
    }
    void output()
    {
        cout<<"ID : "<<id;
        cout<<"\nName : "<<name;
        cout<<"\nDate of joining : "<<day<<" "<<month<<" "<<year<<endl;
    }
};
class stack
{
    int size,top;
    employee emp[1000];
    public:
    stack(int n)
    {
        top=0;
        size=n;
    }
    void display()
    {
        int i=top-1;
        for(i=top-1;i>=0;i--)
        {
            emp[i].output();
        }
    }
    void push()
    {
        if(top==size)
            cout<<"Overflow of data"<<endl;
        else
        {
            emp[top].input();
            top++;
        }
    }
    void pop()
    {
        if(top-1==-1)
            cout<<"Underflow"<<endl;
        else
        {
            cout<<"The employee being laid off: "<<endl;
            emp[top-1].output();
            top--;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the total Number of employees: ";
    cin>>n;
    stack empl(n);
    int ch=1,x=1;
    while(x==1)
    {
        cout<<"Enter :-\n1-Insert a new employee\n2-Delete an employee\n3-Display\n4-Exit\n";
        cin>>ch;
        if(ch==1)
            empl.push();
        else if(ch==2)
            empl.pop();
        else if(ch==3)
            empl.display();
        else
            return 0;
    }
    return 0;
}
