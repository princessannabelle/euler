// https://projecteuler.net/problem=11

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int	main(int argc, char const *argv[]){
	// Read in file to a vector.
	vector<vector<int>> values;
	vector<int> temp(20, -1);
	ifstream infile("11.txt");
	bool finished = false;
	while(!finished){
		for(int i = 0; !finished && i < 20; i++){
			finished = !(infile >> temp[i]);
		}
		values.push_back(temp);
	}
	infile.close();
	// Horizontally and vertically get products.
	int max = 0;
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 17; j++){
			int h = values[i][j] * values[i][j+1] * values[i][j+2] * values[i][j+3];
			int v = values[j][i] * values[j+1][i] * values[j+2][i] * values[j+3][i];
			if(h > max){
				max = h;
			} else if(v > max){
				max = v;
			}
		}
	}
	// Diagonally get products.
	for(int i = 0; i < 17; i++){
		for(int j = 0; j < 17; j++){
			int d = values[i][j] * values[i+1][j+1] * values[i+2][j+2] * values[i+3][j+3];
			if(d > max){
				max = d;
			}
		}
	}
	for(int i = 3; i < 20; i++){
		for(int j = 0; j < 17; j++){
			int d = values[i][j] * values[i-1][j+1] * values[i-2][j+2] * values[i-3][j+3];
			if(d > max){
				max = d;
			}
		}
	}
	cout << max << endl;
	return 0;
}