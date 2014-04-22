/* game.h  -  Game library  -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
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

/*! \file game.h
    Wrapper for game library headers and main entry/exit points */

#include <foundation/foundation.h>

#include <game/build.h>
#include <game/types.h>


/*! Initialization function, declare the game application. This function
    should be implemented in the game.
    \return                        Application definition */
 GAME_EXTERN application_t         game_initialize( void );
