// it's required to write a funtion to check if a sting is a palindroma (the string and it's reverse is the same ) 
#include <iostream>
#include <deque>
#include <string>
using namespace std ;
bool is_palindrome (const string s) {
deque<char> deq_front ;
deque<char> deq_back  ;  

 for (size_t i=0 ; i<s.length() ; i++) {
 int ast = (int) s[i] ;
 cout << ast << endl ;
if ( 97 <=ast && ast <= 122 )
 { cout<<"true" <<endl ;
 deq_front.push_front(s[i]);
 deq_back.push_back(s[i]); }  
 else { cout<<"fale" <<endl ; }
 }
for (size_t i=0 ; i<deq_back.size() ; i++)
 {     
cout << deq_front[i] << " front" <<endl ; 
cout << deq_back [i]<<" back" <<endl ; 
 }
 

 
if (deq_front==deq_back) {return true;} 
else
{ return false ;}
    
    }

int main()
{
	
    string a = "a santa at nasa" ; 
cout << is_palindrome(a) << endl ; 
char st = ' ' ;
cout << (int) st ; 
return 0; 
}
