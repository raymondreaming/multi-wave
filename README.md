# multi-wave

High-performance C++20 foundation for the RTHMN multi-scale market engine.

The core maintains the canonical 67-level geometric price-box ladder and
per-level gradient/pivot state in fixed `std::array` storage. Processing an
observed quote performs no heap allocation. This repository is intentionally
calculation and replay only: it has no broker, network, credential, or order
execution code.

## Build

```bash
make test
make
build/multi-wave-replay prices.csv
```

The replay input accepts a single `price` column or `timestamp,price` records.

`build/multi-wave-backfill candles.jsonl boxes.jsonl` rebuilds canonical box
snapshots from the local candle schema. `build/multi-wave-server` exposes C++
health/status endpoints on localhost; set `MULTI_WAVE_CANDLES` to bootstrap it.
