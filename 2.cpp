// https://projecteuler.net/problem=2

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int j = 1, k = 2, sum = 0, even_sum = 0;
	while(j < 4000000){ // 4,000,000
		if(j % 2 == 0){
			even_sum += j;
		}
		sum = j + k;
		j = k;
		k = sum;
	}
	cout << even_sum << endl;
	return 0;
}