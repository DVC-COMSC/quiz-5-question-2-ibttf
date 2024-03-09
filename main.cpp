#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   for (int i = 0; i <= N; i++){
      int temp=1;
      for (int j=1; j<=i; j++){
         temp = temp*N;
      }
      cout << temp << endl;

   }
   /* Complete your code */
  
}
