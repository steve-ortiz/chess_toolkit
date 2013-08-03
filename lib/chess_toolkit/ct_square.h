/*
 * Chess Toolkit: a software library for creating chess programs
 * Copyright (C) 2013 Steve Ortiz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CT_SQUARE_H
#define CT_SQUARE_H

#include "ct_types.h"

CtSquare ct_square_make(CtFile file, CtRank rank);
CtFile ct_square_file(CtSquare square);
CtRank ct_square_rank(CtSquare square);
CtFile ct_file_from_char(char c);
CtRank ct_rank_from_char(char c);
char ct_file_to_char(CtFile file);
char ct_rank_to_char(CtRank rank);

#endif                                /* CT_SQUARE_H */
