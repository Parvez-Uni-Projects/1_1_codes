#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array_size;

    //cout << "Enter the size of the array ";
    cin >> array_size;

    int array[array_size];
    int sum = 0;

    //cout << "Enter the elements of the array";

    for (int i = 0; i < array_size; i++)
    {
        cin >> array[i];
        sum += array[i];
    }

    // for (int i = 0; i < array_size; i++)
    // {
    //     cout << array[i] << "\t";
    // }

    //cout <<" Total sum is " << sum << "\t";

    // cout << array_size ;

    // finding the minimum and maxium
    // int min = array[0]; // min = 10

    // for (int i = 0; i < array_size; i++)
    // {
    //      if (min < array[i] )
    //      {
    //          min = array[i];
    //      }
    // }

    // cout <<" Total maximum is " << min << "\t";

    int event_counter = 0 ;

    for (int i = 0; i < array_size; i++)
    {
        if (array[i]%2 == 0)
        {
            event_counter = event_counter + 1;
        }
         
    }

     //cout <<" Total even number  is " << event_counter << "\t";

      int odd_counter = 0 ;

    for (int i = 0; i < array_size; i++)
    {
        if (array[i]%2 == 1)
        {
            odd_counter = odd_counter + 1;
        }
         
    }

    // cout <<" Total even number  is " << odd_counter << "\t";



    return 0;
}