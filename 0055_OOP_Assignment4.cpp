#include <iostream>
#include <fstream>
using namespace std;
//file to be opened (test.txt) has nothing written in it 

int main()
{
    int array1[10] = {1,2,3,4,5,6};
    int array2[10];


    ofstream obj1;
    obj1.open("test.txt",ios::binary | ios::trunc);
    cout<<"opening the file...."<<endl;


    if(!obj1)
    {
        cerr<<"Failed to open the file!!"<<endl;
        exit(1);
    }


    cout<<"Writing elements in the file....."<<endl;
    obj1.write((char*)&array1,sizeof(array1));


    if(!obj1)
    {
        cerr<<"Failed to write the contents in the file!!!"<<endl;
        exit(1);
    }
    obj1.close();

    ifstream obj2;
    obj2.open("test.txt",ios::binary);
    cout<<"opening the file....."<<endl;


    if (!obj2)
    {
        cerr<<"Filed to open the file!!"<<endl;
        exit(1);
    }

    cout<<"reading the file....."<<endl;
    obj2.read((char*)&array2,sizeof(array2));


    if (!obj2)
    {
        cerr<<"Filed to read the file!!"<<endl;
        exit(1);
    }

    for(int i = 0;i < 10;i++)
    {
        cout<<array2<<" ";
    }

}