#include<iostream>
#include<stdlib.h>
using namespace std;

class matrix
{
    int a[100][100],b[100][100],i,j,k;

    public :

        void check(int r1,int c1,int r2,int c2)
        {
            if(c1!=r2)
             {
                 cout<<"Matrix cannot be multiplied";
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

    void multiply(int r1,int c1,int r2,int c2)
    {
        int c=0;
        cout<<endl<<endl<<"The resultant matrix is:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                   c=c + a[i][k] * b[k][j];
                }
                cout<<c<<" ";
                c=0;
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
    m.multiply(r1,c1,r2,c2);
}
