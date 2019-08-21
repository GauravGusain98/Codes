#include<iostream>
#include<stdlib.h>
using namespace std;

class matrix
{
    int a[100][100],b[100][100],i,j;

    public :

        void check(int r1,int c1,int r2,int c2)
        {
            if(r1!=r2 && c1!=c2)
             {
                 cout<<"Matrix cannot be added";
                 exit(0);
             }
        }

    void input(int r1,int c1,int r2,int c2)
    {
        cout<<"Enter elements in first matrix: \n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter elements in second matrix: \n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
    }

    void add(int r1,int c1,int r2,int c2)
    {
        cout<<endl<<endl<<"The resultant matrix is:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<a[i][j] + b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix m;
    int r1,r2,c1,c2;
    cout<<"Enter rows and coloumns of the two matrix: \n";
    cin>>r1>>c1>>r2>>c2;
    m.check(r1,c1,r2,c2);
    m.input(r1,c1,r2,c2);
    m.add(r1,c1,r2,c2);
}
