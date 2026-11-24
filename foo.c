#define _GNU_SOURCE 1
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

// POSIX:
// https://pubs.opengroup.org/onlinepubs/9799919799/functions/endservent.html

int
main ()
{
  int result = 0;
  {
    struct servent *se = getservbyport (htons (80), "tcp");
    if (!(se != NULL
          && se->s_port == htons (80)
          && strcmp (se->s_proto, "tcp") == 0
          && ((strcmp (se->s_name, "http") == 0
               && se->s_aliases[0] != NULL
                  && (strcmp (se->s_aliases[0], "www") == 0
                      || (se->s_aliases[1] != NULL
                          && (strcmp (se->s_aliases[1], "www") == 0
                              || (se->s_aliases[2] != NULL
                                  && (strcmp (se->s_aliases[2], "www") == 0
                                      || (se->s_aliases[3] != NULL
                                          && strcmp (se->s_aliases[3], "www") == 0)))))))
              || (strcmp (se->s_name, "www") == 0
                  && se->s_aliases[0] != NULL
                     && (strcmp (se->s_aliases[0], "http") == 0
                         || (se->s_aliases[1] != NULL
                             && (strcmp (se->s_aliases[1], "http") == 0
                                 || (se->s_aliases[2] != NULL
                                     && (strcmp (se->s_aliases[2], "http") == 0
                                         || (se->s_aliases[3] != NULL
                                             && strcmp (se->s_aliases[3], "http") == 0))))))))))
      result |= 1;
  }
  {
    struct servent *se = getservbyname ("http", "tcp");
    if (!(se != NULL
          && se->s_port == htons (80)
          && strcmp (se->s_proto, "tcp") == 0
          && ((strcmp (se->s_name, "http") == 0
               && se->s_aliases[0] != NULL
                  && (strcmp (se->s_aliases[0], "www") == 0
                      || (se->s_aliases[1] != NULL
                          && (strcmp (se->s_aliases[1], "www") == 0
                              || (se->s_aliases[2] != NULL
                                  && (strcmp (se->s_aliases[2], "www") == 0
                                      || (se->s_aliases[3] != NULL
                                          && strcmp (se->s_aliases[3], "www") == 0)))))))
              || (strcmp (se->s_name, "www") == 0
                  && se->s_aliases[0] != NULL
                     && (strcmp (se->s_aliases[0], "http") == 0
                         || (se->s_aliases[1] != NULL
                             && (strcmp (se->s_aliases[1], "http") == 0
                                 || (se->s_aliases[2] != NULL
                                     && (strcmp (se->s_aliases[2], "http") == 0
                                         || (se->s_aliases[3] != NULL
                                             && strcmp (se->s_aliases[3], "http") == 0))))))))))
      result |= 2;
  }
  {
    struct servent *se = getservbyname ("www", "tcp");
    if (!(se != NULL
          && se->s_port == htons (80)
          && strcmp (se->s_proto, "tcp") == 0
          && ((strcmp (se->s_name, "http") == 0
               && se->s_aliases[0] != NULL
                  && (strcmp (se->s_aliases[0], "www") == 0
                      || (se->s_aliases[1] != NULL
                          && (strcmp (se->s_aliases[1], "www") == 0
                              || (se->s_aliases[2] != NULL
                                  && (strcmp (se->s_aliases[2], "www") == 0
                                      || (se->s_aliases[3] != NULL
                                          && strcmp (se->s_aliases[3], "www") == 0)))))))
              || (strcmp (se->s_name, "www") == 0
                  && se->s_aliases[0] != NULL
                     && (strcmp (se->s_aliases[0], "http") == 0
                         || (se->s_aliases[1] != NULL
                             && (strcmp (se->s_aliases[1], "http") == 0
                                 || (se->s_aliases[2] != NULL
                                     && (strcmp (se->s_aliases[2], "http") == 0
                                         || (se->s_aliases[3] != NULL
                                             && strcmp (se->s_aliases[3], "http") == 0))))))))))
      result |= 4;
  }
  return result;
}
