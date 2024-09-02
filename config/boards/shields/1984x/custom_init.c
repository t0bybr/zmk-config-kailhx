#include <zephyr/kernel.h>
#include <zephyr/init.h>

static int custom_init(void) {
    // Your custom initialization code here
    k_sleep(K_SECONDS(5));  // 5-second delay
    printk("Custom initialization complete\n");
    return 0;
}

SYS_INIT(custom_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);