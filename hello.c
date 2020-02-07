#include <linux/kernel.h>

asmlinkage long sys_hello(void)
{
    printk("Hello world\n This is my SysCall!");
    return 0;
}