// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.
//FPM v3.1.5 P+FR 1.3.3 &

#include <string>
#include "Common/Version.h"
#include "Common/scmrev.h"

namespace Common
{
#define VERSION_STR "P+ v3.1.5 P+FR 1.5.2" 
#ifdef _DEBUG
#define BUILD_TYPE_STR "Debug "
#elif defined DEBUGFAST
#define BUILD_TYPE_STR "DebugFast "
#else
#define BUILD_TYPE_STR ""
#endif

const std::string scm_rev_str = "Ishiiruka-Dolphin"

#ifdef __INTEL_COMPILER
" " BUILD_TYPE_STR " " VERSION_STR "-ICC";
#else
" " BUILD_TYPE_STR " " VERSION_STR;
#endif

// On remplace SCM_REV_STR par ton hash en dur
const std::string scm_rev_git_str = "22e0c13e61691423575b3223dcd8fd821fdc4003";
const std::string scm_rev_cache_str = "202007302245";

const std::string scm_desc_str = VERSION_STR; 

const std::string scm_branch_str = "master";
const std::string scm_distributor_str = "Ishiiruka-P-FR";

#ifdef _WIN32
const std::string netplay_dolphin_ver = VERSION_STR " Win";
#elif __APPLE__
const std::string netplay_dolphin_ver = VERSION_STR " Mac";
#else
const std::string netplay_dolphin_ver = VERSION_STR " Lin";
#endif


}
