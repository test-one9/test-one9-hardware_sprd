#include <hardware/memtrack.h>
#include <log/log.h>

int memtrack_init(const hw_module_t* module, const char* name, hw_device_t** device) {
    ALOGD("memtrack_init");
    return 0;
}

int memtrack_get_memory(const struct memtrack_module* module, const char* type, size_t* memory) {
    ALOGD("memtrack_get_memory");
    return 0;
}

static struct hw_module_methods_t memtrack_module_methods = {
    .open = memtrack_init,
};

hw_module_t HAL_MODULE_INFO_SYM = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = MEMTRACK_MODULE_API_VERSION_0_1,
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = MEMTRACK_HARDWARE_MODULE_ID,
    .name = "Sprd Memtrack Module",
    .author = "Your Name",
    .methods = &memtrack_module_methods,
};
