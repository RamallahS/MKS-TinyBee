/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 KOhm, beta25 = 4550 K, 4.7 kOhm pull-up, TDK NTCG104LH104KT1 https://product.tdk.com/en/search/sensor/ntc/chip-ntc-thermistor/info?part_no=NTCG104LH104KT1
constexpr temp_entry_t temptable_2001[] PROGMEM = {
        { OV(3621),  35/2 },
        { OV(3514),  40/2 },
        { OV(3394),  45/2 },
        { OV(3260),  50/2 },
        { OV(3096),  55/2 },
        { OV(2903),  60/2 },
        { OV(2690),  65/2 },
        { OV(2516),  70/2 },
        { OV(2342),  75/2 },
        { OV(2169),  80/2 },
        { OV(1999),  85/2 },
        { OV(1815),  90/2 },
        { OV(1611),  95/2 },
        { OV(1423), 100/2 },
        { OV(1264), 105/2 },
        { OV(1119), 110/2 },
        { OV(988),  115/2 },
        { OV(868),  120/2 },
        { OV(759),  125/2 },
        { OV(660),  130/2 },
        { OV(569),  135/2 },
        { OV(486),  140/2 },
        { OV(410),  145/2 },
        { OV(341),  150/2 },
        { OV(278),  155/2 },
        { OV(221),  160/2 },
        { OV(169),  165/2 },
        { OV(122),  170/2 },
        { OV(80),   175/2 },
        { OV(42),   180/2 },
        { OV(8),    185/2 },
        { OV(0),    190/2 }
      };
