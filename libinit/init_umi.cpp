/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_kona.h>

static const variant_info_t umi_info = {
    .prop_key = "ro.boot.hwname",
    .prop_value = "umi",

    .brand = "Xiaomi",
    .device = "umi",
    .marketname = "Mi 10 5G",
    .model = "umi_global",
    .build_description = "redfin-user 11 RQ3A.210605.005 7349499 release-keys",
    .build_fingerprint = "google/redfin/redfin:11/RQ3A.210605.005/7349499:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    umi_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
