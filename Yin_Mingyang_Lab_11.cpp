// Mingyang Michelle Yin
// Lab 11
// Nov. 14, 2024

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void swap (int& a, int& b) {
	int temp = a;
	a = b; 
	b = temp;
}
int main() { 
	int x = 5, y = 10;
    cout << x << ", " <<  y << endl;
    cout swap (x, y); //Now x 10 and y is 5

    return 0; 
}
