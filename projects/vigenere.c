#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

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
if (((TextToChange[i] >= 65) && (TextToChange[i] <= 90))
|| ((TextToChange[i] >= 97) && (TextToChange[i] <= 122)))
{
keyLengthOfText[i] = keyword[j % strlen(keyword)];
j++;
}
}


for (int i = 0; i < strlen(TextToChange); i++)
{
if ((TextToChange[i] >= 65) && (TextToChange[i] <= 90))
{
TextToChange[i] = 65 + (TextToChange[i] - 65 + toupper(keyLengthOfText[i]) - 65)%26;
}

else if ((TextToChange[i] >= 97) && (TextToChange[i] <= 122))
{
TextToChange[i] = 97 + (TextToChange[i] - 97 + tolower(keyLengthOfText[i]) - 97)%26;
}
}
printf("%s\n", TextToChange);
return 0;
}
