#include<bits/stdc++.h>
using namespace std;

int main()
{	
	// break takes it outside to the last for loop
	// break at 8 does not even print 9 as it's outside the loop

	for (int i=0; i<10; i++){
		if (i==8){
			break;
		}
		cout << i << endl;
	}

	// continue takes it to the last loop
	// skips 8 and prints 9 as it returns back to the current for loop
	
	for (int i=0; i<10; i++){
		if (i==8){
			continue;
		}
		cout << i << endl;
	}

}
