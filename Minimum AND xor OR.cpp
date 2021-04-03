#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#define MAX 1000
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, temp; cin >> n;
        vector <int> arr;
        for(int i=0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        int min_value = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-1; i++){
            int value = (arr[i]&arr[i+1])^(arr[i]|arr[i+1]);
            min_value = min(min_value, value);
        }
        cout << min_value << endl;
    }
    return 0;
}
