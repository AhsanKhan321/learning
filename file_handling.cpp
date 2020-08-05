#include<iostream>
#include<fstream>
using namespace std;
int add(int n[])
{

    int m=0;
    for(int x=0; x<10; x++)
    { 
      m=m+n[x];
    }
    return m;
}
int mult(int f[])
{
 int p=1;
    for(int x=0; x<9; x++)
    { 
        
      p=p*f[x];
    }
    return p;   
}
int largest(int arr[]) 
{ 
    int i; 
    int max = arr[0]; 
    for (i = 1; i < 10; i++)
     {
        if (arr[i] > max) 
            max = arr[i]; 
    }
    return max; 
} 
int Min(int arr[]) 
{ 
    int i; 
    int min = arr[0]; 
    for (i = 1; i < 10; i++)
     {
        if (arr[i] < min) 
            min = arr[i]; 
    }
    return min; 
} 
int main()
{ 
    int A[10];
    int i=0, s=0, d=0;
    ifstream fin("AHSAN.txt");
    if (fin.is_open())
     {
        int number;
        while (fin >> number)
        { 
            cout << number << "\n";
            A[i]=number;
            i++;
         }
     }
    else
    {
        cout<<"error opening";
    }
    cout<<"SUM OF ARRAY = "<< add(A)<<endl;
    cout<<"Multiplication OF ARRAY = "<< mult(A)<<endl;
    cout<<"Largest No. OF ARRAY = "<< largest(A)<<endl;
    cout<<"Minimum No. OF ARRAY = "<< Min(A)<<endl;
    fin.close();
   return 0;
}
