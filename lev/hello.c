#include <linux/kernel.h>
#include<linux/module.h>


int hello_init(void)
{
    printk(KERN_INFO "Hello Za Warudo!\n");
    return 0;
}

void hello_exit(void)
{
    printk(KERN_INFO "Sayonara Za Warudo\n");
}


module_init(hello_init);
module_exit(hello_exit);
