// 01. Adding_Array_Numbers.cpp 

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
int main() {

    string ar_count_temp;
    getline(cin, ar_count_temp);
    int number = stoi(str);
}
*/


// ---------------------------------------------------------------------------------------------------------------------------------
// CONVERTING STRING TO NUMBER USING stoi FUNCTION

/*
int main() {
    string str1 = "123";
    int x = stoi(str1);
    cout << x+4;
}
// ---------------------------------------------------------------------------------------------------------------------------------



/*
int main()
{
    int size;
    cout << "How many numbers do you want to input ?";
    cin >> size;
    int total = 0;
    int min = 0;


 //----- Instead, you should use dynamic memory allocation to create an array of the desired size.
 //----- Secondly, it's a good practice to include the necessary header files for dynamic memory allocation.
 //----- Here's an updated version of your code:
    int* Arr = new int[size];


    for (int i = 0; i < size; i++) {
        cout << "enter the number ? ";
        cin >> Arr[i];

    }

    for (int i = 0; i < size; i++) {
        total += Arr[i];
        cout << Arr[i] << " | ";
    }



    cout << "Total is : " << total << endl;
    delete[] Arr; // Don't forget to release the allocated memory
    return 0;


}


*/


//LEARNED FROM THIS CODE
/*
There are a couple of issues in your code. 
Firstly, C++ does not allow the size of an array to be determined at runtime like this:

int size;
cin >> size;
int Arr[size]; // This is not valid in C++


Instead, you should use dynamic memory allocation to create an array of the desired size. 
Secondly, it's a good practice to include the necessary header files for dynamic memory allocation.
Here's an updated version of your code:
*/

//THE CORRECT CODE IS
/*
------------------------------------------------------------------------------------

int main() {
    int size;
    cout << "How many numbers do you want to input? ";
    cin >> size;

    int* Arr = new int[size]; // Dynamic memory allocation

    for (int i = 0; i < size; i++) {
        cout << "Enter the number: ";
        cin >> Arr[i];
    }

    cout << "Entered numbers: ";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }

    delete[] Arr; // Don't forget to release the allocated memory
    return 0;
}

-----------------------------------------------------------------------------------
This code uses dynamic memory allocation to create an integer array of the desired size.
Make sure to release the allocated memory using delete[] at the end of the program to avoid memory leaks.
*/