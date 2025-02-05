/*==========================================================================
 * Project: ATasm: Atari cross-assembler
 * File: parser.c
 *
 * This is an expression parser generated by BISON A2.6, then cleaned up
 * slightly... there should be an easier way to do simple expression parsing!
 *===========================================================================
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *=========================================================================*/

#include <stdio.h>
#include <string.h>
 /*=========================================================================*/
int yylex();
void error(char* s, int tp);
extern int nums[];
extern int vnum;
int rval;
int yychar;
int yylval;
int yynerrs;
/*=========================================================================*/
static const char yytranslate[] = { 0,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 22, 2, 6, 2, 2, 11, 2, 2,
     2, 18, 16, 2, 17, 2, 19, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 7,
     5, 8, 2, 2, 4, 2, 2, 24, 2, 2,
     9, 2, 2, 2, 2, 10, 20, 21, 3, 2,
    14, 23, 2, 2, 2, 2, 15, 2, 2, 2,
    26, 2, 27, 13, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 25, 2, 2,
     2, 2, 2, 12, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     2, 2, 2, 2, 2, 1, 2
};
/*=========================================================================*/
static const short yyr1[] = { 0,
    28, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29
};
/*=========================================================================*/
static const short yyr2[] = { 0,
     1, 1, 2, 2, 2, 2, 3, 3, 3, 3,
     3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
     3, 3, 3, 3, 3
};
/*=========================================================================*/
static const short yydefact[] = { 0,
     0, 0, 0, 0, 2, 0, 1, 5, 4, 6,
     3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 24, 23, 21, 22, 17, 18, 20, 19, 8,
     7, 9, 10, 11, 12, 13, 15, 16, 14, 0,
     0, 0
};
/*=========================================================================*/
static const short yydefgoto[] = { 50,
     7
};
/*=========================================================================*/
static const short yypact[] = { 41,
    41, 41, 41, 41,-32768, 41, 65,-32768,-32768,-32768,
-32768, 27, 41, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
-32768, 82, 98, 108, 108, 108, 108, 108, 108, 115,
   115, 115, -10, -10, 32, 32,-32768,-32768,-32768, 4,
    11,-32768
};
/*=========================================================================*/
static const short yypgoto[] = {-32768,
    -1
};
/*=========================================================================*/
static const short yytable[] = { 8,
     9, 10, 11, 51, 12, 26, 27, 28, 29, 30,
    52, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 30, 1, 2, 28,
    29, 30, 0, 31, 0, 0, 0, 3, 0, 0,
     0, 4, 0, 0, 0, 5, 6, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
    26, 27, 28, 29, 30, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 28, 29, 30, 21, 22,
    23, 24, 25, 26, 27, 28, 29, 30, 24, 25,
    26, 27, 28, 29, 30
};
/*=========================================================================*/
static const short yycheck[] = { 1,
     2, 3, 4, 0, 6, 16, 17, 18, 19, 20,
     0, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 3,
     4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 7, 8, 18,
    19, 20, -1, 27, -1, -1, -1, 17, -1, -1,
    -1, 21, -1, -1, -1, 25, 26, 3, 4, 5,
     6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 4, 5, 6, 7, 8,
     9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 14, 15,
    16, 17, 18, 19, 20
};
/*=========================================================================*/
int yyparse()
{
	int yystate;
	int yyn;
	short *yyssp;
	int *yyvsp;
	int yyerrstatus;
	int yychar1 = 0;

	short yyssa[200];
	int yyvsa[200];

	short *yyss = yyssa;
	int *yyvs = yyvsa;
	int yystacksize = 200;

	int yyval = 0; /* remove annoying warning */
	int yylen;

	yystate = 0;
	yyerrstatus = 0;
	yynerrs = 0;
	yychar = -2;
	yyssp = yyss - 1;
	yyvsp = yyvs;

yynewstate:
	*++yyssp = yystate;
	if (yyssp >= yyss + yystacksize - 1)
	{
		error("Parser stack overflow", 1);
	}
	yyn = yypact[yystate];
	if (yyn == -32768)
		goto yydefault;
	if (yychar == -2)
	{
		yychar = yylex();
	}
	if (yychar <= 0)
	{
		yychar1 = 0;
		yychar = 0;
	}
	else
	{
		yychar1 = ((unsigned)(yychar) <= 257 ? yytranslate[yychar] : 30);
	}
	yyn += yychar1;
	if (yyn < 0 || yyn > 135 || yycheck[yyn] != yychar1)
		goto yydefault;
	yyn = yytable[yyn];
	if (yyn < 0)
	{
		if (yyn == -32768)
			goto yyerrlab;
		yyn = -yyn;
		goto yyreduce;
	}
	else if (yyn == 0)
		goto yyerrlab;
	if (yyn == 52)
		return (0);
	if (yychar != 0)
		yychar = -2;
	*++yyvsp = yylval;
	if (yyerrstatus)
		yyerrstatus--;
	yystate = yyn;
	goto yynewstate;


yydefault:
	yyn = yydefact[yystate];
	if (yyn == 0)
		goto yyerrlab;


yyreduce:
	yylen = yyr2[yyn];
	if (yylen > 0)
		yyval = yyvsp[1 - yylen];
	switch (yyn)
	{
	case 1:
		rval = yyvsp[0];
		break;
	case 2:
		yyval = nums[vnum++];
		break;
	case 3:
		yyval = !yyvsp[0];
		break;
	case 4:
		yyval = ((yyvsp[0]) >> 8) & 0xff;
		break;
	case 5:
		yyval = (yyvsp[0]) & 0xff;
		break;
	case 6:
		yyval = -(yyvsp[0]);
		break;
	case 7:
		yyval = yyvsp[-2] | yyvsp[0];
		break;
	case 8:
		yyval = yyvsp[-2] & yyvsp[0];
		break;
	case 9:
		yyval = yyvsp[-2] ^ yyvsp[0];
		break;
	case 10:
		yyval = yyvsp[-2] << yyvsp[0];
		break;
	case 11:
		yyval = yyvsp[-2] >> yyvsp[0];
		break;
	case 12:
		yyval = yyvsp[-2] + yyvsp[0];
		break;
	case 13:
		yyval = yyvsp[-2] - yyvsp[0];
		break;
	case 14:
		yyval = yyvsp[-2] % yyvsp[0];
		break;
	case 15:
		yyval = yyvsp[-2] * yyvsp[0];
		break;
	case 16:
		yyval = yyvsp[-2] / yyvsp[0];
		break;
	case 17:
		yyval = (yyvsp[-2] < yyvsp[0]);
		break;
	case 18:
		yyval = (yyvsp[-2] > yyvsp[0]);
		break;
	case 19:
		yyval = (yyvsp[-2] <= yyvsp[0]);
		break;
	case 20:
		yyval = (yyvsp[-2] >= yyvsp[0]);
		break;
	case 21:
		yyval = (yyvsp[-2] == yyvsp[0]);
		break;
	case 22:
		yyval = (yyvsp[-2] != yyvsp[0]);
		break;
	case 23:
		yyval = (yyvsp[-2] && yyvsp[0]);
		break;
	case 24:
		yyval = (yyvsp[-2] || yyvsp[0]);
		break;
	case 25:
		yyval = yyvsp[-1];
		break;
	}
	yyvsp -= yylen;
	yyssp -= yylen;
	*++yyvsp = yyval;
	yyn = yyr1[yyn];
	yystate = yypgoto[yyn - 28] + *yyssp;
	if (yystate >= 0 && yystate <= 135 && yycheck[yystate] == *yyssp)
		yystate = yytable[yystate];
	else
		yystate = yydefgoto[yyn - 28];
	goto yynewstate;
yyerrlab:
	if (!yyerrstatus)
	{
		++yynerrs;
		error("Error parsing expression", 1);
	}

	if (yyerrstatus == 3)
	{
		if (yychar == 0)
			return (1);
		yychar = -2;
	}
	yyerrstatus = 3;
	goto yyerrhandle;

yyerrdefault:
yyerrpop:
	if (yyssp == yyss)
		return (1);
	yyvsp--;
	yystate = *--yyssp;

yyerrhandle:
	yyn = yypact[yystate];
	if (yyn == -32768)
		goto yyerrdefault;
	yyn += 1;
	if (yyn < 0 || yyn > 135 || yycheck[yyn] != 1)
		goto yyerrdefault;
	yyn = yytable[yyn];
	if (yyn < 0)
	{
		if (yyn == -32768)
			goto yyerrpop;
		yyn = -yyn;
		goto yyreduce;
	}
	else if (yyn == 0)
		goto yyerrpop;
	if (yyn == 52)
		return (0);
	*++yyvsp = yylval;
	yystate = yyn;
	goto yynewstate;
}
/*=========================================================================*/