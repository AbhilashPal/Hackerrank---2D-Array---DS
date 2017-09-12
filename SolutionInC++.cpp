#include<iostream>
using namespace std;
int main()
{
  //declaration
  int M[6][6];
  int m,i,j,mm;
  int n=6; //SPECIFIES SIZE OF MATRIX
  //input
  for (int i = 0; i < n; i++) {
    for(int j =0; j < n; j++){
      cin>>M[i][j];
    }
  }
  //Calculation
  int m=M[0][0]+M[0][1]+M[0][2]+M[1][1]+M[2][0]+M[2][1]+M[2][2];
  for (int i = 0; i < n-2; i++) {
    for(int j =0; j < n-2; j++){
      mm=M[i][j]+M[i][j+1]+M[i][j+2]+M[i+1][j+1]+M[i+2][j]+M[i+2][j+1]+M[i+2][j+2];
      if (mm>m){
        m=mm;
      }
    }
  }
  cout<<m;
  return 0;
}
