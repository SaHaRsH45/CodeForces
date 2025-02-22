#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int multiplier = 1;
        vector<int> ans;

        while (n > 0) {  
            int digit = (n%10)*multiplier; 
            if (digit != 0) {
                ans.push_back(digit); 
            }
            n=n/10;
           multiplier*=10;
        }

        cout << ans.size() << endl;
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
