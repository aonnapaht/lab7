#include<iostream>

using namespace std;

int i = 0, P[5000], k, result;

int main(){
	
	cout << "Please input k: ";
	cin >> k;
	if(k>0){
	while(i < 5000){
		P[i] = 2*i+1;
		if(P[i]%k==0){
		    result-=P[i];
		}
		else{
		    result+=P[i];
		}
		i++;
	}
	    cout << "Result = " << result;
}
else
{
    cout << "Invalid input!!!";
}

    
    return 0;
}