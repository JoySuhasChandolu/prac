#include <bits/stdc++.h>

using namespace std;

int flag = 0;

void findallindices(string str1,string str2,vector<int> &vec){

	for(int i=0;i<str1.size();i++){
		if(str2[i] == str1[0]){
			vec.push_back(i);
		} 
	}
}

void isrot(string str1,string str2,int i){
	
	int sz = str1.size();

	for(int j=0;j<str1.size();j++){
		if(str1[j] != str2[i]){
			return;			
		}
		i = (i+1)%sz;
	}
	
	flag = 1;	

	return;
}

int main(){
	
	string str1 = "aab";
	
	string str2 = "aba";
	
	vector<int> vec;
	
	findallindices(str1,str2,vec);

	for(auto i:vec){
		isrot(str1,str2,i);
	}

	if(flag == 1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}	
		
	return 0;

}
