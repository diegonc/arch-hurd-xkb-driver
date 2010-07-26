# Contributor: Diego Nieto Cid <dnietoc@gmail.com>

# vim: set ts=4 noet sw=4:

pkgname=console-driver-xkb-git
pkgver=0.008
pkgrel=1
pkgdesc="An input driver for the console that supports XKB layouts."
arch=('i686')
url="http://www.xs4all.nl/~mgerards/"
license=('GPL')
depends=('hurd' 'xkeyboard-config')
makedepends=('git' 'mig')
groups=()
options=('!libtool')
source=()

_gitroot=git://github.com/diegonc/arch-hurd-xkb-driver.git
_gitname=xkb-driver-git
_gitbranch="--branch update-xkb-parser"

build() {
	cd "$srcdir"
	msg "Connecting to GIT server...."

	if [ -d $_gitname ] ; then
		cd $_gitname && git pull origin
		msg "The local files are updated."
	else
		git clone $_gitbranch $_gitroot $_gitname
	fi

	msg "GIT checkout done or server timeout"
	msg "Starting make..."

	rm -rf "$srcdir/$_gitname-build"
	git clone "$srcdir/$_gitname" "$srcdir/$_gitname-build"
	cd "$srcdir/$_gitname-build"

	#
	# BUILD HERE
	#
	make || return 1
}

package()
{
	cd "$srcdir/$_gitname-build"
	make DESTDIR="$pkgdir/" install
}
