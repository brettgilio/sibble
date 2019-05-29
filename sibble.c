#include <errno.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <fcntl.h>
#include <linux/oom.h>

#if HAVE_SHADOW_H
#include <shadow.h>
#endif

struct locker {
  
};

struct randr {
  int is_active;
  int env_root;
  int err_root;
};

int
main(int argc, char **argv) {

  return 0;
}
