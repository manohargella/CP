// J. Multiples
// time limit per test1 second
// memory limit per test256 megabytes
// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// Input
// Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

// Output
// Print the "Multiples" or "No Multiples" corresponding to the read numbers.

// Examples
// InputCopy
// 9 3
// OutputCopy
// Multiples
// InputCopy
// 6 24
// OutputCopy
// Multiples
// InputCopy
// 12 5
// OutputCopy
// No Multiples
// Note
// ***A is said to be Multiple of B if B is divisible by A.

// First Example :

// 9 is divisible by 3 , So the answer is: Multiples.

// Second Example :

// 6 is not divisible by 24 but

// 24 is divisible by 6 , So the answer is: Multiples.

// Third Example :

// 12 is not divisible by 5 and 5 is not divisible by 12.

// So the answer is: No Multiples.


// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J


#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if((a%b == 0) || (b%a == 0))
        cout << "Multiples";
    else
        cout << "No Multiples";
    return 0;
}