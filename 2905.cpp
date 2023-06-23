// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool isPossible(unsigned int height,unsigned int length, vector<int> tree){
//     unsigned int sum=0;
//     for (int i = 0; i < tree.size(); i++)
//     {
//         if(tree[i]>=height){
//             sum+=tree[i]-height;
//         }
//         if(sum>=length){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     unsigned int n,length;
//     cin >> n >> length;

//     vector<int> tree;
//     int val;
//     for (int i = 0; i < n; i++)
//     {   
//         cin >> val;
//         tree.push_back(val);
//     }

//    unsigned int left = 0, right = 1000000000;
//    unsigned int height;

//    while (left<=right)
//    {
//        height=(left+right)/2;
//        if(isPossible(height,length,tree)){
//            left=height+1;
//        }
//        else{
//            right=height-1;
//        }
//    }
   
//    cout << height;
// }


#include <iostream>

using namespace std;
int N;
long long M;
long long trees[1000001];
bool isPossible(unsigned int height) {
	unsigned int taken = 0;
	for (int i = 0; i < N; i++) {
		if (trees[i] >= height)
			taken += (trees[i] - height);
		if (taken >= M) return true;
	}
	return false;
}
int solve() {
	unsigned int left = 0, right = 1000000000;
	unsigned int mid,ret;
	while (left <= right) {
		mid = (left + right) / 2;
		if (isPossible(mid)) {
			ret = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return ret;
}
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> trees[i];

	cout << solve() << endl;

}