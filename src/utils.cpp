/* This file is part of runcircos-gui.
   Copyright 2014 - 2016, Arun Narayanankutty <n.arun.lifescience@gmail.com>

   runcircos-gui is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License 2 as published by
   the Free Software Foundation. However GPL version 3, or any other GPL
   version are icompatible with this software.

   runcircos-gui is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with runcircos-gui.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "utils.h"

#include <QCoreApplication>
#include <QDir>

QString Utils::getConfigPath(const Path& path) {
  QString configpath;
  switch (path) {
    case ConfFile:
      configpath = QDir::homePath() +
          QDir::toNativeSeparators("/.runcircos-gui/runcircos-gui.conf");
      break;
    case ConfDir:
      configpath = QDir::homePath() +
          QDir::toNativeSeparators("/.runcircos-gui");
      break;
    case Manuel:
      configpath = QCoreApplication::applicationDirPath() +
          QDir::toNativeSeparators("/manuel/QRF.pdf");
      break;
    case InstallModule:
      configpath = QDir::homePath() +
          QDir::toNativeSeparators("/.runcircos-gui/installmodule.sh");
      break;
    default:
        break;
  }
  return configpath;
}
