#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 long long temp=arr[0],sum=0;
        for (int i=0;i<n;i++){
          //way 1
            // temp= sum;
            sum=sum+arr[i];
            // sum=max(sum,(long long)arr[i]);
            // temp=max(temp,sum);
          //way 2 
            if(temp<sum){
                temp=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return temp;
}