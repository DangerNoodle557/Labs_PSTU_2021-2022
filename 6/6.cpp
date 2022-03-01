#include <iostream>
#include <string>

using namespace std;

bool ch(string word)
{
 int len = word.length();
 for(int i = 0; i < len/2; ++i)
 {
  if(word[i] != word[len-i-1])
  {
   return false;
  }
 }
 return true;
}

int main()
{
 setlocale(LC_ALL, "Russian"); 
 string str;
 cout << "введите слово: ";
 cin >> str;
 if(ch(str))
 {
  cout << "слово является палиндромом ";
 }
 else
 {
  cout << "слово не является палиндромом";
 }
 return 0;
}
