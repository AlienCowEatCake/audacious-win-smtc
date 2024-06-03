#!/bin/bash -e

SOURCE_DIR="$(cd "$(dirname "${0}")" && pwd)"
#SOURCE_DIR="$(cygpath -u "${USERPROFILE}/Desktop/audacious-win-smtc")"
BUILD_DIR="${PWD}/build-${MSYSTEM,,?}"

MSYSTEM_PKG_PREFIX="mingw-w64"
QT_MAJOR_VERSION=""
if [ "${MSYSTEM}" == "MINGW32" ] ; then
    # Audacious <= 4.3.1
    MSYSTEM_PKG_PREFIX="${MSYSTEM_PKG_PREFIX}-i686"
    QT_MAJOR_VERSION="5"
elif [ "${MSYSTEM}" == "MINGW64" ] ; then
    # Audacious >= 4.4-beta1
    MSYSTEM_PKG_PREFIX="${MSYSTEM_PKG_PREFIX}-x86_64"
    QT_MAJOR_VERSION="6"
else
    echo "Unknown or broken MSYSTEM: ${MSYSTEM}"
    exit 1
fi
pacman -S --needed --noconfirm \
    base-devel \
    ${MSYSTEM_PKG_PREFIX}-toolchain \
    ${MSYSTEM_PKG_PREFIX}-qt${QT_MAJOR_VERSION}-base \
    ${MSYSTEM_PKG_PREFIX}-cmake

rm -rf "${BUILD_DIR}"
mkdir -p "${BUILD_DIR}"

cmake -DCMAKE_BUILD_TYPE=Release -B"${BUILD_DIR}" "${SOURCE_DIR}"
cmake --build "${BUILD_DIR}"
