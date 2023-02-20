#include <iostream>
using namespace std;

int main (){
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		if(i%5==0){
			continue;
	}
	else if(i==31)
	{
		cout <<"NOT FOUND";
		break;
	}
	cout << i << endl;
	}	

	return 0;
}

