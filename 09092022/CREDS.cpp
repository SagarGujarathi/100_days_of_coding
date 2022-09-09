#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i =0;i<a;i++){
	    int temp = 0;
	    int temp1 = 0;
	    cin>>temp;
	    temp1 = temp*4;
	    cin>>temp;
	    temp1 +=temp*2;
	    cin>>temp;
	    temp1 +=temp*0;
	    cout<<temp1<<endl;
	}
	return 0;
}
