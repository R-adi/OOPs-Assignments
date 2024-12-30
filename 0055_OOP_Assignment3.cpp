#include <iostream>
#include <string>
using namespace std;

class publication
{
    int price;
    string title;
    public:
      void getdata()
      {
        cout<<"enter title of the publication: ";
        cin>>title;
        cout<<"enter price of the publication: ";
        cin>>price;
    
      }

      void displaydata()
      {
        cout<<endl<<"TITLE : "<<title<<endl<<"PRICE : "<<price<<" RS";
      }
     
};

    
class book : public publication
{                                                     //public of publication inherited
    int page;
    public:
      void getdata()
      {
          cout<<"--------------BOOK--------------"<<endl;
          publication :: getdata();
          cout<<"enter total number of pages in the book: ";
          cin>>page;
          
      }
      
      void displaydata()
      {
          cout<<endl<<"     ---BOOK---     ";
          publication :: displaydata();
          cout<<endl<<"PAGE COUNT OF THE BOOK : "<<page<<endl;
      }
};

class tape : public publication
{
  float t;
  public:
    void getdata()
    {
        cout<<"---------------TAPE--------------"<<endl;

        publication :: getdata();
        cout<<"enter the duration of tape in minutes: ";
        cin>>t;
    }
    
    void displaydata()
    {
        cout<<endl<<"     ---TAPE---     ";
        publication :: displaydata();
        cout<<endl<<"DURATION : "<<t<<" mins"<<endl;
    }
};

int main()
{
    book b1;
    tape t1;
    b1.getdata();
    t1.getdata();
    b1.displaydata();
    t1.displaydata();
    return 0;
}