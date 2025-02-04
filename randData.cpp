#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void showData(double *A,int N,int M){
	cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << *(A+i);
        if((i+1)%M==0) cout << endl;
        else cout << " ";
    }
}
void randData(double *B,int N,int M){
    for(int i = 0; i < N*M; i++){
        *(B+i) = rand()%M*N;
    }
}
int main(){
    srand(0);
double a[2][3] = {1,2,3,4,5,6};; 
randData(a[0],2,3);
showData(a[0],2,3);
}