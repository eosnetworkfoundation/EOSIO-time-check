#!/bin/bash

echo "compiling... [eosio.time]"
blanc++ eosio.time.cpp
shasum -a 256 eosio.time.wasm
