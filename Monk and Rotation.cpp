#include<iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k, p;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
         k%=n;
         for(int i=0;i<n;i++)
         {
              p = arr[(i+(n-k))%n];
              cout<<p<<" ";
         } cout<<"\n";
    }
    return 0;
}
