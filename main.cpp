#include <iostream>

using namespace std;

int findPrimeSum(int n){
   int arr[n+1] = {0};
   for (int i = 2; i < n; i++) {
      for (int j = i * i; j < n; j+=i) {
         arr[j - 1] = 1;
      }
   }
   int sumVal;
   for (int i = 2; i < n; i++) {
      if (arr[i - 1] == 0)
         sumVal += i;
   }
   return sumVal;
}
int main(){
   int n ;
   cout<<"Enter a number: ";
   cin>>n;
   cout<<"The sum of prime number between 1 and "<<n<<" is "<<findPrimeSum(n);
   return 0;
}

