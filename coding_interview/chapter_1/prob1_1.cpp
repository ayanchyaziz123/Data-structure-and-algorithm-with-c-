#include<bits/stdc++.h>
using namespace std;

//question: is Unique
// implement an algorithm  to determine if a string has all unique characters . 
// what if you can not use additional data structure

bool solution_1_pro(string st){
	int checker = 0;
	for(int i = 0; i < st.size(); i++){
		int val = st[i] - 'a';
		if(checker & (1 << val) > 0) return false;
		checker |= (1 << val);
	}
	return true;
}

bool solution_1(string st){
	vector<int> arr(256);
	for(int i = 0; i < st.size(); i++)
		if(arr[st[i] - 'a'] > 1) return false;
	    else arr[st[i]]++;
	return true;    
}

bool solution_n(string st){
	map<int, int> mp;
	for(int i = 0; i < st.size(); i++)
		mp[st[i]]++;
	for(auto val: mp)
		if(val.second > 1)
			return false;
	return true;
}

bool solution_n_log_n(string st){
	sort(st.begin(), st.end());
	for(int i = 0; i < st.size() - 1; i++)
		if(st[i] == st[i+1]) return false;
	return true;
}

int main(){
    string st;
    cin >> st;
    cout << solution_1_pro(st) << endl;
	return 0;
}