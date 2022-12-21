#include <wups.h>
#include <nn/spm.h>

WUPS_PLUGIN_NAME("UStealthPlugin");
WUPS_PLUGIN_DESCRIPTION("Stops the Wii U menu from complaining about \"PC formatted\" drives");
WUPS_PLUGIN_VERSION("v1.0");
WUPS_PLUGIN_AUTHOR("GaryOderNichts");
WUPS_PLUGIN_LICENSE("MIT");

DECL_FUNCTION(int32_t, IsStorageMaybePcFormatted, bool* isPcFormatted, nn::spm::StorageIndex* index)
{
    // Make sure the index is valid
    int32_t res = real_IsStorageMaybePcFormatted(isPcFormatted, index);
    if (res == 0) {
        // always return false which makes the Wii U menu stop nagging about this drive
        *isPcFormatted = false;
    }

    return res;
}

// Only replace for the Wii U Menu
WUPS_MUST_REPLACE_FOR_PROCESS(IsStorageMaybePcFormatted, WUPS_LOADER_LIBRARY_NN_SPM, IsStorageMaybePcFormatted__Q2_2nn3spmFPbQ3_2nn3spm12StorageIndex, WUPS_FP_TARGET_PROCESS_WII_U_MENU);
