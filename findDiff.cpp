/* Find all the paris that exist in a unsorted array with the given difference */
/* C++ code, used hashing */

#include<iostream>
#include<unordered_map>

using namespace std;

void findDiff(int arr[], int size, int diff) {
	int i;
	unordered_map<int, int> hash;
	for(i=0; i<size; i++) {
		 hash[arr[i]]=1;
	}
	for(i=0; i<size; i++) {
		int temp = arr[i] + diff;
		if(hash.count(temp)) {
			cout << "Diff pair found: " << arr[i] << " and " << temp <<endl;
		}
	}
	return;
}

int main()
{
    int arr[] = {2, 30, 40, 60, 1, 8, 100, 62, 120};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 60;
    findDiff(arr, size, n);
    return 0;
}
