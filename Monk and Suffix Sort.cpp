#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, k;
    cin >> s;
    cin >> k;
    n = s.size();
    vector <string> str;
    for(int i=0; i<n; i++){
        string temp;
        for(int j=i; j<n; j++){
            temp += s[j];
        }
        str.push_back(temp);
    }

    sort(str.begin(), str.end());

    cout << str[k-1] << endl;
    return 0;
}
