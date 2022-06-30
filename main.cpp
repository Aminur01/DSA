// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

/*
4
   1
  121
 12321
1234321
*/

int main()
{
    
    int n;
    cin>>n;
    
    int row=1;

    while(row<=n)
    {
        //space print karlo
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        //no print karlo
        int pos=row;
        int num1=1;
        while(pos){
            cout<<num1++;
            pos--;
            
        }
        //no print karlo
        int num2=row-1;
        int pos2=row-1;
        while(pos2){
            cout<<num2--;
            pos2--;
        }
        
        cout<<endl;
        row++;
    }
   
}