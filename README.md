# SU Wrapper for DDD Team Project

## How to build

cd dddsu
${NDK_HOME}/ndk-build -B -V=1 .

## How to install

// after build

adb push libs/armeabi-v7a/su /data/local/tmp

adb shell

/sbin_orig/su

cp /data/local/tmp/su /sbin/su

chmod 777 /sbin/su

## How to test with gameguardian

1. in terminal

    adb shell
  
    logcat -c; logcat | grep DDDSU

2. in phone

    start up gameguardian
  
    check the root state from gameguardian

3. in terminal (again)

    check the LOGCAT logs like belows
  
    05-26 15:36:31.406  3274  3274 E DDDSU     : ppid:3223
  
    then, check the 3223 process is gameguardian
    
    ps | grep 3223
    
    u0_a734   3223  3695  2339796 91068 SyS_epoll_ 74315fc5f4 S com.pkzmcdlacvycx.dfdolf

Done.
