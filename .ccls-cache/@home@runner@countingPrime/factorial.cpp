#include <iostream>
using namespace std;


void facotorialOf(int &n){
  int prod=1;
for(int i=2; i<=n;i++){
prod=prod*i;

}
cout<<prod;
}
int main() {
int n=5;
facotorialOf(n);

  return 0;
}