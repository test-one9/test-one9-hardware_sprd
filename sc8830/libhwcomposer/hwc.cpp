#include <hardware/hwcomposer.h>
#include <log/log.h>

int hwc_open(const hw_module_t* module, const char* name, hw_device_t** device) {
    ALOGD("hwc_open");
    return 0;
}

int hwc_close(hw_device_t* device) {
    ALOGD("hwc_close");
    return 0;
}

int hwc_prepare(hwc_composer_device_1_t* dev, size_t numDisplays, hwc_display_contents_1_t** displays) {
    ALOGD("hwc_prepare");
    return 0;
}

int hwc_set(hwc_composer_device_1_t* dev, size_t numDisplays, hwc_display_contents_1_t** displays) {
    ALOGD("hwc_set");
    return 0;
}

static struct hw_module_methods_t hwc_module_methods = {
    .open = hwc_open,
};

hw_module_t HAL_MODULE_INFO_SYM = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HWC_MODULE_API_VERSION_1_4,
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = HWC_HARDWARE_MODULE_ID,
    .name = "Sprd HWC Module",
    .author = "Your Name",
    .methods = &hwc_module_methods,
};

static struct hwc_composer_device_1_t hwc_device = {
    .common = {
        .tag = HARDWARE_DEVICE_TAG,
        .version = 0,
        .module = &HAL_MODULE_INFO_SYM,
        .close = hwc_close,
    },
    .prepare = hwc_prepare,
    .set = hwc_set,
};
