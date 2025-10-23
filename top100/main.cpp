#include <iostream>
#include "./twoSum/twoSum.cpp"

using namespace std;

void twoSum_test() {
	//Solution solution;
	Solution_Hash solution;
	vector<int> numbers = { 2, 11, 15, 7};
	int traget = 9;

	vector<int> result = solution.twoSum(numbers, traget);
	cout << "[" << result[0] << ", " << result[1] << "]" << endl;
}

int main() {
	twoSum_test();

	return 0;
}
