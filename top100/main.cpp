#include <iostream>
#include "twoSum.cpp"

using namespace std;

// twoSum test
int main() {
	//Solution solution;
	Solution_Hash solution;
	vector<int> numbers = { 2, 11, 15, 7};
	int traget = 9;

	vector<int> result = solution.twoSum(numbers, traget);
	cout << "[" << result[0] << ", " << result[1] << "]" << endl;
}
