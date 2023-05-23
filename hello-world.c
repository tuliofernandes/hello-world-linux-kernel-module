#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My very first Linux kernel module");

static int hello_init(void) {
    printk(KERN_INFO "Hello world\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Bye bye world\n");
}

module_init(hello_init);
module_exit(hello_exit);