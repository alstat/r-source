/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 1998--2008  R Development Core Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, a copy is available at
 *  http://www.r-project.org/Licenses/
 */

#ifndef COLORS_H_
#define COLORS_H_

/* This is a private header, possibly temporary */

#define COLOR_TABLE_SIZE 1024

/* always remap private functions */
#define char2col		Rf_char2col
#define CheckColor		Rf_CheckColor
#define isNAcol			Rf_isNAcol
#define labelformat		Rf_labelformat
#define name2col		Rf_name2col
#define number2col		Rf_number2col
#define rgb2col			Rf_rgb2col
#define RGB2rgb			Rf_RGB2rgb
#define RGBA2rgb		Rf_RGBA2rgb
#define ScaleColor		Rf_ScaleColor
#define StrMatch		Rf_StrMatch

/* hsv2rgb and rgb2hsv are in Utils.h */

		/* Miscellaneous (from colors.c) */

unsigned int rgb2col(const char *);
unsigned int name2col(const char *);
unsigned int number2col(const char *);
unsigned int char2col(const char *);/* rgb2col() or name2col() */
unsigned int ScaleColor(double x);
unsigned int CheckColor(int x);
Rboolean isNAcol(SEXP col, int index, int ncol);

char *RGB2rgb(unsigned int, unsigned int, unsigned int);
char *RGBA2rgb(unsigned int, unsigned int, unsigned int, unsigned int);

int StrMatch(const char *s, const char *t);

#endif

