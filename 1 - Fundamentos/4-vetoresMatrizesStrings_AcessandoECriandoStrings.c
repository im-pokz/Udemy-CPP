// forma 1

#include <stdio.h>
#include <string.h>

   void main() {

   char palavra[10];

   printf("Digite uma palavra);

   setbuf(stdin, 0);

   fgets(palavra, 255, stdin);

   palavra[strlen(palavra)-1] = '\0';

   printf("%s", palavra);

   system("pause");

// forma 2 (c++)

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
   
    string palavra;
	
	cout << "Digite uma palavra";
	
	cin >> palavra;
	
	cout << palavra;