#include "item.h"
#include "itemChecks.h"
#include "stage.h"
#include "defines.h"


namespace mod::item
{
	ItemCheck checks[492] = {
/* 0 */{0x3F, 1, stage::allStages[65], 4, 0x0, 0x0, 0b000000000000000000000, -1.6259740, 0.0000000, -207.4881290, nullptr, nullptr}, //Wooden Sword Chest
/* 1 */{0x03, 7, stage::allStages[40], 0, 0x1, 0xFF, 0b110000000000000000100, -3550.8691410, 4450.0000000, -694.8996580, nullptr, nullptr}, // South Faron Cave Small Chest
/* 2 */{0xEE, 8, stage::allStages[45], 14, 0x1, 0xFF, 0b000000000000000000100, 1221.9044190, 50.0000000, -7.9423170, nullptr, nullptr}, //North Faron Cave Key Chest
/* 3 */{0x21, 3, stage::allStages[45], 14, 0x1, 0xFF, 0b110000000000000000100, 1528.0000000, 250.0000000, -22.0000000, nullptr, nullptr}, //North Faron Cave Heart Piece Chest
/* 4 */{0x03, 7, stage::allStages[45], 6, 0x1, 0xFF, 0b000000000000000000100, -38292.5312500, 400.0000000, -23129.9550780, nullptr, nullptr}, //Small Chest North of Trill
/* 5 */{0xED, 7, stage::allStages[65], 7, 0x0, 0xFF, 0b110010000000000001000, 128.7043760, -1077.0000000, -607.5000000, nullptr, nullptr}, //Link's Basement Chest
/* 6 */{0x03, 7, stage::allStages[6], 22, 0x1, 0xFF, 0b000000000000000000100, 900.0000000, 3110.0000000, 15825.0000000, nullptr, nullptr}, //FT Entrance Vine Chest
/* 7 */{0x04, 7, stage::allStages[6], 0, 0x1, 0xFF, 0b100100000000000000100, 0.0000000, 2700.0000000, 5550.0000000, nullptr, nullptr}, //FT Central Chest Behind Stairs
/* 8 */{0x23, 2, stage::allStages[6], 0, 0x1, 0x1, 0b110000000000000000100, 550.0000000, 3301.0095210, 5325.0000000, nullptr, nullptr}, //FT Map Chest
/* 9 */{0x20, 8, stage::allStages[6], 9, 0x1, 0xFF, 0b110000000000000000100, 6908.0000000, 3580.2719730, -3305.0000000, nullptr, nullptr}, //FT Windless Bridge Chest
/* 10 */{0x03, 7, stage::allStages[6], 2, 0x1, 0xFF, 0b110000000000000100100, 11559.7548830, 3152.0000000, 3761.2187500, nullptr, nullptr}, //FT Second Monkey Under Bridge Chest
/* 11 */{0x20, 8, stage::allStages[6], 5, 0x1, 0xFF, 0b100000000000000100100, -9108.924805, 3302.0000000, 5547.310059, nullptr, nullptr}, //FT Totem Pole Chest
/* 12 */{0x04, 7, stage::allStages[6], 5, 0x1, 0xFF, 0b100000000000000100100, -11721.1455080, 3750.0000000, 4717.8212890, nullptr, nullptr}, //FT West Tile Worm Small Chest
/* 13 */{0x21, 3, stage::allStages[6], 3, 0x1, 0xFF, 0b110000000000000000100, -4000.0000000, 2955.5900880, 9075.0000000, nullptr, nullptr}, //FT Deku Like Heart Piece Chest
/* 14 */{0x21, 3, stage::allStages[6], 5, 0x1, 0xFF, 0b110100000000000100100, -14275.0000000, 3402.7832030, 6150.0000000, nullptr, nullptr}, //FT West Tile Worm Heart Piece Chest
/* 15 */{0x24, 2, stage::allStages[6], 0, 0x1, 0x1, 0b100100000000000000100, 0.0000000, 3150.0000000, 7125.0000000, nullptr, nullptr}, //FT Compass Chest
/* 16 */{0x26, 2, stage::allStages[6], 1, 0x1, 0x1, 0b100100000000000000100, 9225.0009770, 3471.9599610, 8465.1347660, nullptr, nullptr}, //FT Big Key Chest
/* 17 */{0x03, 7, stage::allStages[6], 1, 0x1, 0xFF, 0b000000000000000000100, 10261.0000000, 3175.0000000, 8295.0000000, nullptr, nullptr}, //FT East Water Cave Chest
/* 18 */{0x20, 8, stage::allStages[6], 10, 0x2, 0xFF, 0b000100000010000000000, 1174.2510990, 5002.3901370, -9219.0937500, nullptr, nullptr}, //FT North Deku Like Chest
/* 19 */{0x04, 7, stage::allStages[6], 11, 0x2, 0xFF, 0b100100000000000100000, 11183.0000000, 3806.5500490, -6305.0000000, nullptr, nullptr}, //FT East Tile Worm Chest
/* 20 */{0x04, 7, stage::allStages[68], 2, 0x2, 0xFF, 0b000000000000000000000, -70.0000000, -6.0440000, -670.0000000, nullptr, nullptr}, //Kakariko Inn Small Chest
/* 21 */{0x45, 0, stage::allStages[65], 0, 0x2, 0x2, 0b000000000000000000000, 320.8111880, 9.7100000, 1017.9390870, nullptr, nullptr}, //Iron Boots Chest
/* 22 */{0x04, 7, stage::allStages[3], 1, 0x3, 0xFF, 0b001000000000000000000, 1050.0000000, -258.1840820, 13750.0000000, nullptr, nullptr}, //GM Entrance Small Chest
/* 23 */{0x20, 8, stage::allStages[3], 3, 0x3, 0xFF, 0b001000000000000000000, 2700.0000000, -1378.3521730, 5175.0000000, nullptr, nullptr}, //GM Main Magnet Room Bottom Chest
/* 24 */{0x23, 2, stage::allStages[3], 14, 0x3, 0x3, 0b001000000000000100000, -15984.1562500, -710.5994260, 1504.4143070, nullptr, nullptr}, //GM Map Chest
/* 25 */{0x04, 7, stage::allStages[3], 14, 0x3, 0xFF, 0b001000000000000000000, -16176.0000000, -561.3822020, 895.0000000, nullptr, nullptr}, //GM Gor Amato Small Chest
/* 26 */{0x21, 3, stage::allStages[3], 4, 0x3, 0xFF, 0b001000000000000000000, -5625.0000000, 448.7841190, 75.0000000, nullptr, nullptr}, //GM Magnet Maze Heart Piece Chest
/* 27 */{0x20, 8, stage::allStages[3], 6, 0x3, 0xFF, 0b001000000000000000000, 1125.0000000, 600.0000000, -4725.0000000, nullptr, nullptr}, //GM Switch Room Underwater Chest
/* 28 */{0x04, 7, stage::allStages[3], 6, 0x3, 0xFF, 0b001000000000000000000, 1000.0000000, 1650.0000000, -5650.0000000, nullptr, nullptr}, //GM Switch Room Small Chest
/* 29 */{0x21, 3, stage::allStages[3], 6, 0x3, 0xFF, 0b001000000000000000000, -1350.0000000, 2350.0000000, -6200.0000000, nullptr, nullptr}, //GM After Switch Room Heart Piece Chest
/* 30 */{0x20, 8, stage::allStages[3], 7, 0x3, 0xFF, 0b101000000000000100000, -1050.0000000, 2425.0000000, -14825.0000000, nullptr, nullptr}, //GM Outside Bemos Chest
/* 31 */{0x03, 7, stage::allStages[3], 17, 0x3, 0xFF, 0b101000000000000100000, 13900.0000000, 2997.0900880, -17175.0000000, nullptr, nullptr}, //GM Gor Ebizo Small Chest
/* 32 */{0x03, 7, stage::allStages[3], 9, 0x3, 0xFF, 0b101000000000000100000, 9950.0000000, 2475.0000000, -15375.0000000, nullptr, nullptr}, //GM Small Chest Before Dangoro
/* 33 */{0x43, 0, stage::allStages[3], 11, 0x3, 0x3, 0b001000000000000000000, 7997.9995120, 2640.0000000, -5355.0000000, nullptr, nullptr}, //GM Bow Chest
/* 34 */{0x24, 2, stage::allStages[3], 11, 0x4, 0x4, 0b101001000000000000000, 6488.3676760, 2640.0000000, -1673.5349120, nullptr, nullptr}, //GM Compass Chest
/* 35 */{0x05, 7, stage::allStages[3], 16, 0x4, 0xFF, 0b101001000000000000000, 13975.0000000, 2476.4899900, -1675.0000000, nullptr, nullptr}, //GM Gor Liggs Small Chest
/* 36 */{0x05, 7, stage::allStages[3], 3, 0x4, 0xFF, 0b101001000000000000000, 3625.0000000, 2637.8999020, 4050.0000000, nullptr, nullptr}, //GM Main Magnet Room Top Chest
/* 37 */{0x05, 7, stage::allStages[3], 7, 0x4, 0xFF, 0b001000000000000000000, 2325.0000000, 1100.0000000, -17400.0000000, nullptr, nullptr}, //GM Outside Underwater Chest
/* 38 */{0x21, 3, stage::allStages[46], 0, 0x4, 0xFF, 0b101000100000000000000, 1300.0000000, -1600.0000000, 16700.0000000, nullptr, nullptr}, //Eldin Spring Heart Piece Chest
/* 39 */{0x05, 7, stage::allStages[48], 0, 0x2, 0xFF, 0b010000000000000000000, 16050.0000000, 200.0000000, 725.0000000, nullptr, nullptr}, //Kakariko Graveyard Lanturn Chest
/* 40 */{0x05, 7, stage::allStages[68], 4, 0x3, 0xFF, 0b000000000000000000000, -887.4350590, 1000.0000000, -173.2907710, nullptr, nullptr}, //Kakariko Watchtower Chest
/* 41 */{0x06, 7, stage::allStages[46], 0, 0x4, 0xFF, 0b000000101100000000000, -4027.7336430, 3200.0000000, -8970.9990230, nullptr, nullptr}, //Kakariko Watchtower Alcove Chest
/* 42 */{0x21, 3, stage::allStages[56], 0, 0x4, 0xFF, 0b000000001000000000000, 11550.0000000, 2700.0000000, 24090.0000000, nullptr, nullptr}, //Eldin Bomb Rock Ledge Heart Piece Chest
/* 43 */{0x03, 7, stage::allStages[50], 1, 0x5, 0xFF, 0b000000000000000000000, 2784.3178710, -4587.8901370, 10773.4140620, nullptr, nullptr}, //ZD Small Chest By Mother and Child Isles
/* 44 */{0x04, 7, stage::allStages[50], 1, 0x5, 0xFF, 0b000000000000000000000, 3810.8435060, -3535.5300290, 11344.8876950, nullptr, nullptr}, //ZD Small Chest Under Waterfall
/* 45 */{0x06, 7, stage::allStages[52], 0, 0x5, 0xFF, 0b001000000000000000000, -97123.5468750, -19490.0000000, 58585.6992190, nullptr, nullptr}, //Lake Hylia Underwater Chest
/* 46 */{0x0F, 5, stage::allStages[0], 0, 0x6, 0xFF, 0b000000000000001000000, -1707.6793210, 1250.0000000, 15388.9882810, nullptr, nullptr}, //LBT Lobby Left Chest
/* 47 */{0x17, 5, stage::allStages[0], 0, 0x6, 0xFF, 0b000000000000001000000, -144.6737980, 1250.0000000, 16525.8710940, nullptr, nullptr}, //LBT Lobby Rear Chest
/* 48 */{0x17, 5, stage::allStages[0], 1, 0x6, 0xFF, 0b100000001000001000000, 1417.5971680, 1813.6099850, 7807.2255860, nullptr, nullptr}, //LBT Stalactite Room Small Chest
/* 49 */{0x0F, 5, stage::allStages[0], 3, 0x6, 0xFF, 0b000000000000001000000, 1629.5045170, 0.0000000, 2049.6350100, nullptr, nullptr}, //LBT Central Room Small Chest
/* 50 */{0x23, 2, stage::allStages[0], 3, 0x6, 0x6, 0b000000000000001000000, 2010.5773930, 0.0000000, -1656.3415530, nullptr, nullptr}, //LBT Map Chest
/* 51 */{0x20, 8, stage::allStages[0], 8, 0x6, 0xFF, 0b100000001000001000000, 12900.0000000, -600.0000000, 1850.0000000, nullptr, nullptr}, //LBT East Stalactite Room Chest
/* 52 */{0x16, 5, stage::allStages[0], 7, 0x6, 0xFF, 0b000000000000001100000, 8779.1152340, 1500.0000000, 1667.6258540, nullptr, nullptr}, //LBT East Second Floor Southwest Chest
/* 53 */{0x20, 8, stage::allStages[0], 7, 0x6, 0xFF, 0b100000001000001100000, 11550.8037110, 1500.0000000, 2866.6462400, nullptr, nullptr}, //LBT East Second Floor Southeast Chest
/* 54 */{0x17, 5, stage::allStages[0], 10, 0x6, 0xFF, 0b000000000000001100000, 18228.3320310, 3995.0000000, -466.3260800, nullptr, nullptr}, //LBT East Water Supply Small Chest
/* 55 */{0x20, 8, stage::allStages[0], 9, 0x6, 0xFF, 0b000000000000001000000, 13550.0000000, 10.0000000, -2500.0000000, nullptr, nullptr}, //LBT Before Deku Toad Chest
/* 56 */{0x04, 7, stage::allStages[0], 9, 0x6, 0xFF, 0b101000000000001100000, 13193.2910160, -1189.3100590, -2433.4060060, nullptr, nullptr}, //LBT Before Deku Toad Underwater Left Chest
/* 57 */{0x16, 5, stage::allStages[0], 9, 0x6, 0xFF, 0b101000000000001100000, 13757.0000000, -1275.3310550, -4783.1503910, nullptr, nullptr}, //LBT Before Deku Toad Underwater Right Chest
/* 58 */{0x44, 0, stage::allStages[2], 51, 0x6, 0x6, 0b000000000000001000000, 0.0000000, 0.0000000, 0.0000000, nullptr, nullptr}, //LBT Clawshot Chest
/* 59 */{0x21, 3, stage::allStages[0], 3, 0x7, 0xFF, 0b100000000010001000000, -0.8691990, 2100.0000000, 2.1099050, nullptr, nullptr}, //LBT Chandelier Heart Piece Chest
/* 60 */{0x05, 7, stage::allStages[0], 10, 0x7, 0xFF, 0b100000000010001100000, 21000.0000000, 4170.0000000, 85.0000000, nullptr, nullptr}, //LBT Eas Water Supply Clawshot Chest
/* 61 */{0x04, 7, stage::allStages[0], 3, 0x7, 0xFF, 0b000000000000001000000, 0.0000000, -940.0000000, -315.5000000, nullptr, nullptr}, //LBT Central Room Center Spire Chest
/* 62 */{0x17, 5, stage::allStages[0], 12, 0x7, 0xFF, 0b000000000010001000000, -10687.0947270, -299.3999940, -1161.5905760, nullptr, nullptr}, //LBT West Lower Small Chest
/* 63 */{0x17, 5, stage::allStages[0], 13, 0x7, 0xFF, 0b100000000010001000000, -20310.0000000, 4015.0000000, 460.0000000, nullptr, nullptr}, //LBT West Water Supply Small Chest
/* 64 */{0x24, 2, stage::allStages[0], 13, 0x7, 0x7, 0b100000000010001000000, -23100.0000000, 4200.0000000, -85.0000000, nullptr, nullptr}, //LBT Compass Chest
/* 65 */{0x04, 7, stage::allStages[0], 11, 0x7, 0xFF, 0b101000000000001000000, -14158.2880860, 700.0000000, 2868.1103520, nullptr, nullptr}, //LBT West Second Floor Southwest Underwater Chest
/* 66 */{0x04, 7, stage::allStages[0], 12, 0x7, 0xFF, 0b100000000010001000000, -10180.6718750, 1500.0000000, -1939.7305910, nullptr, nullptr}, //LBT West Second Floor Central Small Chest
/* 67 */{0x04, 7, stage::allStages[0], 11, 0x7, 0xFF, 0b000000000000001000000, -10950.0000000, 1450.0000000, 2590.0000000, nullptr, nullptr}, //LBT West Second Floor Northeast Chest
/* 68 */{0x18, 5, stage::allStages[0], 11, 0x7, 0xFF, 0b100000000010001000000, -9270.0000000, 1450.0000000, -2100.0000000, nullptr, nullptr}, //LBT West Second Floor Southeast Chest
/* 69 */{0x26, 2, stage::allStages[0], 6, 0x7, 0x7, 0b101000001010001000000, -16549.8789060, -1345.7093510, 2820.3918460, nullptr, nullptr}, //LBT Big Key Chest
/* 70 */{0x16, 5, stage::allStages[0], 5, 0x7, 0xFF, 0b101000000010001000000, -18544.2207030, -200.0000000, 475.5745850, nullptr, nullptr}, //LBT Underwater Maze Small Chest
/* 71 */{0x21, 3, stage::allStages[0], 8, 0x7, 0xFF, 0b100000000010001000000, 11356.2246090, -550.0000000, 4896.6640620, nullptr, nullptr}, //LBT East Stalactite Heart Piece Chest
/* 72 */{0x21, 3, stage::allStages[36], 1, 0x12, 0xFF, 0b100000100000000000010, -211.8681490, -61.3470460, -2693.1110840, nullptr, nullptr}, // Grotto - Deku Baba Heart Piece Chest
/* 73 */{0x06, 7, stage::allStages[35], 0, 0x8, 0xFF, 0b100000000010000000010, 28.7614960, 2.9684250, -455.4558110, nullptr, nullptr}, //Grotto - Helmasaur Chest
/* 74 */{0x1A, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, -655.6493530, 1069.5000000, -4819.0908200, nullptr, nullptr}, //Lake Lanturn Cave First Chest
/* 75 */{0x03, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 682.1680300, 1069.5000000, -6179.2060550, nullptr, nullptr}, //Lake Lanturn Cave Second Chest
/* 76 */{0x04, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 2067.4831540, 966.9400020, -7130.3203120, nullptr, nullptr}, //Lake Lanturn Cave Third Chest
/* 77 */{0x0E, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 9980.4072270, 353.3800050, -7188.2241210, nullptr, nullptr}, //Lake Lanturn Cave Fourth Chest
/* 78 */{0x04, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 8154.4853520, -721.9500120, -16215.0576170, nullptr, nullptr}, //Lake Lanturn Cave Fifth Chest
/* 79 */{0x06, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 1585.2146000, -1584.6899410, -14877.4931640, nullptr, nullptr}, //Lake Lanturn Cave Sixth Chest
/* 80 */{0x04, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 1678.4635010, -1586.6899410, -16192.1738280, nullptr, nullptr}, //Lake Lanturn Cave Seventh Chest
/* 81 */{0x1A, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, -642.0394290, -1703.1999510, -18994.8613280, nullptr, nullptr}, //Lake Lanturn Cave Eighth Chest
/* 82 */{0x0E, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, -7978.3588870, -2572.7099610, -16192.1738280, nullptr, nullptr}, //Lake Lanturn Cave Ninth Chest
/* 83 */{0x05, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, -9292.6113280, -2572.7099610, -17523.3867190, nullptr, nullptr}, //Lake Lanturn Cave Tenth Chest
/* 84 */{0x1B, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 2974.3283690, -4197.5800780, -20501.6816410, nullptr, nullptr}, //Lake Lanturn Cave Eleventh Chest
/* 85 */{0x05, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 1675.3985600, -4197.5800780, -21755.7343750, nullptr, nullptr}, //Lake Lanturn Cave Twelfth Chest
/* 86 */{0x12, 5, stage::allStages[33], 0, 0x5, 0xFF, 0b000000001100000000000, 3981.5319820, -4081.0800780, -19125.3964840, nullptr, nullptr}, //Lake Lanturn Cave Thirtennth Chest
/* 87 */{0x06, 7, stage::allStages[33], 0, 0x5, 0xFF, 0b110000001000000000000, 8324.2236330, -4070.1899410, -17814.0156250, nullptr, nullptr}, //Lake Lanturn Cave Fourteenth Chest
/* 88 */{0x21, 3, stage::allStages[33], 0, 0x5, 0xFF, 0b110000001000000000000, 6582.5747070, -5144.5200200, -10032.9658200, nullptr, nullptr}, //Lake Lanturn Cave Heart Piece Chest
/* 89 */{0x06, 7, stage::allStages[39], 4, 0x8, 0xFF, 0b000000000000000000010, -312.1882930, -27.1700000, -1501.0155030, nullptr, nullptr}, //Grotto - Water Toadpoli Chest
/* 90 */{0x05, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000010000000000, -91673.9453120, -16547.1699220, 49208.8203120, nullptr, nullptr}, //Outside Lanayru Spring - Left Statue Small Chest
/* 91 */{0x06, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000010000000000, -88884.070312, -16939.031250, 49405.648438, nullptr, nullptr}, //Outside Lanayru Spring - Right Statue Chest
/* 92 */{0x02, 7, stage::allStages[52], 1, 0x5, 0xFF, 0b001000000000000000000, 593.5773930, -1276.7792970, 128.1360020, nullptr, nullptr}, //Lanayru Spring Underwater Left Chest
/* 93 */{0x03, 7, stage::allStages[52], 1, 0x5, 0xFF, 0b001000000000000000000, -1262.2436520, -1380.8292240, 68.6994780, nullptr, nullptr}, //Lanayru Spring Underwater Right Chest
/* 94 */{0x02, 7, stage::allStages[52], 1, 0x6, 0xFF, 0b000000000010000000000, -33.7100300, 1406.5571290, 4875.7338870, nullptr, nullptr}, //Lanayru Spring Southern Room Left Chest
/* 95 */{0x0A, 5, stage::allStages[52], 1, 0x6, 0xFF, 0b000000000010000000000, 486.2900090, 1406.5479740, 4875.7338870, nullptr, nullptr}, //Lanayru Spring Southern Room Right Chest
/* 96 */{0x21, 3, stage::allStages[52], 1, 0x6, 0xFF, 0b110000000010000000000, 224.6442720, 1406.5999760, 4862.4682620, nullptr, nullptr}, //Lanayru Spring Heart Piece Chest
/* 97 */{0x06, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000000000000000, -102601.6640620, -16650.6562500, 43399.9570310, nullptr, nullptr}, //Isle of Riches Top Platform
/* 98 */{0x21, 3, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000000000000000, -102682.2031250, -17271.6835940, 43179.0781250, nullptr, nullptr}, //Isle of Riches 2nd Level
/* 99 */{0x05, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000000000000000, -102990.2421880, -17760.8300780, 42850.2382810, nullptr, nullptr}, //Isle of Riches 3rd Level
/* 100 */{0x04, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000000000000000, -103540.7812500, -18170.2578120, 42296.2421880, nullptr, nullptr}, //Isle of Riches 4th Level
/* 101 */{0x03, 7, stage::allStages[52], 0, 0x6, 0xFF, 0b001000000000000000000, -104351.7031250, -18485.7714840, 41482.6367190, nullptr, nullptr}, //Isle of Riches 5th Level
/* 102 */{ 0x06, 7, stage::allStages[39], 4, 0x8, 0xFF, 0b101000000000000000010, -371.4389950, -27.1700000, -1627.2565920, nullptr, nullptr }, //Grotto - Shell Blade Chest
/* 103 */{0x05, 7, stage::allStages[50], 0, 0x6, 0xFF, 0b010000000000000000000, 200.0000000, -349.6226810, -1900.0000000, nullptr, nullptr}, //ZD Underwater Right Chest
/* 104 */{0x05, 7, stage::allStages[50], 0, 0x6, 0xFF, 0b111100000000000000000, -200.0000000, -349.4964290, -1900.0000000, nullptr, nullptr}, //ZD Underwater Left Chest
/* 105 */{ 0x05, 7, stage::allStages[38], 3, 0x8, 0xFF, 0b110000000000000000010, -1125.7841800, -133.9226530, -3012.3530270, nullptr, nullptr }, //Grotto - Skulltula Chest
/* 106 */{0x06, 7, stage::allStages[56], 10, 0x6, 0xFF, 0b001000000000000000000, -46800.0000000, -4800.0000000, -22650.0000000, nullptr, nullptr}, //Behind Gate Underwater Chest
/* 107 */{0x06, 7, stage::allStages[56], 13, 0x7, 0xFF, 0b000000000010000000000, -94100.0000000, -4420.0000000, 30009.9199220, nullptr, nullptr}, //Bridge Vines Chest
/* 108 */{ 0x06, 7, stage::allStages[38], 3, 0x8, 0xFF, 0b110000000010000000010, -1061.2969970, -132.2552490, -3053.6071780, nullptr, nullptr }, //Grotto - Bubble Chest
/* 109 */{0x05, 7, stage::allStages[56], 13, 0x7, 0xFF, 0b100000001010000000000, -80910.0000000, -6000.0000000, 64780.0000000, nullptr, nullptr}, //Outside Bubble Grotto Chest
/* 110 */{0x06, 7, stage::allStages[56], 6, 0x7, 0xFF, 0b000000000010000000000, -46040.0000000, -9100.0000000, 80025.0000000, nullptr, nullptr}, //Faron Under Bridge Chest
/* 111 */{ 0x04, 7, stage::allStages[36], 1, 0x8, 0xFF, 0b000000000000000000010, 578.9967040, -266.3237300, -2138.4619140, nullptr, nullptr }, //Grotto - Chu, Baba, and Keese Right Chest
/* 112 */{ 0x03, 7, stage::allStages[36], 1, 0x8, 0xFF, 0b000000000000000000010, -281.6463620, -300.0000000, 910.2941280, nullptr, nullptr }, //Grotto - Chu, Baba, and Keese Rear Chest
/* 113 */{ 0x04, 7, stage::allStages[36], 1, 0x8, 0xFF, 0b000000000000000000010, -754.0296020, -256.7704770, -3001.7814940, nullptr, nullptr }, //Grotto - Chu, Babe, and Keese Left Chest
/* 114 */{0x21, 3, stage::allStages[47], 0, 0x4, 0xFF, 0b000000000000000000000, -1646.0109860, 379.2999880, 8487.9677730, nullptr, nullptr}, //Death Mountain Alcove Heart Piece Chest
/* 115 */{0x05, 7, stage::allStages[3], 7, 0x7, 0xFF, 0b101000000010000000000, 2700.0000000, 4275.0000000, -19550.0000000, nullptr, nullptr}, //GM Outside Clawshot Chest
/* 116 */{0x04, 7, stage::allStages[32], 0, 0x5, 0xFF, 0b000000001100000000000, -1056.4636230, 3145.5432130, -4376.8500980, nullptr, nullptr}, //Eldin Lantern Cave First Chest
/* 117 */{0x21, 3, stage::allStages[32], 0, 0x5, 0xFF, 0b000000001100000000000, 6452.6201170, 4447.9018550, -6947.8505860, nullptr, nullptr}, //Eldin Lantern Cave Heart Piece Chest
/* 118 */{0x05, 7, stage::allStages[32], 0, 0x5, 0xFF, 0b000000001100000000000, 7333.7602540, 4152.1391600, 1235.8031010, nullptr, nullptr}, //Eldin Lantern Cave Second Chest
/* 119 */{ 0x06, 7, stage::allStages[57], 16, 0x8, 0xFF, 0b100000000010000000010, -53600.0000000, -3592.9699710, 23830.0000000, nullptr, nullptr }, //Castle Pillar Chest
/* 120 */{ 0x06, 7, stage::allStages[39], 4, 0x8, 0xFF, 0b000000000000000000010, -240.3374330, -27.1700000, -1660.1081540, nullptr, nullptr }, //Grotto - Tetike Chest
/* 121 */{ 0x05, 7, stage::allStages[35], 0, 0x8, 0xFF, 0b110000000000000000010, -1037.5682370, 1.0515240, -536.6557620, nullptr, nullptr }, //Grotto - Bombling Left Chest
/* 122 */{ 0x05, 7, stage::allStages[35], 0, 0x8, 0xFF, 0b110000000000000000010, -193.2892910, 150.0000000, -1135.5745850, nullptr, nullptr }, //Grotto - Bombling Right Chest
/* 123 */{ 0x05, 7, stage::allStages[39], 4, 0x8, 0xFF, 0b000000000000000000010, -251.5004430, -27.1700000, -1691.9121090, nullptr, nullptr }, //Grotto - Water Bomb Fish Chest
/* 124 */{ 0x06, 7, stage::allStages[38], 3, 0x9, 0xFF, 0b000000000000000000010, -1066.0302730, -132.1377870, -3046.8808590, nullptr, nullptr }, //Grotto - Desert Skulltula Chest
/* 125 */{ 0x04, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000010000000000, 51585.6210940, 1536.1500240, 58741.2500000, nullptr, nullptr }, //Desert Peahat Chest
/* 126 */{ 0x04, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 51813.6796880, 171.0510250, 46656.2773440, nullptr, nullptr }, //East Canyon Chest
/* 127 */{ 0x0E, 5, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 30472.5644530, 778.0640260, 50140.5703120, nullptr, nullptr }, //Desert Lone Small Chest
/* 128 */{0x04, 7, stage::allStages[34], 10, 0x7, 0xFF, 0b000000000010000000000, 13825.0000000, 137.5000000, -34250.0000000, nullptr, nullptr}, //Eldin Stockcave Small Chest
/* 129 */{0x06, 7, stage::allStages[34], 10, 0x7, 0xFF, 0b111000000010000000000, 9577.0000000, -2833.8898930, -33492.0000000, nullptr, nullptr}, //Eldin Stockcave Lanturn Chest
/* 130 */{0x21, 3, stage::allStages[34], 10, 0x7, 0xFF, 0b101000000010000000000, 9515.7099610, -2850.0000000, -31912.3808590, nullptr, nullptr}, //Eldin Stockcave Heart Piece Chest
/* 131 */{ 0x05, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000010000000000, -6940.8110350, 441.2112430, 48305.4023440, nullptr, nullptr },
/* 132 */{ 0x06, 7, stage::allStages[37], 2, 0x9, 0xFF, 0b110000100010000000010, -128.8401180, 150.0000000, -1330.3356930, nullptr, nullptr },
/* 133 */{ 0x04, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 9889.4482420, -732.8599850, 17813.8398440, nullptr, nullptr },
/* 134 */{ 0x06, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 32741.2617190, 158.3099980, 68606.5468750, nullptr, nullptr },
/* 135 */{ 0x04, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 3104.9711910, -732.8599850, 24575.0351560, nullptr, nullptr },
/* 136 */{ 0x05, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 4945.0000000, -732.8599850, 25572.0000000, nullptr, nullptr },
/* 137 */{ 0x0E, 5, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 1845.0000000, -732.8599850, 26130.0000000, nullptr, nullptr },
/* 138 */{ 0x04, 7, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, -6532.4062500, -732.8599850, 20852.4121090, nullptr, nullptr },
/* 139 */{ 0x0E, 5, stage::allStages[59], 0, 0x9, 0xFF, 0b000000000000000000000, 4681.0947270, -162.9400020, 12575.7626950, nullptr, nullptr },
/* 140 */{ 0x0F, 5, stage::allStages[55], 1, 0x9, 0xFF, 0b000000000000000000000, 4761.6406250, 0.0000000, 1580.5701900, nullptr, nullptr },
/* 141 */{ 0x05, 7, stage::allStages[55], 1, 0x9, 0xFF, 0b000000000000000000000, 2389.0454100, 260.0000000, -1473.3872070, nullptr, nullptr },
/* 142 */{ 0x05, 7, stage::allStages[55], 3, 0x9, 0xFF, 0b010000000000000000000, 3633.6201170, 840.0000000, -12457.7001950, nullptr, nullptr },
/* 143 */{ 0x20, 8, stage::allStages[24], 0, 0x9, 0xFF, 0b000000000000000000000, -3000.0000000, -19.0000000, 5600.0000000, nullptr, nullptr },
/* 144 */{ 0x20, 8, stage::allStages[24], 15, 0x9, 0xFF, 0b000000000000000000000, 4125.0000000, -741.5800170, -2250.0000000, nullptr, nullptr },
/* 145 */{ 0x21, 3, stage::allStages[24], 2, 0x9, 0xFF, 0b000000000000000000000, 1300.0000000, 62.5000000, -3012.5000000, nullptr, nullptr },
/* 146 */{ 0x23, 2, stage::allStages[24], 2, 0x9, 0x9, 0b000000000000000000000, -1300.0000000, 50.0000000, -3012.5000000, nullptr, nullptr },
/* 147 */{ 0x24, 2, stage::allStages[24], 4, 0x9, 0x9, 0b000000000000000100000, 9400.0000000, 990.0599980, 6100.0000000, nullptr, nullptr },
/* 148 */{ 0x20, 8, stage::allStages[24], 4, 0x9, 0xFF, 0b000000000000000100000, 12275.0000000, 980.0000000, 4537.5000000, nullptr, nullptr },
/* 149 */{ 0x20, 8, stage::allStages[24], 14, 0x9, 0xFF, 0b000000000000000100000, 4150.0000000, 825.0000000, 775.0000000, nullptr, nullptr },
/* 150 */{ 0x04, 7, stage::allStages[24], 6, 0x9, 0xFF, 0b000000000000000000000, -4065.0000000, 150.0000000, -2660.0000000, nullptr, nullptr },
/* 151 */{ 0x04, 7, stage::allStages[24], 6, 0x9, 0xFF, 0b000000000000000000000, -4450.0000000, 400.0000000, 1150.0000000, nullptr, nullptr },
/* 152 */{ 0x0A, 5, stage::allStages[24], 7, 0x9, 0xFF, 0b000000100100000000000, -9975.0000000, 500.0000000, -600.0000000, nullptr, nullptr },
/* 153 */{ 0x0A, 5, stage::allStages[24], 7, 0x9, 0xFF, 0b000000100100000000000, -8113.0000000, 500.0000000, -1382.0000000, nullptr, nullptr },
/* 154 */{ 0x20, 8, stage::allStages[24], 16, 0x9, 0xFF, 0b000000000000000000000, 3970.0000000, -1050.0000000, -6080.0000000, nullptr, nullptr },
/* 155 */{ 0x41, 0, stage::allStages[26], 51, 0x9, 0x9, 0b000100000010000000000, 0.0000000, 50.0000000, -6200.0000000, nullptr, nullptr },
/* 156 */{ 0x0B, 5, stage::allStages[24], 13, 0x10, 0xFF, 0b000000000000100000000, -8331.4091800, -1800.0000000, -3677.7468260, nullptr, nullptr },
/* 157 */{ 0x04, 7, stage::allStages[24], 13, 0x10, 0xFF, 0b000000000000100000000, -10212.5000000, -1840.0000000, -3725.0000000, nullptr, nullptr },
/* 158 */{ 0x03, 7, stage::allStages[24], 13, 0x10, 0xFF, 0b000000000000100000000, -10812.5000000, -1825.0000000, -5712.5000000, nullptr, nullptr },
/* 159 */{ 0x21, 3, stage::allStages[24], 13, 0x10, 0xFF, 0b000000000000100000000, -5475.0000000, -1325.0000000, -4875.0000000, nullptr, nullptr },
/* 160 */{ 0x03, 7, stage::allStages[24], 13, 0x10, 0xFF, 0b000000000000100000000, -6225.0000000, -1125.0000000, -7275.0000000, nullptr, nullptr },
/* 161 */{ 0x26, 2, stage::allStages[24], 9, 0x10, 0x10, 0b000000000000100000000, -3675.0000000, 500.0000000, -7250.0000000, nullptr, nullptr },
/* 162 */{ 0x21, 3, stage::allStages[56], 11, 0x10, 0xFF, 0b000000000000100000000, -88260.0000000, 2950.0000000, -8150.0000000, nullptr, nullptr },
/* 163 */{ 0x0A, 5, stage::allStages[36], 1, 0x10, 0xFF, 0b100000000000100000010, 464.9176030, -262.3106380, -709.6952510, nullptr, nullptr },
/* 164 */{ 0x0A, 5, stage::allStages[36], 1, 0x10, 0xFF, 0b100000000000100000010, -1153.7760010, -255.8396450, -980.6660160, nullptr, nullptr },
/* 165 */{ 0x21, 3, stage::allStages[36], 1, 0x10, 0xFF, 0b100000100000100000010, -211.8499450, -60.9387400, -2691.0991210, nullptr, nullptr },
/* 166 */{ 0x06, 7, stage::allStages[57], 16, 0x10, 0xFF, 0b100000000010100000000, -51500.0000000, -5180.0000000, 25970.0000000, nullptr, nullptr },
/* 167 */{ 0x05, 7, stage::allStages[35], 0, 0x8, 0xFF, 0b110000000000000000010, -277.2709660, 150.0000000, -1096.2886960, nullptr, nullptr },
/* 168 */{0x04, 7, stage::allStages[45], 5, 0x1, 0xFF, 0b000000000000000000000, -25790.1093750, 330.0000000, -19842.9355470, nullptr, nullptr}, //Faron Mist Stump Chest
/* 169 */{0x03, 7, stage::allStages[45], 5, 0x1, 0xFF, 0b000000000000000000000, -24845.1308590, -100.0000000, -26998.7226560, nullptr, nullptr}, //Faron Mist North Small Chest
/* 170 */{0x05, 7, stage::allStages[45], 5, 0x1, 0xFF, 0b000000000000000000000, -25966.7851560, -83.1305240, -16071.9599610, nullptr, nullptr}, //Faron Mist East Chest
/* 171 */{ 0x20, 8, stage::allStages[27], 4, 0x11, 0xFF, 0b000000000000000000000, -1500.0000000, -60.0000000, -4458.0000000, nullptr, nullptr },
/* 172 */{ 0x04, 7, stage::allStages[27], 4, 0x11, 0xFF, 0b000000000000000000000, 1350.0000000, 50.0000000, -1400.0000000, nullptr, nullptr },
/* 173 */{ 0xF4, 8, stage::allStages[27], 5, 0x11, 0x11, 0b000000000000000100000, 5300.0000000, 0.0000000, -5100.0000000, nullptr, nullptr },
/* 174 */{ 0x20, 8, stage::allStages[27], 4, 0x11, 0xFF, 0b000000000000000000000, 1350.0000000, -40.0000000, -4150.0000000, nullptr, nullptr },
/* 175 */{ 0x04, 7, stage::allStages[27], 8, 0x11, 0xFF, 0b000000100100000000000, -4355.0000000, 0.0000000, -2160.0000000, nullptr, nullptr },
/* 176 */{ 0x24, 2, stage::allStages[27], 8, 0x11, 0x11, 0b000000100100000000000, -3510.0000000, 0.0000000, -1350.0000000, nullptr, nullptr },
/* 177 */{ 0x0A, 5, stage::allStages[27], 4, 0x11, 0xFF, 0b000000100100000000000, 0.0000000, 0.0000000, -1250.0000000, nullptr, nullptr },
/* 178 */{ 0xF5, 8, stage::allStages[29], 51, 0x12, 0x12, 0b000000000100000000000, 0.0000000, 0.0000000, -3196.0000000, nullptr, nullptr },
/* 179 */{ 0x21, 3, stage::allStages[27], 7, 0x12, 0xFF, 0b000000000100000000000, -3600.0000000, 0.0000000, 1600.0000000, nullptr, nullptr },
/* 180 */{ 0x20, 8, stage::allStages[27], 8, 0x12, 0xFF, 0b000000000100000000000, -4350.0000000, 950.0000000, -3850.0000000, nullptr, nullptr },
/* 181 */{ 0x21, 3, stage::allStages[27], 0, 0x12, 0xFF, 0b000000000100000000000, 0.0000000, 1118.3201900, 4690.0000000, nullptr, nullptr },
/* 182 */{ 0x04, 7, stage::allStages[27], 0, 0x12, 0xFF, 0b000000000100000000000, -900.0000000, -50.0000000, 5950.0000000, nullptr, nullptr },
/* 183 */{ 0x03, 7, stage::allStages[27], 0, 0x12, 0xFF, 0b000000000100000000000, 930.0000000, -50.0000000, 5350.0000000, nullptr, nullptr },
/* 184 */{ 0x20, 8, stage::allStages[27], 5, 0x12, 0xFF, 0b100000000110000000000, 4350.0000000, 953.0000000, -4900.0000000, nullptr, nullptr },
/* 185 */{ 0x04, 7, stage::allStages[27], 9, 0x12, 0xFF, 0b000000000100000000000, -5347.3071290, -50.0000000, -6500.8867190, nullptr, nullptr },
/* 186 */{ 0x0A, 5, stage::allStages[27], 9, 0x12, 0xFF, 0b000000100100000000000, -1818.3217770, 0.0000000, -7562.9838870, nullptr, nullptr },
/* 187 */{ 0xF6, 2, stage::allStages[27], 11, 0x12, 0x12, 0b100000100100000000000, -4350.0000000, 1050.0000000, -8560.5742190, nullptr, nullptr },
/* 188 */{ 0x06, 7, stage::allStages[51], 2, 0x12, 0xFF, 0b110000000100000000010, -6233.2583010, -1800.0000000, -9865.0205080, nullptr, nullptr },
/* 189 */{ 0x06, 7, stage::allStages[38], 3, 0x12, 0xFF, 0b100000000100000000010, -810.7105710, -300.0000000, -2101.0502930, nullptr, nullptr },
/* 190 */{ 0x21, 3, stage::allStages[30], 0, 0x12, 0xFF, 0b000000000100000000000, 0.0000000, 0.0000000, -7900.0000000, nullptr, nullptr },
/* 191 */{ 0x0D, 5, stage::allStages[54], 3, 0x12, 0xFF, 0b110100000000000000000, -15394.4238280, 2300.0000000, 2483.9230960, nullptr, nullptr },
/* 192 */{ 0x06, 7, stage::allStages[54], 3, 0x12, 0xFF, 0b000000000000100000000, -6840.3515620, 2000.0000000, 6329.0605470, nullptr, nullptr },
/* 193 */{ 0x20, 8, stage::allStages[9], 0, 0x12, 0xFF, 0b110001000000000000000, 2500.0000000, 56.2500000, 368.7500000, nullptr, nullptr },
/* 194 */{ 0x10, 5, stage::allStages[9], 1, 0x12, 0xFF, 0b000001000000000000000, -12.5000000, 1100.0000000, 8362.5000000, nullptr, nullptr },
/* 195 */{ 0x04, 7, stage::allStages[9], 1, 0x12, 0xFF, 0b000001000000000000000, 5795.0000000, 2505.0000000, 4210.0000000, nullptr, nullptr },
/* 196 */{ 0x23, 2, stage::allStages[9], 1, 0x12, 0x12, 0b000001000000000000000, 6925.0000000, 2325.0000000, 3400.0000000, nullptr, nullptr },
/* 197 */{ 0x20, 8, stage::allStages[9], 3, 0x12, 0xFF, 0b100001000000100000000, -1737.5000000, 4500.0000000, 5812.5000000, nullptr, nullptr },
/* 198 */{ 0x24, 2, stage::allStages[9], 4, 0x12, 0x12, 0b100001000000100000000, -3450.0000000, 4450.0000000, -5510.0000000, nullptr, nullptr },
/* 199 */{ 0x05, 7, stage::allStages[9], 5, 0x12, 0xFF, 0b100001000000100000000, -30.0000000, 5750.0000000, -1515.0000000, nullptr, nullptr },
/* 200 */{ 0x20, 8, stage::allStages[9], 7, 0x12, 0xFF, 0b100001000000100000000, 5319.0000000, 7550.0000000, 8592.7500000, nullptr, nullptr },
/* 201 */{ 0x05, 7, stage::allStages[9], 7, 0x12, 0xFF, 0b100001000000100000000, 5300.0000000, 8100.0000000, -800.0000000, nullptr, nullptr },
/* 202 */{ 0x46, 0, stage::allStages[11], 51, 0x12, 0x12, 0b100001000000100100000, 0.0000000, -350.0000000, -2400.0000000, nullptr, nullptr },
/* 203 */{ 0x04, 7, stage::allStages[9], 5, 0x12, 0xFF, 0b100001000010100000000, 1195.0000000, 7400.0000000, 2350.0000000, nullptr, nullptr },
/* 204 */{ 0x04, 7, stage::allStages[9], 6, 0x12, 0xFF, 0b100001000010100000000, 6135.0000000, 8000.0000000, 0.0000000, nullptr, nullptr },
/* 205 */{ 0x26, 2, stage::allStages[9], 6, 0x12, 0x12, 0b100001000010100000000, 5350.0000000, 7400.0000000, 0.0000000, nullptr, nullptr },
/* 206 */{ 0x21, 3, stage::allStages[9], 4, 0x13, 0xFF, 0b100001000000110000000, -8740.0000000, 5100.0000000, -4515.0000000, nullptr, nullptr },
/* 207 */{ 0x04, 7, stage::allStages[9], 3, 0x12, 0xFF, 0b100001000000100000000, 0.0000000, 4850.0000000, 9200.0000000, nullptr, nullptr },
/* 208 */{ 0x21, 3, stage::allStages[9], 3, 0x13, 0xFF, 0b100001000000110000000, 1740.0000000, 4500.0000000, 5815.0000000, nullptr, nullptr },
/* 209 */{ 0x21, 3, stage::allStages[54], 2, 0x13, 0xFF, 0b100001000000010000000, 606.7956540, 1005.0000000, 8005.3901370, nullptr, nullptr },
/* 210 */{ 0x04, 7, stage::allStages[53], 4, 0x13, 0xFF, 0b000000000000000000000, 6500.0000000, 426.0000000, -977.0000000, nullptr, nullptr },
/* 211 */{ 0x21, 3, stage::allStages[56], 0, 0x13, 0xFF, 0b000000000000010000000, 31257.5957030, 900.0000000, -16115.4990230, nullptr, nullptr },
/* 212 */{ 0x06, 7, stage::allStages[56], 3, 0x13, 0xFF, 0b000000000000010000000, -10245.4765620, -4400.0000000, 42817.0467500, nullptr, nullptr },
/* 213 */{ 0x06, 7, stage::allStages[57], 8, 0x13, 0xFF, 0b000000000000010000000, -79819.4140620, -1301.2399900, 22400.6718750, nullptr, nullptr },
/* 214 */{ 0x06, 7, stage::allStages[56], 13, 0x13, 0xFF, 0b100000000010010000000, -93284.5703120, -5000.0000000, 18235.7246090, nullptr, nullptr },
/* 215 */{ 0x21, 3, stage::allStages[45], 5, 0x13, 0xFF, 0b100000100000010000000, -21012.1542970, 1350.0000000, -20630.3222660, nullptr, nullptr },
/* 216 */{ 0x06, 7, stage::allStages[59], 0, 0x13, 0xFF, 0b000000000000010000000, 16263.9707030, 989.6500240, 60708.4648440, nullptr, nullptr },
/* 217 */{ 0x18, 5, stage::allStages[12], 0, 0x14, 0xFF, 0b101000000010000000000, -1170.0834960, -755.0000000, 6670.0000000, nullptr, nullptr },
/* 218 */{ 0x04, 7, stage::allStages[12], 0, 0x14, 0xFF, 0b101000000010000000000, 1170.0000000, -755.0000000, 6670.0000000, nullptr, nullptr },
/* 219 */{ 0x20, 8, stage::allStages[12], 10, 0x14, 0xFF, 0b100000000010100000000, -14514.4443360, 0.0000000, -12000.8310550, nullptr, nullptr },
/* 220 */{ 0x23, 2, stage::allStages[12], 5, 0x14, 0x14, 0b101000000010100000000, 17665.1347660, 0.0000000, -11924.1035160, nullptr, nullptr },
/* 221 */{ 0x03, 7, stage::allStages[12], 7, 0x14, 0xFF, 0b101000000010100000000, 15824.6093750, -110.0000000, -9750.6855470, nullptr, nullptr },
/* 222 */{ 0x04, 7, stage::allStages[12], 7, 0x14, 0xFF, 0b101000000010100000000, 17550.0000000, 1500.0000000, -7200.0000000, nullptr, nullptr },
/* 223 */{ 0x05, 7, stage::allStages[12], 7, 0x14, 0xFF, 0b101000000010100000000, 13470.0000000, 1500.0000000, -7925.0000000, nullptr, nullptr },
/* 224 */{ 0x47, 0, stage::allStages[14], 51, 0x14, 0x14, 0b101000000010100000000, -0.3629600, 600.0000000, 2279.7690430, nullptr, nullptr },
/* 225 */{ 0x24, 2, stage::allStages[12], 4, 0x15, 0x15, 0b101000000001100000000, 10800.0000000, -1775.0000000, -11850.0000000, nullptr, nullptr },
/* 226 */{ 0x0F, 5, stage::allStages[12], 10, 0x15, 0xFF, 0b100000000001100000000, -11099.1240230, -1500.0000000, -15658.8515620, nullptr, nullptr },
/* 227 */{ 0x04, 7, stage::allStages[12], 10, 0x15, 0xFF, 0b100000000001100000000, -13458.7949220, 0.0000000, -13410.5566410, nullptr, nullptr },
/* 228 */{ 0x0B, 5, stage::allStages[12], 10, 0x15, 0xFF, 0b100000000001100000000, -10742.9599610, 0.0000000, -15156.7197270, nullptr, nullptr },
/* 229 */{ 0x03, 7, stage::allStages[12], 11, 0x15, 0xFF, 0b100000000001100000000, -15654.8398440, 2840.2299800, -18906.7890620, nullptr, nullptr },
/* 230 */{ 0x0F, 5, stage::allStages[12], 11, 0x15, 0xFF, 0b100000000001100000000, -12630.1699220, 2430.8999020, -19611.4316410, nullptr, nullptr },
/* 231 */{ 0x21, 3, stage::allStages[12], 11, 0x15, 0xFF, 0b100000000001100000000, -14567.1093750, 2281.0000000, -16989.0351560, nullptr, nullptr },
/* 232 */{ 0x04, 7, stage::allStages[12], 12, 0x15, 0xFF, 0b100000000001100000000, -15782.7958980, 2980.0000000, -11466.6982420, nullptr, nullptr },
/* 233 */{ 0x05, 7, stage::allStages[12], 12, 0x15, 0xFF, 0b100000000001100000000, -14270.5380860, 1982.1999510, -7411.9101560, nullptr, nullptr },
/* 234 */{ 0x0A, 5, stage::allStages[12], 12, 0x15, 0xFF, 0b100000000001100000000, -12592.9677730, 2400.0000000, -13712.7675780, nullptr, nullptr },
/* 235 */{ 0x21, 3, stage::allStages[12], 12, 0x15, 0xFF, 0b100000000001100000000, -11494.3183590, 3000.0000000, -9888.6738280, nullptr, nullptr },
/* 236 */{ 0x04, 7, stage::allStages[12], 13, 0x15, 0xFF, 0b100000000001100000000, 75.2376170, 4500.0000000, -10853.4550780, nullptr, nullptr },
/* 237 */{ 0x05, 7, stage::allStages[12], 13, 0x15, 0xFF, 0b100000000001100000000, 4010.3149410, 4500.0000000, -12451.9033200, nullptr, nullptr },
/* 238 */{ 0x26, 2, stage::allStages[12], 2, 0x15, 0x15, 0b100000000001100000000, -1090.9830320, 4500.0000000, -12411.7617190, nullptr, nullptr },
/* 239 */{ 0x04, 7, stage::allStages[12], 2, 0x15, 0xFF, 0b100000000001100000000, 11.8030090, 3000.0000000, -13501.7851560, nullptr, nullptr },
/* 240 */{ 0x05, 7, stage::allStages[12], 14, 0x15, 0xFF, 0b100000000001100000000, 0.0000000, 894.4799800, -23853.0000000, nullptr, nullptr },
/* 241 */{ 0x21, 3, stage::allStages[56], 3, 0x15, 0xFF, 0b000000000001000000000, -22100.0000000, -7176.0297850, 52140.0000000, nullptr, nullptr },
/* 242 */{ 0x06, 7, stage::allStages[52], 1, 0x15, 0xFF, 0b000000000001000000000, -2816.4138180, 1305.0787350, -1395.7875980, nullptr, nullptr },
/* 243 */{ 0x06, 7, stage::allStages[52], 1, 0x15, 0xFF, 0b000000000001000000000, 2798.9057620, 1322.1817720, -987.1356810, nullptr, nullptr },
/* 244 */{ 0x06, 7, stage::allStages[57], 16, 0x15, 0xFF, 0b000000000001000000000, -57374.0820310, -9100.0000000, 29237.9062500, nullptr, nullptr },
/* 245 */{ 0x20, 8, stage::allStages[15], 1, 0x15, 0xFF, 0b000000000000000000000, -3950.0000000, -1071.0000000, 1375.0000000, nullptr, nullptr },
/* 246 */{ 0x20, 8, stage::allStages[15], 2, 0x15, 0xFF, 0b000000000010000100000, -3950.0000000, -1200.0000000, -5075.0000000, nullptr, nullptr },
/* 247 */{ 0x24, 2, stage::allStages[15], 2, 0x15, 0x15, 0b000000000010000100000, -2700.0000000, -1196.0000000, -1661.0000000, nullptr, nullptr },
/* 248 */{ 0x06, 7, stage::allStages[15], 2, 0x15, 0xFF, 0b000000000001000100000, -2400.0000000, -21.2500000, -1550.0000000, nullptr, nullptr },
/* 249 */{ 0x21, 3, stage::allStages[15], 1, 0x15, 0xFF, 0b000000000010000000000, -6850.0000000, -771.2500000, 3200.0000000, nullptr, nullptr },
/* 250 */{ 0x05, 7, stage::allStages[15], 4, 0x15, 0xFF, 0b000000000010000000000, 3250.0000000, -696.2500000, 1235.0000000, nullptr, nullptr },
/* 251 */{ 0x20, 8, stage::allStages[15], 4, 0x15, 0xFF, 0b000000000010000000000, 4650.0000000, -696.2500000, 1235.0000000, nullptr, nullptr },
/* 252 */{ 0x05, 7, stage::allStages[15], 5, 0x15, 0xFF, 0b000000000001000100000, 5700.0000000, 3.7500000, -4350.0000000, nullptr, nullptr },
/* 253 */{ 0x05, 7, stage::allStages[15], 5, 0x15, 0xFF, 0b000000000001000100000, 2200.0000000, 3.7500000, -5100.0000000, nullptr, nullptr },
/* 254 */{ 0x23, 2, stage::allStages[15], 5, 0x15, 0x15, 0b000000000001000100000, 2300.0000000, -396.2500000, -3300.0000000, nullptr, nullptr },
/* 255 */{ 0x20, 8, stage::allStages[15], 5, 0x15, 0xFF, 0b000000000001000100000, 5600.0000000, -296.2500000, -3300.0000000, nullptr, nullptr },
/* 256 */{ 0x21, 3, stage::allStages[15], 4, 0x15, 0xFF, 0b000000000001000000000, 5352.5000000, -171.2500000, 3500.0000000, nullptr, nullptr },
/* 257 */{ 0x05, 7, stage::allStages[15], 4, 0x15, 0xFF, 0b000000000001000000000, 2547.5000000, -171.2500000, 3500.0000000, nullptr, nullptr },
/* 258 */{0x20, 8, stage::allStages[15], 7, 0xFF, 0xFF, 0b000000000001000000000, 1500.0000000, 128.7500000, 6250.0000000, nullptr, nullptr}, //PoT Central First Room Chest
/* 259 */{0x26, 2, stage::allStages[15], 11, 0xFF, 0xFF, 0b000000000001000100000, 0.0000000, 3130.0000000, -3600.0000000, nullptr, nullptr}, //PoT Big Key Chest
/* 260 */{0x20, 8, stage::allStages[15], 11, 0xFF, 0xFF, 0b000000000001000100000, -2900.0000000, -71.2500000, -2055.0000000, nullptr, nullptr}, //PoT Central Outdoor Chest
/* 261 */{0x20, 8, stage::allStages[15], 8, 0xFF, 0xFF, 0b000000000001000100000, -800.0000000, 1130.0000000, 1200.0000000, nullptr, nullptr}, //PoT Central Tower Chest
/* 262 */{0x06, 7, stage::allStages[20], 9, 0xFF, 0xFF, 0b000000100000000000000, 4025.0000000, 152.0000000, -11735.0000000, nullptr, nullptr}, //HC Graveyard Grave Switch Room Right Chest
/* 263 */{0x01, 7, stage::allStages[20], 9, 0xFF, 0xFF, 0b000000100000000000000, 3850.0000000, 152.0000000, -12725.0000000, nullptr, nullptr}, //HC Graveyard Grave Switch Room Front Left Small Chest
/* 264 */{0x04, 7, stage::allStages[20], 9, 0xFF, 0xFF, 0b000000100000000000000, 4075.0000000, 150.0000000, -12725.0000000, nullptr, nullptr}, //HC Graveyard Grave Switch Room Back Left Small Chest
/* 265 */{0x20, 8, stage::allStages[20], 9, 0xFF, 0xFF, 0b110000100000010000000, 375.0000000, 600.0000000, -6900.0000000, nullptr, nullptr}, //HC Graveyard Owl Statue Chest
/* 266 */{0x23, 2, stage::allStages[20], 14, 0xFF, 0xFF, 0b000100000000000000000, 1210.0000000, 0.0000000, -7002.0000000, nullptr, nullptr}, //HC Map Chest
/* 267 */{0x03, 7, stage::allStages[20], 14, 0xFF, 0xFF, 0b000100000000000000000, 4775.0000000, 1200.0000000, 3875.0000000, nullptr, nullptr}, //HC East Castle Balcony Chest
/* 268 */{0x04, 7, stage::allStages[20], 13, 0xFF, 0xFF, 0b000000000000000000000, -6420.0000000, 30.0000000, -8017.8183590, nullptr, nullptr}, //HC West Courtyard Northern Small Chest
/* 269 */{0x04, 7, stage::allStages[20], 13, 0xFF, 0xFF, 0b000000000000000000000, -6400.0000000, 350.0000000, 125.0000000, nullptr, nullptr}, //HC West Courtyard Central Small Chest
/* 270 */{0x24, 2, stage::allStages[20], 1, 0xFF, 0xFF, 0b000000000010000100000, 2400.0000000, 1250.0000000, -875.0000000, nullptr, nullptr}, //HC Compass Chest
/* 271 */{0x05, 7, stage::allStages[20], 2, 0xFF, 0xFF, 0b100100000010000000000, 25.0000000, 1875.0000000, -4975.0000000, nullptr, nullptr}, //HC Lantern Staircase Chest
/* 272 */{0x05, 7, stage::allStages[20], 1, 0xFF, 0xFF, 0b100001000010000100000, -1225.0000000, 2000.0000000, 2125.0000000, nullptr, nullptr}, //HC Main Hall Southwest Chest
/* 273 */{0x07, 7, stage::allStages[20], 1, 0xFF, 0xFF, 0b100001000010000100000, -2375.0000000, 1250.0000000, -900.0000000, nullptr, nullptr}, //HC Main Hall Northwest Chest
/* 274 */{0x20, 8, stage::allStages[20], 15, 0xFF, 0xFF, 0b100100000010000000000, 8685.0000000, 2000.0000000, 8690.0000000, nullptr, nullptr}, //HC Southeast Balcony Tower Chest
/* 275 */{0x26, 2, stage::allStages[20], 15, 0xFF, 0xFF, 0b100100000010000000000, -8700.0000000, 2000.0000000, 8700.0000000, nullptr, nullptr}, //HC Big Key Chest
/* 276 */{0x02, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3350.0000000, 6150.0000000, 3675.0000000, nullptr, nullptr}, //HC Treasure Room First Chest
/* 277 */{0x03, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3475.0000000, 6150.0000000, 3550.0000000, nullptr, nullptr}, //HC Treasure Room Second Chest
/* 278 */{0x04, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3600.0000000, 6150.0000000, 3425.0000000, nullptr, nullptr}, //HC Treasure Room Third Chest
/* 279 */{0x18, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3700.0000000, 6150.0000000, 3250.0000000, nullptr, nullptr}, //HC Treasure Room Fourth Chest
/* 280 */{0x0F, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3700.0000000, 6150.0000000, 3075.0000000, nullptr, nullptr}, //HC Treasure Room Fifth Chest
/* 281 */{0x0C, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3700.0000000, 6150.0000000, 2750.0000000, nullptr, nullptr}, //HC Treasure Room First Small Chest
/* 282 */{0x01, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3700.0000000, 6150.0000000, 2525.0000000, nullptr, nullptr}, //HC Treasure Room Second Small Chest
/* 283 */{0x10, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 3700.0000000, 6150.0000000, 2300.0000000, nullptr, nullptr}, //HC Treasure Room Third Small Chest
/* 284 */{0x05, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 2650.0000000, 6150.0000000, 2125.0000000, nullptr, nullptr}, //HC Treasure Room Fourth Small Chest
/* 285 */{0x1B, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 2550.0000000, 6150.0000000, 2225.0000000, nullptr, nullptr}, //HC Treasure Room Fifth Small Chest
/* 286 */{0x07, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 2450.0000000, 6150.0000000, 2325.0000000, nullptr, nullptr}, //HC Treasure Room Sixth Small Chest
/* 287 */{0x12, 5, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 2350.0000000, 6150.0000000, 2425.0000000, nullptr, nullptr}, //HC Treasure Room Seventh Small Chest
/* 288 */{0x06, 7, stage::allStages[20], 8, 0xFF, 0xFF, 0b100100000001100100000, 2250.0000000, 6150.0000000, 2525.0000000, nullptr, nullptr}, //HC Treasure Room Eighth Small Chest
/* 289 */{0x40, 0, stage::allStages[8], 2, 0x1, 0x1, 0b000000000000000000100, 205.3669740, 3901.0000000, -6120.5043950, nullptr, nullptr}, //FT Boomerang
/* 290 */{ 0x42, 0, stage::allStages[29], 51, 0x11, 0x11, 0b000000100100000000000, -0.0000460, 47.0000000, -473.7650150, nullptr, nullptr }, //SPR Ball and Chain
/* 291 */{0x2A, 1, stage::allStages[65], 2, 0x1, 0x2, 0b000000000000000000100, -1261.1306150, 450.0000000, 10.0000000, nullptr, nullptr}, //Ordon Shield
/* 292 */{0x28, 1, stage::allStages[65], 5, 0x1, 0x1, 0b000000000000000000000, 128.0923770, 7.8601500, -167.8504940, nullptr, nullptr}, //Ordon Sword
/* 293 */{0x4A, 0, stage::allStages[43], 0, 0x0, 0x0, 0b000000000000000000000, -3566.3000000, 579.2000000, 2977.2000000, nullptr, nullptr}, //Fishing Rod
/* 294 */{0x65, 9, stage::allStages[65], 1, 0x0, 0xFF, 0b000000000000000000000, -55.0000000, 0.0000000, -156.0000000, nullptr, nullptr}, //Sera Bottle
/* 295 */{0x4B, 12, stage::allStages[65], 1, 0x0, 0x0, 0b000000000000000000000, -55.0000000, 0.0000000, -156.0000000, nullptr, nullptr}, //Slingshot
/* 296 */{0x48, 0, stage::allStages[45], 3, 0x0, 0x0, 0b100010000000000001000, -13659.0000000, 0.0000000, -14367.0000000, nullptr, nullptr}, //Lantern
/* 297 */{0x2C, 12, stage::allStages[68], 3, 0xFF, 0x2, 0b001000000000000000000, -500.0000000, 320.0000000, -695.0000000, nullptr, nullptr}, //Hylian Shield (Malo)
/* 298 */{0x2B, 12, stage::allStages[68], 3, 0x2, 0xFF, 0b001000000000000000000, -500.0000000, 320.0000000, -695.0000000, nullptr, nullptr}, //Wooden Shield (Malo)
/* 299 */{0x55, 1, stage::allStages[74], 7, 0x7, 0x7, 0b111111100010000000000, -4400.0000000, 0.0000000, 2500.0000000, nullptr, nullptr}, //Big Quiver
/* 300 */{ 0x56, 1, stage::allStages[74], 7, 0x15, 0x15, 0b111111100001000000000, -4400.0000000, 0.0000000, 2500.0000000, nullptr, nullptr }, //Giant Quiver
/* 301 */{0x2C, 12, stage::allStages[73], 4,  0x4, 0xFF, 0b111111100000000000000, -494.7930300, 100.0000000, 3701.0000000, nullptr, nullptr}, //Hylian Shield (Goron)
/* 302 */{0x21, 3, stage::allStages[46], 0, 0x2, 0xFF, 0b111111100000000000000, -2010.0000000, 151.0000000, 7897.0000000, nullptr, nullptr}, //Kakariko Bomb Rock Spire Heart Piece
/* 303 */{0x21, 3, stage::allStages[56], 6, 0x2, 0xFF, 0b110110000000000000000, -46688.0000000, -7953.0000000, 86307.0000000, nullptr, nullptr}, //Faron Tree Heart Piece
/* 304 */{0x21, 3, stage::allStages[56], 3, 0x2, 0xFF, 0b110110000000000000000, -21270.0000000, -5620.0000000, 55553.0000000, nullptr, nullptr}, //Kakariko Gorge Spire Heart Piece
/* 305 */{0x22, 3, stage::allStages[7], 50, 0x2, 0xFF, 0b110110000000000000000, 50.0000000, 3.0000000, 1703.0000000, nullptr, nullptr}, //Diababa Heart Container
/* 306 */{0x21, 3, stage::allStages[41], 0, 0x2, 0xFF, 0b001000000000000000000, -4358.0000000, 15307.0000000, -19476.0000000, nullptr, nullptr}, //Herding Goats Heart Piece
/* 307 */{0x22, 3, stage::allStages[4], 50, 0x4, 0xFF, 0b111111000000000000000, 203.0000000, 0.0000000, 830.0000000, nullptr, nullptr}, //Fyrus Heart Container
/* 308 */{0x22, 3, stage::allStages[1], 50, 0x7, 0xFF, 0b111111010010001000000, -915.0000000, -23960.0000000, 8916.0000000, nullptr, nullptr}, //Morpheel Heart Container
/* 309 */{ 0x22, 3, stage::allStages[25], 50, 0x10, 0xFF, 0b111111010010101000000, 85.0000000, 1799.0000000, -1264.0000000, nullptr, nullptr },
/* 310 */{ 0x22, 3, stage::allStages[28], 50, 0x12, 0xFF, 0b111111010110101000000, 279.0000000, 43.0000000, -865.0000000, nullptr, nullptr },
/* 311 */{ 0x22, 3, stage::allStages[10], 50, 0x13, 0xFF, 0b111111010110111000000, 900.0000000, 0.0000000, 0.0000000, nullptr, nullptr },
/* 312 */{ 0x22, 3, stage::allStages[13], 50, 0x15, 0xFF, 0b111111010101111000000, 317.0000000, 0.0000000, 764.0000000, nullptr, nullptr },
/* 313 */{0x22, 3, stage::allStages[16], 10, 0xFF, 0xFF, 0b111111010101111000000, -3.0000000, 2525.0000000, -14603.0000000, nullptr, nullptr}, //Zant Heart Container
/* 314 */{0x31, 1, stage::allStages[48], 0, 0x5, 0x5, 0b111111100000000000000, 21364.0000000, 525.0000000, -50.0000000, nullptr, nullptr}, //Zora Armor
/* 315 */{ 0x30, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr }, //Magic Armor
/* 316 */{0x4F, 1, stage::allStages[52], 0, 0x5, 0xFF, 0b111111110000000000000, -77679.9375000, -18765.0000000, 40764.0000000, nullptr, nullptr}, //Giant Bomb Bag
/* 317 */{ 0x3D, 0, stage::allStages[48], 0, 0xFF, 0x10, 0b111111010010101000000, 21070.0000000, 500.0000000, 181.0000000, nullptr, nullptr },
/* 318 */{ 0x3E, 12, stage::allStages[68], 3, 0x4, 0x12, 0b111111000000000000000, -500.0000000, 320.0000000, -695.0000000, nullptr, nullptr }, //Hawkeye
/* 319 */{0x51, 0, stage::allStages[50], 0, 0x5, 0xFF, 0b111111010000000000000, 44.0000000, -3854.0000000, -2626.0000000, nullptr, nullptr}, //Goron Bomb Bag
/* 320 */{0x70, 0, stage::allStages[68], 1, 0x4, 0xFF, 0b111111000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr}, //Barnes Bomb Bag
/* 321 */{0x51, 0, stage::allStages[52], 0, 0x5, 0xFF, 0b111111100000000000000, -77680.0000000, -18765.0000000, 40764.0000000, nullptr, nullptr},//Iza Bomb Bag
/* 322 */{ 0x90, 4, stage::allStages[52], 0, 0xFF, 0x8, 0b111111010010001000000, -116365.0000000, -13860.0000000, 58454.0000000, nullptr, nullptr },
/* 323 */{ 0x91, 4, stage::allStages[51], 0, 0xFF, 0x10, 0b000000000000000000000, 31662.0000000, -13330.0000000, -11934.0000000, nullptr, nullptr },
/* 324 */{ 0x80, 4, stage::allStages[46], 0, 0xFF, 0x13, 0b000000000000000000000, -344.0000000, 0.0000000, 234.0000000, nullptr, nullptr },
/* 325 */{ 0x81, 4, stage::allStages[53], 5, 0xFF, 0x13, 0b000000000000000000000, 3505.0000000, -1150.0000000, 3388.0000000, nullptr, nullptr },
/* 326 */{ 0x82, 4, stage::allStages[57], 16, 0xFF, 0x13, 0b000000000000000000000, -51480.0000000, -6425.0000000, 34034.0000000, nullptr, nullptr },
/* 327 */{ 0x83, 4, stage::allStages[63], 0, 0xFF, 0x13, 0b000000000000000000000, 2360.0000000, 104.0000000, -1150.0000000, nullptr, nullptr },
/* 328 */{ 0x84, 4, stage::allStages[68], 0, 0xFF, 0x13, 0b000000000000000000000, -386.0000000, 0.0000000, 393.0000000, nullptr, nullptr }, //Horse Call
/* 329 */{0x9d, 9, stage::allStages[45], 4, 0x1, 0xFF, 0b000000000000000000000, -13659.433594, -0.454284, -14367.083008, nullptr, nullptr}, //Coro Bottle
/* 330 */{0x75, 9, stage::allStages[73], 5, 0xFF, 0xFF, 0b000000000000000000000, 4250.363281, 134.492020, 1813.639648, nullptr, nullptr}, //Jovani Bottle
/*TODO 331 not randomized*/{ 0x60, 9, stage::allStages[62], 0, 0x5, 0xFF, 0b000000000000000000000, -13659.0000000, 0.0000000, -14367.0000000, nullptr, nullptr },
/* 332 */{0x2B, 12, stage::allStages[47], 3, 0x3, 0xFF, 0b001000000000000000000, -6545.0000000, -125.0000000, -2275.0000000, nullptr, nullptr}, //Wooden Shield (Goron)
/* 333 */{0x21, 3, stage::allStages[46], 0, 0x4, 0xFF, 0b000001000000000000000, -900.000000, 0.780221, 6600.000000, nullptr, nullptr}, //Bow Shooting Game Heart Piece
/* 334 */{0x21, 3, stage::allStages[53], 2, 0x5, 0xFF, 0b000000000000000000000, -4142.703125, 0.000000, -569.375000, nullptr, nullptr}, //Donation Heart Piece
/* 335 */{ 0x21, 3, stage::allStages[62], 0, 0xFF, 0xFF, 0b101000000010000000000, -2678.128906, -167.094162, 2246.794186, nullptr, nullptr },
/* 336 */{ 0x21, 3, stage::allStages[56], 0, 0x8, 0xFF, 0b000000000000000000000, -25148.583984, -200.000000, 9814.881836, nullptr, nullptr },
/* 337 */{ 0x21, 3, stage::allStages[61], 0, 0x8, 0xFF, 0b000000000000000000000, 3618.216797, 232.476608, 541.905518, nullptr, nullptr },
/* 338 */{ 0x21, 3, stage::allStages[55], 1, 0x8, 0xFF, 0b000000000000000000000, 4708.924805, 260.000000, -3120.967529, nullptr, nullptr },
/* 339 */{ 0x23, 2, stage::allStages[27], 1, 0x11, 0x11, 0b000000000000000000000, 293.920288, 0.000000, -337.167480, nullptr, nullptr },
/* 340 */{ 0x21, 3, stage::allStages[51], 1, 0x12, 0xFF, 0b000000000000000000000, -71795.539062, -54450.000000, 56396.738281, nullptr, nullptr },
/* 341 */{ 0x21, 3, stage::allStages[63], 0, 0x13, 0xFF, 0b000000000000000000010, 2200.000000, 104.574730, -1200.000000, nullptr, nullptr },
/* 342 */{0x20, 8, stage::allStages[20], 13, 0xFF, 0xFF, 0b000000000000000000000, -7625.000000, 52.000000, -5525.000000, nullptr, nullptr}, //
/* 343 */{0x20, 8, stage::allStages[6], 7, 0x1, 0xFF, 0b000000000000000000100, -5703.254883, 4372.640137, 11664.798828, nullptr, nullptr},


//Ooccoo
/* 344 */{ 0x33, 2, stage::allStages[6], 1, 0x1, 0x1, 0b000000000000000000100, 3775.943604, 3167.790039, 5428.488281, nullptr, nullptr },
/* 345 */{ 0x33, 2, stage::allStages[3], 14, 0x3, 0x3, 0b000000000000000000000, -14154.718750, 190.286682, 2185.947510, nullptr, nullptr },
/* 346 */{ 0x33, 2, stage::allStages[0], 2, 0x6, 0x6, 0b000000000000000000000, 2045.683228, 1500.000000, 1642.919189, nullptr, nullptr },
/* 347 */{ 0x33, 2, stage::allStages[24], 10, 0x9, 0x9, 0b000000000000000000000, -667.577815, -2100.000000, 4029.893311, nullptr, nullptr },
/* 348 */{ 0x33, 2, stage::allStages[27], 2, 0x11, 0x11, 0b000000000000000000000, 3742.823975, 0.000000, 1621.097900, nullptr, nullptr },
/* 349 */{ 0x33, 2, stage::allStages[9], 0, 0x12, 0x12, 0b000000000000000000000, -28.417549, 725.000000, 3091.288574, nullptr, nullptr },
/* 350 */{ 0x33, 2, stage::allStages[12], 16, 0x14, 0x14, 0b000000000000000000000, 6082.295898, 0.000000, 5896.656738, nullptr, nullptr },
//overworld keys
/* 351 */{ 0xfe, 8, stage::allStages[45], 4, 0xFF, 0xFF, 0b000000000000000000000, -13659.433594, -0.454284, -14367.083008, nullptr, nullptr },
/* 352 */{ 0xf3, 8, stage::allStages[58], 13, 0x5, 0xFF, 0b000000000000000000000, -93334.218750, -5725.979980, 44504.023438, nullptr, nullptr },
/* 353 */{ 0x20, 8, stage::allStages[55], 1, 0x9, 0xFF, 0b000000000000000000000, 4543.199219, 261.860168, -3035.944092, nullptr, nullptr },
//goron mines key shards
/* 354 */{ 0xf9, 2, stage::allStages[3], 14, 0x3, 0x3, 0b000000000000000000000, -15375.557617, -636.630005, 1595.673462, nullptr, nullptr },
/* 355 */{ 0xfa, 2, stage::allStages[3], 17, 0x3, 0x3, 0b000000000000000000000, 13007.017578, 2924.530029, -17705.732422, nullptr, nullptr },
/* 356 */{ 0xfd, 2, stage::allStages[3], 16, 0x4, 0x3, 0b000000000000000000000, 13055.647461, 2400.500000, -1660.316895, nullptr, nullptr },
//bugs
/* 357 */{ 0xc0, 10, stage::allStages[56], 6, 0x2, 0xFF, 0b000000000000000000000, -50212.730469, -8840.560547, 86352.757812, nullptr, nullptr },
/* 358 */{ 0xc1, 10, stage::allStages[56], 6, 0x2, 0xFF, 0b000100000010000000000, -38651.949219, -9189.901367, 73707.671875, nullptr, nullptr },
/* 359 */{ 0xca, 10, stage::allStages[56], 3, 0x2, 0xFF, 0b000000000000000000000, -9730.929688, -7200.000000, 57526.199219, nullptr, nullptr },
/* 360 */{ 0xcb, 10, stage::allStages[56], 3, 0x2, 0xFF, 0b000000000000000000000, 562.488159, -6092.589844, 61677.734375, nullptr, nullptr },
/* 361 */{ 0xd4, 10, stage::allStages[48], 0, 0x2, 0xFF, 0b000000000000000000000, 17085.654297, 557.072510, -850.370605, nullptr, nullptr },
/* 362 */{ 0xd5, 10, stage::allStages[68], 6, 0x2, 0xFF, 0b000000000000000000000, 205.938171, 17.797655, 4.593423, nullptr, nullptr },
/* 363 */{ 0xc6, 10, stage::allStages[56], 0, 0x2, 0xFF, 0b000000000000000000000, 19503.787109, 662.713684, 13563.345703, nullptr, nullptr },
/* 364 */{ 0xc7, 10, stage::allStages[56], 0, 0x2, 0xFF, 0b000000000000000000000, -10765.343750, 80.466759, -9151.101562, nullptr, nullptr },
/* 365 */{ 0xc8, 10, stage::allStages[56], 0, 0x2, 0xFF, 0b000100000010000000000, 34607.441406, -260.000000, -14273.162109, nullptr, nullptr },
/* 366 */{ 0xc9, 10, stage::allStages[56], 0, 0x2, 0xFF, 0b000100000010000000000, 37897.406250, -260.000000, -40525.894531, nullptr, nullptr },
/* 367 */{ 0xcc, 10, stage::allStages[56], 13, 0x5, 0xFF, 0b000100000010000000000, -93754.703125, -5925.377441, 31642.708984, nullptr, nullptr },
/* 368 */{ 0xcd, 10, stage::allStages[56], 13, 0x5, 0xFF, 0b000100000010000000000, -88147.609375, -6854.451660, 58998.777344, nullptr, nullptr },
/* 369 */{ 0xc2, 10, stage::allStages[57], 8, 0x5, 0xFF, 0b000000000000000000000, -75074.406250, -384.115967, 16053.256836, nullptr, nullptr },
/* 370 */{ 0xc3, 10, stage::allStages[57], 8, 0x5, 0xFF, 0b000100000010000000000, -78787.265625, -1472.352661, 2016.588013, nullptr, nullptr },
/* 371 */{ 0xce, 10, stage::allStages[57], 16, 0x5, 0xFF, 0b000000000000000000000, -45085.273438, 6042.771484, 29910.453125, nullptr, nullptr },
/* 372 */{ 0xcf, 10, stage::allStages[57], 16, 0x5, 0xFF, 0b000000000000000000000, -54377.070312, -5460.576660, 27647.970703, nullptr, nullptr },
/* 373 */{ 0xc4, 10, stage::allStages[56], 10, 0x5, 0xFF, 0b000000000000000000000, -62781.214844, -1350.003052, -33241.687500, nullptr, nullptr },
/* 374 */{ 0xc5, 10, stage::allStages[56], 10, 0x5, 0xFF, 0b000000000000000000000, -48976.765625, -677.295044, -50834.683594, nullptr, nullptr },
/* 375 */{ 0xd2, 10, stage::allStages[50], 1, 0x5, 0xFF, 0b000000000000000000000, 3540.047363, -5150.441895, 15789.274414, nullptr, nullptr },
/* 376 */{ 0xd3, 10, stage::allStages[61], 1, 0x5, 0xFF, 0b000000000000000000000, 6013.379395, 445.474884, -224.899765, nullptr, nullptr },
/* 377 */{ 0xd6, 10, stage::allStages[59], 0, 0x8, 0xFF, 0b000000000000000000000, 28767.958984, 524.933899, 58604.546875, nullptr, nullptr },
/* 378 */{ 0xd7, 10, stage::allStages[59], 0, 0x8, 0xFF, 0b000000000000000000000, 11790.147461, 340.034332, 55725.250000, nullptr, nullptr },
/* 379 */{ 0xd0, 10, stage::allStages[54], 1, 0x12, 0xFF, 0b000000000000000000000, 1304.371826, 1005.000000, 7306.179688, nullptr, nullptr },
/* 380 */{ 0xd1, 10, stage::allStages[54], 2, 0x12, 0xFF, 0b000100000010000000000, 521.038208, 1000.000000, 5867.415527, nullptr, nullptr },
//bug rewards
/* 381 */{ 0x35, 1, stage::allStages[73], 3, 0xFF, 0x5, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 382 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 383 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 384 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 385 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 386 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 387 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 388 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 389 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 390 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 391 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 392 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 393 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 394 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 395 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 396 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 397 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 398 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 399 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 400 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 401 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 402 */{ 0x06, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 403 */{ 0x05, 7, stage::allStages[73], 3, 0xFF, 0xFF, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
/* 404 */{ 0x36, 1, stage::allStages[73], 3, 0xFF, 0x12, 0b000000000000000000000, -123.609940, 40.000000, 305.168640, nullptr, nullptr },
//poes
/*#1*/{ 0xe0, 11, stage::allStages[24], 2, 0x8, 0xFF, 0b000000000000000000010, 105.801384, -19.549999, -741.391968, nullptr, nullptr },
/*#2*/{ 0xe0, 11, stage::allStages[24], 3, 0x8, 0xFF, 0b100000000010000000010, 3606.844482, 150.030182, -5323.249512, nullptr, nullptr },
/*#3*/{ 0xe0, 11, stage::allStages[24], 5, 0x8, 0xFF, 0b000000000000000000010, 5712.277344, 1050.019775, 4526.544922, nullptr, nullptr },
/*#4*/{ 0xe0, 11, stage::allStages[24], 8, 0x8, 0xFF, 0b000000000000000000010, -4197.771973, 1040.154663, 4983.674805, nullptr, nullptr },
/*#5*/{ 0xe0, 11, stage::allStages[73], 5, 0x8, 0xFF, 0b000000000000000000010, 4186.364746, -75.000000, 2795.808350, nullptr, nullptr },
/*#6*/{ 0xe0, 11, stage::allStages[31], 16, 0x10, 0xFF, 0b100000000000100000010, 126.849854, -20000.000000, -337.206903, nullptr, nullptr },
/*#7*/{ 0xe0, 11, stage::allStages[31], 32, 0x13, 0xFF, 0b100000000100110000010, 231.875824, -40000.000000, -216.2944296, nullptr, nullptr },
/*#8*/{ 0xe0, 11, stage::allStages[31], 43, 0x15, 0xFF, 0b100000000101110000010, -4560.734375, -53750.000000, -825.646851, nullptr, nullptr },
/*#9*/{ 0xe0, 11, stage::allStages[12], 12, 0x15, 0xFF, 0b100000000001000000010, -12660.987305, 1982.199951, -7632.476074, nullptr, nullptr },
/*#10*/{ 0xe0, 11, stage::allStages[12], 13, 0x15, 0xFF, 0b100000000001000000010, 3916.892090, 4496.779785, -12149.609375, nullptr, nullptr },
/*#11*/{ 0xe0, 11, stage::allStages[47], 0, 0x8, 0xFF, 0b000000000000000000010, -2502.529785, -1533.660522, 18041.601562, nullptr, nullptr },
/*#12*/{ 0xe0, 11, stage::allStages[45], 11, 0x8, 0xFF, 0b000000000000000000010, -25786.427734, 300.000000, -20456.810547, nullptr, nullptr },
/*#13*/{ 0xe0, 11, stage::allStages[59], 0, 0x8, 0xFF, 0b000000000000000000010, 66240.039062, 143.258804, 56904.339844, nullptr, nullptr },
/*#14*/{ 0xe0, 11, stage::allStages[59], 0, 0x8, 0xFF, 0b100000000010000000010, -816.907959, 2496.226562, 57933.289062, nullptr, nullptr },
/*#15*/{ 0xe0, 11, stage::allStages[59], 0, 0x8, 0xFF, 0b100000000010000000010, 26747.324219, -46.507732, 26175.406250, nullptr, nullptr },
/*#16*/{ 0xe0, 11, stage::allStages[37], 2, 0x8, 0xFF, 0b100000000010000000010, -1026.819824, 1.152117, -161.420013, nullptr, nullptr },
/*#17*/{ 0xe0, 11, stage::allStages[37], 2, 0x8, 0xFF, 0b100000000010000000010, -286.849121, 3.514773, -895.548218, nullptr, nullptr },
/*#18*/{ 0xe0, 11, stage::allStages[59], 0, 0x8, 0xFF, 0b100000000010000000010, -2024.554443, 16.013172, 11583.281250, nullptr, nullptr },
/*#19*/{ 0xe0, 11, stage::allStages[55], 1, 0x8, 0xFF, 0b000000000000000000010, 1812.931274, 0.000000, 1155.415161, nullptr, nullptr },
/*#20*/{ 0xe0, 11, stage::allStages[55], 3, 0x8, 0xFF, 0b000000000000000000010, 283.265228, 840.000000, -12366.407227, nullptr, nullptr },
/*#21*/{ 0xe0, 11, stage::allStages[48], 0, 0x8, 0xFF, 0b000000000000000000010, 12836.060547, 100.000000, 178.608246, nullptr, nullptr },
/*#22*/{ 0xe0, 11, stage::allStages[48], 0, 0x8, 0xFF, 0b000000000000000000010, 14444.615234, 256.835815, -527.642578, nullptr, nullptr },
/*#24*/{ 0xe0, 11, stage::allStages[63], 0, 0x13, 0xFF, 0b100000000000010000010, 1683.054077, 480.000000, -6715.406250, nullptr, nullptr },
/*#24*/{ 0xe0, 11, stage::allStages[57], 8, 0x8, 0xFF, 0b000000000000000000010, -81042.460938, -1650.079956, 21720.513672, nullptr, nullptr },
/*#25*/{ 0xe0, 11, stage::allStages[57], 17, 0x8, 0xFF, 0b000000000000000000010, -42291.773438, -1400.000000, 10844.620117, nullptr, nullptr },
/*#26*/{ 0xe0, 11, stage::allStages[56], 3, 0x8, 0xFF, 0b000000000000000000010, -10858.849609, -5700.000000, 55509.773438, nullptr, nullptr },
/*#27*/{ 0xe0, 11, stage::allStages[32], 0, 0x8, 0xFF, 0b110000000000000000010, 4567.875977, 5027.688477, -5207.911621, nullptr, nullptr },
/*#28*/{ 0xe0, 11, stage::allStages[56], 6, 0x8, 0xFF, 0b000000000000000000010, -45153.691406, -8909.261719, 74205.156250, nullptr, nullptr },
/*#29*/{ 0xe0, 11, stage::allStages[56], 10, 0x8, 0xFF, 0b110000000000000000010, -45192.148438, -2474.139893, -32984.613281, nullptr, nullptr },
/*#30*/{ 0xe0, 11, stage::allStages[35], 0, 0x8, 0xFF, 0b110000000000000000010, 269.485474, 22.380699, -981.643372, nullptr, nullptr },
/*#31*/{ 0xe0, 11, stage::allStages[35], 0, 0x8, 0xFF, 0b110000000000000000010, -236.254684, 150.000000, -1036.175781, nullptr, nullptr },
/*#32*/{ 0xe0, 11, stage::allStages[57], 16, 0x8, 0xFF, 0b000000000000000000010, -53146.578125, -5153.850098, 25666.673828, nullptr, nullptr },
/*#33*/{ 0xe0, 11, stage::allStages[56], 13, 0x8, 0xFF, 0b100000001010000000010, -81177.609375, -6000.000000, 65960.148438, nullptr, nullptr },
/*#34*/{ 0xe0, 11, stage::allStages[46], 0, 0x8, 0xFF, 0b000000000000000000010, 3372.341553, 2300.000000, -3018.808594, nullptr, nullptr },
/*#35*/{ 0xe0, 11, stage::allStages[46], 0, 0x8, 0xFF, 0b000000000000000000010, -1487.586548, 3848.365234, -5915.137207, nullptr, nullptr },
/*#36*/{ 0xe0, 11, stage::allStages[52], 0, 0x8, 0xFF, 0b000000000000000000010, -74531.953125, -18336.878906, 47025.640625, nullptr, nullptr },
/*#37*/{ 0xe0, 11, stage::allStages[52], 0, 0x8, 0xFF, 0b000000000000000000010, -96335.820312, -17510.320312, 62149.574219, nullptr, nullptr },
/*#38*/{ 0xe0, 11, stage::allStages[52], 0, 0x8, 0xFF, 0b000000000000000000010, -115949.156250, -15840.000000, 59894.671875, nullptr, nullptr },
/*#39*/{ 0xe0, 11, stage::allStages[52], 0, 0x8, 0xFF, 0b101000000000000000010, -104251.976562, -18469.791016, 42262.726562, nullptr, nullptr },
/*#40*/{ 0xe0, 11, stage::allStages[52], 0, 0x8, 0xFF, 0b101000000000000000010, -115114.968750, -14096.000000, 25330.574219, nullptr, nullptr },
/*#41*/{ 0xe0, 11, stage::allStages[33], 0, 0x8, 0xFF, 0b100000100000000000010, 8918.118164, 355.380005, -6922.565430, nullptr, nullptr },
/*#42*/{ 0xe0, 11, stage::allStages[33], 0, 0x8, 0xFF, 0b110000000000000000010, 801.443970, -4197.580078, -20497.589844, nullptr, nullptr },
/*#43*/{ 0xe0, 11, stage::allStages[33], 0, 0x8, 0xFF, 0b110000000000000000010, 6740.693848, -5139.174805, -10953.290039, nullptr, nullptr },
/*#44*/{ 0xe0, 11, stage::allStages[54], 3, 0x12, 0xFF, 0b100000100000000000010, -5483.465332, 500.000000, 5302.014648, nullptr, nullptr },
/*#45*/{ 0xe0, 11, stage::allStages[54], 1, 0x12, 0xFF, 0b000000000000000000010, 1214.411987, 1639.093384, -3631.436035, nullptr, nullptr },
/*#46*/{ 0xe0, 11, stage::allStages[54], 3, 0x12, 0xFF, 0b000000000000000000010, -21789.335936, 2200.000000, 10000.409180, nullptr, nullptr },
/*#47*/{ 0xe0, 11, stage::allStages[51], 0, 0x11, 0xFF, 0b100000000000000010010, 843.887695, -9361.725586, -21468.560547, nullptr, nullptr },
/*#48*/{ 0xe0, 11, stage::allStages[51], 0, 0x11, 0xFF, 0b100000000000000010010, 7834.021484, -8356.457031, -18110.230469, nullptr, nullptr },
/*#49*/{ 0xe0, 11, stage::allStages[51], 0, 0x11, 0xFF, 0b100000000000000010010, -4954.811035, -4714.479980, -18838.253906, nullptr, nullptr },
/*#50*/{ 0xe0, 11, stage::allStages[51], 2, 0x12, 0xFF, 0b100000000100000000010, -6137.537598, -1800.000000, -10043.368164, nullptr, nullptr },
/*#51*/{ 0xe0, 11, stage::allStages[51], 1, 0x11, 0xFF, 0b100000000000000010010, -69507.492188, -52429.000000, 62508.425781, nullptr, nullptr },
/*#52*/{ 0xe0, 11, stage::allStages[27], 0, 0x11, 0xFF, 0b000000000000000000010, -238.949356, -2.310000, 2920.424072, nullptr, nullptr },
/*#53*/{ 0xe0, 11, stage::allStages[27], 0, 0x12, 0xFF, 0b100000000100000000010, 533.658569, -84.440002, 5910.784180, nullptr, nullptr },
/*#54*/{ 0xe0, 11, stage::allStages[27], 6, 0x12, 0xFF, 0b100000000100000000010, 4784.004395, 950.000000, 331.876648, nullptr, nullptr },
/*#55*/{ 0xe0, 11, stage::allStages[9], 2, 0x13, 0xFF, 0b100000000000010000010, -3295.982178, 2750.000000, 11.354874, nullptr, nullptr },
/*#56*/{ 0xe0, 11, stage::allStages[9], 5, 0x12, 0xFF, 0b100000000010100000010, 1861.281128, 7400.000000, -358.31518, nullptr, nullptr },
/*#57*/{ 0xe0, 11, stage::allStages[54], 2, 0x13, 0xFF, 0b100000000000010000010, -1086.470947, 925.000000, 6306.895020, nullptr, nullptr },
/*#58*/{ 0xe0, 11, stage::allStages[61], 0, 0x8, 0xFF, 0b000000000000000000010, 942.983948, 817.438049, 3387.270996, nullptr, nullptr },
/*#59*/{ 0xe0, 11, stage::allStages[50], 0, 0x8, 0xFF, 0b000000000000000000010, 3444.790039, -4658.747559, 11720.103516, nullptr, nullptr },
/*#60*/{ 0xe0, 11, stage::allStages[50], 0, 0x8, 0xFF, 0b000000000000000000010, 297.160065, -4608.964844, 7384.047852, nullptr, nullptr },
/*60 poe reward*/{ 0x07, 7, stage::allStages[73], 5, 0x15, 0xFF, 0b000000000000000000000, 4250.363281, 134.492020, 1813.639648, nullptr, nullptr },
//sky book quest
/*empty*/{ 0xe9, 0, stage::allStages[72], 0, 0x13, 0x13, 0b000000000000010000000, -532.266479, 1.500000, -343.810791, nullptr, nullptr },
/*faron*/{ 0xea, 0, stage::allStages[45], 8, 0x13, 0x13, 0b000000000000010000000, -17500.000000, -310.000000, -20950.000000, nullptr, nullptr },
/*eldin gorge*/{ 0xea, 0, stage::allStages[56], 3, 0x13, 0x13, 0b000000000000010000000, -10195.000000, -4760.000000, 39363.000000, nullptr, nullptr },
/*edin bridge*/{ 0xea, 0, stage::allStages[56], 0, 0x13, 0x13, 0b000000000000010000000, 33650.000000, -80.000000, -35970.000000, nullptr, nullptr },
/*west castle*/{ 0xea, 0, stage::allStages[57], 8, 0x13, 0x13, 0b000000000000010000000, -81950.000000, -1300.000000, 20650.000000, nullptr, nullptr },
/*hylia bridge*/{ 0xea, 0, stage::allStages[56], 13, 0x13, 0x13, 0b000000000000010000000, -94664.000000, -5040.000000, 18311.000000, nullptr, nullptr },
/*desert*/{ 0xea, 0, stage::allStages[59], 0, 0x13, 0x13, 0b000000000000010000000, 15120.000000, 952.169983, 59670.000000, nullptr, nullptr },
//shop items
//Ordon
{0x64, 12, stage::allStages[65], 1, 0x5, 0xFF, 0b000000000000000000000, -55.0000000, 0.0000000, -156.0000000, nullptr, nullptr},
{0x66, 12, stage::allStages[65], 1, 0x1, 0xFF, 0b000000000000000000000, -55.0000000, 0.0000000, -156.0000000, nullptr, nullptr},
{0x9e, 12, stage::allStages[65], 1, 0x5, 0xFF, 0b000000000000000000000, -55.0000000, 0.0000000, -156.0000000, nullptr, nullptr},
//Coro
/*auto gotten*///{0x66, 12, stage::allStages[45], 4, 0x1, 0xFF, 0b000000000000000000000, -13659.433594, -0.454284, -14367.083008, nullptr, nullptr},
//Malo Kakariko
/*auto gotten*///{0x0e, 12, stage::allStages[68], 3, 0x5, 0xFF, 0b001000000000000000000, -500.0000000, 320.0000000, -695.0000000, nullptr, nullptr},
{0x61, 12, stage::allStages[68], 3, 0x5, 0xFF, 0b001000000000000000000, -500.0000000, 320.0000000, -695.0000000, nullptr, nullptr},
//Goron Shop Death Mountain
/*auto gotten*///{0x0e, 12, stage::allStages[47], 3, 0x5, 0xFF, 0b001000000000000000000, -6545.0000000, -125.0000000, -2275.0000000, nullptr, nullptr},
{0x66, 12, stage::allStages[47], 3, 0x3, 0xFF, 0b001000000000000000000, -6545.0000000, -125.0000000, -2275.0000000, nullptr, nullptr},
{0x64, 12, stage::allStages[47], 3, 0x5, 0xFF, 0b001000000000000000000, -6545.0000000, -125.0000000, -2275.0000000, nullptr, nullptr},
//Barnes
/*auto gotten*///{0x0b, 12, stage::allStages[68], 1, 0x4, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x0c, 12, stage::allStages[68], 1, 0x4, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x0d, 12, stage::allStages[68], 1, 0x4, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x16, 12, stage::allStages[68], 1, 0x5, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x17, 12, stage::allStages[68], 1, 0x5, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x18, 12, stage::allStages[68], 1, 0x5, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x1d, 12, stage::allStages[68], 1, 0x8, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x1a, 12, stage::allStages[68], 1, 0x8, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
/*auto gotten*///{0x1b, 12, stage::allStages[68], 1, 0x8, 0xFF, 0b000000000000000000000, 800.0000000, 0.0000000, -300.0000000, nullptr, nullptr},
//Goron Night Kakariko
{0x63, 12, stage::allStages[46], 0, 0x5, 0xFF, 0b001000000000000000000, -1350.000000, 0.000000, -3070.000000, nullptr, nullptr},
{0x61, 12, stage::allStages[46], 0, 0x5, 0xFF, 0b001000000000000000000, -1350.000000, 0.000000, -3070.000000, nullptr, nullptr},
{0x66, 12, stage::allStages[46], 0, 0x4, 0xFF, 0b001000000000000000000, -1350.000000, 0.000000, -3070.000000, nullptr, nullptr},
//Goron Merchants Castle Town
{0x61, 12, stage::allStages[73], 4, 0x5, 0xFF, 0b111111100000000000000, -685.106323, 100.000000, 3819.986572, nullptr, nullptr},
{0x66, 12, stage::allStages[73], 4, 0x5, 0xFF, 0b111111100000000000000, -801.576233, 1000.000000, 4318.003906, nullptr, nullptr},
{0x10, 12, stage::allStages[53], 0, 0x5, 0xFF, 0b111111100000000000000, -169.985306, 1120.000000, 3406.518799, nullptr, nullptr},
{ 0x6d, 12, stage::allStages[53], 3, 0x8, 0xFF, 0b111111100000000000000, 511.206268, -200.000000, 7069.889160, nullptr, nullptr },
//Malo Castle Town
/*auto gotten*///{0x0d, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr},
/*auto gotten*///{0x18, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr},
/*auto gotten*///{0x1b, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr},
/*auto gotten*///{0x0e, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr},
{ 0x61, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr },
{ 0x63, 12, stage::allStages[73], 0, 0x8, 0xFF, 0b111111100000000000000, 1557.0000000, -200.0000000, 3491.0000000, nullptr, nullptr },
//City In The Sky
/*auto gotten*///{0x10, 12, stage::allStages[12], 16, 0x14, 0xFF, 0b111111100000000000000, -187.485748, 140.000000, -327.944885, nullptr, nullptr},
/*auto gotten*///{0x0d, 12, stage::allStages[12], 16, 0x14, 0xFF, 0b111111100000000000000, -187.485748, 140.000000, -327.944885, nullptr, nullptr},
{ 0x66, 12, stage::allStages[12], 16, 0x14, 0xFF, 0b111111100000000000000, -187.485748, 140.000000, -327.944885, nullptr, nullptr },
{ 0x61, 12, stage::allStages[12], 16, 0x14, 0xFF, 0b111111100000000000000, -187.485748, 140.000000, -327.944885, nullptr, nullptr },
{ 0x63, 12, stage::allStages[12], 16, 0x14, 0xFF, 0b111111100000000000000, -187.485748, 140.000000, -327.944885, nullptr, nullptr },
//Fairy Tear Cave Of Ordeals (includes spring warps)
{ 0x73, 12, stage::allStages[31], 49, 0x15, 0xFF, 0b100000000101110000010, -7.837189, -61250.000000, -3557.497070, nullptr, nullptr }//,
//Scoopables
//Nasty Soup
//{0x6a, 12, stage::allStages[45], 4, 0x5, 0xFF, 0b010000000000000000000, -13961.199219, 0.000000, -14341.190430, nullptr, nullptr},
//Trill
//{0x69, 12, stage::allStages[45], 6, 0x5, 0xFF, 0b000000000000000000000, -37251.628906, 350.000000, -19399.669922, nullptr, nullptr},
//{0x68, 12, stage::allStages[45], 6, 0x1, 0xFF, 0b000000000000000000000, -37285.023438, 350.000000, -19244.654297, nullptr, nullptr},
//Oil pots
//{0x68, 12, stage::allStages[24], 0, 0x9, 0xFF, 0b000000000000000000000, 852.599731, 1.000000, 5601.884766, nullptr, nullptr},
//{0x68, 12, stage::allStages[20], 9, 0xFF, 0xFF, 0b000000000000000000000, 4335.721191, 152.000000, -11863.983398, nullptr, nullptr},
//{0x68, 12, stage::allStages[20], 2, 0xFF, 0xFF, 0b000000000000000000000, -1334.620239, 1250.000000, -3007.779053, nullptr, nullptr},
//Yeto soup
//{0x7f, 12, stage::allStages[27], 2, 0x11, 0xFF, 0b000000000000000000000, 3154.522705, 144.729996, 340.811127, nullptr, nullptr},
	};
	
	u16 checkPriorityOrder[20] = {
		293, //fishing rod
		0, //wooden sword
		295, //slingshot
		296, //lantern
		292, //ordon sword
		298, //boomerang
		21, //iron boots
		291, //ordon shield
		297, //hylian shield
		33, //bow
		320, //bomb bag
		314, //zora armor
		58, //clawshot
		322, //Auru memo
		155, //spinner
		323, //Ashei sketch
		317, //coral earring
		290, //ball and chain
		202, //doninion rod
		224 //double clawshot
	};
}