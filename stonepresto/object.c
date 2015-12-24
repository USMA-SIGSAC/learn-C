#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "object.h"
#include <assert.h>

void Object_destroy(void *self)
{
	Object *obj = self;

	if(obj) {
		if(obj->description) free(obj->description);
		free(obj);
	}
}

void Object_describe(void *self)
{
	Object *obj = self;
	printf("%s.\n", obj->description);
}

int Object_init(void *self)
{
	// doesn't really do anything
	return 1;
}

void *Object_move(void *self, Direction direction)
{
	assert(direction!=0);
	printf("You can't go that direction stoopid.\n");
	return NULL;
}

int Object_attack(void *self, int damage)
{
	assert(damage>=0);
	printf("you can't attack that...\n");
	return 0;
}

void *Object_new(size_t size, Object proto, char *description)
{
	assert(description!=NULL);
	// setup the default functions in case they are not set
	if(!proto.init) proto.init = Object_init;
	if(!proto.describe) proto.describe = Object_describe;
	if(!proto.destroy) proto.destroy = Object_destroy;
	if(!proto.attack) proto.attack = Object_attack;
	if(!proto.move) proto.move = Object_move;

	// this seems weird, but we can make a struct of one size,
	// then point a different pointer at it to 'cast' it
	Object *el = calloc(1, size);
	assert(el!=NULL);
	*el = proto;

	// copy the description over
	assert(description!=NULL);
	el->description = strdup(description);

	// initialize it with whatever init we were given
	if(!el->init(el)) {
		// looks like it didn't initialize properly >_>
		el->destroy(el);
		assert(el!=NULL);
		return NULL;
	} else {
		assert(el!=NULL);
		//all done, we made an object of any type
		return el;
	}
}
