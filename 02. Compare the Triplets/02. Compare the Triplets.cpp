// 02. Compare the Triplets.cpp 
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
int main() {
    int Array[2] = { 0,0 };
    for(int i=0;i<1;i++)
        Array[i]+=1;
    cout << Array[0];
}
*/



void Points_Array(int a[3], int b[3]) {  // -- If we are not returning nay value we have to use "VOID", if returning any interger value use "INT"
    int Points[2] = { 0,0 };
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            Points[0] += 1;
        else if (a[i] < b[i])
            Points[1] += 1;
    }
    int result(2);
    result[0] = Points[0];
    result[1] = Points[1];
    return result;

}

int main() {
    int A[3] = { 7,9,6 };
    int B[3] = { 4,6,8 };
    Points_Array(A, B);
    return 0;
}


//LEARNED FROM THIS CODE
/*

*/