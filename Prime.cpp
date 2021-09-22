#include<iostream>
using namespace std;

typedef unsigned long long ull;

void set_arr(bool arr[], ull n)
{
    for(ull i=0;i<n;++i)
    {
        arr[i]=true;
    }
}

void print_arr(bool arr[], ull n)
{
     for(ull i=2;i<n;++i)
    {
        if(arr[i]==1)
        {
        cout<<i<<" ";
        }
    }
}

void set_prime(bool arr[], ull n)
{
    for(ull i=2;i<n;++i)
    {
        if(arr[i]==true)
        {
            for(ull j=2;i*j<n;++j)
            {
                if(arr[i*j]==true)
                {
                    arr[i*j]=false;
                }
            }
        }
    }
}

int main()
{
    ull n;
    cin>>n;
    bool arr[n];
    set_arr(arr,n);
    set_prime(arr,n);
    print_arr(arr,n);
    return 0;
}

//niceworking!
