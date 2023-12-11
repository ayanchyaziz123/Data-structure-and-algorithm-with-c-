#include<bits/stdc++.h>
using namespace std;

// is valid permutation


bool checkPermutation(string st1, string st2){
	if(st1.size() != st2.size()) return false;
	vector<int> memo(128);
	for(int i = 0; i < st1.size(); i++){
		memo[st1[i] - 'a']++;
	}
	for(int i = 0; i < st2.size; i++){
		memo[st2[i]-'a']--;
		if(memo[st2[i]-'a'] < 0)
			return false;
	}
	return true;

}

bool checkPermutation_n(string st1, string st2){
	if(st1.size() != st2.size()) return false;
	vector<int> mem1(128);
	vector<int> mem2(128);
	for(int i = 0; i < st1.size(); i++)
		mem1[st1[i] - 'a'], mem2[st2[i] - 'a'];
	for(int i = 0; i < st1.size(); i++)
	    if(mem1[st1[i]-'a'] != mem2[st2[i]-'a'])
	        return false; 
	return true;    
}


bool checkPermutation_nloogn(string st1, string st2){
	if(st1.size() != st2.size()) return false;
	sort(st1.begin(), st1.end());
	sort(st2.begin(), st2.end());
	for(int i = 0; i < st1.size(); i++)
		if(st1[i] != st2[i])
			return false;
	return true;	
}

int main(){
	string st1, st2;
	cin >> st1 >> st2;
	cout << checkPermutation_nloogn(st1, st2);
	return 0;
}