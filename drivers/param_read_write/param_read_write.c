/*
 * drivers/param_read_write/param_read_write.c
 * Fake param_read_write Avengers theme
 * Made by pappschlumpf (Erik Müller)
 */

#include <linux/init.h>
#include <linux/moduleparam.h>

static unsigned int cust_flag = 0;

static int __init set_cust_flag(char *cmdline)
{
	cust_flag = 3;
	return 0;
}
__setup("avengers_theme", set_cust_flag);

module_param(cust_flag, uint, 0644);
