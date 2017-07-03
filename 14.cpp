// https://projecteuler.net/problem=14

#include <iostream>

using namespace std;

int collatz(unsigned int num){
	int length = 0;
	while(num > 1){
		if(num % 2 == 0){
			num /= 2;
		} else {
			num = (3 * num) + 1;
		}
		length++;
	}
	return length + 1;
}

int main(int argc, char const *argv[]){
	int max = 0, max_i = 0;
	for(int i = 2; i < 1000000; i++){
		int t = collatz(i);
		if(t > max){
			max_i = i;
			max = t;
		}
	}
	cout << endl << max_i << ":" << max << endl;
	return 0;
}