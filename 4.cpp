// https://projecteuler.net/problem=4

#include <iostream>

using namespace std;

// Reverse a number.
int reverse(int x) {
    int result = 0;
    while(x != 0){
        result = result * 10 + x % 10;
        x = x / 10;
    }
    return result;
}
int main(int argc, char const *argv[]){
	int largest = 0;
	for(int i = 100; i < 1000; i++){
		for(int j = 100; j < 1000; j++){
			if((i * j) == reverse(i * j) && (i * j) > largest){
				largest = i * j;
			}
		}
	}
	cout << largest << endl;
	return 0;
}