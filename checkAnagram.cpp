/* C++ code to find Anagrams using hashing */

#include <iostream>
#include <unordered_map>
#include <string>
#include <string.h>

using namespace std;
bool isAnagram( const char *s1,  const char *s2) {
	unordered_map<char,int> hash;
	if(strlen(s1) != strlen(s2))
		return false;
	for(int i=0; i<strlen(s1); i++) {
		if(!hash.count(s1[i]))
			hash[s1[i]] = 1;
		else
			hash[s1[i]]++;
	}
	for(int i=0; i<strlen(s2); i++) {
		if(!hash.count(s2[i]))
			return false;
		if(--hash[s2[i]]<0)
			return false;
	}
	return true;
}


int main() {
	const char *s1 = "arijit";
	const char *s2 = "tijira";

	if(isAnagram(s1, s2))
		cout << "The two strings are anagrams" << endl;
	else
		cout << "The two strings are not anagrams" << endl;
	return 1;
}
