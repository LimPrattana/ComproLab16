#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
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
void showData(double *A,int N,int M){
	cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << *(A+i);
        if((i+1)%M==0) cout << endl;
        else cout << " ";
    }
}
int main(){
    double a[2][3] = {1,2,3,4,5,6}; 
    double b[2]; 
    findRowSum(a[0],b,2,3);
    showData(b,2,1);
}