#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
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

string text;
text = GetString();
char keyLengthOfText[strlen(text)];

for ( int i = 0, j = 0; i < strlen(text); i++)
{
if (((text[i] >= 65) && (text[i] <= 90))
|| ((text[i] >= 97) && (text[i] <= 122)))
{
keyLengthOfText[i] = keyword[j % strlen(keyword)];
j++;
}
}


for (int i = 0; i < strlen(text); i++)
{
if ((text[i] >= 65) && (text[i] <= 90))
{
text[i] = 65 + (text[i] - 65 + toupper(keyLengthOfText[i]) - 65)%26;
}

else if ((text[i] >= 97) && (text[i] <= 122))
{
text[i] = 97 + (text[i] - 97 + tolower(keyLengthOfText[i]) - 97)%26;
}
}
printf("%s\n", text);
return 0;
}