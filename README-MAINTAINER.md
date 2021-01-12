[![license](https://img.shields.io/github/license/<organization>/version-xpack)](https://github.com/<organization>/version-xpack/blob/xpack/LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/<organization>/version-xpack.svg)](https://github.com/<organization>/version-xpack/issues)
[![GitHub pulls](https://img.shields.io/github/issues-pr/<organization>/version-xpack.svg)](https://github.com/<organization>/version-xpack/pulls)

# Maintainer info

## Project repository

The project is hosted on GitHub:

- https://github.com/<organization>/version-xpack.git

To clone it:

```
git clone https://github.com/<organization>/version-xpack.git template-xpack.git
```

## Prerequisites

A recent [xpm](https://xpack.github.io/xpm/), which is a portable
[Node.js](https://nodejs.org/) command line application.

## Publish to npmjs.com

- select the `xpack-develop` branch
- commit all changes
- update `CHANGELOG.md`; commit with a message like _CHANGELOG: prepare v1.2.3_
- `npm pack` and check the content of the archive, which should list
  only the `package.json`, the `README.md`, `LICENSE` and `CHANGELOG.md`;
  possibly adjust `.npmignore`
- `npm version patch`, `npm version minor`, `npm version major`
- push the `xpack-develop` branch to GitHub
- `npm publish --tag next` (use `--access public` when publishing for
  the first time)

The version is visible at:

- https://www.npmjs.com/package/@micro-os-plus/version?activeTab=versions

## Test

Test the package.

## Update the repo

When the package is considered stable:

- with Sourcetree
- merge `xpack-develop` into `xpack`
- push to GitHub

## Tag the npm package as `latest`

When the release is considered stable, promote it as `latest`:

- `npm dist-tag ls @micro-os-plus/version`
- `npm dist-tag add @micro-os-plus/version@1.2.3 latest`
- `npm dist-tag ls @@micro-os-plus/version`

## Announce to the community

Post an announcement to the forum or on Twitter.
