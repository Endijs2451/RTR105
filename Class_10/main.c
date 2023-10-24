#include "foo.h"

int main(void)
{
    int id_main = 20;
    printf("id_main atrašananās vieta atmiņā %p\n", &id_main);
    printf("id_main vērtība pirms foo unkcijas izpildes - %d\n", id_main);

    char *name_main = "mans teksts";
    printf("name_main atrašānas vieta atmiņā -  %p\n", name_main);
    printf("name_main pirms foo funkcijas - %s\n ", name_main);

    foo(id_main, name_main);

    printf("\n\nid_main vertība pēc foo funkcijas - %d\n", id_main);
    printf("name_main vērtība pēc foo funkcijas - %s\n", name_main);
    return 0;
}
