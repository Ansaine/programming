//Here, we choose matrix indices from 1

#include<bits/stdc++.h>

using namespace std;

class Diagonal
{
    private:

    int *a;
    int n;

    public: 

    Diagonal()             //if no parameter is given then the size will be 2
    {
        a= new int[2];          //array of type int, size 2
    }



    Diagonal(int n)             //paramiterised constructor
    {
        this->n= n;             //differentiates private member n from parameter n
        a= new int[n];          //array of type int, size n
    }

    int get(int i, int j);
    void set(int i,int j, int x);
    void display();

    ~Diagonal()                //destructor for Diagonal, always goes along with constructor
    {
        delete []a;
    }

};

int main()
{   
    Diagonal d(4);

    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,12);

    d.display();

    return 0;



}

void Diagonal:: set(int i,int j, int x )         //definitions outside class using scope resolution operator
{
    if(i==j)
    {
        a[i-1]= x;
    }

}

int Diagonal:: get(int i, int j)
{
    if(i==j)
        return a[i-1];
    else
        return 0;
}

void Diagonal:: display()
{
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            if( i == j)
                cout<<a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<"\n";
    }
}