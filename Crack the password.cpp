/* Crack the password
Arnab was given a task to a crack password(maximum length of password is 
4
). Given a length 
l
, Arnab wants to try all password of length 
l
.

Help him to find all possible passwords of length 
l
 using recursion.

Digits of the password are from 
1
 to 
9
.

Input format
First line contains integer 
t
, denoting number of testcases. 
For each testcase :
There is one integer 
l
.

Output format
For each testcase print all the possible password seperated by new line.

Constraints
1
<=
t
<=
4

1
<=
l
<=
4
*/
#include <bits/stdc++.h>
  using namespace std;
  void solve(int n, int curr,int p){
    
    if(n==curr){
      cout<<p<<endl;
       return;
    }
    int unit_digit=p%10;
    
	for (int i = 1; i < 10; i++) {
	 
	   
	 
      p=p*10+i;
      solve(n,curr+1,p);
      p=p/10;
    
	}
    
  }
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     
    for(int i=1;i<10;i++){
      solve(n,1,i);
     }
   }
    
    return 0;
  }
