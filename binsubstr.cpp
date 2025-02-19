#include <bits/stdc++.h>

using namespace std;

int answer(string str){
	
	int ones = 0;
	int zeroes = 0;	

	int count = 0;

	for(int i=0;i<str.size();i++){
		
		if(str[i] == '1'){
			ones++;
		}	
		else if(str[i] == '0'){
			zeroes++;
		}	
		
		if(ones == zeroes){
			count++;
			ones = 0;
			zeroes = 0;
		}
	}

	return count;
}

int main(){
	
	string str = "0111100010";
	
	cout << answer(str)<<endl;
}
