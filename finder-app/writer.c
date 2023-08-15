#include <stdio.h>
#include <syslog.h>

int main(int argc, char *argv[]) 
{
    openlog("my_writer", LOG_PID, LOG_USER);
    if (argc != 3) 
    {
        syslog(LOG_ERR, "Not all or too many parameters specified!");
        return 1;
    }
    char *writefile = argv[1];
    char *writestr = argv[2];
    FILE *fp = fopen(writefile, "w");
    if (fp != NULL) 
    {
        syslog(LOG_DEBUG, "Writing %s to %s", writestr, writefile);
        fprintf(fp, "%s\n", writestr);
        fclose(fp);
    }
    else 
    {
        syslog(LOG_ERR, "File could not be opened!");
    }
    return 0;
}
