#include<iostream>
using namespace std;

//to check if prime or not
bool isPrime(int &n){
for(int i=2; i*i<=n; i++){
  if(n%i==0)
  return false;
}
return true;
}

//for counting total primes
int totalPrime(int &n){
  int count=0;
  cout<<"Here are the prime numbers less than or equal to "<<n<<endl;
  for(int i=2; i<=n; i++){
  if(isPrime(i)){
  cout<<i<<endl;
  count++;}}
  cout<<"Total : ";
  return count;
}

int main(){

int n;
cout<<"Enter the number: "<<endl;
cin>>n;

cout<<totalPrime(n);





  return 0;
}