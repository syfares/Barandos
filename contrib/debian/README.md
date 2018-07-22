
Debian
====================
This directory contains files used to package barandosd/barandos-qt
for Debian-based Linux systems. If you compile barandosd/barandos-qt yourself, there are some useful files here.

## barandos: URI support ##


barandos-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install barandos-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your barandosqt binary to `/usr/bin`
and the `../../share/pixmaps/barandos128.png` to `/usr/share/pixmaps`

barandos-qt.protocol (KDE)

