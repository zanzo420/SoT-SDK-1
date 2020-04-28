#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetParrot.BP_Anim_PetParrot_C
// 0x4EB0 (0x5730 - 0x0880)
class UBP_Anim_PetParrot_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_21CD194741A6E61FC58A21810E5A6526;      // 0x0888(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7FE73C74593131C3F60ADA71AC7B8A1;// 0x08D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x0910(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_333A7D1F4100179BF59938B655F1AF2F;// 0x0950(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3FB3D2943E676833683C4A85ED2E535;// 0x0990(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x09D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x0A10(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBC05B55412A10BCACFC43BE805833C8;// 0x0A50(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0AB0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E9A94AA34479C5459D750AA0C0641462;// 0x0AF8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_049251C04E6ED15EADDA4FB3E0EDA8FD;// 0x0B48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0B90(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5FE5159547262445830498BE2823DF85;// 0x0BD0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0C30(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1D1368E448D32C49EE3BD38737DED855;// 0x0C78(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7D07013A4D5EE36839243F9817E3BCA0;// 0x0CC0(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_56D9B70046F08F5F8F0D81AA161A1B13;// 0x0D50(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0E3F7B24F0234AECA989CA00A8C885B;// 0x0D98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B14539584BFCE276D019FEAECC855CE2;// 0x0DD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2DF3E3904E4F6301BAE3AFAF6F43D35C;// 0x0E18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7F3B60241ED331082E83FA0441022E5;// 0x0E58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1661785B4F68BD2829F17782D128CE45;// 0x0E98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E;// 0x0ED8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A12F59C24C7F61D41F89A38C6002F12D;// 0x0F18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD62F3E94A7F7721F9AA41A5E0A9216A;// 0x0F58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EC04F824CF6CC32ABBF7882475B199C;// 0x0F98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37AE67C74B10BC236369668534DE05F1;// 0x0FD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43E3AC6249652231BCB6029263CCB05F;// 0x1018(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E3E49CA44EFF8D6C037CEBB16FC47E0;// 0x1058(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CC6C16E4E05DD1003CC4A9DF57EC60F;// 0x1098(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC916AD94FBAAF5656B7A682B1AC9F5B;// 0x10D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98A1C6CB4962958B60E2208DB4FE2FD0;// 0x1118(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94F406CE48A82A4A68A38196E3A4EA79;// 0x1158(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7ED235FB41CF8AA203E5648C9E0F8B2D;// 0x1198(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F37CC684E640063F02DADA7F082BF53;// 0x11D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F73A5AD4B193B0F5724418C6F884D58;// 0x1218(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_852B99A143D18E9FE5A18D8CEC85441F;// 0x1258(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x1298(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x12D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x1318(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x1358(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6C1341F4E40AF1D33E487B1771E0E48;// 0x1398(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x13F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB2DD15747BB8D954314CC809A153F32;// 0x1440(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x14A0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x14E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x1530(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x15D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82DE1D1E429B3EC3803BB9B77E62073B2;// 0x1620(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB242;// 0x1680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45B3618441D8FD82DABFA5ABB88F6D77;// 0x16C8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x1728(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_040125664F055143CA83418D57C62CEE;// 0x1770(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9437995F495BE9BC1B82C987324C1D052;// 0x1880(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9A2ACE345E61BDC655B7FB49CA5E7DC2;// 0x18C8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3345D7C54E122D212C2F698F9C4C25C92;// 0x1970(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05FB639A4C979BB9D42E8498BD33A06C;// 0x19B8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_243E415443B11B516E8F8880DE967696;// 0x1A18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D7874854273F40A740DB1B388B4F036;// 0x1A60(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B2F471B2438350E521D031893FA3A01C;// 0x1AC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82DE1D1E429B3EC3803BB9B77E62073B;// 0x1B08(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB24;// 0x1B68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5360DDD74AF16358B592D6907865F970;// 0x1BB0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FBEAE04D4AB8C11998F58D9FFB4A06CE;// 0x1C10(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_869BDE454EC3FDE558111E8BFAE93151;// 0x1C58(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_22507F1848562A1AF224979F2B8CBBC0;// 0x1D08(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_68B0B730433874A6E2DA94A779FC3D2C;// 0x1D40(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D9F5F2DF45BCD8BAB7BF0BBB4F9AAA51;// 0x1DB0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A570137F425B84EF962CDBA5A1E6A176;// 0x1E60(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4795AAAD43B2A17B1AF232ADB1825AFF;// 0x1EC0(0x0110)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4ED67A614F16E145C86CBEA35196136F;// 0x1FD0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9437995F495BE9BC1B82C987324C1D05;// 0x2030(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9A2ACE345E61BDC655B7FB49CA5E7DC;// 0x2078(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3345D7C54E122D212C2F698F9C4C25C9;// 0x2120(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9;// 0x2168(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811;// 0x21A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82789DF6458F01D5F556D390F90B6167;// 0x21E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A873C5F4C4B86926131DDA61C3F42AF;// 0x2248(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A52C1B843AA6FC07B001CB2296F0AD4;// 0x2290(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B77202;// 0x22F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BC15BAED48E24F4CC719068E38D0E302;// 0x2338(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x23E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x2428(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x24D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x2518(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x2558(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x2598(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x25D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x2618(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x2658(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x2698(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x26D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x2718(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x2758(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B22D996E4BFD02ACAD48E58239301DD0;// 0x2798(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x27F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E92373E497D50CFD489448E1BDF0D93;// 0x2840(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x28A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6163DC4E459F0AD936DD169E739389EC;// 0x28E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x2948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E286CF840D7D3012D78F2A626CC7267;// 0x2990(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x29F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x2A38(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_703599584DEBCDCA2860DF8A1338CBAE;// 0x2A78(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x2AB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3E570EAF43DD4242D5D2D6B8870750A1;// 0x2AF8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x2BA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F8FA61A445EAB3E763D8D78B0998CD7A;// 0x2BE8(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EC8FC4C44DFF56DA5066189CBF227C78;// 0x2C90(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x2D00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x2D40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x2D80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x2DC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19;// 0x2E00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3;// 0x2E40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x2E80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x2EC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1827B73F4E5CBBD0C18C47B5DA58731F;// 0x2F00(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3344726E4C012C372AA6A1AE2D5D4D7F;// 0x2F60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F2F25BA4B237657236CDE9100C291AC;// 0x3010(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x3070(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7D796D54CA3857A38B886BF42BF3F81;// 0x30B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20A45B894E7C018126C5AC88DE1EE296;// 0x3118(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEC2DC9647C111F8129BA4817B440BC8;// 0x31C8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x3228(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C88C50A4B469DC9B0A6B49A9104E092;// 0x3270(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_514D841540146AA4453B5594FBB7950E;// 0x32D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_500D2BCB4FCF00C14A6CBBB906016DC2;// 0x3380(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x33E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87FF318D4C4237A7688AC59F6AFD96C5;// 0x3428(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1F4587F41851B3889F08FBE5000C43E;// 0x3488(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81B6BD3943D9A96BD9ED5E8ED3982D58;// 0x3538(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x3598(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x35E0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BA9F7140425B60C3B85C409581D83175;// 0x3620(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A304CA442D7020DD2D0B4BDD79E924D;// 0x36C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE02;// 0x3708(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFF40B914B8A799EA675BFB84FBE5137;// 0x3748(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B2;// 0x3788(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B94D46343C61DC2E6BD84B8951A3C9E;// 0x37C8(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47F17E3E486C8ED797A24AA4E6192EC8;// 0x3808(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x3918(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EE61AE88436D00DF575F3BB01394F225;// 0x3960(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_236FC15043BB18301DFD34BE324139A3;// 0x39B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA0032;// 0x3A60(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D2;// 0x3AC0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FEAB4C4C461DC829302313A7C6EA7894;// 0x3B08(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4288FE294EF68AB83F23C9AAF886C7B4;// 0x3B58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA2;// 0x3C08(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F2;// 0x3C68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9685FA7B46FF7C1922296B90AC7F49CE;// 0x3CB0(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D4602A142004CAD75AC138D2EBC283B;// 0x3D58(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F297FAA147B82EDAA2B3AD97A8EFF67C;// 0x3DC8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF226C414749E9403F5BD888674BA08A;// 0x3E78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5940C324CF511D47C8B7DB4092691EE;// 0x3EB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A94E45A04B118F618546E299E65C0309;// 0x3EF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59E1FF394C2F677D17B70592183B6EAE;// 0x3F38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84D6B52B49C3C1793E5E32AEB6B5CD71;// 0x3F78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0173140A4291E7A0CA817B92823410AA;// 0x3FB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x3FF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA68A0674B4D53F5C21B0F884ABD3733;// 0x4038(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2C99E544D20900019B3D8A13F9B3416;// 0x4078(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D09209FD4CDB64C10158C899790D3E0A;// 0x40B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x40F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x4138(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x4178(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95F7A5FB4DB3C51B2543519972C02E9E;// 0x41B8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7FC1057546FB2889955A859671E6E3E5;// 0x4218(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB336C0F4270EC2DB0A07DAFFFC077A1;// 0x4260(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F7E83A3437E68364E83518F80D1C1C8;// 0x42A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52D8AB254D0CF5FA9F14A6BFAE740615;// 0x42E0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90FE3AFC49FED9D35A8F3EB2844E065E;// 0x4320(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7CD513546AB5D4C6360D0AFF2E9A523;// 0x4380(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7FDDCEA4249B372176264BFBC13C15A;// 0x43C8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_28B08CE84822FC605AA317B815A60A49;// 0x4428(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7B861B934934EC86C4BE5C969595D582;// 0x4470(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FEE083045B6EA866030209286B174E0;// 0x4518(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2ED4E3B64536DFE44C5A7BBF0F3F708C;// 0x4560(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D05FDBB8477A64B783CB8A97107BEA81;// 0x45C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_31E2E07349427E811B51BABE9805AD21;// 0x4608(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FCE472C446F0D255B1AC7B52D983D5F;// 0x46B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4159B53941067EB089D9C4A516231D15;// 0x46F8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FEE3EB2E4165A568E45BDD8F04A6A786;// 0x4758(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B10366A24250C87443FEFBBAC96524B1;// 0x4808(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_451635DC487EB9898B86B48A9926911B;// 0x4868(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E84311F8441979BC7A63E4BDA0A0321F;// 0x48B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C48AB80D4014ED059F6B66B007E584A6;// 0x48F0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4915618749D83FF3E78ABC895063FBE3;// 0x4950(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1598EA0F4AC57CEB06F9CBA50E9A0ABD;// 0x4A00(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B976D67745A0AC1EEB8AE0855A2DC8B4;// 0x4A60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50C81A964960643D6B2889BCB11E4EFE;// 0x4AA8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_191FF31F40C4140B0B776DBA8C212FC7;// 0x4B08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90E8A20343D4BA9A4FB59BAD2013D387;// 0x4BB8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEA41FA7464DB515ACD01FB03EB782D3;// 0x4C18(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_77C33F8A4707927E099F9181D3FB9D6B;// 0x4C60(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01E5FAE2457D3F4C1EEFF88DE1A68781;// 0x4D08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A87024E4FD0567EDE346397764E6600;// 0x4D50(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_467FD7814156A62C1E9688877ECA2233;// 0x4DB0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x4DF8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD367BB64A8ABE5E2F02CD92565E2468;// 0x4E38(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x4E98(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x4EE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x4F20(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA003;// 0x4F60(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x4FC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA;// 0x5008(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x5068(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9686E1AB453C8231555FA691ECE91566;// 0x50B0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x5158(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x51A0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x5248(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x5290(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AF927BE141F1A4D6155538990D89CC68;// 0x52D8(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9A3154C4CBDF8C2A085818FCC81D12A;      // 0x5380(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E0E254734C2A00A8D9A8CA867319C113;// 0x53E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A367591D450BE747E74B30B8A52EDB2E;// 0x5428(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_59F8102F4DE642B2D238E9B964E5BF59;    // 0x5470(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x5530(0x0158) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x5688(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_PetParrot.BP_Anim_PetParrot_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B7FE73C74593131C3F60ADA71AC7B8A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_333A7D1F4100179BF59938B655F1AF2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B0E3F7B24F0234AECA989CA00A8C885B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B14539584BFCE276D019FEAECC855CE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_2DF3E3904E4F6301BAE3AFAF6F43D35C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_E7F3B60241ED331082E83FA0441022E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1661785B4F68BD2829F17782D128CE45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A12F59C24C7F61D41F89A38C6002F12D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CD62F3E94A7F7721F9AA41A5E0A9216A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0EC04F824CF6CC32ABBF7882475B199C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_43E3AC6249652231BCB6029263CCB05F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1E3E49CA44EFF8D6C037CEBB16FC47E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_9CC6C16E4E05DD1003CC4A9DF57EC60F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC916AD94FBAAF5656B7A682B1AC9F5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_98A1C6CB4962958B60E2208DB4FE2FD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_94F406CE48A82A4A68A38196E3A4EA79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_7ED235FB41CF8AA203E5648C9E0F8B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3F37CC684E640063F02DADA7F082BF53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_852B99A143D18E9FE5A18D8CEC85441F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_BF226C414749E9403F5BD888674BA08A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C5940C324CF511D47C8B7DB4092691EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A94E45A04B118F618546E299E65C0309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_59E1FF394C2F677D17B70592183B6EAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_84D6B52B49C3C1793E5E32AEB6B5CD71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0173140A4291E7A0CA817B92823410AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CA68A0674B4D53F5C21B0F884ABD3733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D2C99E544D20900019B3D8A13F9B3416();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D09209FD4CDB64C10158C899790D3E0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DB336C0F4270EC2DB0A07DAFFFC077A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_2F7E83A3437E68364E83518F80D1C1C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_52D8AB254D0CF5FA9F14A6BFAE740615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_E84311F8441979BC7A63E4BDA0A0321F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void BlueprintInitializeAnimation();
	void AnimNotify_NewIdleA();
	void AnimNotify_NewIdleB();
	void AnimNotify_UnEquipCompleted();
	void AnimNotify_ExitTakeOff();
	void AnimNotify_NewBaseIdleA();
	void AnimNotify_NewBaseIdleB();
	void AnimNotify_PetLookAt_On();
	void AnimNotify_PetLookAt_Off();
	void AnimNotify_StaticBaseOn();
	void AnimNotify_StaticBaseOff();
	void AnimNotify_NewGiveIdleA();
	void AnimNotify_NewGiveIdleB();
	void ExecuteUbergraph_BP_Anim_PetParrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
