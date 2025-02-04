#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
void findColSum(const double *i,double *j,int N,int M){
    for(int c = 0; c < M; c++){
    j[c] =0;
       for(int d = 0; d < N; d++){
        j[c] += *(i+(d*M)+c);
       }
   }
}
void showData(double *A,int N,int M){
	cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << *(A+i);
        if((i+1)%M==0) cout << endl;
        else cout << " ";
    }
}
int main(){
    double a[6][1] = {1,2,3,4,5,6}; 
double b[1]; 
findColSum(a[0],b,6,1);
showData(b,1,1);
}