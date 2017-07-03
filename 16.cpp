// https://projecteuler.net/problem=16

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[]){
	int1024_t n = 2;
	n = (n << 999);	
	int1024_t sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	cout << sum << endl;
	return 0;
}