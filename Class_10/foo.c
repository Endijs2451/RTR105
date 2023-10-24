#include "foo.h"
    
#include <stdio.h>

void foo(int id, char *name)
{

    fprintf(stdout, "id atrašanās vieta atmiņā - %p\n", &id);
    fprintf(stdout, "id vērtība - %d\n - ", id);

    fprintf(stdout, "name atrašanās vieta atmiņā - %p\n", name);
    fprintf(stdout, "name vērtība - %s\n", name);

    fprintf(stdout, "foo(%d, \"%s\");\n", id, name);
    
   // name = "mans teksts pēc funkcijas"; - NESTRĀDĀS
 }
