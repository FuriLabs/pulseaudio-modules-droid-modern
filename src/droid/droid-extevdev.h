#ifndef foodroidextevdevhfoo
#define foodroidextevdevhfoo

/***
  This file is part of PulseAudio.

  Copyright (C) 2019 UBports foundation.
  Author(s): Ratchanan Srirattanamet <ratchanan@ubports.com>

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

typedef struct pa_droid_extevdev pa_droid_extevdev;

pa_droid_extevdev *pa_droid_extevdev_new(pa_core *, pa_card *,
                                         pa_droid_hw_module *);

void pa_droid_extevdev_free(pa_droid_extevdev *);

#endif
