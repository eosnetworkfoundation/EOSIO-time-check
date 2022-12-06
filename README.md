# `EOSIO Time` smart contract
[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/eosnetworkfoundation/eosio.time/blob/main/LICENSE)
[![Antelope CDT](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/release.yml/badge.svg)](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/release.yml)
[![Blanc++ Vert](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml/badge.svg)](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml)

## Quickstart

1. Assert error if time is not passed {{time}} timestamp.
2. Transaction silently passes if the current time is passed {{time}} timestamp.

```bash
# Check time in past
$ cleos push action eosio.time checktime '["2022-09-07T00:00:00.000"]' -p eosio.time
# //=> transaction passes

# Check time in future
$ cleos push action eosio.time checktime '["2030-01-01T00:00:00.000"]' -p eosio.time
# //=> transaction fails
```

## Build

```bash
# using Antelope CDT
$ cdt-cpp eosio.time.cpp
# using Blanc++
$ blanc++ eosio.time.cpp
```

## SHA256 Checksum

**CDT**
- [Blanc++ `v0.12.0`](https://github.com/haderech/blanc/releases/tag/0.12.1)
- [Antelope CDT `v3.0.1`](https://github.com/AntelopeIO/cdt/releases/tag/v3.0.1)

```bash
$ git clone https://github.com/eosnetworkfoundation/eosio.time.git
$ cd eosio.time
$ cdt-cpp eosio.time.cpp
$ shasum -a 256 eosio.time.wasm
f7d64016a473a3f43047c19932d3df42506e7973918751cc39d863c1fb6234d0  eosio.time.wasm
```

**EOS Mainnet**

```bash
$ cleos -u https://eos.api.eosnation.io get code eosio.time
code hash: f7d64016a473a3f43047c19932d3df42506e7973918751cc39d863c1fb6234d0
```