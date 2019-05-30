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

enum {
      INITIALIZE,
      INPUT,
      FAILED,
      NUMCOLS
};

struct locker {
  
};

struct randr {
  int env_active;
  int env_root;
  int err_root;
};

// Static definitions

static void
keepalive(void) {
  FILE *f;
  const char oomfile[]= "/proc/self/oom_score_adj";

  if (!(f = fopen(oomfile, "w"))) {
    if (errno == ENOENT)
      return;
    // add killproc
  }
}

int
main(int argc, char **argv) {

  return 0;
}
