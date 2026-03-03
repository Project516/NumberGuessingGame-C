#!/bin/sh

# SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
#
# SPDX-License-Identifier: GPL-3.0-or-later

rm -f NumberGuessingGame-C
make || exit 1
./NumberGuessingGame-C
