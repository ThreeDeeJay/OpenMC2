/**********************************************************************
* OpenMC2 - An Open Source Re-Implementation of Midnight Club 2
* Copyright (C) 2016  LRFLEW
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/

#pragma once

#include "../Addresses.hpp"

class unk_611C60 {
private:
    std::uint32_t unk00;

public:
    unk_611C60() {
        MC2_PROC_MEMBER<void>(0x00611C60, this);
    }
};

#define glo_692E68 MC2_GLOBAL<unk_611C60>(0x00692E68)
#define glo_6993A4 MC2_GLOBAL<unk_611C60>(0x006993A4)
#define glo_858358 MC2_GLOBAL<unk_611C60>(0x00858358)
#define glo_85835C MC2_GLOBAL<unk_611C60>(0x0085835C)
#define glo_858354 MC2_GLOBAL<unk_611C60>(0x00858354)
#define glo_8602FC MC2_GLOBAL<unk_611C60>(0x008602FC)
