typedef struct MMString {
	unsigned int   m_Len;
	unsigned char* m_pStr;
} MMString __attribute__(   (  aligned( 4 )  )   );

extern MMString g_MMString [];

#define MM_STRING( ID ) g_MMString[ ID ].m_pStr

// ***********************************************************************************

#define STR_DEBUG_MODE		MM_STRING(   0 )
#define STR_QUIT			MM_STRING(   1 )
#define STR_QUIT1			MM_STRING(   2 )
#define STR_RESTART			MM_STRING(   3 )
#define STR_WARN_FTP		MM_STRING(   4 )
#define STR_WARN_SNES		MM_STRING(   5 )
#define STR_WARN_GEN		MM_STRING(   6 )
#define STR_WARN_FCEU		MM_STRING(   7 )
#define STR_WARN_VBA		MM_STRING(   8 )
#define STR_WARN_FBA		MM_STRING(   9 )

#define STR_COPY0			MM_STRING(  10 )
#define STR_COPY1			MM_STRING(  11 )
#define STR_COPY2			MM_STRING(  12 )
#define STR_COPY3			MM_STRING(  13 )
#define STR_COPY4			MM_STRING(  14 )
#define STR_COPY5			MM_STRING(  15 )
#define STR_COPY6			MM_STRING(  16 )
#define STR_COPY7			MM_STRING(  17 )
#define STR_COPY8			MM_STRING(  18 )
#define STR_COPY9			MM_STRING(  19 )
#define STR_COPY10			MM_STRING(  20 )
#define STR_COPY11			MM_STRING(  21 )
#define STR_COPY12			MM_STRING(  22 )

#define STR_NETCOPY0		MM_STRING(  23 )
#define STR_NETCOPY1		MM_STRING(  24 )
#define STR_NETCOPY2		MM_STRING(  25 )
#define STR_NETCOPY3		MM_STRING(  26 )
#define STR_NETCOPY4		MM_STRING(  27 )

#define STR_MOVE0			MM_STRING(  28 )
#define STR_MOVE1			MM_STRING(  29 )
#define STR_MOVE2			MM_STRING(  30 )
#define STR_MOVE3			MM_STRING(  31 )
#define STR_MOVE4			MM_STRING(  32 )

#define STR_WARN_INET		MM_STRING(  33 )
#define STR_ERR_SRV0		MM_STRING(  34 )
#define STR_ERR_UPD0		MM_STRING(  35 )
#define STR_ERR_UPD1		MM_STRING(  36 )

#define STR_ERR_MNT			MM_STRING(  37 )
#define STR_ERR_MVGAME		MM_STRING(  38 )
#define STR_ERR_MVAV		MM_STRING(  39 )

#define STR_DOWN_UPD		MM_STRING(  40 )
#define STR_DOWN_COVER		MM_STRING(  41 )
#define STR_DOWN_FILE		MM_STRING(  42 )
#define STR_DOWN_THM		MM_STRING(  43 )

#define STR_DOWN_MSG0		MM_STRING(  44 )
#define STR_DOWN_MSG1		MM_STRING(  45 )
#define STR_DOWN_MSG2		MM_STRING(  46 )

#define STR_PARAM_VER		MM_STRING(  47 )
#define STR_LP_DATA			MM_STRING(  48 )

#define STR_SET_ACCESS		MM_STRING(  49 )
#define STR_SET_ACCESS1		MM_STRING(  50 )

#define STR_PREPROCESS		MM_STRING(  51 )

#define STR_ERR_NOSPACE0	MM_STRING(  52 )
#define STR_ERR_NOSPACE1	MM_STRING(  53 )

#define STR_ERR_NOMEM_WEB	MM_STRING(  54 )
#define STR_ERR_NOMEM		MM_STRING(  55 )

#define STR_PLEASE_WAIT		MM_STRING(  56 )
#define STR_WHATS_NEW		MM_STRING(  57 )
#define STR_NEW_VER			MM_STRING(  58 )
#define STR_NEW_VER_DL		MM_STRING(  59 )
#define STR_NEW_VER_NN		MM_STRING(  60 )
#define STR_NEW_VER_USB		MM_STRING(  61 )

#define STR_GAME_UPD1		MM_STRING(  62 )
#define STR_GAME_UPD2		MM_STRING(  63 )
#define STR_GAME_UPD3		MM_STRING(  64 )
#define STR_GAME_UPD5		MM_STRING(  65 )
#define STR_GAME_UPD6		MM_STRING(  66 )
#define STR_GAME_UPD7		MM_STRING(  67 )

#define STR_SEL_THEME		MM_STRING(  68 )
#define STR_SEL_LANG		MM_STRING(  69 )
#define STR_DEL_GAME_CACHE	MM_STRING(  70 )

#define STR_FM_GAMES		MM_STRING(  71 )
#define STR_FM_UPDATE		MM_STRING(  72 )
#define STR_FM_ABOUT		MM_STRING(  73 )
#define STR_FM_HELP			MM_STRING(  74 )
#define STR_FM_THEMES		MM_STRING(  75 )

#define STR_CM_MULDIR		MM_STRING(  76 )
#define STR_CM_MULFILE		MM_STRING(  77 )

#define STR_CM_COPY			MM_STRING(  78 )
#define STR_CM_MOVE			MM_STRING(  79 )
#define STR_CM_RENAME		MM_STRING(  80 )
#define STR_CM_DELETE		MM_STRING(  81 )
#define STR_CM_SHORTCUT		MM_STRING(  82 )
#define STR_CM_SHADOWPKG	MM_STRING(  83 )
#define STR_CM_BDMIRROR		MM_STRING(  84 )
#define STR_CM_NETHOST		MM_STRING(  85 )
#define STR_CM_HEXVIEW		MM_STRING(  86 )
#define STR_CM_PROPS		MM_STRING(  87 )
#define STR_CM_NEWDIR		MM_STRING(  88 )

#define STR_APPLY_THEME		MM_STRING(  89 )

#define STR_MM_UPDATE		MM_STRING(  90 )
#define STR_MM_UPDATE_L1	MM_STRING(  91 )
#define STR_MM_UPDATE_L2	MM_STRING(  92 )
#define STR_MM_UPDATE_L3	MM_STRING(  93 )
#define STR_MM_UPDATE_L4	MM_STRING(  94 )

#define STR_MM_REFRESH		MM_STRING(  95 )
#define STR_MM_REFRESH_L1	MM_STRING(  96 )
#define STR_MM_REFRESH_L2	MM_STRING(  97 )
#define STR_MM_REFRESH_L3	MM_STRING(  98 )
#define STR_MM_REFRESH_L4	MM_STRING(  99 )

#define STR_MM_FILEMAN		MM_STRING( 100 )
#define STR_MM_FILEMAN_L1	MM_STRING( 101 )
#define STR_MM_FILEMAN_L2	MM_STRING( 102 )
#define STR_MM_FILEMAN_L3	MM_STRING( 103 )
#define STR_MM_FILEMAN_L4	MM_STRING( 104 )

#define STR_MM_SHOW_ST		MM_STRING( 105 )
#define STR_MM_SHOW_ST_L1	MM_STRING( 106 )
#define STR_MM_SHOW_ST_L2	MM_STRING( 107 )
#define STR_MM_SHOW_ST_L3	MM_STRING( 108 )
#define STR_MM_SHOW_ST_L4	MM_STRING( 109 )

#define STR_MM_NTFS			MM_STRING( 110 )
#define STR_MM_NTFS_L1		MM_STRING( 111 )
#define STR_MM_NTFS_L2		MM_STRING( 112 )
#define STR_MM_NTFS_L3		MM_STRING( 113 )
#define STR_MM_NTFS_L4		MM_STRING( 114 )

#define STR_MM_SHOW_LK		MM_STRING( 115 )
#define STR_MM_SHOW_LK_L1	MM_STRING( 116 )
#define STR_MM_SHOW_LK_L2	MM_STRING( 117 )
#define STR_MM_SHOW_LK_L3	MM_STRING( 118 )
#define STR_MM_SHOW_LK_L4	MM_STRING( 119 )

#define STR_MM_SCRSHOT		MM_STRING( 120 )
#define STR_MM_SCRSHOT_L1	MM_STRING( 121 )
#define STR_MM_SCRSHOT_L2	MM_STRING( 122 )
#define STR_MM_SCRSHOT_L3	MM_STRING( 123 )
#define STR_MM_SCRSHOT_L4	MM_STRING( 124 )

#define STR_MM_SCRSAVE		MM_STRING( 125 )
#define STR_MM_SCRSAVE_L1	MM_STRING( 126 )
#define STR_MM_SCRSAVE_L2	MM_STRING( 127 )
#define STR_MM_SCRSAVE_L3	MM_STRING( 128 )
#define STR_MM_SCRSAVE_L4	MM_STRING( 129 )

#define STR_MM_RESTART		MM_STRING( 130 )
#define STR_MM_RESTART_L1	MM_STRING( 131 )
#define STR_MM_RESTART_L2	MM_STRING( 132 )
#define STR_MM_RESTART_L3	MM_STRING( 133 )
#define STR_MM_RESTART_L4	MM_STRING( 134 )

#define STR_MM_SETUP		MM_STRING( 135 )
#define STR_MM_SETUP_L1		MM_STRING( 136 )
#define STR_MM_SETUP_L2		MM_STRING( 137 )
#define STR_MM_SETUP_L3		MM_STRING( 138 )
#define STR_MM_SETUP_L4		MM_STRING( 139 )

#define STR_MM_QUIT			MM_STRING( 140 )
#define STR_MM_QUIT_L1		MM_STRING( 141 )
#define STR_MM_QUIT_L2		MM_STRING( 142 )
#define STR_MM_QUIT_L3		MM_STRING( 143 )
#define STR_MM_QUIT_L4		MM_STRING( 144 )

#define STR_MM_HELP			MM_STRING( 145 )
#define STR_MM_HELP_L1		MM_STRING( 146 )
#define STR_MM_HELP_L2		MM_STRING( 147 )
#define STR_MM_HELP_L3		MM_STRING( 148 )
#define STR_MM_HELP_L4		MM_STRING( 149 )

#define STR_BUT_NAV			MM_STRING( 150 )
#define STR_BUT_SELECT		MM_STRING( 151 )
#define STR_BUT_BACK		MM_STRING( 152 )
#define STR_BUT_CANCEL		MM_STRING( 153 )
#define STR_BUT_APPLY		MM_STRING( 154 )
#define STR_BUT_CONFIRM		MM_STRING( 155 )
#define STR_BUT_GENRE		MM_STRING( 156 )
#define STR_BUT_DOWNLOAD	MM_STRING( 157 )
#define STR_BUT_LOAD		MM_STRING( 158 )
#define STR_BUT_PREV		MM_STRING( 159 )
#define STR_BUT_NEXT		MM_STRING( 160 )
#define STR_BUT_LAST		MM_STRING( 161 )
#define STR_BUT_FIRST		MM_STRING( 162 )

#define STR_SEL_GENRE		MM_STRING( 163 )
#define STR_BUT_DOWN_THM	MM_STRING( 164 )

#define STR_GM_COPY			MM_STRING( 165 )
#define STR_GM_COPY_L1		MM_STRING( 166 )
#define STR_GM_COPY_L2		MM_STRING( 167 )
#define STR_GM_COPY_L3		MM_STRING( 168 )

#define STR_GM_DELETE		MM_STRING( 169 )
#define STR_GM_DELETE_L1	MM_STRING( 170 )
#define STR_GM_DELETE_L2	MM_STRING( 171 )
#define STR_GM_DELETE_L3	MM_STRING( 172 )

#define STR_GM_RENAME		MM_STRING( 173 )
#define STR_GM_RENAME_L1	MM_STRING( 174 )
#define STR_GM_RENAME_L2	MM_STRING( 175 )
#define STR_GM_RENAME_L3	MM_STRING( 176 )

#define STR_GM_UPDATE		MM_STRING( 177 )
#define STR_GM_UPDATE_L1	MM_STRING( 178 )
#define STR_GM_UPDATE_L2	MM_STRING( 179 )
#define STR_GM_UPDATE_L3	MM_STRING( 180 )

#define STR_GM_TEST			MM_STRING( 181 )
#define STR_GM_TEST_L1		MM_STRING( 182 )
#define STR_GM_TEST_L2		MM_STRING( 183 )
#define STR_GM_TEST_L3		MM_STRING( 184 )

#define STR_GM_PERM			MM_STRING( 185 )
#define STR_GM_PERM_L1		MM_STRING( 186 )
#define STR_GM_PERM_L2		MM_STRING( 187 )
#define STR_GM_PERM_L3		MM_STRING( 188 )

//XMMB Info pop-up
#define STR_POP_GS			MM_STRING( 189 )
#define STR_POP_CHANGE_S	MM_STRING( 190 )
#define STR_POP_VIEW_SYSINF	MM_STRING( 191 )
#define STR_POP_LANGUAGE	MM_STRING( 192 )
#define STR_POP_CACHE		MM_STRING( 193 )
#define STR_POP_PHOTO		MM_STRING( 194 )
#define STR_POP_MUSIC		MM_STRING( 195 )
#define STR_POP_ST			MM_STRING( 196 )
#define STR_POP_VIDEO		MM_STRING( 197 )
#define STR_POP_REF_GAMES	MM_STRING( 198 )
#define STR_POP_REF_ROMS	MM_STRING( 199 )
#define STR_POP_ROM			MM_STRING( 200 )

#define STR_POP_GRP_GENRE	MM_STRING( 201 )
#define STR_POP_GRP_EMU		MM_STRING( 202 )
#define STR_POP_GRP_NAME	MM_STRING( 203 )
#define STR_POP_SWITCH		MM_STRING( 204 )

#define STR_POP_1OF1		MM_STRING( 205 )
#define STR_POP_PLAYING		MM_STRING( 206 )
#define STR_POP_PAUSED		MM_STRING( 207 )
#define STR_POP_VOL			MM_STRING( 208 )



#define	STR_LAST_ID 209

// ***********************************************************************************

		#ifdef __cplusplus
		extern "C" {
		#endif  /* __cplusplus */

long MM_LocaleInit ( char *lang_file );
void MM_LocaleSet  ( bool mm_language );

		#ifdef __cplusplus
		}
		#endif  /* __cplusplus */


