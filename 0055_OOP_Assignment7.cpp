#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
string name;
int popu;
int n;
cout<<"how many states data to be entered: ";
cin>>n;
map<string,int>states;                  //map
map<string,int>::iterator iter;
for(int i=0;i<n;i++)
{
    cout<<"Enter state name: ";
    cin>>name;
    cout<<"Enter population: ";
    cin>>popu;
    cout<<endl;
    states.insert(pair<string,int>(name,popu));
}

cout<<"Enter state name to be checked: ";
cin>>name;

if(states.find(name)!=states.end())
{
    popu=states[name];
    cout<<"population is: "<<popu<<endl;
}
else
{
    cout<<"state not present";
}

cout<<"Other states info"<<endl;
for(iter=states.begin();iter!=states.end();iter++)
cout<<iter->first<<" "<<iter->second<<endl;
return 0;

}