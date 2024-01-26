#! /bin/bash

if ! [[ -x fact ]]; then
    echo "fact executable does not exist"
    exit 1
fi

../../tester/run-tests.sh -v $*


