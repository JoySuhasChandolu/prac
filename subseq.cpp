#include <bits/stdc++.h>

using namespace std;

void printsub(string ip,string op,int index){
	
	if(index == ip.size()){
		cout<<op<<" ";
		return;
	}
	

//	op.push_back(ip[index]);
	printsub(ip,op,index+1);	
	
	op += ip[index];

	printsub(ip,op,index+1);
}

int main(){
	
	string ip = "joysuhas";
	
	string op = "";		

	printsub(ip,op,0);

}
