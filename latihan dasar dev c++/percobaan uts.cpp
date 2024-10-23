#include<iostream>
#include<conio.h>
using namespace std;

main(){
string A="apakah mamat sudah makan?";
string B="apakah setelah makan mamat minum?";
string C="ohh, mamat tidak makan?";
string D="setelah minum mamat tidur";
string E="lansung main dia";
string jawab;
a:
cout <<A;
cin>>jawab;
 if(jawab=="ya"){
 	cout<<B;
 	cin>>jawab;
 if(jawab=="ya"){
 	cout<<D;
 }
 getch();
  system("cls");
 goto a;
 }

 if(jawab=="tidak"){
 	cout<<C;
 	cin>>jawab;
 if(jawab=="ya"){
 	cout<<E;
 }
 getch();
  system("cls");
 goto a;
}
}

