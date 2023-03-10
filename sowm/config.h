#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"/home/viviana/.config/wm/dmenu.sh",      0};
const char* term[]    = {"st",             0};
const char* scrot[]   = {"/home/viviana/.config/wm/scrot.sh",            0};
const char* briup[]   = {"/home/viviana/.config/wm/subirbrillo.sh",  0};
const char* bridown[] = {"/home/viviana/.config/wm/bajarbrillo.sh",  0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* colors[]  = {"bud", "", 0};
const char* bloquear[] = {"/home/viviana/.config/wm/bloquear.sh", 0};
const char* cerrarsesion[] = {"/home/viviana/.config/wm/cerrarsesion.sh", 0};
const char* reiniciar[] = {"/home/viviana/.config/wm/reiniciar.sh", 0};
const char* apagar[] = {"/home/viviana/.config/wm/apagar.sh", 0};

static struct key keys[] = {
    {MOD,      XK_w,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_l,      run, {.com = bloquear}},
    {MOD, XK_k,  run, {.com = cerrarsesion}},
    {MOD, XK_r,  run, {.com = reiniciar}},
    {MOD, XK_a,  run, {.com = apagar}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {MOD, XK_m,     run, {.com = briup}},
    {MOD, XK_n,     run, {.com = bridown}},
    
    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
