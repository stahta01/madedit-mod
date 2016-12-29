/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: Finnish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2016-09-21 18:15:05.189948
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 27,SYM, 27,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 28, 61,SYM,SYM, 28,SYM,SYM,SYM, 62, 63, 64,SYM, /* BX */
   49, 35, 65, 46, 11, 56, 39, 37, 40, 30, 51, 31, 66, 36, 67, 57, /* CX */
   68, 58, 52, 33, 34, 59, 22,SYM, 69, 70, 38, 71, 32, 72, 73, 55, /* DX */
   49, 35, 74, 46, 11, 56, 39, 37, 40, 30, 51, 31, 75, 36, 76, 57, /* EX */
   77, 58, 52, 33, 34, 59, 22,SYM, 78, 79, 38, 80, 32, 81, 82, 83, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 84,SYM,SYM,SYM,SYM,SYM,SYM, 27,SYM, 85,ILL, 28,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 27,SYM, 86,ILL, 28, 87, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 88,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   49, 35, 89, 46, 11, 56, 39, 37, 40, 30, 51, 31, 90, 36, 91, 57, /* CX */
   92, 58, 52, 33, 34, 59, 22,SYM, 93, 94, 38, 95, 32, 96, 97, 55, /* DX */
   49, 35, 98, 46, 11, 56, 39, 37, 40, 30, 51, 31, 99, 36,100, 57, /* EX */
  101, 58, 52, 33, 34, 59, 22,SYM,102,103, 38,104, 32,105,106,107, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,108,109, 47,SYM,110,111,SYM,SYM, 27,112,113,114,SYM, 28,SYM, /* AX */
  SYM,115,SYM, 47,SYM,116,117,SYM,SYM, 27,118,119,120, 45, 28, 45, /* BX */
   53, 35,121, 46, 11, 56, 39,122, 43, 30,123, 31,124, 36,125,126, /* CX */
  127, 54,128,129, 34, 59, 22,SYM,130,131, 38,132, 32,133,134, 55, /* DX */
   53, 35,135, 46, 11, 56, 39,136, 43, 30,137, 31,138, 36,139,140, /* EX */
  141, 54,142,143, 34, 59, 22,SYM,144,145, 38,146, 32,147,148,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,149,SYM, 47,SYM,SYM,SYM,SYM, 39, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,150,SYM, 47,SYM,SYM,SYM,SYM, 39, /* BX */
  151,152, 53, 41, 11, 56,153,154, 43, 30,155,156,157,158,159,160, /* CX */
   27,161, 54, 33,162, 59, 22,SYM,163,164,165,166, 32, 60, 28, 55, /* DX */
  167,168, 53, 41, 11, 56,169,170, 43, 30,171,172,173,174,175,176, /* EX */
   27,177, 54, 33,178, 59, 22,SYM,179,180,181,182, 32, 60, 28,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,183,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   49, 35,184, 46, 11, 56, 39, 37, 40, 30, 51, 31,185, 36,186, 57, /* CX */
   50, 58, 52, 33, 34, 59, 22,SYM,187,188, 38,189, 32, 48, 42, 55, /* DX */
   49, 35,190, 46, 11, 56, 39, 37, 40, 30, 51, 31,191, 36,192, 57, /* EX */
   50, 58, 52, 33, 34, 59, 22,SYM,193,194, 38,195, 32, 44, 42,196, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 4X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 19, 21, 18,  4, 23, 20, 14,  1, 15,  9,  6, 12,  2,  7, /* 6X */
   16, 29, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,197,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   49, 35,198, 46, 11, 56, 39, 37, 40, 30, 51, 31,199, 36,200, 57, /* CX */
  201, 58, 52, 33, 34, 59, 22,SYM,202,203, 38,204, 32,205,206, 55, /* DX */
   49, 35,207, 46, 11, 56, 39, 37, 40, 30, 51, 31,208, 36,209, 57, /* EX */
  210, 58, 52, 33, 34, 59, 22,SYM,211,212, 38,213, 32,214,215,216, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 919
 * First 512 sequences: 0.9985378147555799
 * Next 512 sequences (512-1024): 0.0014621852444200612
 * Rest: 3.881443777498106e-17
 * Negative sequences: TODO
 */
static const PRUint8 FinnishLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,2,3,3,0,3,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,0,0,0,2,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,0,3,3,2,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,0,2,3,2,3,2,2,0,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,0,0,2,2,0,0,0,0,0,0,0,
  3,3,2,2,3,3,2,3,3,2,3,3,3,2,2,2,3,3,2,3,3,3,3,2,2,2,2,0,0,0,
  3,3,2,2,3,2,2,3,3,3,2,3,0,2,2,2,2,3,2,2,0,0,2,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,0,3,3,2,2,0,0,0,0,2,
  3,3,3,2,3,2,2,3,3,2,2,3,2,0,2,0,2,3,0,2,0,0,3,2,0,0,0,0,0,0,
  3,3,2,3,3,3,3,3,3,2,3,3,3,2,3,2,3,3,2,0,2,2,3,2,3,0,0,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,3,2,2,2,0,0,
  3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,0,3,2,
  3,3,3,3,3,3,3,3,3,3,3,2,2,0,3,2,0,3,3,3,2,3,2,0,2,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,3,3,3,3,3,3,2,3,2,0,0,0,0,
  3,3,2,3,3,3,3,3,3,3,3,0,2,0,3,0,2,3,3,2,2,3,0,0,0,2,0,0,0,2,
  2,3,3,3,2,3,3,2,0,3,3,3,3,3,3,3,3,3,3,2,0,0,3,2,0,0,0,0,0,0,
  3,3,2,3,3,3,3,3,3,2,3,2,0,2,0,2,2,3,0,2,2,2,0,3,0,2,0,0,0,0,
  3,3,3,2,3,3,2,3,2,2,3,0,2,0,3,0,0,2,2,2,2,2,0,2,2,0,0,0,0,0,
  3,3,3,2,3,2,2,3,2,2,2,2,2,2,2,0,2,3,2,2,2,0,0,2,2,3,0,0,0,0,
  3,3,0,2,2,2,3,2,0,0,0,0,2,2,3,0,2,0,0,2,0,2,0,3,2,0,2,0,0,0,
  3,3,2,2,3,0,0,2,2,2,2,0,2,2,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,0,0,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,0,0,0,2,0,0,3,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_15FinnishModel =
{
  Iso_8859_15_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "ISO-8859-15"
};

const SequenceModel Windows_1252FinnishModel =
{
  Windows_1252_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "WINDOWS-1252"
};

const SequenceModel Iso_8859_4FinnishModel =
{
  Iso_8859_4_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "ISO-8859-4"
};

const SequenceModel Iso_8859_13FinnishModel =
{
  Iso_8859_13_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "ISO-8859-13"
};

const SequenceModel Iso_8859_9FinnishModel =
{
  Iso_8859_9_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "ISO-8859-9"
};

const SequenceModel Iso_8859_1FinnishModel =
{
  Iso_8859_1_CharToOrderMap,
  FinnishLangModel,
  30,
  (float)0.9985378147555799,
  PR_TRUE,
  "ISO-8859-1"
};
