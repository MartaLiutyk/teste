#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

#define SMALL_LETTER_A 97
#define CAPITAL_LETTER_A 65
#define LETTERS_NUMBER 26
#define END_OF_BIG_LETTERS 90
#define END_OF_SMALL_LETTERS 122


int main(int argc, string argv[])
  //перевірка 
{
string key = argv[1];
if (argc !=2)
{
printf("Try again");
return 1;
}

for (int i = 0; i < strlen(key); i++)
{
if (!isalpha(key[i]))
{
printf("Try again");
return 1;
}
}

string TextToChange;
TextToChange = GetString();
char keyLengthOfText[strlen(TextToChange)];

for ( int i = 0, j = 0; i < strlen(TextToChange); i++)
{
if (((TextToChange[i] >= CAPITAL_LETTER_A) && (TextToChange[i] <= END_OF_BIG_LETTERS))
|| ((TextToChange[i] >= SMALL_LETTER_A) && (TextToChange[i] <= END_OF_SMALL_LETTERS)))
{
keyLengthOfText[i] = keyword[j % strlen(keyword)];
j++;
}
}


for (int i = 0; i < strlen(TextToChange); i++)
{
if ((TextToChange[i] >= CAPITAL_LETTER_A) && (TextToChange[i] <= END_OF_BIG_LETTERS))
{
TextToChange[i] = CAPITAL_LETTER_A + (TextToChange[i] - CAPITAL_LETTER_A + toupper(keyLengthOfText[i]) - CAPITAL_LETTER_A)%LETTERS_NUMBER;
}

else if ((TextToChange[i] >= SMALL_LETTER_A) && (TextToChange[i] <= END_OF_SMALL_LETTERS))
{
TextToChange[i] = SMALL_LETTER_A + (TextToChange[i] - SMALL_LETTER_A + tolower(keyLengthOfText[i]) - SMALL_LETTER_A)%LETTERS_NUMBER;
}
}
printf("%s\n", TextToChange);
return 0;
}
