/*
===========================================================================

Daemon GPL Source Code
Copyright (C) 2013 Unvanquished Developers

This file is part of the Daemon GPL Source Code (Daemon Source Code).

Daemon Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Daemon Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Daemon Source Code.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

#include "../qcommon/qcommon.h"
#include "../qcommon/q_shared.h"

#ifndef FRAMEWORK_BASE_COMMANDS_H_
#define FRAMEWORK_BASE_COMMANDS_H_

/**
 * Function related to basic commands such as aliases and delays
 */

namespace Cmd {

    // Executes delayed commands that are ready.
    void DelayFrame();

    //Saves the aliases in a configuration file
    void WriteAliases(fileHandle_t f);
}

#endif // FRAMEWORK_BASE_COMMANDS_H_
