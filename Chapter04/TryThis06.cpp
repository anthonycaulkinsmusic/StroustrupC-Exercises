// Anthony Caulkins 8/10/22

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Try This 01

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Write a program that “bleeps” out words that you don’t like; 
//that is, you read in words using cin and print them again on cout. 
//If a word is among a few you have defined, you write out BLEEP instead of that word. 
//Start with one “disliked word” such as string disliked = “Broccoli”; 
//When that works, add a few more.”

// program that bleeps out words I don't like

int main ()
{
   vector <string> words;
   vector <string> disliked = {"woke", "problematic", "capitalist", "Woke", "Problematic", "Capitalist"};

   cout << "Enter a series of words, followed by 'CTL + D': \n";

   for(string input; cin>>input;)
       words.push_back(input);

   cout << '\n' << "What you entered was: " << '\n';

   for(int i = 0; i<words.size(); ++i)
   {
       for(int d = 0; d<disliked.size(); ++d)
       if(words[i] == disliked[d])
           words[i] = "BLEEP";
       cout << words[i] << " ";
   }

   cout << '\n';
}
