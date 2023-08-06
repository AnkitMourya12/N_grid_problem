
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Ngrid(int i,int j,int m,int n)
{
    if(i==n-1 &&  j==m-1)
       
       { return 1;
       }
    else if(i==n || j==n)
     {
      return 0;
       
    }

int w1=Ngrid(i+1,j,n,m);

int w2=Ngrid(i,j+1,n,m);

return w1+w2;
} 
int main()
{
    int m=3;
    int n=3;
    cout<<"total ways:"<<Ngrid(0,0,n,m);
    return 0;
}