#include <bits/stdc++.h>

using namespace std;

string RLE(string str){
	
	int count = 0;	
	
	string ans;
	
	int flag = 0;
	
	count =0;
	
	char temp = str[0];	
	
	for(int i=0;i<str.size();)
	{
		char temp = str[i];
		int j = i;
	//	count++;

		while(str[j] == temp){
			count++;
			j++;
			//flag = 1;
			i++;
		}

//		i = j;

		if(str[j] != temp){
			ans.push_back(count + '0');
			ans.push_back(temp);
			count= 0;
			//flag = 0;	
		}
		
	}
	return ans;

}


string count_and_say(int n,string &str){

	if(n == 1)
		return str + "1";
	else
		return str + RLE(count_and_say(n-1,str));
}	


int main(){

	string str = "";
	
	int n;		

	cin >> n;
	
	cout<<count_and_say(n,str)<<endl;

	
}	
