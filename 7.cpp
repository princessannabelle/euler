// https://projecteuler.net/problem=7

#include <iostream>
#include <cmath>

using namespace

int isprime(int num){
	if(num <= 1){
		return false;
	} else if(num == 2 || num == 3) {
		return true;
	} else if(num % 2 == 0) {
		return false;
	}
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0) return false; 
	}
	return true;
}

int	main(int argc, char const *argv[]){
	int current = 0, num = 0;
	while(current != 10001){
		num++;
		if(isprime(num)) current++;
	}
	cout << num << endl;
	return 0;
}