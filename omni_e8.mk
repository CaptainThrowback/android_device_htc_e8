## Specify phone tech before including full_phone
$(call inherit-product, vendor/omni/config/cdma.mk)

# Inherit device configuration
$(call inherit-product, device/htc/m8/full_e8.mk)
# Release name
PRODUCT_RELEASE_NAME := e8

# Inherit some common DU stuff.
$(call inherit-product, vendor/omni/config/common.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := e8
PRODUCT_NAME := omni_e8
PRODUCT_BRAND := htc
PRODUCT_MODEL := e8
PRODUCT_MANUFACTURER := htc
