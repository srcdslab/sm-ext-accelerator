#ifndef _INCLUDE_VERSION_INFORMATION_H_
#define _INCLUDE_VERSION_INFORMATION_H_

/**
 * @file Contains version information.
 * @brief AMBuildScript passes the version from product.version as
 * ACCELERATOR_VERSION_MAJOR/MINOR/PATCH. The "-manual" values below are only used
 * when building without the build scripts.
 */

#if defined SM_GENERATED_BUILD
#include "version_auto.h"
#else

#ifndef SM_GENERATED_BUILD
#undef BINARY_NAME
#define BINARY_NAME "accelerator.ext.dll\0"
#endif

#if defined ACCELERATOR_VERSION_MAJOR && defined ACCELERATOR_VERSION_MINOR && defined ACCELERATOR_VERSION_PATCH
#define ACCELERATOR_STR2(x)	#x
#define ACCELERATOR_STR(x)	ACCELERATOR_STR2(x)
#define SM_BUILD_TAG		""
#define SM_VERSION			ACCELERATOR_STR(ACCELERATOR_VERSION_MAJOR) "." ACCELERATOR_STR(ACCELERATOR_VERSION_MINOR) "." ACCELERATOR_STR(ACCELERATOR_VERSION_PATCH)
#define SM_BUILD_UNIQUEID	"[" SM_VERSION "]"
#define SM_FULL_VERSION		SM_VERSION SM_BUILD_TAG
#define SM_FILE_VERSION		ACCELERATOR_VERSION_MAJOR,ACCELERATOR_VERSION_MINOR,ACCELERATOR_VERSION_PATCH,0
#else
#define SM_BUILD_TAG		"-manual"
#define SM_BUILD_UNIQUEID	"[MANUAL BUILD]"
#define SM_VERSION			"2.6.3"
#define SM_FULL_VERSION		SM_VERSION SM_BUILD_TAG
#define SM_FILE_VERSION		2,6,3,0
#endif

#endif

#endif /* _INCLUDE_VERSION_INFORMATION_H_ */
