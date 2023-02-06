#!/bin/bash
for pkgName in $(cat packages.txt

do
  paru -S  --noconfirm $pkgName
done
echo "Reinstalled all packages."
