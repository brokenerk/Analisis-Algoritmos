/*Link: https://omegaup.com/arena/problem/Divisores#problems*/

/*Extrañamente, con C no es aceptado, solo con C++*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N;
	int primos[4] = {2, 3, 5, 7};
	while(cin >> N)
	{
		for(int i = 0; i < 4; i++)
			if(N % primos[i] == 0)
				cout << primos[i] << " ";
		
		cout << endl;
	}
	return 0;
}