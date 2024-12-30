#include <iostream>
using namespace std;

int n;
template <class T>
void selection_sort(T arr[10])
{

    for(int i = 0;i < n-1;i++)
    {
        for(int j=i+1;j < n;j++)
        {
            if(arr[j] <arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }  
        }
    }
    cout<<"sorted list: "<<endl;
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[10];
    float arr2[10];
    cout<<"enter the number of elements you want to input in the first array: ";
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cout<<"enter elements of the first array (integer): ";
        cin>>arr1[i];
    }

    selection_sort(arr1);

    cout<<endl;

    cout<<"enter the number of elements you want to input in the second array: ";
    cin>>n;

    for(int i = 0;i < n;i++)
    {
        cout<<"enter elements of the first array (float): ";
        cin>>arr2[i];
    }

    selection_sort(arr2);

}