// https://projecteuler.net/problem=9

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	for(int a = 1; a < 1000; a++){
		for(int b = a+1; b < (1000-a); b++){
			float c = (sqrt((a * a) + (b * b)));
			if (c <= LONG_MIN || c >= LONG_MAX || c == (long)c){
				int c = sqrt((a * a) + (b * b));
				if(c > b && (a + b + c) == 1000){
					cout << a * b * c << endl;
				}
			}
		}
	}
	return 0;
}