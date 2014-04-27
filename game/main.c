/* main.c  -  Game library  -  Public Domain  -  2014 Mattias Jansson / Rampant Pixels
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


int main_initialize( void )
{
	application_t application = game_declare();

#if BUILD_DEBUG
	log_set_suppress( 0, ERRORLEVEL_NONE );
	log_set_suppress( HASH_GAME, ERRORLEVEL_NONE );
#elif BUILD_RELEASE
	log_set_suppress( 0, ERRORLEVEL_DEBUG );
	log_set_suppress( HASH_GAME, ERRORLEVEL_DEBUG );
#else
	log_set_suppress( 0, ERRORLEVEL_INFO );
	log_set_suppress( HASH_GAME, ERRORLEVEL_INFO );
#endif

	log_infof( HASH_GAME, "Initializing %s v%s", application.name, string_from_version_static( application.version ) );
	
	return foundation_initialize( memory_system_malloc(), application );
}


int main_run( void* arg )
{
	log_infof( HASH_GAME, "Running game instance %s", string_from_uuid_static( environment_application()->instance ) );
	return game_run( arg );
}


void main_shutdown( void )
{
	log_infof( HASH_GAME, "Terminating game instance %s", string_from_uuid_static( environment_application()->instance ) );

	foundation_shutdown();
}
