#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
/*****************************************************************************
* OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
*
* OpenRCT2 is the work of many authors, a full list can be found in contributors.md
* For more information, visit https://github.com/OpenRCT2/OpenRCT2
*
* OpenRCT2 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* A full copy of the GNU General Public License can be found in licence.txt
*****************************************************************************/
#pragma endregion

#if defined(__psp2__)

// #include <limits.h>
// #include <pwd.h>
#include "../core/Path.hpp"
#include "../core/Util.hpp"
#include "../OpenRCT2.h"
#include "platform.h"
#include "Platform2.h"

namespace Platform
{
    std::string GetFolderPath(SPECIAL_FOLDER folder)
    {
        switch (folder)
        {
        case SPECIAL_FOLDER::USER_CACHE:
        case SPECIAL_FOLDER::USER_CONFIG:
        case SPECIAL_FOLDER::USER_DATA:
            {
                auto path = "ux0:data/OpenRCT2";
                return path;
            }

        default:
            return std::string();
        }
    }

    std::string GetDocsPath()
    {

        return std::string();
    }

    static std::string FindInstallPath()
    {
        return std::string("ux0:data/RCT2");
    }

    static std::string GetCurrentWorkingDirectory()
    {
        return std::string("ux0:data/OpenRCT2");
    }

    std::string GetInstallPath()
    {
        auto path = std::string("ux0:data/OpenRCT2");

        return path;
    }

    std::string GetCurrentExecutablePath()
    {
        return "app0:";
    }
}

#endif
