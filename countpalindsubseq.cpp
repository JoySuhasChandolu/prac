#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string &str){
	
	int st = 0;
	int en = str.size()-1;

	while(st < en){
		if(str[st] != str[en]){
			return false;
		}
		st++;
		en--;
	}

	return true;

}

void solution(string ip,string op,int index,int &cnt,vector<string> &arr_str){
	
	if(index == ip.size()){	
		
		if(ispalindrome(op) && op.size() > 0){

			arr_str.push_back(op);

			cnt++;		

		}
		return;
	}
	
	solution(ip,op,index+1,cnt,arr_str);

	op += ip[index];
	
	solution(ip,op,index+1,cnt,arr_str);

}

int main(){
	
	int cnt = 0;

	vector<string> arr_str;

	string ip = b";
	
	string op = "";	

	solution(ip,op,0,cnt,arr_str);

	cout<<cnt<<endl;
		
	for(auto str:arr_str){
		cout<<str<<endl;
	}
}
