/*
 * file for defining wavetables for sine, triangle, square, saw, ramp, and noise waves
 */

#ifndef WAVETABLES_H_
#define WAVETABLES_H_

char sine_wave[]=
{
	0,	//0
	3,	//1
	6,	//2
	9,	//3
	12,	//4
	15,	//5
	18,	//6
	21,	//7
	24,	//8
	27,	//9
	30,	//10
	33,	//11
	36,	//12
	39,	//13
	42,	//14
	45,	//15
	48,	//16
	51,	//17
	54,	//18
	57,	//19
	59,	//20
	62,	//21
	65,	//22
	67,	//23
	70,	//24
	73,	//25
	75,	//26
	78,	//27
	80,	//28
	82,	//29
	85,	//30
	87,	//31
	89,	//32
	91,	//33
	94,	//34
	96,	//35
	98,	//36
	100,	//37
	102,	//38
	103,	//39
	105,	//40
	107,	//41
	108,	//42
	110,	//43
	112,	//44
	113,	//45
	114,	//46
	116,	//47
	117,	//48
	118,	//49
	119,	//50
	120,	//51
	121,	//52
	122,	//53
	123,	//54
	123,	//55
	124,	//56
	125,	//57
	125,	//58
	126,	//59
	126,	//60
	126,	//61
	126,	//62
	126,	//63
	127,	//64
	126,	//65
	126,	//66
	126,	//67
	126,	//68
	126,	//69
	125,	//70
	125,	//71
	124,	//72
	123,	//73
	123,	//74
	122,	//75
	121,	//76
	120,	//77
	119,	//78
	118,	//79
	117,	//80
	116,	//81
	114,	//82
	113,	//83
	112,	//84
	110,	//85
	108,	//86
	107,	//87
	105,	//88
	103,	//89
	102,	//90
	100,	//91
	98,	//92
	96,	//93
	94,	//94
	91,	//95
	89,	//96
	87,	//97
	85,	//98
	82,	//99
	80,	//100
	78,	//101
	75,	//102
	73,	//103
	70,	//104
	67,	//105
	65,	//106
	62,	//107
	59,	//108
	57,	//109
	54,	//110
	51,	//111
	48,	//112
	45,	//113
	42,	//114
	39,	//115
	36,	//116
	33,	//117
	30,	//118
	27,	//119
	24,	//120
	21,	//121
	18,	//122
	15,	//123
	12,	//124
	9,	//125
	6,	//126
	3,	//127
	0,	//128
	-3,	//129
	-6,	//130
	-9,	//131
	-12,	//132
	-15,	//133
	-18,	//134
	-21,	//135
	-24,	//136
	-27,	//137
	-30,	//138
	-33,	//139
	-36,	//140
	-39,	//141
	-42,	//142
	-45,	//143
	-48,	//144
	-51,	//145
	-54,	//146
	-57,	//147
	-59,	//148
	-62,	//149
	-65,	//150
	-67,	//151
	-70,	//152
	-73,	//153
	-75,	//154
	-78,	//155
	-80,	//156
	-82,	//157
	-85,	//158
	-87,	//159
	-89,	//160
	-91,	//161
	-94,	//162
	-96,	//163
	-98,	//164
	-100,	//165
	-102,	//166
	-103,	//167
	-105,	//168
	-107,	//169
	-108,	//170
	-110,	//171
	-112,	//172
	-113,	//173
	-114,	//174
	-116,	//175
	-117,	//176
	-118,	//177
	-119,	//178
	-120,	//179
	-121,	//180
	-122,	//181
	-123,	//182
	-123,	//183
	-124,	//184
	-125,	//185
	-125,	//186
	-126,	//187
	-126,	//188
	-126,	//189
	-126,	//190
	-126,	//191
	-127,	//192
	-126,	//193
	-126,	//194
	-126,	//195
	-126,	//196
	-126,	//197
	-125,	//198
	-125,	//199
	-124,	//200
	-123,	//201
	-123,	//202
	-122,	//203
	-121,	//204
	-120,	//205
	-119,	//206
	-118,	//207
	-117,	//208
	-116,	//209
	-114,	//210
	-113,	//211
	-112,	//212
	-110,	//213
	-108,	//214
	-107,	//215
	-105,	//216
	-103,	//217
	-102,	//218
	-100,	//219
	-98,	//220
	-96,	//221
	-94,	//222
	-91,	//223
	-89,	//224
	-87,	//225
	-85,	//226
	-82,	//227
	-80,	//228
	-78,	//229
	-75,	//230
	-73,	//231
	-70,	//232
	-67,	//233
	-65,	//234
	-62,	//235
	-59,	//236
	-57,	//237
	-54,	//238
	-51,	//239
	-48,	//240
	-45,	//241
	-42,	//242
	-39,	//243
	-36,	//244
	-33,	//245
	-30,	//246
	-27,	//247
	-24,	//248
	-21,	//249
	-18,	//250
	-15,	//251
	-12,	//252
	-9,	//253
	-6,	//254
	-4,	//255
};

char sine_wave_ten_bit[]=
{
  0,
  3,
  6,
  9,
  12,
  15,
  18,
  21,
  25,
  28,
  31,
  34,
  37,
  40,
  43,
  47,
  50,
  53,
  56,
  59,
  62,
  65,
  68,
  72,
  75,
  78,
  81,
  84,
  87,
  90,
  93,
  96,
  99,
  102,
  106,
  109,
  112,
  115,
  118,
  121,
  124,
  127,
  130,
  133,
  136,
  139,
  142,
  145,
  148,
  151,
  154,
  157,
  160,
  163,
  166,
  169,
  172,
  175,
  178,
  181,
  184,
  187,
  190,
  193,
  195,
  198,
  201,
  204,
  207,
  210,
  213,
  216,
  218,
  221,
  224,
  227,
  230,
  233,
  235,
  238,
  241,
  244,
  246,
  249,
  252,
  255,
  257,
  260,
  263,
  265,
  268,
  271,
  273,
  276,
  279,
  281,
  284,
  287,
  289,
  292,
  294,
  297,
  299,
  302,
  304,
  307,
  310,
  312,
  314,
  317,
  319,
  322,
  324,
  327,
  329,
  332,
  334,
  336,
  339,
  341,
  343,
  346,
  348,
  350,
  353,
  355,
  357,
  359,
  362,
  364,
  366,
  368,
  370,
  372,
  375,
  377,
  379,
  381,
  383,
  385,
  387,
  389,
  391,
  393,
  395,
  397,
  399,
  401,
  403,
  405,
  407,
  409,
  411,
  413,
  414,
  416,
  418,
  420,
  422,
  423,
  425,
  427,
  429,
  430,
  432,
  434,
  435,
  437,
  439,
  440,
  442,
  443,
  445,
  447,
  448,
  450,
  451,
  453,
  454,
  455,
  457,
  458,
  460,
  461,
  462,
  464,
  465,
  466,
  468,
  469,
  470,
  471,
  473,
  474,
  475,
  476,
  477,
  478,
  479,
  481,
  482,
  483,
  484,
  485,
  486,
  487,
  488,
  489,
  489,
  490,
  491,
  492,
  493,
  494,
  495,
  495,
  496,
  497,
  498,
  498,
  499,
  500,
  500,
  501,
  502,
  502,
  503,
  503,
  504,
  504,
  505,
  505,
  506,
  506,
  507,
  507,
  508,
  508,
  508,
  509,
  509,
  509,
  510,
  510,
  510,
  510,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  511,
  510,
  510,
  510,
  510,
  509,
  509,
  509,
  508,
  508,
  508,
  507,
  507,
  506,
  506,
  505,
  505,
  504,
  504,
  503,
  503,
  502,
  502,
  501,
  500,
  500,
  499,
  498,
  498,
  497,
  496,
  495,
  495,
  494,
  493,
  492,
  491,
  490,
  489,
  489,
  488,
  487,
  486,
  485,
  484,
  483,
  482,
  481,
  479,
  478,
  477,
  476,
  475,
  474,
  473,
  471,
  470,
  469,
  468,
  466,
  465,
  464,
  462,
  461,
  460,
  458,
  457,
  455,
  454,
  453,
  451,
  450,
  448,
  447,
  445,
  443,
  442,
  440,
  439,
  437,
  435,
  434,
  432,
  430,
  429,
  427,
  425,
  423,
  422,
  420,
  418,
  416,
  414,
  413,
  411,
  409,
  407,
  405,
  403,
  401,
  399,
  397,
  395,
  393,
  391,
  389,
  387,
  385,
  383,
  381,
  379,
  377,
  375,
  372,
  370,
  368,
  366,
  364,
  362,
  359,
  357,
  355,
  353,
  350,
  348,
  346,
  343,
  341,
  339,
  336,
  334,
  332,
  329,
  327,
  324,
  322,
  319,
  317,
  314,
  312,
  310,
  307,
  304,
  302,
  299,
  297,
  294,
  292,
  289,
  287,
  284,
  281,
  279,
  276,
  273,
  271,
  268,
  265,
  263,
  260,
  257,
  255,
  252,
  249,
  246,
  244,
  241,
  238,
  235,
  233,
  230,
  227,
  224,
  221,
  218,
  216,
  213,
  210,
  207,
  204,
  201,
  198,
  195,
  193,
  190,
  187,
  184,
  181,
  178,
  175,
  172,
  169,
  166,
  163,
  160,
  157,
  154,
  151,
  148,
  145,
  142,
  139,
  136,
  133,
  130,
  127,
  124,
  121,
  118,
  115,
  112,
  109,
  106,
  102,
  99,
  96,
  93,
  90,
  87,
  84,
  81,
  78,
  75,
  72,
  68,
  65,
  62,
  59,
  56,
  53,
  50,
  47,
  43,
  40,
  37,
  34,
  31,
  28,
  25,
  21,
  18,
  15,
  12,
  9,
  6,
  3,
  0,
  -3,
  -6,
  -9,
  -12,
  -15,
  -18,
  -21,
  -25,
  -28,
  -31,
  -34,
  -37,
  -40,
  -43,
  -47,
  -50,
  -53,
  -56,
  -59,
  -62,
  -65,
  -68,
  -72,
  -75,
  -78,
  -81,
  -84,
  -87,
  -90,
  -93,
  -96,
  -99,
  -102,
  -106,
  -109,
  -112,
  -115,
  -118,
  -121,
  -124,
  -127,
  -130,
  -133,
  -136,
  -139,
  -142,
  -145,
  -148,
  -151,
  -154,
  -157,
  -160,
  -163,
  -166,
  -169,
  -172,
  -175,
  -178,
  -181,
  -184,
  -187,
  -190,
  -193,
  -195,
  -198,
  -201,
  -204,
  -207,
  -210,
  -213,
  -216,
  -218,
  -221,
  -224,
  -227,
  -230,
  -233,
  -235,
  -238,
  -241,
  -244,
  -246,
  -249,
  -252,
  -255,
  -257,
  -260,
  -263,
  -265,
  -268,
  -271,
  -273,
  -276,
  -279,
  -281,
  -284,
  -287,
  -289,
  -292,
  -294,
  -297,
  -299,
  -302,
  -304,
  -307,
  -310,
  -312,
  -314,
  -317,
  -319,
  -322,
  -324,
  -327,
  -329,
  -332,
  -334,
  -336,
  -339,
  -341,
  -343,
  -346,
  -348,
  -350,
  -353,
  -355,
  -357,
  -359,
  -362,
  -364,
  -366,
  -368,
  -370,
  -372,
  -375,
  -377,
  -379,
  -381,
  -383,
  -385,
  -387,
  -389,
  -391,
  -393,
  -395,
  -397,
  -399,
  -401,
  -403,
  -405,
  -407,
  -409,
  -411,
  -413,
  -414,
  -416,
  -418,
  -420,
  -422,
  -423,
  -425,
  -427,
  -429,
  -430,
  -432,
  -434,
  -435,
  -437,
  -439,
  -440,
  -442,
  -443,
  -445,
  -447,
  -448,
  -450,
  -451,
  -453,
  -454,
  -455,
  -457,
  -458,
  -460,
  -461,
  -462,
  -464,
  -465,
  -466,
  -468,
  -469,
  -470,
  -471,
  -473,
  -474,
  -475,
  -476,
  -477,
  -478,
  -479,
  -481,
  -482,
  -483,
  -484,
  -485,
  -486,
  -487,
  -488,
  -489,
  -489,
  -490,
  -491,
  -492,
  -493,
  -494,
  -495,
  -495,
  -496,
  -497,
  -498,
  -498,
  -499,
  -500,
  -500,
  -501,
  -502,
  -502,
  -503,
  -503,
  -504,
  -504,
  -505,
  -505,
  -506,
  -506,
  -507,
  -507,
  -508,
  -508,
  -508,
  -509,
  -509,
  -509,
  -510,
  -510,
  -510,
  -510,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -511,
  -510,
  -510,
  -510,
  -510,
  -509,
  -509,
  -509,
  -508,
  -508,
  -508,
  -507,
  -507,
  -506,
  -506,
  -505,
  -505,
  -504,
  -504,
  -503,
  -503,
  -502,
  -502,
  -501,
  -500,
  -500,
  -499,
  -498,
  -498,
  -497,
  -496,
  -495,
  -495,
  -494,
  -493,
  -492,
  -491,
  -490,
  -489,
  -489,
  -488,
  -487,
  -486,
  -485,
  -484,
  -483,
  -482,
  -481,
  -479,
  -478,
  -477,
  -476,
  -475,
  -474,
  -473,
  -471,
  -470,
  -469,
  -468,
  -466,
  -465,
  -464,
  -462,
  -461,
  -460,
  -458,
  -457,
  -455,
  -454,
  -453,
  -451,
  -450,
  -448,
  -447,
  -445,
  -443,
  -442,
  -440,
  -439,
  -437,
  -435,
  -434,
  -432,
  -430,
  -429,
  -427,
  -425,
  -423,
  -422,
  -420,
  -418,
  -416,
  -414,
  -413,
  -411,
  -409,
  -407,
  -405,
  -403,
  -401,
  -399,
  -397,
  -395,
  -393,
  -391,
  -389,
  -387,
  -385,
  -383,
  -381,
  -379,
  -377,
  -375,
  -372,
  -370,
  -368,
  -366,
  -364,
  -362,
  -359,
  -357,
  -355,
  -353,
  -350,
  -348,
  -346,
  -343,
  -341,
  -339,
  -336,
  -334,
  -332,
  -329,
  -327,
  -324,
  -322,
  -319,
  -317,
  -315,
  -312,
  -310,
  -307,
  -305,
  -302,
  -299,
  -297,
  -294,
  -292,
  -289,
  -287,
  -284,
  -281,
  -279,
  -276,
  -273,
  -271,
  -268,
  -265,
  -263,
  -260,
  -257,
  -255,
  -252,
  -249,
  -246,
  -244,
  -241,
  -238,
  -235,
  -233,
  -230,
  -227,
  -224,
  -221,
  -218,
  -216,
  -213,
  -210,
  -207,
  -204,
  -201,
  -198,
  -195,
  -193,
  -190,
  -187,
  -184,
  -181,
  -178,
  -175,
  -172,
  -169,
  -166,
  -163,
  -160,
  -157,
  -154,
  -151,
  -148,
  -145,
  -142,
  -139,
  -136,
  -133,
  -130,
  -127,
  -124,
  -121,
  -118,
  -115,
  -112,
  -109,
  -106,
  -102,
  -99,
  -96,
  -93,
  -90,
  -87,
  -84,
  -81,
  -78,
  -75,
  -72,
  -68,
  -65,
  -62,
  -59,
  -56,
  -53,
  -50,
  -47,
  -43,
  -40,
  -37,
  -34,
  -31,
  -28,
  -25,
  -21,
  -18,
  -15,
  -12,
  -9,
  -6,
  -3
};

#endif
