// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         stack<char> st;
//         int space = n-1;
//         int star = i;
//         while (1)
//         {
//             if(star>0){
//                 st.push('*');
//                 star--;
//             }
//             if(space>0){
//                 st.push(' ');
//                 space--;
//             }
//             if(star==0&&space==0)
//                 break;
//         }
//         char tmp;
//         int m=st.size();
//         for(int j=0; j<m; j++){
//             tmp=st.top();
//             cout << tmp;
//             st.pop();
//         }
//         cout << "\n";
//     }
    
// }

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(int argc, char* argv[])
{
	int n;
 
	cin >> n;
 
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		
		for (int j = 1; j < i; ++j) {
			cout << "* ";
		}
		cout << "*\n";
	}
 
	return 0;
}