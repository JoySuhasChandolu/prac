#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string str,int st,int e){
        
        while(st<e){
            if(str[st] != str[e]){
                return false;
            }
            st++;
            e--;
        }
        
        return true;     
}
  
int longestPalindrome(string s) {
        // code here
        int st=0;
        int e=s.size()-1;
        
        int length = 0;
        
        while(st<e){
      
	    bool yes1 = ispalindrome(s,st,e);
            
            if(yes1){
                length = e - st + 1;
                //string ans;
            	return length;
		}
            
            bool yes2 = ispalindrome(s,st+1,e);
            
            if(yes2){
                length = e - st + 1;
                return length;
            }
            
            bool yes3 = ispalindrome(s,st,e-1);
            
            if(yes3){
                length = e - st + 1;
                return length;
            }
            
            st++;
            e--;
      }

	return 0;
}

string naive_approach(string s){
	
    // cout<<"gello\n";
	int st = 0;
	int en = 0;
	int length =-999999999;

	for(int i=0;i<s.size();i++){
		for(int j=1;j<s.size();j++){
			bool yes = ispalindrome(s,i,j);
			
			if(yes && length < (j-i+1)){
				length = max(length,j-i+1);	
				st = i;
				en = j;
			}	
		}
	}

    // cout<<"length"<<length<<endl;
    // cout<<"start"<<st<<endl;
    // cout<<"end"<<en<<endl;

    string ans;

	for(int k=st;k<=en;k++){
		ans.push_back(s[k]);
	}
	
	cout<<endl;
	
	return ans;
}

int main(){
	
	string str = "for65geeksskeeg56for";

	cout<<naive_approach(str)<<endl;
}
