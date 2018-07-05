#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Q2 - a)
/*
int main(){
	float s = 1.0;
	int a = 4;

	while(a<= 10){
		s = a * 1.2;
		printf("%1.2f ", s);
	}
	return 0;
}
*/

//Q2 - b
/*
int main(){

	int c = 1;

	while(c <= 5){
		printf("%d", c);
		c++;
	}
	*/
	/*

	for(int c= 1; c <= 5 ; c++){
		printf("%d", c);
	}

	return 0;
}
*/
//Q3 - c

/*
int main(){
	int i = 9;
	for(i--; i--; i--)
		printf("%d", i);

	return 0;
}
*/

/*
int absolute(int i);

int main (){
	int i=9;
	int s= absolute(i);
	printf("%d ",s);
}

int absolute(int i){
	if (i=0){return 0;}
	if (i>0){return i;}
	else return -i;
}
*/

/* //Q4 - c
	int a[] = {1,2,3,4};
	int *k;
	for(k = a; k < (a + (sizeof(a) / sizeof(int))); k++){
		printf("%d", *k);
		(*k)++;
	}
*
*/

/*
#define infiniteloop while(1)

float *findMax(float A[], int N){
		int I;
		float *MaxValue = &(A[0]);

		for(I = 1; I < N; I++){
			if(A[I] > *MaxValue) MaxValue = &(A[I]);
		}

		return MaxValue;

	}

int main(){
	float A[] = {1.00, 2.00, 3.00};
	//float A[] = {3,00, 2.00, 1.00};
	printf("%f", *(findMax(A, 5)));
	return 0;
	}
*/

//q5 -A
/*
int A;

void local_function(int B_in){
	static int B1;
	float *B2;

	B1 += B_in;
	printf("%d %d\n", B_in, B1);

	B2 = (float*) malloc (4* sizeof(float));

	free(B2);
}

int main(){
	int C = 1;

	A = C++;

	local_function(A);
	local_function(C++);

	return 0;
}
*/

//Q6

int globvar = 6;

int main(void){
	int var = 88;
	pid_t pid;

	printf("before fork \n");

	if ((pid = fork())<0){
		printf("fork error \n");
	}

	//child
	else if (pid == 0){
		globvar++;
		var++;
	}

	//parent
	else{
		sleep(1);
	}

	printf("pid = %ld, glob = %d, var = %d\n",
 					(long)getpid(), globvar, var);
}
