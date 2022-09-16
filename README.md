# `EOSIO Time` smart contract [![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/facebook/react/blob/main/LICENSE) [![EOSIO Smart Contract](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml/badge.svg)](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml)

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
# using EOSIO CDT
$ eosio-cpp eosio.time.cpp

# using Blanc++
blanc++ eosio.time.cpp
```

## SHA256 Checksum

**CDT**
- [Blanc v0.12.0](https://github.com/haderech/blanc/releases/tag/0.12.0)

```bash
$ git clone https://github.com/eosnetworkfoundation/eosio.time.git
$ ./build.sh
compiling... [eosio.time]
7ac2e166c29312513ffac260f57ff9c412f2fb009ce3b8c065b7e6c9bcb5f3ff  eosio.time.wasm
```

**EOS Mainnet**

```bash
$ cleos -u https://eos.api.eosnation.io get code time.eosn
code hash: 7ac2e166c29312513ffac260f57ff9c412f2fb009ce3b8c065b7e6c9bcb5f3ff
```