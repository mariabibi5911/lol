LOCAL_PATH := $(call my-dir)/../

include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := include/external/curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := include/external/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := include/external/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := rary

# Using NDK at G:\Android\ndk-24.0.8215888
LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-exceptions -fpermissive
LOCAL_CFLAGS += -rdynamic -funwind-tables
LOCAL_CPPFLAGS := -std=c++17 -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-exceptions -fexceptions -fpermissive -std=c++17
LOCAL_CPPFLAGS += -rdynamic -funwind-tables -fno-omit-frame-pointer
LOCAL_LDFLAGS += -Wl,--strip-all
LOCAL_ARM_MODE := arm

LOCAL_SRC_FILES := Backend/main.cpp \
    ../include/external/dlfcn/dlfcn.cpp \
    ../include/external/imgui/imgui.cpp \
    ../include/external/Substrate/SubstrateHook.cpp \
    ../include/external/Substrate/SubstrateDebug.cpp \
    ../include/external/Substrate/SubstratePosixMemory.cpp \
    ../include/external/And64InlineHook/And64InlineHook.cpp \
    ../include/external/xhook/xhook.c \
    ../include/external/oxorany/oxorany.cpp

LOCAL_C_INCLUDES := $(NDK_ROOT)/sources/android
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include/external
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include/external/curl/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include/external/curl/openssl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Game
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Prediction
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Autoplay
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Autoqueue
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Imgui
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Frontend
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Backend
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Auth
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Zygisk
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Root

LOCAL_LDLIBS := -landroid -lGLESv3 -lEGL -ldl -llog -lz
LOCAL_STATIC_LIBRARIES := libcurl libssl libcrypto
include $(BUILD_SHARED_LIBRARY)
