/*Link: https://omegaup.com/arena/problem/A-contar-lapices#problems*/
#include <stdio.h>

int main(){
	int N, K, lapices = 0;
	scanf("%d %d", &N, &K);

	for(int i = 0; i < N; i++){
		int numLapiz;
		scanf("%d", &numLapiz);
		if(numLapiz == K)
			lapices++;
	}

	printf("%d", lapices);
	return 0;
}