#include <iostream> //preprocesser command
#include <string>
using namespace std; // use to remove repeation of writing std

//*****Function*****
// int sum(int a, int b)
// {
//     int add;
//     add = a + b;
//     return(add);
// }

int main() // main function
{
    // int a;
    // cout<<"Enter no for a :"; //c-console  out-for printing
    // cin>>a;            //in-for input
    // cout<<a<<endl<<"Hii"; //endl is use for new line

    // int b;
    // cout<<endl<<"Enter no for b:"; //c-console  out-for printing
    // cin>>b;            //in-for input
    // cout<<"value of b is"<<b;

    //*****Opeerator*****
    // cout<<"a + b is :"<<a + b<<endl;
    // cout<<"a - b is :"<<a - b<<endl;
    // cout<<"a / b is :"<<(float)a / b<<endl;    //typecasting

    //*****Condition Statement*****
    // int age;
    // cout<< "Enter your age:" << endl;
    // cin>> age;

    // if(age>100|| age<1)
    // {
    //     cout<<"InValid age";
    // }
    //  else if(age>=18)
    // {
    //     cout<<"Can vote";
    // }
    // else
    // {
    //     cout<<"Cannot vote";
    // }

    //*****Function*****

    // int a;
    // cout << "Enter no for a :";
    // cin >> a;

    // int b;
    // cout << endl
    //      << "Enter no for b:";
    // cin >> b;
    // cout << "The function returned: " <<sum(a,b);

    //*****Array*****

    // int marks[4];

    // for (int i = 1; i <=4; i++)
    // {
    //     cout<<"Enter the marks of "<<i<<"th Student:"<<endl;
    //     cin>>marks[i];
    // }

    //*****2D Array*****

    // int arr[3][4] = {
    //     {2, 3, 4, 2},
    //     {1, 0, 4, 2},
    //     {6, 1, 0, 5}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "Enter the  value at " << i << "," << j << " is:" << arr[i][j] << endl;
    //     }
    // }

    //*****String*****

    // string name="Arpita";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(2,4)<<endl;

    //*****Pointer*****
    // int a = 20;
    // int *ptr;
    // ptr = &a;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of a is " << *ptr << endl;
    // cout << "The address of a is " << &a << endl;
    // cout << "The address of a is " << ptr << endl;

    class Student
    {
    public:
        string name;
        int roll;

        Student(string n, int r, int sp)
        {
            this->name = n;
            this->roll = r;
            this->secretPassword = sp;
        }

        void printDetails()
        {
            cout << "The name of Student is  " << this->name << " and The roll no of Student is " << this->roll << endl;
        }

        void getSecretPassword()
        {
            cout<<"The secret passwordof student "<<this->secretPassword;
        }


    private:
        int secretPassword;
    };

    Student arp("Arpita constructor", 9, 44);
     arp.name="Arpita";
     arp.roll=05;
    //cout<<arp.secretPassword;    //through error because it is a secret means private variable

    arp.printDetails();
    arp.getSecretPassword();

    return 0;
}
