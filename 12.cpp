// https://projecteuler.net/problem=12

#include <iostream>
#include <cmath>

using namespace std;

// Returns the n'th triangle number.
int triangle(int n){
	return ((n + 1) * n) / 2;
}

int divisors(int triangle){
	int max;
	if(triangle % 2 == 0){
		max = triangle / 2;
	} else {
		max = (triangle - 1) / 2;
	}
	int divisors = 0;
	for(int i = 1; i <= sqrt(max); i++){
		if(triangle % i == 0){
			divisors++;
		}
	}
	return divisors * 2;
}

int	main(int argc, char const *argv[]){
	int i = 1;
	while(i){
		if(divisors(triangle(i)) > 500){
			cout << triangle(i) << endl;
			break;
		} else {
			i++;
		}
	}
	return 0;
}