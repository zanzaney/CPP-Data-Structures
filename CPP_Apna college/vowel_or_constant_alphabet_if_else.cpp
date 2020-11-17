#include<iostream>
using namespace std;

int main(){

    char x;
    cin>>x;
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        cout<<x<<" is a vowel."<<endl;    }
        else
        {

            cout<<x<<" is a consonant."<<endl;
        }
    return 0;
}
//better code
/*#include <iostream>
using namespace std;

int main()
{
char c;
int isLowercaseVowel, isUppercaseVowel;

cout << "Enter an alphabet: ";
cin >> c;

isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (isLowercaseVowel || isUppercaseVowel)
cout << c << " is a vowel.";
else
cout << c << " is a consonant.";

return 0;
}*/
