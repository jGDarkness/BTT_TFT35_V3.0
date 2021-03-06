#ifndef _TFT_480_320_H_
#define _TFT_480_320_H_

#define LCD_WIDTH  480
#define LCD_HEIGHT 320

#ifndef BYTE_HEIGHT
  #define BYTE_HEIGHT 24
#endif
#ifndef BYTE_WIDTH
  #define BYTE_WIDTH  (BYTE_HEIGHT / 2)
#endif

#ifndef LARGE_BYTE_HEIGHT
  #define LARGE_BYTE_HEIGHT 32
#endif
#ifndef LARGE_BYTE_WIDTH
  #define LARGE_BYTE_WIDTH  18
#endif

#define ICON_WIDTH   95
#define ICON_HEIGHT  95
#define TITLE_END_Y  40                  // title height
#define ICON_START_Y (TITLE_END_Y + 10)  // top margin

#define LIST_ICON_WIDTH  85
#define LIST_ICON_HEIGHT 70

#define INFOBOX_WIDTH    215
#define INFOBOX_HEIGHT   95

#define SMALLICON_WIDTH  65
#define SMALLICON_HEIGHT 55

// Status Screen menu
#define SS_ICON_WIDTH            ICON_WIDTH
#define SS_ICON_HEIGHT           ICON_HEIGHT
#define SS_ICON_COUNT            4
#define SS_ICON_NAME_Y0          7
#define SS_ICON_VAL_Y0           75
#define STATUS_MSG_ICON_XOFFSET  5
#define STATUS_MSG_ICON_YOFFSET  5
#define STATUS_MSG_TITLE_XOFFSET 5
#define STATUS_MSG_BODY_XOFFSET  0
#define STATUS_MSG_BODY_YOFFSET  59
#define STATUS_MSG_BODY_BOTTOM   6
#define STATUS_GANTRY_YOFFSET    6

#define SS_ICON_TITLE_FONT_SIZE FONT_SIZE_NORMAL
#define SS_ICON_VAL_FONT_SIZE   FONT_SIZE_NORMAL

// Preheat menu
#define PREHEAT_TITLE_Y 4
#define PREHEAT_TOOL_Y  43
#define PREHEAT_BED_Y   74

// Printing menu
#define PS_ICON_LG_WIDTH  154
#define PS_ICON_SM_WIDTH  121
#define PS_ICON_HEIGHT    50
#define PS_ICON_SPACE_X   ((LCD_WIDTH - PS_ICON_LG_WIDTH * 2 - PS_ICON_SM_WIDTH - SPACE_X) / 2)
#define PS_ICON_SPACE_Y   ((ICON_HEIGHT + SPACE_Y - PS_ICON_HEIGHT * 2) / 4)
#define PS_ICON_START_Y   (TITLE_END_Y + 5)
#define PS_ICON_TITLE_X   52
#define PS_ICON_TITLE_Y   1
#define PS_ICON_VAL_X     PS_ICON_TITLE_X
#define PS_ICON_VAL_Y     (PS_ICON_HEIGHT / 2)
#define PS_ICON_VAL_LG_EX 150
#define PS_ICON_VAL_SM_EX 117

// Popup menu
#define POPUP_RECT_WINDOW         {SPACE_X * 2, TITLE_END_Y, LCD_WIDTH - SPACE_X * 2, LCD_HEIGHT - SPACE_Y}
#define POPUP_TITLE_HEIGHT        40
#define POPUP_BOTTOM_HEIGHT       60
#define POPUP_BUTTON_HEIGHT       50
#define POPUP_RECT_SINGLE_CONFIRM {175, LCD_HEIGHT - SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, 305, LCD_HEIGHT - SPACE_Y - 5}
#define POPUP_RECT_DOUBLE_CONFIRM {85,  LCD_HEIGHT - SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, 225, LCD_HEIGHT - SPACE_Y - 5}
#define POPUP_RECT_DOUBLE_CANCEL  {255, LCD_HEIGHT - SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, 395, LCD_HEIGHT - SPACE_Y - 5}

// The offset of the model preview icon in the gcode file
#define MODEL_PREVIEW_OFFSET 0xC529

#endif
