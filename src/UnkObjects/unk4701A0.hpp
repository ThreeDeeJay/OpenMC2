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

class unk_4701A0 {
private:
    // Based on the constructor, this class
    // is AT LEAST 0x90 bytes big, and appears
    // to be all floating point numbers.
    float unk00[36];

public:
    unk_4701A0() {
        MC2_PROC_MEMBER<void>(0x004701A0, this);
    }
};

#define glo_6967C0 MC2_GLOBAL<unk_4701A0>(0x006967C0)
