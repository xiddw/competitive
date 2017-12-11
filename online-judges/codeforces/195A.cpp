/*
 * Codeforces Round #123 (Div. 2)
 * 195 A. Let's Watch Football
 * URL: http://codeforces.com/contest/195/problem/A
 * 
 * Date: Jul/18/2017 15:43
 * Rafael Robledo.  
 */

#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
   int a, b, c, t = 1;

   scanf("%d %d %d", &a, &b, &c);

   int total_data = a*c;
   int download_capacity = c*b;
   do {
       int downloaded_data = (t * b);
       int remaining_data = total_data - downloaded_data;
      
       if (remaining_data <= download_capacity) break;
   } while(t++);

   printf("%d\n", t);

   return 0;
}