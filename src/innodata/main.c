#include <stdio.h>
#include "hunspell.h"

int main()
{
  Hunhandle *dic;
  char *word_ok, *word_notok, **slist;
  int list_size, i;
 
  word_ok = "hejes";
  word_notok = "helyes";
 
  dic = Hunspell_create("hu_HU-1.5/hu_HU.aff", "hu_HU-1.5/hu_HU.dic");
 
  printf("%i\n", Hunspell_spell(dic, word_ok));
  printf("%i\n\n", Hunspell_spell(dic, word_notok));
  printf("%s\n\n", Hunspell_get_dic_encoding(dic));
 
  list_size = Hunspell_suggest(dic, &slist, "hejes");
  printf("%i\n", list_size);
  for (i = 0; i < list_size; i++)
  {
    printf("%s\n", slist[i]);
  }
 
  Hunspell_destroy(dic);
  return 0;
}