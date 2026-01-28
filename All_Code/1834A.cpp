/**
 * Author : Akshay
 * Platform : CodeForces
 * Problem : 1834 A
 */
#include<vector>
 #include<iostream>
 using namespace std;
 int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int cm1 = 0;
        int c1 = 0;
        int op = 0;
        vector<int> arr(n);
        for(int i = 0; i < n;i++){
            cin >> arr[i];
            if(arr[i] == -1){
                cm1++;
            }else{
                c1++;
            }
        }

       while(c1 < cm1 || cm1 % 2 == 1){
        op++;
        c1++;
        cm1--;
       }
       cout << op << endl;
    }
    
 }