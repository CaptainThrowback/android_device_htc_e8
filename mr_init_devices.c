#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",

    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/msm_sdcc.1",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p37",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p42",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p43",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p44",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p45",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p46",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p47",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p48",
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1/mmc1:e624/block/mmcblk1/mmcblk1p1",
    "/sys/devices/msm_sdcc.2/mmc_host/mmc1/mmc1:e624/block/mmcblk1/mmcblk1p2",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/gpio_keys.70/input*",
    "/sys/devices/platform/android_usb/usb_function_switch",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    "/sys/devices/platform/xhci-hcd*",

    "/sys/module/msm_thermal/core_control/enabled",

    "/sys/devices/system/cpu",
    "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
    "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
    "/sys/devices/system/cpu/cpu1/online",
    "/sys/devices/system/cpu/cpu2/online",
    "/sys/devices/system/cpu/cpu3/online",
    "/sys/devices/system/cpu/cpu1/cpufreq/scaling_governor",
    "/sys/devices/system/cpu/cpu2/cpufreq/scaling_governor",
    "/sys/devices/system/cpu/cpu3/cpufreq/scaling_governor",
    "/sys/devices/system/cpu/cpufreq/ondemand/up_threshold",
    "/sys/devices/system/cpu/cpufreq/ondemand/sampling_rate",
    "/sys/devices/system/cpu/cpufreq/ondemand/io_is_busy",
    "/sys/devices/system/cpu/cpufreq/ondemand/sampling_down_factor",
    "/sys/devices/system/cpu/cpufreq/ondemand/down_differential",
    "/sys/devices/system/cpu/cpufreq/ondemand/up_threshold_multi_core",
    "/sys/devices/system/cpu/cpufreq/ondemand/down_differential_multi_core",
    "/sys/devices/system/cpu/cpufreq/ondemand/optimal_freq",
    "/sys/devices/system/cpu/cpufreq/ondemand/sync_freq",
    "/sys/devices/system/cpu/cpufreq/ondemand/up_threshold_any_cpu_load",
    "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
    "/sys/devices/system/cpu/cpu1/cpufreq/scaling_min_freq",
    "/sys/devices/system/cpu/cpu2/cpufreq/scaling_min_freq",
    "/sys/devices/system/cpu/cpu3/cpufreq/scaling_min_freq",

    "/sys/module/lpm_resources/enable_low_power/l2",
    "/sys/module/lpm_resources/enable_low_power/pxo",
    "/sys/module/lpm_resources/enable_low_power/vdd_dig",
    "/sys/module/lpm_resources/enable_low_power/vdd_mem",
    "/sys/module/pm_8x60/modes/cpu0/power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu1/power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu2/power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu3/power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu0/power_collapse/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu0/standalone_power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu1/standalone_power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu2/standalone_power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu3/standalone_power_collapse/suspend_enabled",
    "/sys/module/pm_8x60/modes/cpu0/standalone_power_collapse/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu1/standalone_power_collapse/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu2/standalone_power_collapse/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu3/standalone_power_collapse/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu0/retention/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu1/retention/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu2/retention/idle_enabled",
    "/sys/module/pm_8x60/modes/cpu3/retention/idle_enabled",

    NULL
};
