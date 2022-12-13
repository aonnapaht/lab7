#include<iostream>
using namespace std;
int adiff(int a,int b){
   int d,c;
   c = a-b;
   if(c>=0){
       d=c;
   }
   else{
       d=-c;
   }
   if(d%360==0){
       return 0;
   }
   else if(a<90 and b>180){
       return 360-d;
   }
   else if(d>360){
       return d%360;
   }
   else{
       return d;
   }
}
int main(){
cout << adiff(180,270) << "\n";
cout << adiff(210,45) << "\n";
cout << adiff(0,360) << "\n";
cout << adiff(10,350) << "\n";
cout << adiff(95,260) << "\n";
cout << adiff(90,-90) << "\n";
cout << adiff(1000,280) << "\n";
cout << adiff(60,244) << "\n";
}