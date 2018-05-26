LOCAL_PATH := $(call my-dir)
 
include $(CLEAR_VARS)

LOCAL_CFLAGS += -fPIE
LOCAL_LDFLAGS += -fPIE -pie
 
LOCAL_MODULE     := su
LOCAL_SRC_FILES  := dddsu.c

LOCAL_LDLIBS := -llog
 
include $(BUILD_EXECUTABLE)
