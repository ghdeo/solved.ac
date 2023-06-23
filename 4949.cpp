// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     char ch;
//     stack<char> round,square;
//     bool flag = true;
    
//     while ((ch=getchar())!='.')
//     {
//         if(ch=='('){
//             round.push(ch);
//         }
//         else if(ch=='['){
//             square.push(ch);
//         }
//         else if(ch==')'&&!round.empty()){
//             round.pop();
//         }
//         else if(ch==']'&&!square.empty()){
//             square.pop();
//         }
//     }
    
//     if (flag&&round.empty()&&square.empty()){
//         cout << "yes\n";
//     }
//     else{
//         cout << "no\n";
//     }
    
// }

#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>

using namespace std;
string str;

int main()
{
	while (1)
	{
		getline(cin, str); 
		stack<char> a;
		if (str[0] == '.') break;

		for (int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == '(') a.push('(');
			if (str[i] == '[') a.push('[');
			if (str[i] == ']')
			{
				if (!a.empty() && a.top() == '[') a.pop();
				else { printf("no\n"); break; } 
			}

			if (str[i] == ')')
			{
				if (!a.empty() && a.top() == '(') a.pop();
				else { printf("no\n"); break; } 
			}

			if (a.empty() && i == str.length() - 2) printf("yes\n"); 
			else if (!a.empty() && i == str.length() - 2) printf("no\n");
		}

	}
}