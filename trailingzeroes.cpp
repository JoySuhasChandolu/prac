#include<bits/stdc++.h>

int main(){
	int n;

	std::cin>>n;
	
	int num_digits = n / 5;
	
	int ans = 0;

	int base = 5;		
	
	for(int i=1;base <= n;i++){			
		base = pow(5,i);

		ans = ans + n/base;	
	}

	std::cout<<ans<<std::endl;
}	
