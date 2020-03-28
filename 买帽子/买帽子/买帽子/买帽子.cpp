链接：https://www.nowcoder.com/questionTerminal/f3aaf8fedcea43c6b12a11710068726b
来源：牛客网

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N;
	while (cin >> N){
		vector<int> vec;
		while (N--){
			int a_i;
			cin >> a_i;
			vec.push_back(a_i);
		}
		sort(vec.begin(), vec.end());
		int result = vec[0];
		int count = 0;
		vector<int> vec_1;
		vec_1.push_back(result);
		for (int i = 1; i<vec.size(); ++i){
			if (vec[i] != result){ // 判去重
				vec_1.push_back(vec[i]);
				result = vec[i];
			}
		}
		if (vec_1.size() < 3){  // 没有第三便宜的帽子输出 -1
			cout << -1 << endl;
		}
		else {
			cout << vec_1[2] << endl;
		}
	}
	return 0;
}