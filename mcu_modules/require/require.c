/*
 * Copyright (c) 2022  Moddable Tech, Inc.
 *
 *   This file is part of the Moddable SDK Runtime.
 *
 *   The Moddable SDK Runtime is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   The Moddable SDK Runtime is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with the Moddable SDK Runtime.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


// #include "xsmc.h"

// #include "xsHost.h"

// ---

#include "xsAll.h"
#include "xs.h"

// // 16 byte string. random hex values.
// void xs_nodered_util_generateId_X(xsMachine *the)
// {
// 	char id[16];
// 	size_t i;
// 	static const char hex[] = "0123456789abcdef";

// 	for (i = 0; i < sizeof(id); i+= 4) {
// 		int r = c_rand();
// 		id[i + 0] = hex[r & 0x0f];
// 		id[i + 1] = hex[(r >> 4) & 0x0f];
// 		id[i + 2] = hex[(r >> 8) & 0x0f];
// 		id[i + 3] = hex[(r >> 12) & 0x0f];
// 	}

// 	xsmcSetStringBuffer(xsResult, id, sizeof(id));
// }

void rdw_mcu_importNow(xsMachine *the)
{
	char path[C_PATH_MAX];

	xsToStringBuffer(xsArg(0), path, sizeof(path));
	xsResult = xsAwaitImport(path, XS_IMPORT_NAMESPACE);
}
