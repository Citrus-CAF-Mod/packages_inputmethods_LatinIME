/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "command_executors/info_executor.h"

#include <cstdio>

namespace latinime {
namespace dicttoolkit {

const char *const InfoExecutor::COMMAND_NAME = "info";

/* static */ int InfoExecutor::run(const int argc, char **argv) {
    fprintf(stderr, "Command '%s' has not been implemented yet.\n", COMMAND_NAME);
    return 0;
}

/* static */ void InfoExecutor::printUsage() {
    printf("*** %s\n", COMMAND_NAME);
    printf("Usage: %s\n", COMMAND_NAME);
    printf("Prints various information about a dictionary file.\n\n");
}

} // namespace dicttoolkit
} // namespace latinime
