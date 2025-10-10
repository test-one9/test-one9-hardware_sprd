LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libgralloc.sc8830
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := libgralloc/gralloc.cpp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_SHARED_LIBRARIES := liblog libcutils libhardware
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libhwcomposer.sc8830
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := libhwcomposer/hwc.cpp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_SHARED_LIBRARIES := liblog libcutils libhardware
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := liblights.sc8830
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := liblights/lights.cpp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libmemtrack.sc8830
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := libmemtrack/memtrack.cpp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_SHARED_LIBRARIES := liblog libcutils
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)