HOMEPAGE = "https://github.com/openbmc/witherspoon-pfault-analysis"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"
SRC_URI += "git://github.com/ibm-openbmc/witherspoon-pfault-analysis;branch=OP940"
SRCREV = "dd8000ec8d2968be0586a5b0a528fd0901c3c669"

DEPENDS += "i2c-tools"

