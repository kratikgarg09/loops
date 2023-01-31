#include<iostream> 

using namespace std; 

int fib(int n)
{
    int previous = 0;
    int postvalue = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = previous + postvalue;
        
        previous = postvalue;
        postvalue=ans;
    }
    return ans;
}

int main(){ 
    int n ;
    cout <<" Enter the value of n "<< endl;\
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a <<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
    
    
    return 0;
}