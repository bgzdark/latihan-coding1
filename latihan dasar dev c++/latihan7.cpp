#include<iostream>
using namespace std;

main(){
string A="apakah mamat sudah makan?";
string B="apakah setelah makan mamat minum?";
string C="mamat tidak makan";
string D="setelah minum mamat tidur";
string E="mamat langsung main";
string jawab;
cout <<A;
cin>>jawab;
 if(jawab=="ya"){
 	cout<<B;
 	cin>>jawab;
 if(jawab=="ya"){
 	cout<<D;
 }else{
 	cout<<E;
 }
}else{
 	cout<<C;
 }
}

