/* Map one directory name to another in __FILE__, __BASE_FILE__
   and __builtin_FILE ().
   Copyright (C) 2001-2016 Free Software Foundation, Inc.

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.

 In other words, you are welcome to use, share and improve this program.
 You are forbidden to forbid anyone else to use, share and improve
 what you give them.   Help stamp out software-hoarding!  */

#ifndef LIBCPP_FILE_MAP_H
#define LIBCPP_FILE_MAP_H

const char * remap_file_filename (const char *filename);

int add_file_prefix_map (const char *arg);

#endif /* !LIBCPP_FILE_MAP_H  */
