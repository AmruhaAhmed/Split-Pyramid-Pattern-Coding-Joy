#include<iostream>
using namespace std;
int main()
{
    int s=7;//number of spaces to be printed
    int i,j;//loop counters
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=s;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<" ";
        for(j=1;j<=i;j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
        s--;
    }
    return 0;
   
}