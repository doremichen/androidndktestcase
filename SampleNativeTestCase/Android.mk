# 
#
#

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := SampleCodetest

LOCAL_MODULE_TAGS := tests

LOCAL_SRC_FILES := \
    SampleCodeTestMain.cpp \
	SampleCodeTestCase.cpp \
	SampleCodeTestCase2.cpp \
	SampleCodeTestCase3.cpp

LOCAL_SHARED_LIBRARIES := \
	libutils \
    libstlport

LOCAL_STATIC_LIBRARIES := \
	libgtest \
	libgtest_main \
	
LOCAL_C_INCLUDES := \
    bionic \
    bionic/libstdc++/include \
    external/gtest/include \
    external/stlport/stlport \
    

LOCAL_MODULE_PATH := $(TARGET_OUT_DATA)/nativetest
	
include $(BUILD_EXECUTABLE)	



