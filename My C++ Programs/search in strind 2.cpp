#include<iostream>
using namespace std;
main()
{
char s;
string::size_type pos=string::npos;
for(string::size_type i=0; i<size(); ++i) {
  if(s[i] == key) {
     pos=i;
     break;
  }
}
if(pos != string::npos) {
  // key was found
} else {
  // not found
}
