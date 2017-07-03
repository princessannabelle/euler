// https://projecteuler.net/problem=5

#include <iostream>

using namespace std;

int divisible(int num){
	for(int i = 1; i < 21; i++){
		if(num % i != 0){
			return 0;
		}
	}
	return 1;
}

int	main(int argc, char const *argv[]){
	int i = 1;
	while(1){
		if(divisible(i)){
			break;
		}
		i++;
	}
	cout << i << endl;
	return 0;
}