[![GitHub package.json version](https://img.shields.io/github/package-json/v/micro-os-plus/version-xpack)](https://github.com/micro-os-plus/version-xpack/blob/xpack/package.json)
[![GitHub tag (latest by date)](https://img.shields.io/github/v/tag/micro-os-plus/version-xpack)](https://github.com/micro-os-plus/version-xpack/tags/)
[![npm (scoped)](https://img.shields.io/npm/v/@micro-os-plus/version.svg?color=blue)](https://www.npmjs.com/package/@micro-os-plus/version/)
[![license](https://img.shields.io/github/license/micro-os-plus/version-xpack)](https://github.com/micro-os-plus/version-xpack/blob/xpack/LICENSE)
[![CI on Push](https://github.com/micro-os-plus/version-xpack/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-os-plus/version-xpack/actions/workflows/ci.yml)

# A source library xPack with the µOS++ version definitions

This project provides the **version** source library as an xPack dependency
and includes a header with the µOS++ version information.

The project is hosted on GitHub as
[micro-os-plus/version-xpack](https://github.com/micro-os-plus/version-xpack).

## Maintainer info

This page is addressed to developers who plan to include this source
library into their own projects.

For maintainer info, please see the
[README-MAINTAINER](README-MAINTAINER.md) file.

## Install

As a source library xPack, the easiest way to add it to a project is via
**xpm**, but it can also be used as any Git project, for example as a submodule.

### Prerequisites

A recent [xpm](https://xpack.github.io/xpm/),
which is a portable [Node.js](https://nodejs.org/) command line application.

It is recommended to update to the latest version with:

```sh
npm install --global xpm@latest
```

For details please follow the instructions in the
[xPack install](https://xpack.github.io/install/) page.

### xpm

This package is available as
[`@micro-os-plus/version`](https://www.npmjs.com/package/@micro-os-plus/version)
from the `npmjs.com` registry:

```sh
cd my-project
xpm init # Unless a package.json is already present

xpm install @micro-os-plus/version@latest

ls -l xpacks/micro-os-plus-version
```

### Git submodule

If, for any reason, **xpm** is not available, the next recommended
solution is to link it as a Git submodule below an `xpacks` folder.

```sh
cd my-project
git init # Unless already a Git project
mkdir -p xpacks

git submodule add https://github.com/micro-os-plus/version-xpack.git \
  xpacks/micro-os-plus-version
```

## Branches

Apart from the unused `master` branch, there are two active branches:

- `xpack`, with the latest stable version (default)
- `xpack-develop`, with the current development version

All development is done in the `xpack-develop` branch, and contributions via
Pull Requests should be directed to this branch.

When new releases are published, the `xpack-develop` branch is merged
into `xpack`.

## Developer info

### Overview

This source xPack provides a header with the µOS++ version information
and the root node for the xPack configuration tree.

### Status

The **version** source library is fully functional.

### Build & integration info

The project is written in C, and it is expected
to be used in C and C++ projects.

The source code was compiled with GCC 11, clang 12, clang 13
and arm-none-eabi-gcc 11, riscv-none-elf-gcc 12, and should be warning free.

To ease the integration of this package into user projects, there
are already made CMake and meson configuration files (see below).

For other build systems, consider the following details:

#### Include folders

The following folders should be passed to the compiler during the build:

- `include`

The header files to be included in user projects are:

```c++
#include <micro-os-plus/version.h>
```

#### Source files

The source files to be added to the build are:

- none

#### Preprocessor definitions

- none

#### Compiler options

- `-std=c++20` or higher for C++ sources
- `-std=c11` for C sources

#### C++ Namespaces

- none

#### C++ Classes

- none

#### Dependencies

- none

#### CMake

To integrate the version source library into a CMake application,
add this folder to the build:

```cmake
add_subdirectory("xpacks/micro-os-plus-version")`
```

The result is an interface library that can be added as an application
dependency with:

```cmake
target_link_libraries(your-target PRIVATE

  micro-os-plus::version
)
```

#### meson

To integrate the version source library into a meson application,
add this folder to the build:

```meson
subdir('xpacks/micro-os-plus-version')
```

The result is a dependency object that can be added
to an application with:

```meson
exe = executable(
  your-target,
  link_with: [
    # Nothing, not static.
  ],
  dependencies: [
    micro_os_plus_version_dependency,
  ]
)
```

### Examples

An example showing how to use the version is
available in
[tests/src/sample-test.cpp](tests/src/sample-test.cpp).

### Known problems

- none

### Tests

TODO - add content from template when implemented

## Change log - incompatible changes

According to [semver](https://semver.org) rules:

> Major version X (X.y.z | X > 0) MUST be incremented if any
backwards incompatible changes are introduced to the public API.

The incompatible changes, in reverse chronological order,
are:

- v7.x: the current version

## License

The original content is released under the
[MIT License](https://opensource.org/licenses/MIT/),
with all rights reserved to
[Liviu Ionescu](https://github.com/ilg-ul/).
