#include<bits/stdc++.h>
using namespace std;
class ARRAY 
{
    int len;
    int *arr;

    public:
    ARRAY(int l)
    {
        len=l;
        arr=new int[len];
    }
    ARRAY(int *a, int l)
    {
        len=l;
        arr=new int[len];
        for(int i=0;i<len;i++)
        {
            arr[i]=a[i];
        }
    }
    ~ARRAY()
    {
        delete[] arr;
    }

    void deepcopy(const ARRAY& a)
    {
        len=a.len;
        arr=new int[len];
        for(int i=0;i<len;i++)
        {
            arr[i]=a.arr[i];
        }
    }
    ARRAY(const ARRAY& a)
    {
        deepcopy(a);
    }
    ARRAY& operator=(const ARRAY& a)
    {
        if(this==&a)
        {
            return *this;
        }
        else
        {
            delete[] arr;
            deepcopy(a);
            return *this;
        }
    }
    int& operator[](int i)
    {
        if(i<0 || i>=len)
        {
            cout<<"Index out of bound";
            exit(0);
        }
        else{
            return arr[i];
        }
    }
   bool operator==(const ARRAY& a) const
   {
       if(len!=a.len)
       {
           return false;
       }
       else{
           for(int i=0;i<len;i++)
           {
               if(arr[i]!=a.arr[i])
               {
                   return false;
               }
           }
           return true;
       }
   }
   bool operator!=(const ARRAY &x)
   {
    return !(*this==x);
   }
   friend istream& operator>>(istream& in,ARRAY& a);
   friend ostream& operator<<(ostream& out,ARRAY& a);
};
istream& operator>>(istream& in,ARRAY& a)
    {
        
        for(int i=0;i<a.len;i++)
        {
            in>>a.arr[i];
        }
        return in;
    }
ostream& operator<<(ostream& out,ARRAY& a)
    {
        for(int i=0;i<a.len;i++)
        {
            out<<a.arr[i]<<" ";
        }
        out<<endl;
        return out;
    }
    int main()
    {
        int a[]={1,2,3,4,5};
        int b[]={1,2,3,4,5};
        ARRAY A(a,5);
        ARRAY B(b,5);
        ARRAY C=A;
        cout<<C;
        ARRAY* x=&A;
        delete x;
        cout<<C;
        /* cout<<A[3]<<endl;
        cout<<A;
        cout<<B;
        if(A==B)
        {
            cout<<"Equal";
        }
        else{
            cout<<"Not Equal";
        } */
        return 0;
    }

