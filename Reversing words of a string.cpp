#include<bits/stdc++.h>
using namespace std;

void print_word(int x, int y)
{
    string s;
    for (int i=x; i<y; i++)
        cout<<s[i];
}
int main() 
{
    int t;string s;
    cin>>t;
    while (t--){
        cin>>s;
        int n = s.length(), temp;
        temp = n;
        for (int i = n-1; i>=0; i--){
            if (s[i] == '.'){
                print_word(i+1, temp);
                cout<<'.';
                temp = i;
            }
            if (i == 0)
                print_word(i, temp);
        }
        cout<<endl;
        
    }
        
	
}

