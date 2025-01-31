
if (NOT LIBUV_BINROOT)
	set(LIBUV_BINROOT $ENV{LIBUV_BINDIR}/.libs)
endif()
message("# libuv: LIBUV_BINROOT=${LIBUV_BINROOT}")

find_path(LIBUV_INCLUDE_DIR uv.h
    HINTS ${RS_DIR}/deps/libuv
    PATH_SUFFIXES include)

find_library(LIBUV_LIBS
    NAMES libuv.a uv
    HINTS "${LIBUV_BINROOT}"
    PATH_SUFFIXES .lib)
if (NOT LIBUV_LIBS)
	message(FATAL_ERROR "cannot find libuv in ${LIBUV_BINROOT}")
endif()
