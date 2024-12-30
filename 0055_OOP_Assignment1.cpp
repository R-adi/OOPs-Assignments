#include <iostream>
using namespace std;
class complex
{
    int real,img;
    public:
       complex(){}
       
       complex(int r,int i)
       {
           real = r;
           img = i;
       }
       
       complex operator + (complex);
       complex operator * (complex);
       friend ostream & operator << (ostream &COUT,complex &x);
       friend istream & operator >> (istream &CIN,complex &y);
};

complex complex :: operator + (complex a)                   //overloaded +
{
    complex temp;
    temp.real = real + a.real;
    temp.img = img + a.img;
    return temp;
}
complex complex :: operator * (complex m)                    //overloaded *
{
    complex t;
    t.real = (real * m.real) - (img * m.img);
    t.img = (real * m.img) + (img + m.real);
    return t;
}

ostream & operator << (ostream &COUT,complex &x)
{
    COUT<<x.real;
    COUT<<" + ";
    COUT<<x.img;
    COUT<<"i";
    return COUT;
}
istream & operator >> (istream &CIN,complex &y)
{ 
    CIN >> y.real;
    CIN >> y.img;
    return CIN;
}

int main()
{
    int op;
    char yn;
    bool stop = false;
    complex c1,c2,c3,c4;
    
    while (stop != true)
    {
    cout<<"enter the real and imaginary numbers in the first complex number: "<<endl;
    cin>>c1;
    cout<<"enter the real and imaginary numbers in the second complex number: "<<endl;
    cin>>c2;
    
    cout<<endl;
    
    cout<<"CHOOSE OPERATION : "<<endl<<"1.ADDITION   2.MULTIPLICATION"<<endl;
    cout<<"ans: ";
    cin>>op;
    
    switch (op)
    {
        case 1: c3 = c1 + c2;
          cout<<"RESULT : ";                         
          cout << c3;
          cout<<endl;
          break;
        case 2: c4 = c1 * c2;
          cout<<"RESULT : ";
          cout << c4;
          cout<<endl;
          break;
    }
    
    
    cout<<endl<<"DO YOU WANT TO CONTINUE? "<<endl<<"YES(y)   NO(n)"<<endl<<"ans: ";
    cin>>yn;
    switch (yn)
    {
        case 'y': stop = false;
          break;
        case 'n': stop = true;
          return 0;
          break;
        default: cout<<"invalid input!!";
          break;
    }
  
    }

}

//----------------------OUTPUT-------------------------

/*
enter the real and imaginary numbers in the first complex number: 
4
5
enter the real and imaginary numbers in the second complex number: 
6
7
CHOOSE OPERATION : 
1.ADDITION   2.MULTIPLICATION
ans: 2
RESULT : -11 + 39i

DO YOU WANT TO CONTINUE? 
YES(y)   NO(n)
ans: y
enter the real and imaginary numbers in the first complex number: 
45
43
enter the real and imaginary numbers in the second complex number: 
65
53
CHOOSE OPERATION : 
1.ADDITION   2.MULTIPLICATION
ans: 1
RESULT : 110 + 96i

DO YOU WANT TO CONTINUE? 
YES(y)   NO(n)
ans: n

*/