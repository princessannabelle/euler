// https://projecteuler.net/problem=6

#include <iostream>

using namespace std;

int	main(int argc, char const *argv[]){
	int sumsq, t = 0;
	for(int i = 1; i < 101; i++){
		sumsq += (i * i);
		t += i;
	}
	cout << ((t * t) - sumsq) << endl;
	return 0;
}