#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i<n; i++)
			cin >> v[i];
		int mod4 = 0, mod2 = 0;
		for (int i = 0; i<n; i++){
			if (v[i] % 4 == 0){
				mod4++;
			}
			else if (v[i] % 2 == 0){
				mod2++;
			}
		}
		if (mod4 >= (n - mod4 - mod2)){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}