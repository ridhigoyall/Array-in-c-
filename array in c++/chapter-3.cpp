//getting the sum of values in an array
#include<iostream>
using namespace std;
int main()
{
    int myArray[6]={30,40,80,60,50,20};
    int sum=0;
    for (int i=0;i<6;i++)
    {
        sum+=myArray[i];
    }
    cout<<sum<<endl;
    return 0;
}