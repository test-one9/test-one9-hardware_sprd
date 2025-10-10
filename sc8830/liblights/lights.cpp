#include <hardware/lights.h>
#include <log/log.h>

int lights_open(const hw_module_t* module, const char* name, hw_device_t** device) {
    ALOGD("lights_open");
    return 0;
}

int lights_close(hw_device_t* device) {
    ALOGD("lights_close");
    return 0;
}

int lights_set_light(struct light_device_t* dev, struct light_state_t const* state) {
    ALOGD("lights_set_light");
    return 0;
}

static struct hw_module_methods_t lights_module_methods = {
    .open = lights_open,
};

hw_module_t HAL_MODULE_INFO_SYM = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = LIGHTS_MODULE_API_VERSION_0_3,
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = LIGHTS_HARDWARE_MODULE_ID,
    .name = "Sprd Lights Module",
    .author = "Your Name",
    .methods = &lights_module_methods,
};

static struct light_device_t lights_device = {
    .common = {
        .tag = HARDWARE_DEVICE_TAG,
        .version = 0,
        .module = &HAL_MODULE_INFO_SYM,
        .close = lights_close,
    },
    .set_light = lights_set_light,
};
