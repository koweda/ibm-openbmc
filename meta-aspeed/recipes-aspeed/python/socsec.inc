SUMMARY = "Secure-boot utilities for ASPEED BMC SoCs"
HOMEPAGE = "https://github.com/AspeedTech-BMC/socsec/"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d50b901333b4eedfee074ebcd6a6d611"

BRANCH ?= "master"
SRC_URI = "git://github.com/AspeedTech-BMC/socsec.git;protocol=https;branch=${BRANCH}"

S = "${WORKDIR}/git"

inherit python3native setuptools3

DEPENDS += "${PYTHON_PN}-bitarray-native"
DEPENDS += "${PYTHON_PN}-ecdsa-native"
DEPENDS += "${PYTHON_PN}-pycryptodome-native"

RDEPENDS_${PN} += "${PYTHON_PN}-bitarray"
RDEPENDS_${PN} += "${PYTHON_PN}-core"
RDEPENDS_${PN} += "${PYTHON_PN}-hexdump"
RDEPENDS_${PN} += "${PYTHON_PN}-jsonschema"
RDEPENDS_${PN} += "${PYTHON_PN}-jstyleson"
RDEPENDS_${PN} += "${PYTHON_PN}-pycryptodome"
RDEPENDS_${PN} += "${PYTHON_PN}-ecdsa"

BBCLASSEXTEND = "native nativesdk"

