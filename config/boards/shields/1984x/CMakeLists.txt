if(CONFIG_CUSTOM_INIT)
    zephyr_library()
    zephyr_library_sources(custom_init.c)
endif()