#include<iostream>
#include<string.h>
using namespace std;
int main() {
   cout<<"Matnni katta harflarda kiriting:\n";
   char msg[100];
   cin.getline(msg,100); 
   int i, j, length,choice,key;
   cout << "Kalitni kiriting: ";
   cin >> key; 
   length = strlen(msg);
   cout<<"Shifrlash uchun 1 ni, Deshifrlash uchun 2 ni bosing: ";
   cin>>choice;
   if (choice==1)
   {
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
         }
         
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Shifrlangan matn: " << msg;
   }
   else if (choice == 2) { 
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Deshifrlangan matn: " << msg;
   }
}
