/*  =========================================================================
    fty_template_class_example - class description

    Copyright (C) 2014 - 2019 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

/*
@header
    fty_template_class_example -
@discuss
@end
*/

#include "fty_template_classes.h"

//  Structure of our class

struct _fty_template_class_example_t {
    int filler;     //  Declare class properties here
};


//  --------------------------------------------------------------------------
//  Create a new fty_template_class_example

fty_template_class_example_t *
fty_template_class_example_new (void)
{
    fty_template_class_example_t *self = (fty_template_class_example_t *) zmalloc (sizeof (fty_template_class_example_t));
    assert (self);
    //  Initialize class properties here
    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the fty_template_class_example

void
fty_template_class_example_destroy (fty_template_class_example_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        fty_template_class_example_t *self = *self_p;
        //  Free class properties here
        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}

