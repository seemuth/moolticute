/******************************************************************************
 **  Copyright (c) Raoul Hecky. All Rights Reserved.
 **
 **  Moolticute is free software; you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation; either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Moolticute is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Foobar; if not, write to the Free Software
 **  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 **
 ******************************************************************************/
#ifndef MOOLTIPASSCMDS_H
#define MOOLTIPASSCMDS_H

#include <QObject>

//USB packet defines
// Indexes
#define MP_LEN_FIELD_INDEX      0x00
#define MP_CMD_FIELD_INDEX      0x01
#define MP_PAYLOAD_FIELD_INDEX  0x02
// Max lengths
#define MP_MAX_SERVICE_LENGTH   121
#define MP_MAX_LOGIN_LENGTH     63

//Mooltipass commands
#define MP_EXPORT_FLASH_START    0x8A
#define MP_EXPORT_FLASH          0x8B
#define MP_EXPORT_FLASH_END      0x8C
#define MP_IMPORT_FLASH_BEGIN    0x8D
#define MP_IMPORT_FLASH          0x8E
#define MP_IMPORT_FLASH_END      0x8F
#define MP_EXPORT_EEPROM_START   0x90
#define MP_EXPORT_EEPROM         0x91
#define MP_EXPORT_EEPROM_END     0x92
#define MP_IMPORT_EEPROM_BEGIN   0x93
#define MP_IMPORT_EEPROM         0x94
#define MP_IMPORT_EEPROM_END     0x95
#define MP_ERASE_EEPROM          0x96
#define MP_ERASE_FLASH           0x97
#define MP_ERASE_SMC             0x98
#define MP_DRAW_BITMAP           0x99
#define MP_SET_FONT              0x9A
#define MP_USB_KEYBOARD_PRESS    0x9B
#define MP_STACK_FREE            0x9C
#define MP_CLONE_SMARTCARD       0x9D
#define MP_DEBUG                 0xA0
#define MP_PING                  0xA1
#define MP_VERSION               0xA2
#define MP_CONTEXT               0xA3
#define MP_GET_LOGIN             0xA4
#define MP_GET_PASSWORD          0xA5
#define MP_SET_LOGIN             0xA6
#define MP_SET_PASSWORD          0xA7
#define MP_CHECK_PASSWORD        0xA8
#define MP_ADD_CONTEXT           0xA9
#define MP_SET_BOOTLOADER_PWD    0xAA
#define MP_JUMP_TO_BOOTLOADER    0xAB
#define MP_GET_RANDOM_NUMBER     0xAC
#define MP_START_MEMORYMGMT      0xAD
#define MP_IMPORT_MEDIA_START    0xAE
#define MP_IMPORT_MEDIA          0xAF
#define MP_IMPORT_MEDIA_END      0xB0
#define MP_SET_MOOLTIPASS_PARM   0xB1
#define MP_GET_MOOLTIPASS_PARM   0xB2
#define MP_RESET_CARD            0xB3
#define MP_READ_CARD_LOGIN       0xB4
#define MP_READ_CARD_PASS        0xB5
#define MP_SET_CARD_LOGIN        0xB6
#define MP_SET_CARD_PASS         0xB7
#define MP_ADD_UNKNOWN_CARD      0xB8
#define MP_MOOLTIPASS_STATUS     0xB9
#define MP_FUNCTIONAL_TEST_RES   0xBA
#define MP_SET_DATE              0xBB
#define MP_SET_UID               0xBC
#define MP_GET_UID               0xBD
#define MP_SET_DATA_SERVICE      0xBE
#define MP_ADD_DATA_SERVICE      0xBF
#define MP_WRITE_32B_IN_DN       0xC0
#define MP_READ_32B_IN_DN        0xC1
#define MP_CANCEL_USER_REQUEST   0xC3
#define MP_PLEASE_RETRY          0xC4
#define MP_READ_FLASH_NODE       0xC5
#define MP_WRITE_FLASH_NODE      0xC6
#define MP_GET_FAVORITE          0xC7
#define MP_SET_FAVORITE          0xC8
#define MP_GET_STARTING_PARENT   0xC9
#define MP_SET_STARTING_PARENT   0xCA
#define MP_GET_CTRVALUE          0xCB
#define MP_SET_CTRVALUE          0xCC
#define MP_ADD_CARD_CPZ_CTR      0xCD
#define MP_GET_CARD_CPZ_CTR      0xCE
#define MP_CARD_CPZ_CTR_PACKET   0xCF
#define MP_GET_30_FREE_SLOTS     0xD0
#define MP_GET_DN_START_PARENT   0xD1
#define MP_SET_DN_START_PARENT   0xD2
#define MP_END_MEMORYMGMT        0xD3
#define MP_SET_USER_CHANGE_NB    0xD4
#define MP_GET_DESCRIPTION       0xD5
#define MP_GET_USER_CHANGE_NB    0xD6
#define MP_SET_DESCRIPTION       0xD8
#define MP_LOCK_DEVICE           0xD9
#define MP_GET_SERIAL            0xDA

class MPParams: public QObject
{
    Q_OBJECT
public:

    enum Param
    {
        USER_PARAM_INIT_KEY_PARAM = 0,
        KEYBOARD_LAYOUT_PARAM,
        USER_INTER_TIMEOUT_PARAM,
        LOCK_TIMEOUT_ENABLE_PARAM,
        LOCK_TIMEOUT_PARAM,
        TOUCH_DI_PARAM,
        TOUCH_WHEEL_OS_PARAM_OLD,
        TOUCH_PROX_OS_PARAM,
        OFFLINE_MODE_PARAM,
        SCREENSAVER_PARAM,
        TOUCH_CHARGE_TIME_PARAM,
        TOUCH_WHEEL_OS_PARAM0,
        TOUCH_WHEEL_OS_PARAM1,
        TOUCH_WHEEL_OS_PARAM2,
        FLASH_SCREEN_PARAM,
        USER_REQ_CANCEL_PARAM,
        TUTORIAL_BOOL_PARAM,
        SCREEN_SAVER_SPEED_PARAM,
        LUT_BOOT_POPULATING_PARAM,
        KEY_AFTER_LOGIN_SEND_BOOL_PARAM,
        KEY_AFTER_LOGIN_SEND_PARAM,
        KEY_AFTER_PASS_SEND_BOOL_PARAM,
        KEY_AFTER_PASS_SEND_PARAM,
        DELAY_AFTER_KEY_ENTRY_BOOL_PARAM,
        DELAY_AFTER_KEY_ENTRY_PARAM,
        INVERTED_SCREEN_AT_BOOT_PARAM,
        MINI_OLED_CONTRAST_CURRENT_PARAM,
        MINI_LED_ANIM_MASK_PARAM,
        MINI_KNOCK_DETECT_ENABLE_PARAM,
        MINI_KNOCK_THRES_PARAM,
        LOCK_UNLOCK_FEATURE_PARAM,
        HASH_DISPLAY_FEATURE_PARAM,
        RANDOM_INIT_PIN_PARAM,
    };
    Q_ENUM(Param)
};

#endif // MOOLTIPASSCMDS_H

