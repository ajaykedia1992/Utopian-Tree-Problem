#include <iostream>
using namespace std;

int height(int n) {
    int a=1;int count=1;
    while(count<=n)
        {
        if(count%2==0)
            {
            a=a+1;
        }
        else
            a=a*2;
        
    count++;
    }
    
    
    return a;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
