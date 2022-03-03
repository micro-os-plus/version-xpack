/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

#ifndef MICRO_OS_PLUS_VERSION_H_
#define MICRO_OS_PLUS_VERSION_H_

// ----------------------------------------------------------------------------

// According to Semantic Versioning 2.0.0 (http://semver.org),
// given a version number MAJOR.MINOR.PATCH, increment the:
//
// MAJOR version when you make incompatible API changes,
// MINOR version when you add functionality in a backwards-compatible manner,
// PATCH version when you make backwards-compatible bug fixes,
// PRE_RELEASE is a hyphen and a series of dot separated identifiers,
// BUILD a plus sign and a series of dot separated identifiers.

// ----------------------------------------------------------------------------

#define MICRO_OS_PLUS_MACRO_SHARP(x) #x
#define MICRO_OS_PLUS_MACRO_STRINGIFY(x) MICRO_OS_PLUS_MACRO_SHARP (x)

// ----------------------------------------------------------------------------

// µOS++ version.
#define MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_MAJOR 7
#define MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_MINOR 1
#define MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_PATCH 2
// #define MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION_PRE_RELEASE ""
#define MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION_PRE_RELEASE "-beta"
#define MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION_BUILD ""

#define MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_YEAR 2022
#define MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_YEAR \
  MICRO_OS_PLUS_MACRO_STRINGIFY (MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_YEAR)

#define MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION \
  MICRO_OS_PLUS_MACRO_STRINGIFY ( \
      MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_MAJOR) \
  "." MICRO_OS_PLUS_MACRO_STRINGIFY (MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_MINOR) "." MICRO_OS_PLUS_MACRO_STRINGIFY ( \
      MICRO_OS_PLUS_INTEGER_MICRO_OS_PLUS_VERSION_PATCH) \
      MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION_PRE_RELEASE \
          MICRO_OS_PLUS_STRING_MICRO_OS_PLUS_VERSION_BUILD

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_VERSION_H_

// ----------------------------------------------------------------------------
