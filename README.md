# `EOSIO Time` smart contract [![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/facebook/react/blob/main/LICENSE) [![EOSIO Smart Contract](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml/badge.svg)](https://github.com/eosnetworkfoundation/eosio.time/actions/workflows/tests.yml)

## Quickstart

1. Assert error if time is prior to {{time}} timestamp.
2. Transaction silently passes if current time is past {{time}} timestamp.

```bash
# Check time in past
$ cleos push action eosio.time checktime '["2022-09-07T00:00:00"]' -p eosio.time
# //=> transaction passes

# Check time in future
$ cleos push action eosio.time checktime '["2030-01-01T00:00:00"]' -p eosio.time
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
d3333939d82a25f7bf0d9c83a805bfb7efb438ddc0b5567e35e7531b7734c700  eosio.time.wasm
```

**EOS Mainnet**

```bash
$ cleos -u https://eos.api.eosnation.io get code time.eosn
code hash: d3333939d82a25f7bf0d9c83a805bfb7efb438ddc0b5567e35e7531b7734c700
```