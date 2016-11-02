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
{
string key = argv[1];
  //перевірка чи працює коректно
if (argc !=2)
      {
       printf("Please, try again");
       return 1;
       }
  
  //перевірка чи немає символів замість літер
for (int i = 0; i < strlen(key); i++)
   {
   if (!isalpha(key[i]))
   {
   printf("Keyword has unaccetable symbols. Please, try again.");
   return 1;
   }
 }
  //введення  тексту, який необхідно зашифрувати
 string TextToChange;
 TextToChange = GetString();
  
  char keyLengthOfText[strlen(TextToChange)];

for ( int i = 0, j = 0; i < strlen(TextToChange); i++)
    {
            //перевірка , чи серед введених символів є щось окрім літер
      if (((TextToChange[i] >= CAPITAL_LETTER_A) && (TextToChange[i] <= END_OF_BIG_LETTERS))
      || ((TextToChange[i] >= SMALL_LETTER_A) && (TextToChange[i] <= END_OF_SMALL_LETTERS)))
    {
  //заповнення "стрічки" ключовим  словом
keyLengthOfText[i] = key[j % strlen(key)];
j++;
}
}

        //Велику  літеру змінюємо на велику
 for (int i = 0; i < strlen(TextToChange); i++)
         {
         if ((TextToChange[i] >= CAPITAL_LETTER_A) && (TextToChange[i] <= END_OF_BIG_LETTERS))
            {
              TextToChange[i] = CAPITAL_LETTER_A + (TextToChange[i] - CAPITAL_LETTER_A + toupper(keyLengthOfText[i]) - CAPITAL_LETTER_A)%LETTERS_NUMBER;
            }
       //якщо літера  мала , змінюємо на малу
         else if ((TextToChange[i] >= SMALL_LETTER_A) && (TextToChange[i] <= END_OF_SMALL_LETTERS))
            {
            TextToChange[i] = SMALL_LETTER_A + (TextToChange[i] - SMALL_LETTER_A + tolower(keyLengthOfText[i]) - SMALL_LETTER_A)%LETTERS_NUMBER;
            }
      }
  //виведення результату роботи програми
 printf("%s\n", TextToChange);
return 0;
}
