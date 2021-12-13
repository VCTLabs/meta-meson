KERNEL_IMAGETYPE ?= "uImage"

IMAGE_BOOT_FILES ?= "${KERNEL_IMAGETYPE} \
		     s905_autoscript aml_autoscript aml_autoscript.zip"

EXTRA_IMAGEDEPENDS += "s905-autoscript s905-autoscript-multiboot"