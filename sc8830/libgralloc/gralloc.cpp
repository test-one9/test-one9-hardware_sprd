#include <hardware/gralloc.h>
#include <log/log.h>

int gralloc_open(const hw_module_t* module, const char* name, hw_device_t** device) {
    ALOGD("gralloc_open");
    return 0;
}

int gralloc_close(hw_device_t* device) {
    ALOGD("gralloc_close");
    return 0;
}

int gralloc_allocate_buffer(alloc_device_t* dev, int w, int h, int format, int usage, buffer_handle_t* handle) {
    ALOGD("gralloc_allocate_buffer");
    return 0;
}

int gralloc_free_buffer(alloc_device_t* dev, buffer_handle_t handle) {
    ALOGD("gralloc_free_buffer");
    return 0;
}

static struct hw_module_methods_t gralloc_module_methods = {
    .open = gralloc_open,
};

hw_module_t HAL_MODULE_INFO_SYM = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = GRALLOC_MODULE_API_VERSION_0_3,
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = GRALLOC_HARDWARE_MODULE_ID,
    .name = "Sprd Gralloc Module",
    .author = "abdulghani shikh fadlil",
    .methods = &gralloc_module_methods,
};

static struct alloc_device_t gralloc_device = {
    .common = {
        .tag = HARDWARE_DEVICE_TAG,
        .version = 0,
        .module = &HAL_MODULE_INFO_SYM,
        .close = gralloc_close,
    },
    .alloc = gralloc_allocate_buffer,
    .free = gralloc_free_buffer,
};
