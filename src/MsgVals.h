#ifndef	MSGVALS_H
#define	MSGVALS_H

enum MESSAGES
{
// Debug
M_TEST,

// Mainwindow
M_ABOUT = 128, M_PRINT, M_REFRESH, M_SETTINGS, M_SETTINGSQUIT, M_DETAILS, M_DETAILSQUIT, M_MAINQUIT,

// Preferences - Display
M_DRAWHEIGHTS, M_AUTOADJUST, M_FONTSIZE, M_NUMCOLS, M_VIEWTEXTINV, M_VIEWTEXTMOD, M_DRAWBORDER, M_TEXTMENUSELECT, M_ADDTEXT, M_REMOVETEXT,

// Preferences - Colors
M_MBGBUTTON, M_MDISPLAYBUTTON, M_MINFOBUTTON, M_MSTROKEBUTTON, M_MHEIGHTSBUTTON, M_MSELECTBUTTON,
M_PBGBUTTON, M_PDISPLAYBUTTON, M_PSELECTBUTTON, M_PSTROKEBUTTON, M_C1DEFAULT, M_C2DEFAULT, M_COLCHANGE_LIST, M_COLCHANGE_DETAIL,

// Preferences - General
M_SPLASHSCREEN, M_LIVEUPDATE, M_APPLY, M_APPLYSETTINGS, M_REVERT, M_TOOLTIPS, 

// Preferences - ListView
M_PREFS_LV_SELECT,

// Details
M_NEWCHAR, M_PREVPAGE, M_NEXTPAGE, M_JUMP, M_JUMPTOCHAR, M_PROPERTIESCHARPOS, M_PROPWIN_UPDATE, M_PREV_PAGE, M_NEXT_PAGE

// unsupported at the moment
//M_COPY, M_MOVE, M_DELETE, M_SAVE, M_INSTALL, M_DEINSTALL, M_AKTIVATE, M_DEAKTIVATE, M_SORTBY, M_INFORMATION, 
};

enum MESSAGES2
{
M_FFONT			= '!FNT'
};

#endif
