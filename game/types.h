/* types.h  -  Game library  -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
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

/*! \file types.h
    Game types */

#include <foundation/platform.h>
#include <foundation/build.h>

#include <game/hashstrings.h>


#if defined( GAME_COMPILE ) && GAME_COMPILE
#  ifdef __cplusplus
#  define GAME_EXTERN extern "C"
#  define GAME_API extern "C"
#  else
#  define GAME_EXTERN extern
#  define GAME_API extern
#  endif
#else
#  ifdef __cplusplus
#  define GAME_EXTERN extern "C"
#  define GAME_API extern "C"
#  else
#  define GAME_EXTERN extern
#  define GAME_API extern
#  endif
#endif


// PRIMITIVE TYPES



// COMPLEX TYPES



// OPAQUE COMPLEX TYPES


