#include <iostream>
#include <cstring>
#include <stdio.h>
/*
Nick Peterson
9/29/2021
Palindrome
This program will read in a string from the user and print 
out if it's a palindrome or not.
Got base of code from https://stackoverflow.com/questions/53068354/reverse-a-string-using-cstrings-in-c
 */
using namespace std;
void reverseString(char arr[80]);
char reversedInput[80];


int main() {

  char input1[80];


  cout << "Please enter a string" << endl;
  cin.getline(input1, 80);
  cout << "You entered: "<< input1 << endl;

  char processedStr[80];
  int i = 0;
  int w = 0;
  for (i = 0; i < strlen(input1); i++) {
    processedStr[w] = tolower(input1[i]);
    if (isalpha(processedStr[w]) || isdigit(processedStr[w])) {
      w++;
    }
    processedStr[w] = '\0';
  }

  //cout << processedStr << endl;
  //char input2[strlen(input1)] = reverseString(input1);
  reverseString(processedStr);
  cout << "The reverse is "<< reversedInput << endl;

  //if (input1 == input2) {
  if (strcmp(processedStr, reversedInput) == 0) {
    cout << "This is a palindrome." << endl;
  }
  else {
    cout << "This is not a palindrome." << endl;
  }

  return 0;
}

void reverseString (char arr[]) {
  int i;
  int j = strlen(arr) - 1;
  char temp;

  for (i = 0; i < strlen(arr); i++, j--) {
    temp = arr[j];
    //        arr[j];
    reversedInput[i] = temp;
  }
  reversedInput[strlen(arr)] = '\0';

}
  
  

