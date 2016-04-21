#include<stdio.h>
#include<sys/types.h>
#include<pwd.h>
#include<unistd.h>
#include<curses.h>

int main()
{
	uid_t uid;
	gid_t gid;
	passwd *pw;

	uid = getuid();
	gid = getgid();

	printf("Login User is %s\n",getlogin());

	printf("User ID %d\nGID %d\n",uid,gid);
	pw = getpwuid(uid);

	printf("name = %s",pw->pw_name);

	return 0;
}
