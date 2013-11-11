#ifdef HAVE_INOTIFY
int
inotify_remove_file(const char * path);

void *
start_inotify();
#elif defined(HAVE_SYS_EVENT_H)
int
inotify_remove_file(const char* path);

void *
start_kqueue();
#endif
