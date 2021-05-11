#include<iostream>
using namespace std;

int main()
{

    int a = 10;

    int* aptr;

    aptr = &a;

    cout << &a << endl;
    cout << aptr << endl;
    cout << a << endl;

    *aptr = 5; // update value of 'a'


    aptr++;

    cout << a << endl;
    cout << aptr << endl;


    // Pointers and Arrays

    int arr[] = {10,20,30,40};
    int* ptr = arr;

    for (int i = 0; i < 4; i++)
    {
        cout << *(arr+i) << endl;
        //arr++; // Illegal
         
    }
    

    cout << *arr <<endl;

}