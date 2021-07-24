/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_kona.h>

static const variant_info_t umi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "umi",
    .marketname = "Mi 10 5G",
    .model = "umi_global",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    umi_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
