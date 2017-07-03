// https://projecteuler.net/problem=10

#include <iostream>
#include <cmath>

using namespace std;

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
	long long sum = 0;
	for(int i = 1; i < 2000000; i++){
		if(isprime(i)){
			sum += i;
		}
	}
	cout << sum << endl;
}