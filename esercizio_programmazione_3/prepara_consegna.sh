#!/bin/bash

echo "Calling make clean"
make clean

echo "Creating archive for the following files:"
tar -czv -f consegna.tar.gz *
