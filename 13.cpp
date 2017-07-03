// https://projecteuler.net/problem=13

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <fstream>
#include <vector>

using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[]){
	vector<int1024_t> numbers;
	int1024_t num;
	fstream infile("13.txt");
	while(infile >> num){
		numbers.push_back(num);
	}
	int1024_t sum = 0;
	for(int1024_t &i : numbers){
		sum += i;
	}
	cout << sum << endl;
	return 0;
}