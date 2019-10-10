#include <algorithm>
#include <iterator>
#include <iostream>
#include "mergeSort.h"

using namespace std;

void merge(int* A,int*  B,int* C,int A_Num,int B_Num,int &C_Num){
	int ia=0,ib=0,ic=0;
	while(ia<A_Num&&ib<B_Num){
		if(A[ia]<B[ib]){
			C[ic++]=A[ia++];
		}else{
			C[ic++]=B[ib++];
		}
	}
	while(ia<A_Num)
		C[ic++]=A[ia++];
	while(ib<B_Num)
		C[ic++]=B[ib++];
}

void mergeSort(){
	int A[4]={1,3,7,9};
	int B[2]={4,10};
	int C[6];
	int C_Length;
	merge(A,B,C,4,2,C_Length);
	copy(C,C+6,ostream_iterator<int>(cout," "));

}