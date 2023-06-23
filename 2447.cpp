// #include <iostream>
// using namespace std;
// void top(){
//     cout << "***";
// }
// void mid(){
//     cout << "* *";
// }
// void bottom(){
//     cout << "***";
// }
// void newLine(){
//     cout << "\n";
// }
// void blank(){
//     cout << "   ";
// }

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n/3; i++){
//         if(i%2==0){
//             for(int j=0; j<n/3; j++)

//         }
//         else{
//             for(int a=0; a<n/3; a++)
//                 top();
//             newLine();
//             for(int b=0; b<n/3; b++)
//                 mid();
//             newLine();
//             for(int c=0; c<n/3; c++)
//                 bottom();
//             newLine();
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// void makeStar(int n, int line){
//     if(line==1){
//         for(int i=0; i<n/3; i++)
//             for(int j=0; j<3; j++)
//                 cout << "***";
//         cout << "\n";
//     }  
//     if(line==2){
//         for(int i=0; i<n/3; i++)
//             for(int j=0; j<3; j++)
//                 cout << "* *";
//         cout << "\n";
//     }
//     if(line==3){
//         for(int i=0; i<n/3; i++)
//             for(int j=0; j<3; j++)
//                 cout << "***";
//         cout << "\n";
//     }
        

// }
// int main(){
//     int n;
//     cin >> n;
    
//     makeStar(n);
// }

#include <iostream>
using namespace std;
void makeStar(int x, int y, int num){
    if((x/num)%3==1&&(y/num)%3==1)
        cout << " ";
    else{
        if(num/3==0)
            cout << "*";
        else
            makeStar(x,y,num/3);
    }
        
}
int main(){
    int n;
    cin >> n;
    
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++)
            makeStar(x,y,n);
        cout << "\n";
    }
}