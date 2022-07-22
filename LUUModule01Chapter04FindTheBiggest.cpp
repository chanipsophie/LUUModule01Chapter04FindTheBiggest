// LUUModule01Chapter04FindTheBiggest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float GetBiggest(float theArray[], int size);

int main()
{
    constexpr int ksize{ 5 };
    float theArray[ksize] = {12, 20, 35, 40, 45};
    auto biggestNumber{ GetBiggest(theArray, ksize) };
    cout << "The biggest number is: " << biggestNumber << endl;  
}

float GetBiggest(float theArray[], int size)
{
    auto biggest{ theArray[0] };

    for (int i = 1; i < size; i++)
    {
        if (theArray[i] > biggest)
        {
            biggest = theArray[i];
        }    
    }
    return biggest;
}
