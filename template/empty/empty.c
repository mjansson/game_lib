/* game.c  -  Game library template game -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
 * 
 * This library provides a cross-platform game library in C11 providing a basic application wrapper
 * for writing games in a platform-independent fashion. The latest source code is always available at
 * 
 * https://github.com/rampantpixels/game_lib
 * 
 * This library is put in the public domain; you can redistribute it and/or modify it without any restrictions.
 *
 */

#include <game/game.h>


application_t game_declare( void )
{
	application_t application = {0};

	application.name       = "Game library template game";
	application.short_name = "empty_game";
	application.config_dir = "empty_game";
	application.version    = version_make( 0, 0, 1, 1, 0 );

	game_reference();

	return application;
}
