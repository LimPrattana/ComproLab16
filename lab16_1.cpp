#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void showData(double *,int,int);

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void findColSum(const double *,double *,int,int);

int main(){
	srand(time(0));
	const int N = 6, M = 8;
	double data[N][M] = {};
	double sum1[N] = {};
	double sum2[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,sum1,N,M);
	showData(sum1,N,1);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,sum2,N,M); 
	showData(sum2,1,M);
}
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
        *(B+i) = rand()%(N*M);
    }
}
void findRowSum(const double *i,double *j,int N,int M){
    double sum =0;
    int d=0;
   for(int c = 0; c < N*M; c++){
        sum += *(i+c);
        if((c+1)%M==0){
            *(j+d) = sum;
            d++;
            sum=0;  
        }    
    }
}
void findColSum(const double *i,double *j,int N,int M){
    for(int c = 0; c < M; c++){
    j[c] =0;
       for(int d = 0; d < N; d++){
        j[c] += *(i+(d*M)+c);
       }
   }
}