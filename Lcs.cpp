#include<iostream>
using namespace std;

int LongestCommonSubsequence(char *s1,char *s2){

  if(s1[0]=='\0' || s2[0]=='\0')
    return 0;

  if(s1[0]==s2[0])
    return 1+LongestCommonSubsequence(s1+1,s2+1);

  else{
   int lcs1=LongestCommonSubsequence(s1,s2+1);
   int lcs2=LongestCommonSubsequence(s1+1,s2);
   return max(lcs1,lcs2);
  }
 }
int main(){

char string1[]="AGGTAB";
char string2[]="GXTXAYB";
int count=LongestCommonSubsequence(string1,string2);
cout<<count;
}
