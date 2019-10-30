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

#ifndef FTY_TEMPLATE_CLASS_EXAMPLE_H_INCLUDED
#define FTY_TEMPLATE_CLASS_EXAMPLE_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new fty_template_class_example
FTY_TEMPLATE_EXPORT fty_template_class_example_t *
    fty_template_class_example_new (void);

//  Destroy the fty_template_class_example
FTY_TEMPLATE_EXPORT void
    fty_template_class_example_destroy (fty_template_class_example_t **self_p);


//  @end

#ifdef __cplusplus
}
#endif

#endif
