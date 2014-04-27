/* game.c  -  Game library  -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
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


static int game_loop( void );


void game_reference( void )
{
	if( (intptr_t)main_initialize < 1 || (intptr_t)main_run < 1 || (intptr_t)main_shutdown < 1 )
		log_debug( HASH_GAME, "" );
}


int game_run( void* arg )
{
	return game_loop();
}


int game_loop( void )
{
	thread_set_main();
	thread_set_name( "game_loop" );

	return 0;
}
