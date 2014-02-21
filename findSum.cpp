/* Find all the pairs that exist in a unsorted array with the given sum */
/* C++ code with hashing implemented */

#include <iostream>
#include <unordered_map>

using namespace std;

void findSum(int arr[], int size, int sum) {
	unordered_map<int, int> hash;
	int i;
//	for(i =0; i<size; i++) {
//		hash[arr[i]] = 1;
//	}
	for(i=0; i<size; i++) {
		int temp = sum - arr[i];
		if (hash.count(temp))
			cout << "Pair found " << arr[i] << " and " << temp << endl;
		hash[arr[i]]=1;
	}
	return;
}

int main()
{
    int A[] = {1, -8,4,12 ,8,45, 6, 10,12 ,24, 8, 8,4};
    int n = 16;
    int arr_size = 13;
 
    findSum(A, arr_size, n);
 
    return 0;
}
