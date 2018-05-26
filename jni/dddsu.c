#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <android/log.h>

int main(int argc, char* argv[])
{
	pid_t pid = getpid();
	pid_t ppid = getppid();

	__android_log_print(ANDROID_LOG_ERROR, "DDDSU", " pid:%d", getpid());
	__android_log_print(ANDROID_LOG_ERROR, "DDDSU", "ppid:%d", getppid());

	int i;
	for (i = 0; i < argc; i++) {
		__android_log_print(ANDROID_LOG_ERROR, "DDDSU", "argv[%d]:%s", i, argv[i]);
	}

	execv("/sbin_orig/su", argv);

	return 0;
}
