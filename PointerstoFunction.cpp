#include<iostream>
using namespace std;

void swapValues(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointers(int *a, int *b)
{
    int temp2 = *a;
    *a = *b;
    *b = temp2;
}



int main()
{
    int a = 5;
    int b = 4;
    swapValues(a,b);
    cout << a <<" "<< b <<endl;

    int *aptr = &a;
    int *bptr = &b;
    swapPointers(aptr,bptr);
    cout << a << " " <<b<<endl;



}