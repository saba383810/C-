#include<iostream>

using namespace std;
void ShowData(int x[],int n);
void Qsort(int x[],int Max,int min);
void Swap(int x[],int i,int j);

void Qsort(int x[],int Max,int min){
	int i,j,a;
	int pivot;
	i = min;
	j = Max;
	a = min + Max;
	a = a/2 ;
	pivot = x[a];
	//無限ループ
	while(1){

	while(x[i]<pivot) i++;
	while(pivot<x[j]) j--;

	if(i>=j) break;

	Swap(x,i,j);
	i++;
	j--;

	}
	cout << "ソート中" << endl;
	ShowData(x,10);
if(min<i-1) Qsort(x,min,i-1);
if(j+1<Max) Qsort(x,j+1,Max);
}

//スワップ処理
void Swap(int x[],int i,int j){

	int tmp;
	tmp  = x[i];
	x[i] = x[j];
	x[j] = tmp;

}

//配列の中身をnの数まで表示する。
void ShowData(int x[],int n){

	for(int i=0;i<n;i++) cout << x[i] << " ";
	cout << endl;
}

int main (){

	int x [] = {2,4,7,1,0,3,2,8,9,6};
	int n = 10;
	cout << "ソート前" << endl;
	ShowData(x,n);
	Qsort(x,0,n-1);
	cout << "ソート後" << endl;
	ShowData(x,n);
}
