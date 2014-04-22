/* build.h  -  Game library  -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
 * 
 * This library provides a cross-platform game library in C11 providing a basic application wrapper
 * for writing games in a platform-independent fashion. The latest source code is always available at
 * 
 * https://github.com/rampantpixels/game_lib
 * 
 * This library is put in the public domain; you can redistribute it and/or modify it without any restrictions.
 *
 */

#pragma once

/*! \file build.h
    Build setup. This header unifies the build configuration macros and provides the following macro idenfiers,
	usable with "#if BUILD_[type]" conditionals

    [...]

	Other configurations can be made with various BUILD_ENABLE_[...] at the end of this file. There are also
	a number of BUILD_SIZE_[...] defines for preallocated buffer sizes used.

	*/

#include <foundation/platform.h>

