#include <iostream>

using namespace std;

// Returns value of Binomial Coefficient C(n, k)
long long binomialCoefficient(long long n, long long k){
    long long res = 1;
    if ( k > n - k ) k = n - k;
    for (long long i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
    } 
    return res;
}

int main(int argc, char const *argv[]){
	cout << binomialCoefficient(40, 20) << endl;
	return 0;
}