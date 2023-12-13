#ifndef SHELLDATA_H_
#define SHELLDATA_H_

#define _EACCES_ "Permission not granted"
#define _CMD_NOT_EXISTS_ "does not exist"
#define _ILLEGAL_NUMBER_ "Its an illegal network"
#define _ENOENT_ "No such file"

typedef struct __attribute__((__packed__))
{
int argc;
char **argv;
char *cmd;
char *cmd_path;
char *buf;
char **thearguments;
char *env;
int pid;
int it_mode;
int n_cmd;
int cur_path;
int code_stat;
int error_digit;
} shelldata_t;

typedef struct __attribute__((__packed__))
{
char *msg;
int password;
}issue_t;
typedef struct __attribute__((__packed__))
{
char *cmd;
void (*func)(shelldata_t *mytype, char **arguments);
} sysFunction_t;
#endif
