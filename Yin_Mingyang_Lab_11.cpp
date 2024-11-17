// Mingyang Michelle Yin
// Lab 11
// Nov. 14, 2024

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main () 
{
		// PART 1 //

	const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE]; 

	for(int i = 0; i < 25; i++) // For the first 25 numbers of the array
    {
        alpha[i] = i * i; //Square the number
    }
 
    for(int i = 25; i < ARRAY_SIZE; i++) // For the last 25 numbers of the array
    {
        alpha[i] = i * 3; // Triple the number
    }

		// PART 2 //

	for(int i = 0; i < ARRAY_SIZE; i++) // For all array numbers 
	{
		cout << alpha[i] << " "; // Sorts the numbers into sections of 10
		if((i+1) % 10 == 0)
			cout << endl;
	}

		// PART 3 //
		
	double timeArray[ARRAY_SIZE];
	
	srand(time(0)); // Randomizing the numbers selected

	cout << endl;
	for(int i = 0; i < ARRAY_SIZE; i++) // For all the numbers in the array
	{
		timeArray[i] = (rand() % 100) + 1; // Makes sure the random value is under or equal to 100
	}
	
	for(int i = 0; i < 25; i++) // For the first 25 numbers of the array
    {
        timeArray[i] = timeArray[i] * timeArray[i]; // Square the number
    }
 
    for(int i = 25; i < ARRAY_SIZE; i++) //For the last 25 numbers of the array
    {
        timeArray[i] = timeArray[i] * 3; // Triple the number
    }

	for(int i =0; i < ARRAY_SIZE; i++) // For all array numbers
	{
		cout << timeArray[i] << " "; // Sorts them into lists of 10
		if((i+1) % 10 == 0)
			cout << endl;
	}
	
		// PART 4 //
	
	double sum = 0; //Sum variable
    for(int i = 0; i < ARRAY_SIZE; i++) // For all array values
    {
        sum += timeArray[i]; // Add the values
    }

	double average = sum/ARRAY_SIZE; // Finds what the average is 
    cout << endl << "The average of the array is: " << average << endl; // Prints the average for the user

		// PART 5 //

    int hundred = 0;
    for(int i = 0; i< ARRAY_SIZE; i++) // For all array values
    {
        if(timeArray[i] == 100) // For any number which has a value equal to 100
            hundred++; // Add 1 to the hundred variable
    }
    cout << "The number of values equal to 100 in the array is: " << hundred; // Prints amount of values equal to 100 for the user

	return 0;
}

/*

		// OUTPUT // 
		
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147

2304 2025 841 400 441 6241 7569 5041 484 1681
3481 5184 5625 6889 169 6400 1600 8649 5929 49
4096 1024 6241 3249 10000 90 228 135 135 72
297 48 39 102 285 264 192 126 84 144
183 291 216 51 258 174 63 30 186 24

The average of the array is: 1986.58
The number of values equal to 100 in the array is: 0

		// QUESTION //
	When the prompt asks : 
"Run your program again, but this time change the code so that the array is filled with random numbers between 1 and 100."
	does it mean the starting values or the ending values needs to be between 1 and 100?

*/