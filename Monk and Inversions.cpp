#include<iostream>
#define MAX 1000
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, arr[MAX][MAX]; cin >> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int p=i; p<n; p++){
                    for(int q=j; q<n; q++){
                        if(arr[i][j] > arr[p][q]){
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;

    }
    return 0;
}
