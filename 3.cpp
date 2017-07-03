// https://projecteuler.net/problem=3

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <cmath>

using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[]){
	int128_t num = 600851475143;
	int i = 2;
	while(i <= sqrt(num)){
		while(num % i == 0 && num > i){
			num = num / i;
		}
		i += 1;
	}
	cout << num << endl;
	return 0;
}