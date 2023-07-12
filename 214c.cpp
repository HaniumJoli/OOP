#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int sum=0;
    while(!fin.eof())
    {
        string s;
        int n;
        fin>>s>>n;
        sum+=n;
    }
    fout<<"total: "<<sum<<endl;
    fin.close();
    fout.close();
    return 0;
}