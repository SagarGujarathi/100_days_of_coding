#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i =0;i<a;i++){
	    int temp;
	    cin>>temp;
	    if(temp > 98){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
