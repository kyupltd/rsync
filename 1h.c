#include "rsync.h"
#include "1h.h"
void get_unlink_size(const char *fname)
{
    struct stat finfo;
    if (lstat(fname, &finfo) != 0)
        return;
    stats.total_deleted += finfo.st_size;
}
