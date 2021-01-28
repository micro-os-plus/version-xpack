[![license](https://img.shields.io/github/license/micro-os-plus/version-xpack)](https://github.com/micro-os-plus/version-xpack/blob/xpack/LICENSE)

# A source/binary xPack with the µOS++ version definitions

This project includes files <TODO>.

This README is intended to developers who plan to include this package
in their own projects.

For maintainer infos, please see the [README-MAINTAINER](README-MAINTAINER.md) file.

## Easy install

This package is available as
[`@micro-os-plus/version`](https://www.npmjs.com/package/@micro-os-plus/version)
from the `npmjs.com` registry; with [xpm](https://xpack.github.io/xpm/)
available, installing the latest version of the package is quite easy:

```console
$ cd <project>
$ xpm install @micro-os-plus/version@latest
```

This package is also available from
[GitHub](https://github.com/micro-os-plus/version-xpack):

```console
$ git clone https://github.com/micro-os-plus/version-xpack.git version-xpack.git
```

## Branches

Apart from the unused `master` branch, there are three active branches:

- `xpack`, with the latest stable version
- `xpack-develop`, with the current development version
- `originals`, with 3rd party original code (optional)

All development is done in the `xpack-develop` branch, and contributions via
Pull Requests should be directed to this branch.

When new releases are published, the `xpack-develop` branch is merged
into `xpack`.

## License

The original content is released under the
[MIT License](https://opensource.org/licenses/MIT), with all rights reserved to
[Liviu Ionescu](https://github.com/ilg-ul).
