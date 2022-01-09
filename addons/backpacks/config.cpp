class CfgPatches
{
    class Anrop_CWR3_TFAR_Compat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"cwr3_soldiers_ru", "cwr3_soldiers_us"};
        author = "Anrop";
    };
};

class CfgVehicles
{
    class cwr3_b_backpack_alice_base;
    class cwr3_b_backpack_radio: cwr3_b_backpack_alice_base
    {
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
    };

    class cwr3_o_backpack_rd54_base;
    class cwr3_o_backpack_rd54_r148: cwr3_o_backpack_rd54_base
    {
        tf_dialog = "mr3000_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
    };
};
