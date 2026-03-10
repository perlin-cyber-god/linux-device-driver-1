#include<linux/module.h>

static int __init module_init(void)
{
    pr_info("The module has been initialised");
    return 0;
}

static void __exit module_exit(void)
{
    pr_info("the module has been cleaned");
}

module_init(helloworld_init);
module_exit(helloworld_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kiran Nayak");
MODULE_DESCRIPTION("A simple hello world kernel module");
MODULE_INFO(board,"Beaglebone black REV A5");

