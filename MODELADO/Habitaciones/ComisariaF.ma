//Maya ASCII 2016 scene
//Name: ComisariaF.ma
//Last modified: Mon, May 08, 2017 04:39:27 PM
//Codeset: 1252
requires maya "2016";
requires -nodeType "ilrOptionsNode" -nodeType "ilrUIOptionsNode" -nodeType "ilrBakeLayerManager"
		 -nodeType "ilrBakeLayer" "Turtle" "2016.0.0";
requires "stereoCamera" "10.0";
currentUnit -l centimeter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2016";
fileInfo "version" "2016";
fileInfo "cutIdentifier" "201603180400-990260";
fileInfo "osv" "Microsoft Windows 8 Home Premium Edition, 64-bit  (Build 9200)\n";
fileInfo "license" "student";
createNode transform -s -n "persp";
	rename -uid "01149FCA-4BDD-8158-9173-0DBE2CE120C6";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 26.078007970397618 116.16574733250897 70.157229892530623 ;
	setAttr ".r" -type "double3" -44.738352721916293 -664.59999999979152 0 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "B519BEC8-47C1-A8BC-2BE8-C19E03BE1206";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".coi" 155.90678492492827;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".hc" -type "string" "viewSet -p %camera";
createNode transform -s -n "top";
	rename -uid "CAE23EFF-46CB-B00C-9CAB-9A8CC618DEC5";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 100.1 0 ;
	setAttr ".r" -type "double3" -89.999999999999986 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "3059EEA1-46D7-5CDA-D748-35AA7BC16E38";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
createNode transform -s -n "front";
	rename -uid "6FA1F5AB-42EE-5EFC-DC49-8987C049A124";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 100.1 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "C634A827-4D9C-3B59-8592-B48A465B5AAC";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
createNode transform -s -n "side";
	rename -uid "2A15F05D-46A5-4B68-6B74-8CA25217B997";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 100.1 0 0 ;
	setAttr ".r" -type "double3" 0 89.999999999999986 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "4086260B-4B70-862D-EE60-EBB89BE0DF51";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
createNode transform -n "group";
	rename -uid "695B7D4E-47E1-79FF-1512-C097403C833B";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "group1";
	rename -uid "4DBDD79F-4C04-F4E2-F3A8-F3802AE2A55E";
	setAttr ".t" -type "double3" 13.702080722360428 0 0 ;
	setAttr ".rp" -type "double3" -2.9126323588229921 7.6497387019120664 5.0825302629886693 ;
	setAttr ".sp" -type "double3" -2.9126323588229921 7.6497387019120664 5.0825302629886693 ;
createNode transform -n "pasted__group" -p "group1";
	rename -uid "931A4602-459F-F8F7-3C54-F4AAB6E47013";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "pSphere1";
	rename -uid "3C04CD23-48A9-FFDC-295B-32A6B8D9BB35";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "transform1" -p "pSphere1";
	rename -uid "E4264D05-4F5D-49B4-5E47-DD83C2C220A6";
	setAttr ".v" no;
createNode mesh -n "pSphereShape1" -p "transform1";
	rename -uid "76F04C40-4B34-B594-BEE5-B3A72B90AD76";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group2";
	rename -uid "BB71A79F-4464-E313-1E78-47979B3D5DD9";
	setAttr ".t" -type "double3" 0 2.2860572540755562 -2.0661386260474082 ;
	setAttr ".r" -type "double3" 90 0 0 ;
	setAttr ".rp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
	setAttr ".sp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
createNode transform -n "pasted__pSphere1" -p "group2";
	rename -uid "2FFF969A-4B49-7000-6228-668792409FFF";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "transform2" -p "pasted__pSphere1";
	rename -uid "C78CAC10-4FFE-75F5-A52B-FB9C8CE6DA9C";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape1" -p "transform2";
	rename -uid "EB652E43-430A-B804-FBD4-A29FC9C02DC2";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group3";
	rename -uid "0F4939D2-410E-16E4-3A54-F4AD1ADE8F78";
	setAttr ".t" -type "double3" 6.9487688161220884 0.059592274044796056 0.0013084968463168423 ;
	setAttr ".rp" -type "double3" -3.9135857720462037 4.5717899799346924 -2.2979241609573364 ;
	setAttr ".sp" -type "double3" -3.9135857720462037 4.5717899799346924 -2.2979241609573364 ;
createNode transform -n "pasted__pSphere2" -p "group3";
	rename -uid "56CE3FC3-44FD-20C4-BCF3-BF8E7E6618AB";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "pasted__transform1" -p "pasted__pSphere2";
	rename -uid "2BF70449-4415-FBFC-9369-C2AD5B070506";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape1" -p "pasted__transform1";
	rename -uid "CA83DA49-46D8-0307-FFE9-6F9D805D23E5";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group2" -p "group3";
	rename -uid "43564E57-4EDC-1362-D13D-78B8B9807AE5";
	setAttr ".t" -type "double3" 0 2.2860572540755562 -2.0661386260474082 ;
	setAttr ".r" -type "double3" 90 0 0 ;
	setAttr ".rp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
	setAttr ".sp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
createNode transform -n "pasted__pasted__pSphere1" -p "pasted__group2";
	rename -uid "107230FC-45F8-A133-E6D5-4E8A9B5AD15D";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "pasted__transform2" -p "pasted__pasted__pSphere1";
	rename -uid "D2FB0B09-4E61-039B-42B2-0E890093BD55";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pSphereShape1" -p "pasted__transform2";
	rename -uid "EF0C2342-4736-AE8B-A912-F08F73A71689";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group4";
	rename -uid "1C773A9A-4EF3-E189-D4C7-A2881F63A3BF";
	setAttr ".t" -type "double3" -7.7837151752370568 0 0 ;
	setAttr ".rp" -type "double3" 9.8277817827609191 4.690974977825924 -2.2953072229489102 ;
	setAttr ".sp" -type "double3" 9.8277817827609191 4.690974977825924 -2.2953072229489102 ;
createNode transform -n "pasted__group3" -p "group4";
	rename -uid "73F36C7F-4D09-D418-BCB7-7CAFC7C3F69F";
	setAttr ".t" -type "double3" 6.9487688161220884 0.059592274044796056 0.0013084968463168423 ;
	setAttr ".rp" -type "double3" -3.9135857720462037 4.5717899799346924 -2.2979241609573364 ;
	setAttr ".sp" -type "double3" -3.9135857720462037 4.5717899799346924 -2.2979241609573364 ;
createNode transform -n "pasted__pasted__pSphere2" -p "pasted__group3";
	rename -uid "6C0E29B4-44F4-5FFF-FED7-A085C1382D99";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "pasted__pasted__transform1" -p "pasted__pasted__pSphere2";
	rename -uid "5E50DC2C-4F32-5EDA-C188-528788361A0E";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pSphereShape1" -p "pasted__pasted__transform1";
	rename -uid "2DF90FD5-4052-9D10-CD7E-21B5844BE229";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__group2" -p "pasted__group3";
	rename -uid "493AA793-41CC-D246-D4F7-BD9C312AA011";
	setAttr ".t" -type "double3" 0 2.2860572540755562 -2.0661386260474082 ;
	setAttr ".r" -type "double3" 90 0 0 ;
	setAttr ".rp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
	setAttr ".sp" -type "double3" -4.1052590325692337 2.3821651344194348 -2.2979241614587962 ;
createNode transform -n "pasted__pasted__pasted__pSphere1" -p "pasted__pasted__group2";
	rename -uid "9A9982E7-47A3-C02D-BD95-8184D0294595";
	setAttr ".t" -type "double3" -4.1052585335134291 4.4753568912260366 -2.2979234128750896 ;
	setAttr ".s" -type "double3" 4.1863835136132037 4.1863835136132037 4.1863835136132037 ;
createNode transform -n "pasted__pasted__transform2" -p "pasted__pasted__pasted__pSphere1";
	rename -uid "722915D7-420A-47FA-70E9-7CB9E985AB2F";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pSphereShape1" -p "pasted__pasted__transform2";
	rename -uid "65C4A6B8-4A13-D7F2-3FE0-229CA6FE3BFA";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group5";
	rename -uid "1AAF6068-4824-399F-29D9-9ABE2968D70C";
	setAttr ".t" -type "double3" -17.963765294180597 0 -7.0979049399729854 ;
	setAttr ".rp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
	setAttr ".sp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
createNode transform -n "group6";
	rename -uid "E7528387-4EAC-3B6A-46CA-1285D34A8F3A";
	setAttr ".t" -type "double3" 18.327964975922832 0 -8.026070704542775 ;
	setAttr ".rp" -type "double3" -2.812676668934099 3.329604443369405 -3.1030162869043072 ;
	setAttr ".sp" -type "double3" -2.812676668934099 3.329604443369405 -3.1030162869043072 ;
createNode transform -n "pasted__group5" -p "group6";
	rename -uid "B8001EA5-4F9D-019A-F9C7-6DA4C20CB52F";
	setAttr ".t" -type "double3" -17.963765294180597 0 -7.0979049399729854 ;
	setAttr ".rp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
	setAttr ".sp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
createNode transform -n "group7";
	rename -uid "72C8C20F-4D96-42C5-F077-4E9B1CE2C8D4";
	setAttr ".t" -type "double3" 0 0 -8.218375814411818 ;
	setAttr ".rp" -type "double3" 14.294785336055865 5.064507592829619 -10.540117463391923 ;
	setAttr ".sp" -type "double3" 14.294785336055865 5.064507592829619 -10.540117463391923 ;
createNode transform -n "pasted__group5" -p "group7";
	rename -uid "22E05F93-4F7A-4298-0794-92A62B05FCFB";
	setAttr ".t" -type "double3" -17.963765294180597 0 -7.0979049399729854 ;
	setAttr ".rp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
	setAttr ".sp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
createNode transform -n "group8";
	rename -uid "6DC859C1-479E-74CF-8E11-32A90AB57B7F";
	setAttr ".t" -type "double3" -21.135628885790766 1.9267260991047919 9.3817359944023533 ;
	setAttr ".rp" -type "double3" 15.515288306988733 0.69441957153428557 -11.129086991447082 ;
	setAttr ".sp" -type "double3" 15.515288306988733 0.69441957153428557 -11.129086991447082 ;
createNode transform -n "pasted__group6" -p "group8";
	rename -uid "E116BE14-4007-38F4-54B3-4FABEA94A70A";
	setAttr ".t" -type "double3" 18.327964975922832 0 -8.026070704542775 ;
	setAttr ".rp" -type "double3" -2.812676668934099 3.329604443369405 -3.1030162869043072 ;
	setAttr ".sp" -type "double3" -2.812676668934099 3.329604443369405 -3.1030162869043072 ;
createNode transform -n "pasted__pasted__group5" -p "pasted__group6";
	rename -uid "234EE03E-4D67-8DA9-0092-9F9906D866DC";
	setAttr ".t" -type "double3" -17.963765294180597 0 -7.0979049399729854 ;
	setAttr ".rp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
	setAttr ".sp" -type "double3" 15.151088625246498 4.9352284494950922 -2.7601635101914495 ;
createNode transform -n "group9";
	rename -uid "8CC9FDA9-4F80-98A5-4428-4483DB67C37D";
	setAttr ".t" -type "double3" 19.516436457965316 0 0 ;
	setAttr ".rp" -type "double3" -5.6660368515623381 5.7524351254982804 -2.3446896185475592 ;
	setAttr ".sp" -type "double3" -5.6660368515623381 5.7524351254982804 -2.3446896185475592 ;
createNode transform -n "group10";
	rename -uid "AA5E8F74-486E-A317-653D-1E9386D81973";
	setAttr ".t" -type "double3" 13.997242368634964 0 0 ;
	setAttr ".rp" -type "double3" -5.6236058286005859 6.9160619717786354 -3.2582150946322903 ;
	setAttr ".sp" -type "double3" -5.6236058286005859 6.9160619717786354 -3.2582150946322903 ;
createNode transform -n "group11";
	rename -uid "619A6F18-49D9-EDB6-F49D-68B4CBF2207C";
	setAttr ".t" -type "double3" 21.51894256768195 0 0 ;
	setAttr ".rp" -type "double3" -7.162289279252029 4.01173260619667 16.58338963679121 ;
	setAttr ".sp" -type "double3" -7.162289279252029 4.01173260619667 16.58338963679121 ;
createNode transform -n "pSphere3";
	rename -uid "B30F2595-4684-9FAF-CFF4-AF9808F3D022";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "transform4" -p "pSphere3";
	rename -uid "C08C3C54-4F53-15E4-05A1-E1A28EA239F8";
	setAttr ".v" no;
createNode mesh -n "pSphereShape3" -p "transform4";
	rename -uid "C72427B1-4E31-7F17-74CE-7CB3A30832FB";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pCylinder2";
	rename -uid "DCAFF943-4B2C-3143-845D-1DB5E769CB18";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "transform3" -p "pCylinder2";
	rename -uid "894F6D33-45CD-263E-721A-089493CF7CB3";
	setAttr ".v" no;
createNode mesh -n "pCylinderShape2" -p "transform3";
	rename -uid "9910616F-410A-9BF8-46B6-A180F708277B";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group12";
	rename -uid "17996F39-4227-E1C2-54C8-4482C0999E6D";
	setAttr ".t" -type "double3" 5.9879654979862469 0 0 ;
	setAttr ".rp" -type "double3" -0.040817791181385177 -0.081041297729671502 15.285136660226796 ;
	setAttr ".sp" -type "double3" -0.040817791181385177 -0.081041297729671502 15.285136660226796 ;
createNode transform -n "pasted__pSphere3" -p "group12";
	rename -uid "E9B83927-4B95-9F18-ACB3-E1A005FDF44D";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__transform4" -p "|group12|pasted__pSphere3";
	rename -uid "43EF1C6A-4BF4-F058-B770-059FBDCD9950";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape3" -p "|group12|pasted__pSphere3|pasted__transform4";
	rename -uid "9C83663B-4566-5742-8AAF-C1B997F09B42";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder2" -p "group12";
	rename -uid "2D15AAD6-4990-59D2-CA18-97AAB6BDC1A8";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__transform3" -p "|group12|pasted__pCylinder2";
	rename -uid "34076699-439D-6C2A-5363-218D59AEFD13";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape2" -p "|group12|pasted__pCylinder2|pasted__transform3";
	rename -uid "43FF3898-40CF-2A6A-D7C8-C2A73B1AD694";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group13";
	rename -uid "AE541118-408F-CB70-EA0D-9EAC052FA00C";
	setAttr ".t" -type "double3" 9.2995840742156322 0 0 ;
	setAttr ".rp" -type "double3" -0.014507828321576932 -1.0992396569786402 15.348345618137566 ;
	setAttr ".sp" -type "double3" -0.014507828321576932 -1.0992396569786402 15.348345618137566 ;
createNode transform -n "group14";
	rename -uid "256D4A06-42A1-1B73-EBC6-B69CE03BB623";
	setAttr ".t" -type "double3" 31.826669365729693 0 0 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 3.4741643145544194 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 3.4741643145544194 5.8090034824113062 ;
createNode transform -n "group15";
	rename -uid "5CB174F7-4D1F-C6FC-22D9-7DA87968286D";
	setAttr ".t" -type "double3" 0 0 1.0769925126422226 ;
	setAttr ".rp" -type "double3" 6.6279036074075623 16.925055698226409 4.552091239563377 ;
	setAttr ".sp" -type "double3" 6.6279036074075623 16.925055698226409 4.552091239563377 ;
createNode transform -n "group16";
	rename -uid "5073F8E2-4659-2B61-1C96-BBA190B9B1FF";
	setAttr ".t" -type "double3" 25.930864868727216 0 0 ;
	setAttr ".rp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
	setAttr ".sp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
createNode transform -n "pCube3";
	rename -uid "15213080-4BEE-D475-5009-D5B2E06A9FC4";
	setAttr ".t" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pCubeShape3" -p "pCube3";
	rename -uid "2363AC11-432E-BE99-EF6B-58B34B18F9D8";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group17";
	rename -uid "8431106B-4CFC-301E-BE52-A8BFF27ADF70";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pCube3" -p "group17";
	rename -uid "DCFE7A1D-4330-0FB5-E956-82A8214FE7DB";
	setAttr ".t" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pasted__pCubeShape3" -p "|group17|pasted__pCube3";
	rename -uid "D6089E0C-42AC-20D9-833C-6F90BE93147D";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group18";
	rename -uid "B6081E6B-4FA8-DBBE-37D9-439321F1260C";
	setAttr ".t" -type "double3" 57.969647913837122 0 0 ;
	setAttr ".rp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
createNode transform -n "pasted__group17" -p "group18";
	rename -uid "FC26E112-4522-119D-1A5A-E9A46ED48CA7";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pasted__pCube3" -p "pasted__group17";
	rename -uid "175A08D1-49A0-9C59-E62F-B6857EF46B7B";
	setAttr ".t" -type "double3" -43.537568750510722 -1.0608608732773641 0 ;
	setAttr ".s" -type "double3" 3.7216059172388012 1 79.939596354493759 ;
createNode mesh -n "pasted__pasted__pCubeShape3" -p "pasted__pasted__pCube3";
	rename -uid "BD1A5705-45EA-69BC-3719-849F74A263E5";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group19";
	rename -uid "D3F30D9C-49D0-BB01-5603-58BD4B9EDB11";
	setAttr ".t" -type "double3" -27.473133146314161 0 -37.843585228673035 ;
	setAttr ".r" -type "double3" 0 90 0 ;
	setAttr ".rp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
createNode transform -n "pasted__group18" -p "group19";
	rename -uid "6664D92A-460C-CECB-9E70-80B4A183217C";
	setAttr ".t" -type "double3" 57.969647913837122 0 0 ;
	setAttr ".rp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__group17" -p "|group19|pasted__group18";
	rename -uid "FB439287-4F2A-B6C8-BE32-CC9AF25A2C72";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pasted__pasted__pCube3" -p "|group19|pasted__group18|pasted__pasted__group17";
	rename -uid "B4B8621A-4F77-3547-D935-ED9AFAB65508";
	setAttr ".t" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pasted__pasted__pasted__pCubeShape3" -p "|group19|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3";
	rename -uid "2932E877-48D7-2EFD-F490-1D8625D621ED";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.25 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group20";
	rename -uid "F1246449-42F5-89C9-AD7D-92A162A06AD7";
	setAttr ".t" -type "double3" 0 0 76.972090345780586 ;
	setAttr ".rp" -type "double3" -69.838957197230911 -18.042057125693066 -37.843585228673028 ;
	setAttr ".sp" -type "double3" -69.838957197230911 -18.042057125693066 -37.843585228673028 ;
createNode transform -n "pasted__group19" -p "group20";
	rename -uid "6E43076A-485E-8654-2739-019D5028482D";
	setAttr ".t" -type "double3" -27.473133146314161 0 -37.843585228673035 ;
	setAttr ".r" -type "double3" 0 90 0 ;
	setAttr ".rp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__group18" -p "|group20|pasted__group19";
	rename -uid "505463A0-44DF-5D5D-124C-41A73577F3AE";
	setAttr ".t" -type "double3" 57.969647913837122 0 0 ;
	setAttr ".rp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__pasted__group17" -p "|group20|pasted__group19|pasted__pasted__group18";
	rename -uid "5247EEEB-43F2-DAA7-55F5-E5B4242019C1";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pasted__pasted__pasted__pCube3" -p "|group20|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17";
	rename -uid "CC8127CE-4C57-2ADB-450E-F2B147DAB308";
	setAttr ".t" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pasted__pasted__pasted__pasted__pCubeShape3" -p "|group20|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3";
	rename -uid "772C5361-4F53-8A45-36F6-84A2085289C5";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group21";
	rename -uid "3AA94F7E-48E0-2FF2-F52E-EEAC442CAD4A";
createNode transform -n "group22";
	rename -uid "B8061178-444C-E437-17D9-87BB1D1AE8B2";
	setAttr ".t" -type "double3" -80.842938744581872 0 -26.519747406262752 ;
	setAttr ".rp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
	setAttr ".sp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
createNode transform -n "pasted__group21" -p "group22";
	rename -uid "E4366B19-4052-154C-1ED1-D2BFF697A45A";
createNode transform -n "pasted__pasted__pasted__pasted__pSphere2" -p "pasted__group21";
	rename -uid "A5CA3780-467F-A9F2-516D-21BDBA48FC4C";
	setAttr ".t" -type "double3" -5.6203401431626805 5.1767287654009682 -1.7473502899805036 ;
	setAttr ".s" -type "double3" 3.6544077539314501 3.2112480122513745 3.9541897446308223 ;
createNode transform -n "transform6" -p "pasted__pasted__pasted__pasted__pSphere2";
	rename -uid "A7CB612C-43E9-9EEE-B3D4-DB85749DA264";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pasted__pSphereShape2" -p "transform6";
	rename -uid "727B1C22-402B-9A70-B46F-EFA50896B890";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pPipe2" -p "pasted__group21";
	rename -uid "FCAFA083-4A2D-62FA-760A-B8A177CBFF30";
	setAttr ".t" -type "double3" -5.6236046379070874 6.6504126090073932 -0.58083083356287935 ;
	setAttr ".s" -type "double3" 3.9953044017111052 3.5502110675467176 5.3547678838007471 ;
createNode transform -n "transform5" -p "pasted__pPipe2";
	rename -uid "06F2378E-4538-51E4-9CDC-B3B619EF6CE5";
	setAttr ".v" no;
createNode mesh -n "pasted__pPipeShape2" -p "transform5";
	rename -uid "02458566-4CD8-273C-D7CB-26BAED60EAE7";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pTorus1" -p "pasted__group21";
	rename -uid "E7CB658E-4A09-2062-7E3F-5AB8DBBFBCEB";
	setAttr ".t" -type "double3" -5.5472063909372542 1.8198891288413472 -1.7709008657611229 ;
createNode transform -n "transform7" -p "|group22|pasted__group21|pasted__pTorus1";
	rename -uid "98939738-4B1E-5B90-2078-2883EAF5D36A";
	setAttr ".v" no;
createNode mesh -n "pasted__pTorusShape1" -p "transform7";
	rename -uid "A00413C4-4305-954B-4968-F286F43AE70F";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group23";
	rename -uid "66CE1B34-499A-2D39-ACDB-4FA25314ED01";
	setAttr ".t" -type "double3" -83.42043408210408 -0.62850077020971007 -27.194704009389348 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
createNode transform -n "pasted__pCube1" -p "group23";
	rename -uid "2BE48EC1-4F00-BB55-5BF5-69AA4861258A";
	setAttr ".t" -type "double3" -4.6013824355711073 5.4420443587368963 5.8090034824113062 ;
	setAttr ".s" -type "double3" 12.573973824558799 0.96431395389020125 5.1247352724672357 ;
createNode mesh -n "pasted__pCubeShape1" -p "pasted__pCube1";
	rename -uid "0CAD4891-4493-73F5-CC0E-1AA00D8CE02E";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group" -p "group23";
	rename -uid "1A0666B9-4057-D6A0-65F4-00ACA4703E34";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "pasted__pasted__pPipe1" -p "|group23|pasted__group";
	rename -uid "43C39C70-4491-A67F-7348-2A9D82CD0C7E";
	setAttr ".t" -type "double3" 4.2029431294540469 6.8868889964308009 4.7429559786303859 ;
	setAttr ".r" -type "double3" 89.999999999999957 -90 0 ;
	setAttr ".s" -type "double3" 0.49545456193038218 1.4064558101482285 0.68308864847924422 ;
createNode mesh -n "pasted__pasted__pPipeShape1" -p "pasted__pasted__pPipe1";
	rename -uid "ED236B13-4165-2A97-D15F-18B21F870654";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75000011920928955 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group24";
	rename -uid "92BBF603-4BEC-7DAA-3660-4FB46B2EDED2";
	setAttr ".t" -type "double3" -66.989388808877109 -0.86838423958626798 -11.027603313879542 ;
	setAttr ".rp" -type "double3" -7.162289279252029 4.01173260619667 16.58338963679121 ;
	setAttr ".sp" -type "double3" -7.162289279252029 4.01173260619667 16.58338963679121 ;
createNode transform -n "pasted__pCylinder1" -p "group24";
	rename -uid "31F518A7-4293-A1D5-E2EE-A6B1F3DBD6CC";
	setAttr ".t" -type "double3" -7.162288811478593 4.0117327754752807 16.583395250072442 ;
	setAttr ".s" -type "double3" 3.9239679896210986 2.8400238191961678 3.9239679896210986 ;
createNode mesh -n "pasted__pCylinderShape1" -p "pasted__pCylinder1";
	rename -uid "B3F86E32-46ED-2E75-B80C-E48A7540BBE1";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group25";
	rename -uid "4B629D27-4194-C9D7-F5A9-55910E16B900";
	setAttr ".t" -type "double3" 0 0 3.4346705161762214 ;
	setAttr ".rp" -type "double3" 0 0 15.390259908402363 ;
	setAttr ".sp" -type "double3" 0 0 15.390259908402363 ;
createNode transform -n "group26";
	rename -uid "3A714564-4BD6-1DF4-B68C-8C8E33FFED38";
	setAttr ".rp" -type "double3" -0.040817791181385177 -0.081041297729671502 18.076720719985985 ;
	setAttr ".sp" -type "double3" -0.040817791181385177 -0.081041297729671502 18.076720719985985 ;
createNode transform -n "pasted__pSphere3" -p "group26";
	rename -uid "CAF179DE-4CA7-F888-BEFF-6D8EE5902924";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__transform4" -p "|group26|pasted__pSphere3";
	rename -uid "648F8170-4CE9-E38F-4AB0-74A3FD3449CB";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape3" -p "|group26|pasted__pSphere3|pasted__transform4";
	rename -uid "9696957C-45FA-C372-C05C-15B841380185";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder2" -p "group26";
	rename -uid "AEB6B31D-47C5-46F6-106E-309CAAF6FA0C";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__transform3" -p "|group26|pasted__pCylinder2";
	rename -uid "CD3BF7A9-4326-3F85-8469-0E9A115A81CA";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape2" -p "|group26|pasted__pCylinder2|pasted__transform3";
	rename -uid "D61C87B8-4EE1-B928-1708-04A6BE34C2AA";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group25" -p "group26";
	rename -uid "AF520216-4190-766A-13C6-A1AD1B14C73B";
	setAttr ".t" -type "double3" 0 0 3.4346705161762214 ;
	setAttr ".rp" -type "double3" 0 0 15.390259908402363 ;
	setAttr ".sp" -type "double3" 0 0 15.390259908402363 ;
createNode transform -n "group27";
	rename -uid "6E2B26CA-4ECA-BA01-2EA8-84A4E5ABDCDA";
	setAttr ".rp" -type "double3" -4.0210183107309172 -1.5696948161477153 21.698648571831868 ;
	setAttr ".sp" -type "double3" -4.0210183107309172 -1.5696948161477153 21.698648571831868 ;
createNode transform -n "pasted__pSphere3" -p "group27";
	rename -uid "7D78447F-4DA5-15FD-BA05-AF9723C48446";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__transform4" -p "|group27|pasted__pSphere3";
	rename -uid "626B8D27-4333-8416-24CF-C2B83C14AD2E";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape3" -p "|group27|pasted__pSphere3|pasted__transform4";
	rename -uid "DF163259-448C-2E08-6FB2-8080FF788DBC";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder2" -p "group27";
	rename -uid "3B7B3955-463E-3A5C-3D66-B5B96538250A";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__transform3" -p "|group27|pasted__pCylinder2";
	rename -uid "F6D9542C-40EB-FA92-58CA-40827920C890";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape2" -p "|group27|pasted__pCylinder2|pasted__transform3";
	rename -uid "0A212EC8-464A-C913-4A58-3693DE0B0A1D";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group25" -p "group27";
	rename -uid "4BC6FC27-4D07-A70D-9032-1E9AE81A7B7A";
	setAttr ".t" -type "double3" 0 0 3.4346705161762214 ;
	setAttr ".rp" -type "double3" 0 0 15.390259908402363 ;
	setAttr ".sp" -type "double3" 0 0 15.390259908402363 ;
createNode transform -n "group28";
	rename -uid "185AECDC-449E-2EB6-ED42-E1B170429A77";
createNode transform -n "pPipe3" -p "group28";
	rename -uid "1160C871-4EE3-0D70-A2CA-2EAC31806EB0";
	setAttr ".t" -type "double3" -95.116242334538612 10.721026108045891 34.974465300228509 ;
	setAttr ".r" -type "double3" 0 159.79471418818287 -180 ;
	setAttr ".s" -type "double3" 1.5029107237823283 1.9276852709247334 1.5029107237823283 ;
createNode mesh -n "pPipeShape3" -p "pPipe3";
	rename -uid "D9A47086-45DA-3359-9D84-5ABB094D5F70";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pSphere4" -p "group28";
	rename -uid "932FE06C-4B63-8BE8-A9D7-92A5A994C54D";
	setAttr ".t" -type "double3" -89.969563384433314 -0.25872924912715511 25.541532996458116 ;
	setAttr ".r" -type "double3" 249.83249917188198 52.784951120440411 112.34542922355948 ;
	setAttr ".s" -type "double3" 1 1 0.99999999999999989 ;
	setAttr ".rp" -type "double3" -0.077586886823065138 0 15.260891600289749 ;
	setAttr ".rpt" -type "double3" -4.946469120992079 10.823870812446152 -5.7475581137239686 ;
	setAttr ".sp" -type "double3" -0.077586886823065138 0 15.260891600289753 ;
	setAttr ".spt" -type "double3" 0 0 -3.5527136788005005e-015 ;
createNode mesh -n "pSphere4Shape" -p "pSphere4";
	rename -uid "ED17D06E-4F85-8E0F-0B1D-069A3F07072E";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pCylinder3" -p "group28";
	rename -uid "7A1EC4B9-4814-E323-2F48-DA8DDC04F3D7";
	setAttr ".t" -type "double3" -95.1146087651004 11.642361128286602 35.003440093275984 ;
	setAttr ".r" -type "double3" 0 159.79471418818287 -180 ;
	setAttr ".s" -type "double3" 1.7711918151367214 0.51723492966906592 1.7711918151367214 ;
createNode mesh -n "pCylinderShape3" -p "pCylinder3";
	rename -uid "54DBDB2F-4175-F862-B38A-0AB11C640E11";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group29";
	rename -uid "F861F522-4893-C1EE-EA6E-929870E034F5";
	setAttr ".t" -type "double3" 4.2966506308813974 0 0 ;
	setAttr ".rp" -type "double3" -4.10791728657468 -1.5696948161477198 21.698648571831868 ;
	setAttr ".sp" -type "double3" -4.10791728657468 -1.5696948161477198 21.698648571831868 ;
createNode transform -n "pasted__pSphere3" -p "group29";
	rename -uid "3382B2CA-459C-3C9F-3862-3E85E45C7CAF";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__transform4" -p "|group29|pasted__pSphere3";
	rename -uid "E2F9630F-4F49-739F-5948-7897F52E60F7";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape3" -p "|group29|pasted__pSphere3|pasted__transform4";
	rename -uid "9883C4CF-4701-4CC7-A595-52839D9002F3";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder2" -p "group29";
	rename -uid "11531344-458D-3A5B-6E7A-CABFEF505C08";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__transform3" -p "|group29|pasted__pCylinder2";
	rename -uid "A3D04A1A-4A86-6561-D2E4-C08E1E1C7B8A";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape2" -p "|group29|pasted__pCylinder2|pasted__transform3";
	rename -uid "2238066B-4D56-17C3-3B03-CA96F8D82C6A";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group27" -p "group29";
	rename -uid "27FB995E-4229-6554-B1FD-D78E4476A8DD";
	setAttr ".rp" -type "double3" -4.0210183107309172 -1.5696948161477153 21.698648571831868 ;
	setAttr ".sp" -type "double3" -4.0210183107309172 -1.5696948161477153 21.698648571831868 ;
createNode transform -n "pasted__pasted__pSphere3" -p "pasted__group27";
	rename -uid "C981B504-4C37-8834-16A1-58BFC498157E";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__pasted__transform4" -p "pasted__pasted__pSphere3";
	rename -uid "DA641A2A-4DCA-9A5F-2636-079E23B31B35";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pSphereShape3" -p "pasted__pasted__transform4";
	rename -uid "BB392C3A-4326-83CE-A881-91AB6917A91A";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pCylinder2" -p "pasted__group27";
	rename -uid "B72CE1C4-4BE1-09F9-BA34-8AA21B2854C2";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__pasted__transform3" -p "pasted__pasted__pCylinder2";
	rename -uid "B0365F0B-4863-5C2B-5969-D49AAD675421";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCylinderShape2" -p "pasted__pasted__transform3";
	rename -uid "E5CD15B8-49E8-4257-5A48-DEAAC5AE013A";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group28" -p "group29";
	rename -uid "91AFF210-4600-BCE6-6B1C-0EBFA1DCB162";
createNode transform -n "group30";
	rename -uid "0A39B53A-41BB-CFA9-0C16-3AB0EF75500C";
createNode transform -n "group31";
	rename -uid "02770138-4D36-7084-12FB-3E83B0774437";
	setAttr ".t" -type "double3" -70.279176333705522 -6.4626537010314244 -8.6690829726940049 ;
	setAttr ".rp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
	setAttr ".sp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
createNode transform -n "pasted__group30" -p "group31";
	rename -uid "91A18FAB-4DD8-9356-9026-818C7FA482B8";
createNode transform -n "pasted__pCube2" -p "pasted__group30";
	rename -uid "99904940-40DF-30CB-7675-F7A5977912FC";
	setAttr ".t" -type "double3" 6.6966155782685446 17.317167207179796 5.1662895911623892 ;
	setAttr ".s" -type "double3" 9.1355506576468564 1.8521756668158338 2.5710150523412576 ;
createNode transform -n "transform8" -p "pasted__pCube2";
	rename -uid "C8CF1E30-43C8-CF31-D5FA-BCABA61514BB";
	setAttr ".v" no;
createNode mesh -n "pasted__pCubeShape2" -p "transform8";
	rename -uid "0068CE9C-42C4-C6B9-424B-EE92EF7F2111";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.875 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder4" -p "pasted__group30";
	rename -uid "4AA9F285-4A82-EFD7-42B2-F3AD80C45086";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 4.5520912795960555 ;
	setAttr ".r" -type "double3" 0 0 -90 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "transform9" -p "pasted__pCylinder4";
	rename -uid "51D77A15-421C-0C9E-3EA6-48BC9B7AE8AD";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape4" -p "transform9";
	rename -uid "BD62F4F4-42BB-6642-E969-D6B1BE7B3AA2";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pCylinder4" -p "pasted__group30";
	rename -uid "32E5C2DB-421D-5A90-AC18-A883A24D654F";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 5.6290837922382781 ;
	setAttr ".r" -type "double3" 0 0 -89.999999999999986 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "transform10" -p "|group31|pasted__group30|pasted__pasted__pCylinder4";
	rename -uid "CEB51C6B-49FF-D340-0581-98AC6F5E612E";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCylinderShape4" -p "transform10";
	rename -uid "978E9B3B-46D1-FB61-831B-708CA5933EDE";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group32";
	rename -uid "651C8313-424A-4752-B749-3A87B6565F6C";
	setAttr ".t" -type "double3" 44.089187221192844 0 0 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "group33";
	rename -uid "6B1C36B6-42B6-7755-D652-F195C3FB7E52";
	setAttr ".t" -type "double3" 36.950732420729537 0 0 ;
	setAttr ".rp" -type "double3" -4.2511669635398359 5.8279998140175593 47.251385867227647 ;
	setAttr ".sp" -type "double3" -4.2511669635398359 5.8279998140175593 47.251385867227647 ;
createNode transform -n "group34";
	rename -uid "A34746B7-4F23-65C4-ACA0-47AF9E4C07F5";
	setAttr ".t" -type "double3" 30.059747250912622 0 0 ;
	setAttr ".rp" -type "double3" -7.0789579691710109 6.9798402506802155 46.676288166062236 ;
	setAttr ".sp" -type "double3" -7.0789579691710109 6.9798402506802155 46.676288166062236 ;
createNode transform -n "group35";
	rename -uid "01AC7E83-4449-9370-1B22-34B358E8D4FC";
	setAttr ".t" -type "double3" 45.146363805966104 0 0 ;
	setAttr ".rp" -type "double3" -18.958338779821268 14.335671646423769 33.236176501244167 ;
	setAttr ".sp" -type "double3" -18.958338779821268 14.335671646423769 33.236176501244167 ;
createNode transform -n "group36";
	rename -uid "55A4D41C-4868-AC4A-6C5F-55A326A11F54";
	setAttr ".t" -type "double3" 44.513080827610871 0 0 ;
	setAttr ".rp" -type "double3" -14.441543350499963 14.750834515201561 33.121139958959098 ;
	setAttr ".sp" -type "double3" -14.441543350499963 14.750834515201561 33.121139958959098 ;
createNode transform -n "group37";
	rename -uid "890BDDE1-45DB-88AC-59A6-88A1DF4FC6B0";
	setAttr ".t" -type "double3" -58.676412754212095 -9.3815428137220618 -69.711066149384351 ;
	setAttr ".s" -type "double3" 0.37128701765675459 0.37128701765675459 0.37128701765675459 ;
	setAttr ".rp" -type "double3" -15.301167084599451 14.750834515201561 33.121139958959098 ;
	setAttr ".sp" -type "double3" -15.301167084599451 14.750834515201561 33.121139958959098 ;
createNode transform -n "pasted__pCylinder8" -p "group37";
	rename -uid "A286B3A8-4175-B97B-6BA8-E3B2EF9B5DB2";
	setAttr ".t" -type "double3" -17.554767439838454 14.698467120586903 33.092821453089563 ;
	setAttr ".s" -type "double3" 0.4785098873067018 0.4785098873067018 0.4785098873067018 ;
createNode mesh -n "pasted__pCylinderShape8" -p "pasted__pCylinder8";
	rename -uid "10EC17CE-478B-47A4-29B7-2A8F3414790F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.15624996274709702 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[0:19]" -type "float3"  0 -6.5479946 0 0 -6.5479946 
		0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 
		0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 
		0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 0 0 -6.5479946 
		0;
createNode transform -n "pasted__pCylinder9" -p "group37";
	rename -uid "B77265EA-41B1-0194-0DC6-248F5530D150";
	setAttr ".t" -type "double3" -14.577432976167657 12.615310415005007 33.121139958959098 ;
	setAttr ".s" -type "double3" 2.6059410510844776 3.6857184454460463 2.6059410510844776 ;
createNode mesh -n "pasted__pCylinderShape9" -p "pasted__pCylinder9";
	rename -uid "1B9B4221-4D30-EF35-3964-06A57C0D0392";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCube4" -p "group37";
	rename -uid "C4B72BB8-4167-EF35-F040-9AA5FF6837F7";
	setAttr ".t" -type "double3" -14.44974889529623 19.566267596465384 33.110387984282326 ;
	setAttr ".s" -type "double3" 1.5622074556485055 1.0139319354805696 1.3574844558497265 ;
createNode mesh -n "pasted__pCubeShape4" -p "pasted__pCube4";
	rename -uid "698D0974-408D-4E79-CFAC-3E8E366D1FA7";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75 0.041666667908430099 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".pt[20:23]" -type "float3"  0.2100039 0 0 0.2100039 0 
		0 0.2100039 0 0 0.2100039 0 0;
createNode transform -n "group38";
	rename -uid "492EDFAD-4D26-F5B3-AA7F-1580274F05D3";
	setAttr ".t" -type "double3" -7.1925202958301497 0 22.36990355620285 ;
	setAttr ".r" -type "double3" 0 -90 0 ;
	setAttr ".rp" -type "double3" -88.02181614294156 2.8456635443447094 -21.385700526978042 ;
	setAttr ".sp" -type "double3" -88.02181614294156 2.8456635443447094 -21.385700526978042 ;
createNode transform -n "pasted__group23" -p "group38";
	rename -uid "3E1F93AC-47C5-37B1-C60C-7BB6BF03B4A7";
	setAttr ".t" -type "double3" -83.42043408210408 -0.62850077020971007 -27.194704009389348 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
createNode transform -n "pasted__pasted__pCube1" -p "|group38|pasted__group23";
	rename -uid "16C66453-44B6-C817-6085-8EB032FEB9C0";
	setAttr ".t" -type "double3" -4.6013824355711073 5.4420443587368963 5.8090034824113062 ;
	setAttr ".s" -type "double3" 12.573973824558799 0.96431395389020125 5.1247352724672357 ;
createNode mesh -n "pasted__pasted__pCubeShape1" -p "|group38|pasted__group23|pasted__pasted__pCube1";
	rename -uid "8ACEBCCA-49DC-B31E-5ABC-80B996FAFA6B";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group39";
	rename -uid "84887CAA-41C2-029B-844D-BC85105C01E8";
	setAttr ".t" -type "double3" -86.978481798815764 -0.62258535014284888 -40.951922047610076 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "pasted__pCylinder5" -p "group39";
	rename -uid "87D8340A-4A3B-72EE-4DC5-C0AE969F26D2";
	setAttr ".t" -type "double3" -8.3924029842419916 6.7311790478497606 46.62703730325758 ;
	setAttr ".s" -type "double3" 1 0.71153007247614286 1 ;
createNode mesh -n "pasted__pCylinderShape5" -p "pasted__pCylinder5";
	rename -uid "0FC2E502-4455-CD12-D801-95AFB052315B";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.60940125584602356 0.82671073079109192 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder6" -p "group39";
	rename -uid "2B2FD236-4C8C-418E-0E2B-24B9B74D2057";
	setAttr ".t" -type "double3" -6.9958586441751507 6.1811367515131037 46.77282134223023 ;
	setAttr ".s" -type "double3" 0.55043185923196292 0.15822977857862966 0.55043185923196292 ;
createNode mesh -n "pasted__pCylinderShape6" -p "pasted__pCylinder6";
	rename -uid "79D279CE-4B79-5FE6-6455-61B661E6DD18";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".pt[81:84]" -type "float3"  0.20276384 0 0.13435963 0.20276384 
		0 -0.13435963 0.20276384 0 -0.13435963 0.20276384 0 0.13435963;
createNode transform -n "pasted__pCylinder7" -p "group39";
	rename -uid "5FD6BEC5-4F68-D6FA-BABE-45AE2C01EAD6";
	setAttr ".t" -type "double3" -7.0789579054549749 6.9798401869641804 46.803329417730595 ;
	setAttr ".s" -type "double3" 0.26724442332053377 0.26724442332053377 0.26724442332053377 ;
createNode mesh -n "pasted__pCylinderShape7" -p "pasted__pCylinder7";
	rename -uid "908AEF4B-4DF0-69D4-34EE-1B950A777BC8";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[61:80]" -type "float3"  -4.47275e-008 -0.97564948 
		-0.16590469 -0.051267512 -0.97564948 -0.15778501 -0.097516574 -0.97564948 -0.13421972 
		-0.13422005 -0.97564948 -0.097515985 -0.1577851 -0.97564948 -0.051267739 -0.16590509 
		-0.97564948 0 -0.15778522 -0.97564948 0.051267739 -0.13422014 -0.97564948 0.097515985 
		-0.097516634 -0.97564948 0.13421972 -0.051267564 -0.97564948 0.15778501 -4.47275e-008 
		-0.97564948 0.16590469 0.051267471 -0.97564948 0.15778501 0.09751647 -0.97564948 
		0.13421972 0.13421994 -0.97564948 0.097515985 0.1577851 -0.97564948 0.051267739 0.16590509 
		-0.97564948 0 0.1577851 -0.97564948 -0.051267739 0.13421994 -0.97564948 -0.097515985 
		0.09751647 -0.97564948 -0.13421972 0.051267471 -0.97564948 -0.15778501;
createNode transform -n "group40";
	rename -uid "9C9C4B6A-4E64-0B64-895F-FBB57E334599";
	setAttr ".t" -type "double3" 0 -0.81082565705515108 -1.7010473441252207 ;
	setAttr ".rp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
	setAttr ".sp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
createNode transform -n "pasted__group39" -p "group40";
	rename -uid "53EB03D8-4D08-06C9-FFD0-498936EF995E";
	setAttr ".t" -type "double3" -86.978481798815764 -0.62258535014284888 -40.951922047610076 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "pasted__pasted__pCylinder7" -p "|group40|pasted__group39";
	rename -uid "E0285666-4489-75B6-688B-258049C60059";
	setAttr ".t" -type "double3" -7.0789579054549749 6.9798401869641804 46.676288166062236 ;
	setAttr ".s" -type "double3" 0.26724442332053377 0.26724442332053377 0.26724442332053377 ;
createNode mesh -n "pasted__pasted__pCylinderShape7" -p "|group40|pasted__group39|pasted__pasted__pCylinder7";
	rename -uid "53265BED-4076-C0E6-686C-9D88438268F1";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[61:80]" -type "float3"  -4.47275e-008 -0.97564948 
		-0.16590469 -0.051267512 -0.97564948 -0.15778501 -0.097516574 -0.97564948 -0.13421972 
		-0.13422005 -0.97564948 -0.097515985 -0.1577851 -0.97564948 -0.051267739 -0.16590509 
		-0.97564948 0 -0.15778522 -0.97564948 0.051267739 -0.13422014 -0.97564948 0.097515985 
		-0.097516634 -0.97564948 0.13421972 -0.051267564 -0.97564948 0.15778501 -4.47275e-008 
		-0.97564948 0.16590469 0.051267471 -0.97564948 0.15778501 0.09751647 -0.97564948 
		0.13421972 0.13421994 -0.97564948 0.097515985 0.1577851 -0.97564948 0.051267739 0.16590509 
		-0.97564948 0 0.1577851 -0.97564948 -0.051267739 0.13421994 -0.97564948 -0.097515985 
		0.09751647 -0.97564948 -0.13421972 0.051267471 -0.97564948 -0.15778501;
createNode transform -n "group41";
	rename -uid "61D4446A-4969-3DEE-C416-4B9EE29B4863";
	setAttr ".t" -type "double3" 0 0.057442835512317991 0 ;
	setAttr ".rp" -type "double3" -94.057439767986779 5.5464292434822156 4.0233187743269392 ;
	setAttr ".sp" -type "double3" -94.057439767986779 5.5464292434822156 4.0233187743269392 ;
createNode transform -n "pasted__group40" -p "group41";
	rename -uid "98BDCF99-433D-EAF5-2708-4D8DF8CB6704";
	setAttr ".t" -type "double3" 0 -0.81082565705515108 -1.7010473441252207 ;
	setAttr ".rp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
	setAttr ".sp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
createNode transform -n "pasted__pasted__group39" -p "pasted__group40";
	rename -uid "838D6518-468C-3FE6-BF11-9086ABC6F520";
	setAttr ".t" -type "double3" -86.978481798815764 -0.62258535014284888 -40.951922047610076 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "pasted__pasted__pasted__pCylinder7" -p "pasted__pasted__group39";
	rename -uid "353D108C-4BFF-45A1-B0CF-97B3BFC5345F";
	setAttr ".t" -type "double3" -7.0789579054549749 6.9798401869641804 46.676288166062236 ;
	setAttr ".s" -type "double3" 0.26724442332053377 0.26724442332053377 0.26724442332053377 ;
createNode mesh -n "pasted__pasted__pasted__pCylinderShape7" -p "pasted__pasted__pasted__pCylinder7";
	rename -uid "1DE9FB36-4BC6-1489-0B8E-1189CB48FA8F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[61:80]" -type "float3"  -4.47275e-008 -0.97564948 
		-0.16590469 -0.051267512 -0.97564948 -0.15778501 -0.097516574 -0.97564948 -0.13421972 
		-0.13422005 -0.97564948 -0.097515985 -0.1577851 -0.97564948 -0.051267739 -0.16590509 
		-0.97564948 0 -0.15778522 -0.97564948 0.051267739 -0.13422014 -0.97564948 0.097515985 
		-0.097516634 -0.97564948 0.13421972 -0.051267564 -0.97564948 0.15778501 -4.47275e-008 
		-0.97564948 0.16590469 0.051267471 -0.97564948 0.15778501 0.09751647 -0.97564948 
		0.13421972 0.13421994 -0.97564948 0.097515985 0.1577851 -0.97564948 0.051267739 0.16590509 
		-0.97564948 0 0.1577851 -0.97564948 -0.051267739 0.13421994 -0.97564948 -0.097515985 
		0.09751647 -0.97564948 -0.13421972 0.051267471 -0.97564948 -0.15778501;
createNode transform -n "group42";
	rename -uid "7C2D04B8-4461-2646-1EE9-9F8544E9197D";
	setAttr ".t" -type "double3" 0 0.052539948889245736 0 ;
	setAttr ".rp" -type "double3" -94.057439767986779 5.6038720789945344 4.0233187743269392 ;
	setAttr ".sp" -type "double3" -94.057439767986779 5.6038720789945344 4.0233187743269392 ;
createNode transform -n "pasted__group41" -p "group42";
	rename -uid "F2A4D9D6-4503-3AB4-D04D-A3945401CAA8";
	setAttr ".t" -type "double3" 0 0.057442835512317991 0 ;
	setAttr ".rp" -type "double3" -94.057439767986779 5.5464292434822156 4.0233187743269392 ;
	setAttr ".sp" -type "double3" -94.057439767986779 5.5464292434822156 4.0233187743269392 ;
createNode transform -n "pasted__pasted__group40" -p "pasted__group41";
	rename -uid "5D665510-4047-C87A-406C-729D874E90CA";
	setAttr ".t" -type "double3" 0 -0.81082565705515108 -1.7010473441252207 ;
	setAttr ".rp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
	setAttr ".sp" -type "double3" -94.057439767986779 6.3572549005373666 5.7243661184521599 ;
createNode transform -n "pasted__pasted__pasted__group39" -p "pasted__pasted__group40";
	rename -uid "00E8BAED-4A3C-0114-B585-01ADDF4EE983";
	setAttr ".t" -type "double3" -86.978481798815764 -0.62258535014284888 -40.951922047610076 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "pasted__pasted__pasted__pasted__pCylinder7" -p "pasted__pasted__pasted__group39";
	rename -uid "21482E2D-4E18-DC2E-1A83-49A656643AA7";
	setAttr ".t" -type "double3" -7.0789579054549749 6.9798401869641804 46.676288166062236 ;
	setAttr ".s" -type "double3" 0.26724442332053377 0.26724442332053377 0.26724442332053377 ;
createNode mesh -n "pasted__pasted__pasted__pasted__pCylinderShape7" -p "pasted__pasted__pasted__pasted__pCylinder7";
	rename -uid "8F31A553-48FA-9743-2913-4885FEAF491F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[61:80]" -type "float3"  -4.47275e-008 -0.97564948 
		-0.16590469 -0.051267512 -0.97564948 -0.15778501 -0.097516574 -0.97564948 -0.13421972 
		-0.13422005 -0.97564948 -0.097515985 -0.1577851 -0.97564948 -0.051267739 -0.16590509 
		-0.97564948 0 -0.15778522 -0.97564948 0.051267739 -0.13422014 -0.97564948 0.097515985 
		-0.097516634 -0.97564948 0.13421972 -0.051267564 -0.97564948 0.15778501 -4.47275e-008 
		-0.97564948 0.16590469 0.051267471 -0.97564948 0.15778501 0.09751647 -0.97564948 
		0.13421972 0.13421994 -0.97564948 0.097515985 0.1577851 -0.97564948 0.051267739 0.16590509 
		-0.97564948 0 0.1577851 -0.97564948 -0.051267739 0.13421994 -0.97564948 -0.097515985 
		0.09751647 -0.97564948 -0.13421972 0.051267471 -0.97564948 -0.15778501;
createNode transform -n "group43";
	rename -uid "E437EC40-4B30-D620-20D1-B5B1858FA723";
	setAttr ".rp" -type "double3" -54.885064773246299 -17.422784184201085 -11.495094991930653 ;
	setAttr ".sp" -type "double3" -54.885064773246299 -17.422784184201085 -11.495094991930653 ;
createNode transform -n "pasted__pSphere3" -p "group43";
	rename -uid "8DFD4C47-416D-4FA4-015A-E5B447642ECC";
	setAttr ".t" -type "double3" 0 0 15.310760019788308 ;
	setAttr ".s" -type "double3" 1.3679912773021936 1.3679912773021936 1.3679912773021936 ;
createNode transform -n "pasted__transform4" -p "|group43|pasted__pSphere3";
	rename -uid "D5622ACE-4808-4E96-992F-3B8FF7DE8258";
	setAttr ".v" no;
createNode mesh -n "pasted__pSphereShape3" -p "|group43|pasted__pSphere3|pasted__transform4";
	rename -uid "54BC58E1-4CA5-4F67-AD34-C59054C65768";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder2" -p "group43";
	rename -uid "4B491EDC-453D-F09F-8B70-BBA2849DA495";
	setAttr ".t" -type "double3" 0.038625827985189376 1.2325726878215868 15.353395244811734 ;
	setAttr ".s" -type "double3" 0.57477646280457906 0.13739057719138845 0.57477646280457906 ;
createNode transform -n "pasted__transform3" -p "|group43|pasted__pCylinder2";
	rename -uid "C51EB894-4561-52E9-05BE-00984D9DE296";
	setAttr ".v" no;
createNode mesh -n "pasted__pCylinderShape2" -p "|group43|pasted__pCylinder2|pasted__transform3";
	rename -uid "0B7A46EC-441C-CFC4-5B00-D1B74A71B010";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group19" -p "group43";
	rename -uid "F715157F-4CA4-4900-A6A9-74AF00630383";
	setAttr ".t" -type "double3" -27.473133146314161 0 -37.843585228673035 ;
	setAttr ".r" -type "double3" 0 90 0 ;
	setAttr ".rp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -42.36582405091675 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__group18" -p "|group43|pasted__group19";
	rename -uid "259398FD-4244-0235-1825-1FAD76F8E238";
	setAttr ".t" -type "double3" 57.969647913837122 0 0 ;
	setAttr ".rp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__pasted__group17" -p "|group43|pasted__group19|pasted__pasted__group18";
	rename -uid "B971EC99-4304-E2AA-F988-27A9A771599A";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pasted__pasted__pasted__pCube3" -p "|group43|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17";
	rename -uid "25E94DEB-4982-C130-BDD1-E0B0015D2235";
	setAttr ".t" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pasted__pasted__pasted__pasted__pCubeShape3" -p "|group43|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3";
	rename -uid "2FE09E6A-4086-6F84-FAD5-C79AF70711A2";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.25 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group28" -p "group43";
	rename -uid "E2E7026B-4821-0494-65AD-C9A4D3E28C24";
createNode transform -n "pasted__pPipe3" -p "|group43|pasted__group28";
	rename -uid "5EE716EE-4DD6-ED61-DEF9-E0B0D07EEA84";
	setAttr ".t" -type "double3" -48.023343888101941 10.721026108045891 -28.93085837826019 ;
	setAttr ".r" -type "double3" 0 0 -180 ;
	setAttr ".s" -type "double3" 1.5029107237823283 1.9276852709247334 1.5029107237823283 ;
createNode mesh -n "pasted__pPipeShape3" -p "pasted__pPipe3";
	rename -uid "4B523C81-4DD1-1FEB-DCC5-C1A935F85DD0";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pSphere4" -p "|group43|pasted__group28";
	rename -uid "01A1EF2F-49E6-0ED2-4810-60BD087ACE89";
	setAttr ".t" -type "double3" -42.876664937996651 -0.25872924912715511 -38.502671406340085 ;
	setAttr ".r" -type "double3" 30.499796053000516 43.995876396775117 155.37099138212747 ;
	setAttr ".s" -type "double3" 1 1 0.99999999999999989 ;
	setAttr ".rp" -type "double3" -0.077586886823065138 0 15.260891600289749 ;
	setAttr ".rpt" -type "double3" -4.946469120992079 10.823870812446152 -5.7475581137239686 ;
	setAttr ".sp" -type "double3" -0.077586886823065138 0 15.260891600289753 ;
	setAttr ".spt" -type "double3" 0 0 -3.5527136788005005e-015 ;
createNode mesh -n "pasted__pSphere4Shape" -p "pasted__pSphere4";
	rename -uid "FCEBBDA4-4667-0E23-EFC5-9EBFEBF980FA";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pCylinder3" -p "|group43|pasted__group28";
	rename -uid "58ECD1C2-4364-77B9-8B4D-DD9C6ECF530C";
	setAttr ".t" -type "double3" -48.021710318663743 11.642361128286602 -28.901883585212715 ;
	setAttr ".r" -type "double3" 0 0 -180 ;
	setAttr ".s" -type "double3" 1.7711918151367214 0.51723492966906592 1.7711918151367214 ;
createNode mesh -n "pasted__pCylinderShape3" -p "pasted__pCylinder3";
	rename -uid "D1620D67-4B26-3D22-9764-0FA426E22A85";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pTorus1";
	rename -uid "D64C3A18-48DB-3BA8-E7E5-0E87D95407B5";
	setAttr ".t" -type "double3" 0.13156205101218177 0 0 ;
	setAttr ".rp" -type "double3" -86.118694801306276 5.4528811202438288 -28.619593147373568 ;
	setAttr ".sp" -type "double3" -86.118694801306276 5.4528811202438288 -28.619593147373568 ;
createNode mesh -n "pasted__pTorus1Shape" -p "|pasted__pTorus1";
	rename -uid "DE3BB519-4641-8BE0-6FD6-DD87C9A9D13A";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pCylinder4";
	rename -uid "129FDD7C-4428-7CF7-1813-50B0A8F8807B";
	setAttr ".t" -type "double3" 7.5451838638472566 0 17.804396678004323 ;
	setAttr ".rp" -type "double3" -64.505630911481134 10.785382089184989 -3.7032970146369895 ;
	setAttr ".sp" -type "double3" -64.505630911481134 10.785382089184989 -3.7032970146369895 ;
createNode mesh -n "pasted__pasted__pCylinder4Shape" -p "|pasted__pasted__pCylinder4";
	rename -uid "9E052F57-4440-7C4D-37E2-F68524FDECCE";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group44";
	rename -uid "65E73625-4721-B0B7-8244-0AB7100605C5";
	setAttr ".t" -type "double3" 0 39.825505555263078 0 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pCube3" -p "group44";
	rename -uid "000D3E7C-4D77-0153-C407-0EA3820F660C";
	setAttr ".t" -type "double3" -71.313052164424292 -27.763457113290755 0 ;
	setAttr ".s" -type "double3" 59.360624421406769 1 79.939596354493759 ;
createNode mesh -n "pasted__pCubeShape3" -p "|group44|pasted__pCube3";
	rename -uid "04ED0770-4C7C-B3DA-B034-1CA6F27BB1F9";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group45";
	rename -uid "8293137C-4B20-9CD1-CB81-BDBBAB6CE3A4";
	setAttr ".rp" -type "double3" -5.6565082812142293 3.9233720195620982 2.2903697705733244 ;
	setAttr ".sp" -type "double3" -5.6565082812142293 3.9233720195620982 2.2903697705733244 ;
createNode transform -n "PuertaP:group44" -p "group45";
	rename -uid "082BDAD4-479F-87FF-375C-A9A6F87159AB";
	setAttr ".rp" -type "double3" 18.499050140380859 159.57099914550781 362.26223754882812 ;
	setAttr ".sp" -type "double3" 18.499050140380859 159.57099914550781 362.26223754882812 ;
createNode transform -n "PuertaP:puertaobj:SlidingDoor001" -p "PuertaP:group44";
	rename -uid "D0E7E7A3-4E49-CCE0-924A-8F9AA1AAAFDE";
	setAttr ".t" -type "double3" -40.525804338750234 0.65870641600511393 32.457195723353536 ;
	setAttr ".r" -type "double3" 0 -3.5179685527849656 0 ;
	setAttr ".s" -type "double3" 0.02331307950424423 0.02331307950424423 0.02331307950424423 ;
createNode mesh -n "PuertaP:puertaobj:SlidingDoor001Shape" -p "PuertaP:puertaobj:SlidingDoor001";
	rename -uid "6F205B23-4DEC-532F-D76F-7299622CDB41";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:63]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 225 ".uvst[0].uvsp[0:224]" -type "float2" 0.5 0.5 0.0131 0.48030001
		 0.4869 0.48030001 0.4869 0.0066 0.5 0 0.51310003 0.0066 0.51310003 0.48030001 0.0131
		 0.0066 1 0 1 0.5 0.48030001 0 0.48030001 0.5 0.0066 0.5 0.0066 0 0 0.5 0 0 0.98689997
		 0.48030001 0.98689997 0.0066 0.51969999 0 0.99339998 0 0.99339998 0.5 0.51969999
		 0.5 0.51310003 0 0.98689997 0 0.98689997 0.5 0.51310003 0.5 0.4869 0 0.4869 0.5 0.0131
		 0.5 0.0131 0 0.4862 0.47920001 -0.0138 0.47920001 -0.0138 -0.0208 0.4862 -0.0208
		 1.013800025 0.47920001 0.51380002 0.47920001 0.51380002 -0.0208 1.013800025 -0.0208
		 0.52079999 0.3594 1.020799994 0.3594 1.020799994 0.3906 0.52079999 0.3906 -0.0208
		 0.3594 0.47920001 0.3594 0.47920001 0.3906 -0.0208 0.3906 0.51380002 0.3594 1.013800025
		 0.3594 1.013800025 0.3906 0.51380002 0.3906 -0.0138 0.3594 0.4862 0.3594 0.4862 0.3906
		 -0.0138 0.3906 0.5 -0.17120001 1 -0.17120001 1 0.67119998 0.5 0.67119998 0 0.67119998
		 0 -0.17120001 -10.7507 -0.17120001 -10.2507 -0.17120001 -10.2507 0.67119998 -10.7507
		 0.67119998 -10.2507 0.5 -10.7507 0.5 -10.7507 0 -10.2507 0 11.7507 0.5 11.2507 0.5
		 11.2507 0 11.7507 0 -10.7507 -0.023399999 1 -0.023399999 11.7507 -0.17120001 11.7507
		 0.67119998 0 -0.023399999 11.7507 -0.023399999 1.023399949 -0.17120001 1.023399949
		 0.67119998 -0.023399999 -0.17120001 -0.023399999 0.67119998 0.5 0.5 0.5 0 0.5 0.5
		 0.5 0 1 0.5 0.5 0.5 1 0 1 0.5 0.5 0 0.5 0.5 0 0.5 0.5 0.5 0.5 0 0.5 0.5 0 0.5 0 0
		 0.5 0 0.5 0 1 0 1 0.5 0.5 0.5 0.5 0.5 0.0131 0.48030001 0.4869 0.48030001 0.4869
		 0.0066 0.5 0.5 0.5 0 0.51310003 0.0066 0.51310003 0.48030001 0.4869 0.0066 0.0131
		 0.0066 0.5 0 0.5 0.5 0.5 0.5 0.5 0 1 0 1 0.5 0.48030001 0 0.48030001 0.5 0.0066 0.5
		 0.0066 0 0 0.5 0 0 0.0131 0.0066 0.0131 0.48030001 1 0.5 0.5 0.5 0.98689997 0.48030001
		 0.98689997 0.0066 0.98689997 0.0066 0.5 0 1 0.5 0.5 0 0 0.5 0 0 0.51969999 0 0.99339998
		 0 0.99339998 0.5 0.51969999 0.5 0.5 0.5 0.51310003 0.48030001 0.98689997 0.48030001
		 0.0131 0.48030001 0.5 0.5 0 0.5 0.5 0 0.5 0.5 0 0.5 0 0 0.51310003 0 0.98689997 0
		 0.98689997 0.5 0.51310003 0.5 0.5 0 0.98689997 0.0066 0.51310003 0.0066 0.0131 0.0066
		 0 0 0.5 0 0.5 0 1 0 1 0.5 0.5 0.5 0.4869 0 0.4869 0.5 0.0131 0.5 0.0131 0 0.4862
		 0.47920001 -0.0138 0.47920001 -0.0138 -0.0208 0.4862 -0.0208 1.013800025 0.47920001
		 0.51380002 0.47920001 0.51380002 -0.0208 1.013800025 -0.0208 0.52079999 0.3594 1.020799994
		 0.3594 1.020799994 0.3906 0.52079999 0.3906 -0.0208 0.3594 0.47920001 0.3594 0.47920001
		 0.3906 -0.0208 0.3906 0.51380002 0.3594 1.013800025 0.3594 1.013800025 0.3906 0.51380002
		 0.3906 -0.0138 0.3594 0.4862 0.3594 0.4862 0.3906 -0.0138 0.3906 1 0.5 0.5 0.5 0.5
		 0 1 0 0.5 0.5 0 0.5 0 0 0.5 0 0.5 0.67119998 0.5 -0.17120001 1 -0.17120001 1 0.67119998
		 0.5 -0.17120001 0.5 0.67119998 0 0.67119998 0 -0.17120001 0.5 0.67119998 0.5 -0.17120001
		 1 -0.17120001 1 0.67119998 1 0 0 -0.17120001 0 0.67119998 0 0 1 -0.17120001 1 0.67119998
		 -10.7507 0.67119998 -10.7507 -0.17120001 1 -0.17120001 1 0.67119998 0 -0.17120001
		 0 0.67119998;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 66 ".vt[0:65]"  -9.75599957 0 99.46109772 -2.29970002 12 248.36480713
		 -9.55589962 12 103.45610046 -9.55589962 300.90200806 103.45610046 -7.7585001 0 99.36109924
		 -7.7585001 304.90200806 99.36109924 -7.55840015 300.90200806 103.35610199 -7.55840015 12 103.35610199
		 -2.29970002 300.90200806 248.36480713 -9.75599957 304.90200806 99.46109772 -2.099699974 0 252.35980225
		 -2.099699974 304.90200806 252.35980225 -0.1022 0 252.25970459 -0.30219999 12 248.26469421
		 -0.30219999 300.90200806 248.26469421 -0.1022 304.90200806 252.25970459 -19.40970039 0 -53.33750153
		 -11.95349979 12 95.56610107 -19.20969963 12 -49.34249878 -19.20969963 300.90200806 -49.34249878
		 -17.41220093 0 -53.4375 -17.41230011 304.90200806 -53.4375 -17.21220016 300.90200806 -49.44250107
		 -17.21220016 12 -49.44250107 -11.95349979 300.90200806 95.56610107 -19.40970039 304.90200806 -53.33750153
		 -11.75349998 0 99.56109619 -11.75349998 304.90200806 99.56109619 -9.95600033 12 95.4661026
		 -9.95600033 300.90200806 95.4661026 -8.68200016 12 103.41230011 -1.42579997 12 248.32099915
		 -1.42579997 300.90200806 248.32099915 -8.68200016 300.90200806 103.41239929 -1.17610002 12 248.3085022
		 -8.43229961 12 103.39980316 -8.43229961 300.90200806 103.39990234 -1.17610002 300.90200806 248.3085022
		 -18.33580017 12 -49.38629913 -11.079600334 12 95.5223999 -11.079600334 300.90200806 95.5223999
		 -18.33580017 300.90200806 -49.38629913 -10.82989979 12 95.50990295 -18.086099625 12 -49.3987999
		 -18.086099625 300.90200806 -49.3987999 -10.82989979 300.90200806 95.50990295 -78.81020355 0 -50.36309814
		 -79.5223999 0 -64.58529663 46.32320023 0 -70.88690186 47.035400391 0 -56.66469955
		 -78.81020355 304.90200806 -50.36309814 -79.5223999 304.90200806 -64.58529663 47.035400391 304.90200806 -56.66469955
		 46.32320023 304.90200806 -70.88690186 -62.78549957 0 269.65640259 -63.49760056 0 255.4342041
		 62.34799957 0 249.13259888 63.060100555 0 263.35479736 -62.78549957 304.90200806 269.65640259
		 -63.49760056 304.90200806 255.4342041 63.060100555 304.90200806 263.35479736 62.34799957 304.90200806 249.13259888
		 -62.78549957 319.14199829 269.65640259 -79.5223999 319.14199829 -64.58529663 63.060100555 319.14199829 263.35479736
		 46.32320023 319.14199829 -70.88690186;
	setAttr -s 125 ".ed[0:124]"  0 1 0 1 2 0 2 3 0 3 0 0 4 5 0 5 6 0 6 7 0
		 7 4 0 3 8 0 8 9 0 9 0 0 4 0 0 9 5 0 2 7 0 6 3 0 10 11 0 11 8 0 8 1 0 1 10 0 12 4 0
		 4 13 0 13 14 0 14 12 0 14 5 0 5 15 0 15 12 0 10 12 0 15 11 0 8 14 0 13 1 0 7 13 0
		 0 10 0 14 6 0 11 9 0 16 17 0 17 18 0 18 19 0 19 16 0 20 21 0 21 22 0 22 23 0 23 20 0
		 19 24 0 24 25 0 25 16 0 20 16 0 25 21 0 18 23 0 22 19 0 26 27 0 27 24 0 24 17 0 17 26 0
		 0 20 0 20 28 0 28 29 0 29 0 0 29 21 0 21 9 0 26 0 0 9 27 0 24 29 0 28 17 0 23 28 0
		 16 26 0 29 22 0 27 25 0 30 31 0 31 32 0 32 33 0 33 30 0 34 35 0 35 36 0 36 37 0 37 34 0
		 33 36 0 35 30 0 31 34 0 37 32 0 38 39 0 39 40 0 40 41 0 41 38 0 42 43 0 43 44 0 44 45 0
		 45 42 0 41 44 0 43 38 0 39 42 0 45 40 0 46 47 0 47 48 0 48 49 0 49 46 0 46 50 0 50 51 0
		 51 47 0 49 52 0 52 50 0 48 53 0 53 52 0 51 53 0 54 55 0 55 56 0 56 57 0 57 54 0 54 58 0
		 58 59 0 59 55 0 57 60 0 60 58 0 56 61 0 61 60 0 59 61 0 51 58 0 58 62 0 62 63 0 63 51 0
		 62 64 0 64 65 0 65 63 0 53 65 0 64 60 0 60 53 0;
	setAttr -s 248 ".n";
	setAttr ".n[0:165]" -type "float3"  -0.99870002 0 0.050000001 -0.99870002
		 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 -0.99870002
		 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001
		 0 0.99870002 0.050000001 0 0.99870002 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.050000001
		 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0
		 0.050000001 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 1 0 0 1 0 0 1 0 0 1 0 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 -0.99870002 0 0.050000001 -0.99870002
		 0 0.050000001 -0.99870002 0 0.050000001 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1
		 0 0 -1 0 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 0.99870002 0 -0.050000001 -0.99870002 0 0.050000001 -0.99870002 0
		 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001
		 0 0.99870002 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.050000001 0 0.99870002 0.050000001
		 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 -0.99870002
		 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0 -1 0 0 -1 0 0
		 -1 0 0 -1 0 0 1 0 0 1 0 0 1 0 0 1 0 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002
		 0 0.050000001 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0.99870002
		 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001
		 0 0.99870002 0.050000001 0 0.99870002 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1
		 0 0 -1 0 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001;
	setAttr ".n[166:247]" -type "float3"  0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001
		 0 -0.99870002 -0.050000001 0 -0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002
		 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0
		 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 -0.99870002 0 0.050000001 -0.99870002
		 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0.050000001 0 0.99870002
		 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.99870002
		 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 0 -1 0 0 -1 0 0 -1 0 0 -1 0 -0.99870002 0 0.050000001
		 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0.050000001
		 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002
		 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002
		 0 -0.050000001 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001
		 0 -0.99870002 -0.050000001 0 -0.99870002 -0.99870002 0 0.050000001 -0.99870002 0
		 0.050000001 -0.99870002 0 0.050000001 -0.99870002 0 0.050000001 0 1 0 0 1 0 0 1 0
		 0 1 0 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001 0.99870002 0 -0.050000001
		 0.99870002 0 -0.050000001 0 -1 0 0 -1 0 0 -1 0 0 -1 0 -0.050000001 0 -0.99870002
		 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002 -0.050000001 0 -0.99870002
		 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001 0 0.99870002 0.050000001
		 0 0.99870002;
	setAttr -s 64 -ch 248 ".fc[0:63]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 82 4 5 6
		f 4 8 9 10 -4
		mu 0 4 3 7 83 0
		f 4 11 -11 12 -5
		mu 0 4 84 85 8 9
		f 4 13 -7 14 -3
		mu 0 4 10 11 12 13
		f 4 15 16 17 18
		mu 0 4 14 15 7 1
		f 4 19 20 21 22
		mu 0 4 86 87 16 17
		f 4 23 24 25 -23
		mu 0 4 17 4 88 89
		f 4 26 -26 27 -16
		mu 0 4 90 91 92 15
		f 4 -18 28 -22 29
		mu 0 4 18 19 20 21
		f 3 -8 30 -21
		mu 0 3 93 6 16
		f 3 -1 31 -19
		mu 0 3 1 0 14
		f 4 -12 -20 -27 -32
		mu 0 4 94 95 96 97
		f 4 -2 -30 -31 -14
		mu 0 4 22 23 24 25
		f 3 -24 32 -6
		mu 0 3 4 17 5
		f 3 -17 33 -10
		mu 0 3 7 15 98
		f 4 -34 -28 -25 -13
		mu 0 4 99 100 101 102
		f 4 -15 -33 -29 -9
		mu 0 4 26 27 28 29
		f 4 34 35 36 37
		mu 0 4 103 104 105 106
		f 4 38 39 40 41
		mu 0 4 107 108 109 110
		f 4 42 43 44 -38
		mu 0 4 111 112 113 114
		f 4 45 -45 46 -39
		mu 0 4 115 116 117 118
		f 4 47 -41 48 -37
		mu 0 4 119 120 121 122
		f 4 49 50 51 52
		mu 0 4 123 124 125 126
		f 4 53 54 55 56
		mu 0 4 127 128 129 130
		f 4 57 58 10 -57
		mu 0 4 131 132 8 133
		f 4 59 -11 60 -50
		mu 0 4 134 0 135 136
		f 4 -52 61 -56 62
		mu 0 4 137 138 139 140
		f 3 -42 63 -55
		mu 0 3 141 142 143
		f 3 -35 64 -53
		mu 0 3 144 145 146
		f 4 -46 -54 -60 -65
		mu 0 4 147 148 149 150
		f 4 -36 -63 -64 -48
		mu 0 4 151 152 153 154
		f 3 -58 65 -40
		mu 0 3 155 156 157
		f 3 -51 66 -44
		mu 0 3 158 159 160
		f 4 -67 -61 -59 -47
		mu 0 4 161 162 163 164
		f 4 -49 -66 -62 -43
		mu 0 4 165 166 167 168
		f 4 67 68 69 70
		mu 0 4 30 31 32 33
		f 4 71 72 73 74
		mu 0 4 34 35 36 37
		f 4 -71 75 -73 76
		mu 0 4 38 39 40 41
		f 4 -69 77 -75 78
		mu 0 4 42 43 44 45
		f 4 -70 -79 -74 -76
		mu 0 4 46 47 48 49
		f 4 -68 -77 -72 -78
		mu 0 4 50 51 52 53
		f 4 79 80 81 82
		mu 0 4 169 170 171 172
		f 4 83 84 85 86
		mu 0 4 173 174 175 176
		f 4 -83 87 -85 88
		mu 0 4 177 178 179 180
		f 4 -81 89 -87 90
		mu 0 4 181 182 183 184
		f 4 -82 -91 -86 -88
		mu 0 4 185 186 187 188
		f 4 -80 -89 -84 -90
		mu 0 4 189 190 191 192
		f 4 91 92 93 94
		mu 0 4 54 55 56 57
		f 4 -92 95 96 97
		mu 0 4 193 194 195 196
		f 4 -95 98 99 -96
		mu 0 4 54 57 58 59
		f 4 -94 100 101 -99
		mu 0 4 197 198 199 200
		f 4 -93 -98 102 -101
		mu 0 4 201 202 203 204
		f 4 103 104 105 106
		mu 0 4 60 61 62 63
		f 4 -104 107 108 109
		mu 0 4 64 65 66 67
		f 4 -107 110 111 -108
		mu 0 4 205 206 207 208
		f 4 -106 112 113 -111
		mu 0 4 68 69 70 71
		f 4 -105 -110 114 -113
		mu 0 4 209 210 211 212
		f 4 115 116 117 118
		mu 0 4 213 66 72 73
		f 4 -118 119 120 121
		mu 0 4 214 74 75 215
		f 4 122 -121 123 124
		mu 0 4 216 76 77 71
		f 4 102 -125 111 -116
		mu 0 4 217 218 219 220
		f 4 -119 -122 -123 -103
		mu 0 4 221 78 79 222
		f 4 -117 -112 -124 -120
		mu 0 4 80 223 224 81;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
createNode transform -n "group46";
	rename -uid "60ED3912-498B-EC90-CBD6-2EADD00C5FF7";
	setAttr ".t" -type "double3" 0 -4.2990460831338169 -4.0745407558857671 ;
	setAttr ".s" -type "double3" 1 2.9668607141158434 0.8774445577349772 ;
	setAttr ".rp" -type "double3" -41.30496317763938 9.7334262882204925 0 ;
	setAttr ".sp" -type "double3" -41.30496317763938 9.7334262882204925 0 ;
createNode transform -n "pasted__group18" -p "group46";
	rename -uid "346D98DA-435D-1B9A-E7AC-46B33B703ABB";
	setAttr ".t" -type "double3" 57.969647913837122 0 0 ;
	setAttr ".rp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
	setAttr ".sp" -type "double3" -100.33547196475388 -18.042057125693066 0 ;
createNode transform -n "pasted__pasted__group17" -p "|group46|pasted__group18";
	rename -uid "94B1BFE4-4712-8A22-D0B3-06863625C2A5";
	setAttr ".t" -type "double3" -29.022419800329587 -18.042057125693063 0 ;
	setAttr ".r" -type "double3" 0 0 90 ;
	setAttr ".rp" -type "double3" -71.313052164424278 0 0 ;
	setAttr ".sp" -type "double3" -71.313052164424278 0 0 ;
createNode transform -n "pasted__pasted__pasted__pCube3" -p "|group46|pasted__group18|pasted__pasted__group17";
	rename -uid "323D78AE-4C45-435E-6399-3BA96C603F7E";
	setAttr ".t" -type "double3" -43.537568750510722 -1.0608608732773641 0 ;
	setAttr ".s" -type "double3" 3.7216059172388012 1 79.939596354493759 ;
createNode mesh -n "pasted__pasted__pasted__pCubeShape3" -p "|group46|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3";
	rename -uid "7CFD73D1-4268-B1A4-6645-088D02AD101A";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group47";
	rename -uid "ADB066AA-465A-E694-46CB-7F9A25734249";
	setAttr ".t" -type "double3" 0 0 30.03511160319291 ;
	setAttr ".rp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
	setAttr ".sp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
createNode transform -n "pasted__group22" -p "group47";
	rename -uid "E66BE7FC-47D2-6BEB-B8A4-B4A8E3987B8C";
	setAttr ".t" -type "double3" -80.842938744581872 0 -26.519747406262752 ;
	setAttr ".rp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
	setAttr ".sp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
createNode transform -n "pasted__pasted__group21" -p "|group47|pasted__group22";
	rename -uid "FD5F826D-4F1B-2CF3-65B6-009C05E81CEB";
createNode transform -n "pasted__pasted__pasted__pasted__pasted__pSphere2" -p "|group47|pasted__group22|pasted__pasted__group21";
	rename -uid "1A4C71BD-4499-DCCA-047D-448E457D2175";
	setAttr ".t" -type "double3" -5.6203401431626805 5.1767287654009682 -1.7473502899805036 ;
	setAttr ".s" -type "double3" 3.6544077539314501 3.2112480122513745 3.9541897446308223 ;
createNode transform -n "pasted__transform6" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2";
	rename -uid "8CD53585-4651-E7DC-9BA6-7A8907F4B0C3";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pasted__pasted__pSphereShape2" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6";
	rename -uid "B9943308-4ECB-2B21-1D0D-DDACEEB1D455";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pPipe2" -p "|group47|pasted__group22|pasted__pasted__group21";
	rename -uid "025C39B1-4996-E2FA-12C0-86A2603D655F";
	setAttr ".t" -type "double3" -5.6236046379070874 6.6504126090073932 -0.58083083356287935 ;
	setAttr ".s" -type "double3" 3.9953044017111052 3.5502110675467176 5.3547678838007471 ;
createNode transform -n "pasted__transform5" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2";
	rename -uid "0C9E4477-4F83-C84E-1BE3-90AE6241A5A7";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pPipeShape2" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5";
	rename -uid "4274E333-4545-ECC1-BEFC-5E89E057D056";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pTorus1" -p "|group47|pasted__group22|pasted__pasted__group21";
	rename -uid "44588E70-40CD-93BF-A79B-B6BAE7C86FA2";
	setAttr ".t" -type "double3" -5.5472063909372542 1.8198891288413472 -1.7709008657611229 ;
createNode transform -n "pasted__transform7" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1";
	rename -uid "7A7108FC-409D-743D-967B-A2B9B610A237";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pTorusShape1" -p "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7";
	rename -uid "23EC89C6-4CD7-7A4D-8E5C-7A8F39FB5349";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group23" -p "group47";
	rename -uid "1972B2AA-4E27-BF7A-EDBD-729AFF263A3A";
	setAttr ".t" -type "double3" -83.42043408210408 -0.62850077020971007 -27.194704009389348 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
createNode transform -n "pasted__pasted__pCube1" -p "|group47|pasted__group23";
	rename -uid "8F083078-4C44-6E1C-642F-00B97E1A0C91";
	setAttr ".t" -type "double3" -4.6013824355710931 5.4420443587368963 26.788288410108585 ;
	setAttr ".r" -type "double3" 0 90 0 ;
	setAttr ".s" -type "double3" 12.573973824558799 0.96431395389020125 5.1247352724672357 ;
createNode mesh -n "pasted__pasted__pCubeShape1" -p "|group47|pasted__group23|pasted__pasted__pCube1";
	rename -uid "6EB242AD-4025-B4B0-2720-9A8D2A03E9B0";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__group" -p "|group47|pasted__group23";
	rename -uid "3B0F3654-4D31-0C2E-E8E9-6195CF557B2B";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "pasted__pasted__pasted__pPipe1" -p "|group47|pasted__group23|pasted__pasted__group";
	rename -uid "42C45D2B-45FD-6035-B72A-DBA96254BD32";
	setAttr ".t" -type "double3" 1.8007409183554497 6.8868889964308009 28.411574478588413 ;
	setAttr ".r" -type "double3" 90.000000000000071 0 3.9835620281842875e-016 ;
	setAttr ".s" -type "double3" 0.49545456193038218 1.4064558101482285 0.68308864847924422 ;
createNode mesh -n "pasted__pasted__pasted__pPipeShape1" -p "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1";
	rename -uid "6FE5CE6B-439C-C5CB-C8A6-30AF1D1B4B2A";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75000011920928955 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pTorus1" -p "group47";
	rename -uid "A3858352-4040-6940-9E75-5FAF18A4930F";
	setAttr ".t" -type "double3" -5.9258560489588632 0 -3.082184283662027 ;
	setAttr ".r" -type "double3" 0 90 0 ;
	setAttr ".rp" -type "double3" -86.118694801306276 5.4528811202438288 1.9404360437601369 ;
	setAttr ".sp" -type "double3" -86.118694801306276 5.4528811202438288 1.9404360437601369 ;
createNode mesh -n "pasted__pasted__pTorus1Shape" -p "|group47|pasted__pasted__pTorus1";
	rename -uid "124153D0-4513-AB40-26CB-F3B135FD2A25";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group48";
	rename -uid "0940A3EA-452D-F2B2-C261-6BA7B9DB55B1";
	setAttr ".t" -type "double3" -17.395714440359903 0 0 ;
	setAttr ".rp" -type "double3" -57.560437314526133 10.854516506195068 5.7350611064210826 ;
	setAttr ".sp" -type "double3" -57.560437314526133 10.854516506195068 5.7350611064210826 ;
createNode transform -n "pasted__group31" -p "group48";
	rename -uid "2A7E7097-46D1-DD46-1B72-BE9F112DADCE";
	setAttr ".t" -type "double3" -70.279176333705522 -6.4626537010314244 -8.6690829726940049 ;
	setAttr ".rp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
	setAttr ".sp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
createNode transform -n "pasted__pasted__group30" -p "|group48|pasted__group31";
	rename -uid "E7FD86A0-4E46-9404-5D1C-8D8C6A2F1669";
createNode transform -n "pasted__pasted__pCube2" -p "|group48|pasted__group31|pasted__pasted__group30";
	rename -uid "CBBDA7C2-4501-48F5-6803-20B6AAEA4467";
	setAttr ".t" -type "double3" 6.6966155782685446 17.317167207179796 5.1662895911623892 ;
	setAttr ".s" -type "double3" 9.1355506576468564 1.8521756668158338 2.5710150523412576 ;
createNode transform -n "pasted__transform8" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2";
	rename -uid "A952511C-48E3-C125-EE36-DA88F759EE0A";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCubeShape2" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8";
	rename -uid "55B31F65-4760-C2B8-5823-61BB3A65679A";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.875 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pCylinder4" -p "|group48|pasted__group31|pasted__pasted__group30";
	rename -uid "567F9DA6-4445-2255-B583-E2895B2D6994";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 4.5520912795960555 ;
	setAttr ".r" -type "double3" 0 0 -90 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__transform9" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4";
	rename -uid "81B13EED-4B23-D79F-B43A-C597811EA3D2";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCylinderShape4" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9";
	rename -uid "FF0A0C75-4287-3949-959C-2987F0B9EB7D";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pCylinder4" -p "|group48|pasted__group31|pasted__pasted__group30";
	rename -uid "6771CD43-45BB-326E-E24D-37B083DAAC8A";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 5.6290837922382781 ;
	setAttr ".r" -type "double3" 0 0 -89.999999999999986 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__transform10" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4";
	rename -uid "F1028FB7-41DB-68A5-5260-D0BFAAD21526";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pCylinderShape4" -p "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10";
	rename -uid "DB2B732B-4A54-40A9-C21E-CCA38BF8BBE1";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pCylinder4" -p "group48";
	rename -uid "440686CD-489A-20E8-337C-82B7849C40B7";
	setAttr ".t" -type "double3" 7.5451838638472566 0 17.804396678004323 ;
	setAttr ".rp" -type "double3" -64.505630911481134 10.785382089184989 -3.7032970146369895 ;
	setAttr ".sp" -type "double3" -64.505630911481134 10.785382089184989 -3.7032970146369895 ;
createNode mesh -n "pasted__pasted__pasted__pCylinder4Shape" -p "|group48|pasted__pasted__pasted__pCylinder4";
	rename -uid "D01CCCF2-4ECF-4A05-CD01-DD8E50C2A141";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group49";
	rename -uid "551FD47C-42C4-5E8E-61D1-28952B57943C";
	setAttr ".t" -type "double3" 0 0 -12.29065632015261 ;
	setAttr ".rp" -type "double3" -57.560437314526133 10.854516506195068 1.9111471875485879 ;
	setAttr ".sp" -type "double3" -57.560437314526133 10.854516506195068 1.9111471875485879 ;
createNode transform -n "pasted__group31" -p "group49";
	rename -uid "8D16A990-435C-4529-AA1A-0BADC03659CF";
	setAttr ".t" -type "double3" -70.279176333705522 -6.4626537010314244 -8.6690829726940049 ;
	setAttr ".rp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
	setAttr ".sp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
createNode transform -n "pasted__pasted__group30" -p "|group49|pasted__group31";
	rename -uid "8EE45D25-470B-5E2A-E60E-A58A36CC8D1B";
createNode transform -n "pasted__pasted__pCube2" -p "|group49|pasted__group31|pasted__pasted__group30";
	rename -uid "D325E2F6-456B-1BCD-7BCF-47A491C5118A";
	setAttr ".t" -type "double3" 6.6966155782685446 17.317167207179796 5.1662895911623892 ;
	setAttr ".s" -type "double3" 9.1355506576468564 1.8521756668158338 2.5710150523412576 ;
createNode transform -n "pasted__transform8" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2";
	rename -uid "42438831-44F6-A9E3-8CC5-CE859441BF9B";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCubeShape2" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8";
	rename -uid "23B0ADC2-4C70-2498-785B-62B690C23ED2";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.875 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pCylinder4" -p "|group49|pasted__group31|pasted__pasted__group30";
	rename -uid "D5E66FF3-496D-3738-233E-90A6FB65E479";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 4.5520912795960555 ;
	setAttr ".r" -type "double3" 0 0 -90 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__transform9" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4";
	rename -uid "26E9FA39-4668-A0EC-783F-448A525A4A3B";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pCylinderShape4" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9";
	rename -uid "64579034-40C2-B8E4-73CD-E8809A355EED";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pCylinder4" -p "|group49|pasted__group31|pasted__pasted__group30";
	rename -uid "41310181-4A04-23AF-6C7E-C5890775059D";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 5.6290837922382781 ;
	setAttr ".r" -type "double3" 0 0 -89.999999999999986 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__transform10" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4";
	rename -uid "1542DAED-4D3D-B318-BEF5-3F8E0D4DAE6E";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pCylinderShape4" -p "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10";
	rename -uid "687DA553-48E2-31C3-05AB-DCB230825F96";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pCylinder4" -p "group49";
	rename -uid "66F79EAF-47DC-5C14-2E34-A5AE8E6253C2";
	setAttr ".t" -type "double3" 7.5451838638472566 0 17.804396678004323 ;
	setAttr ".rp" -type "double3" -64.505630911481134 10.785382089184989 -15.908153157849485 ;
	setAttr ".sp" -type "double3" -64.505630911481134 10.785382089184989 -15.908153157849485 ;
createNode mesh -n "pasted__pasted__pasted__pCylinder4Shape" -p "|group49|pasted__pasted__pasted__pCylinder4";
	rename -uid "4A889BDD-4A5B-7402-B34C-A5ADFBC23014";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group50";
	rename -uid "305A761A-414D-447F-292D-B0A43ABE9157";
	setAttr ".t" -type "double3" -17.663790870046789 0 0 ;
	setAttr ".rp" -type "double3" -57.560437314526133 10.854516506195068 -12.700923020204305 ;
	setAttr ".sp" -type "double3" -57.560437314526133 10.854516506195068 -12.700923020204305 ;
createNode transform -n "pasted__group49" -p "group50";
	rename -uid "0FF6E39B-46AE-6833-BB8E-FC91A2CCD41F";
	setAttr ".t" -type "double3" 0 0 -12.29065632015261 ;
	setAttr ".rp" -type "double3" -57.560437314526133 10.854516506195068 1.9111471875485879 ;
	setAttr ".sp" -type "double3" -57.560437314526133 10.854516506195068 1.9111471875485879 ;
createNode transform -n "pasted__pasted__group31" -p "pasted__group49";
	rename -uid "DAC64A87-41F7-A077-7E7F-A28F0683070E";
	setAttr ".t" -type "double3" -70.279176333705522 -6.4626537010314244 -8.6690829726940049 ;
	setAttr ".rp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
	setAttr ".sp" -type "double3" 6.6966163950504223 17.317170739924521 5.1662923495622897 ;
createNode transform -n "pasted__pasted__pasted__group30" -p "pasted__pasted__group31";
	rename -uid "32E534E9-4A21-42BC-B556-A5850F19ACA2";
createNode transform -n "pasted__pasted__pasted__pCube2" -p "pasted__pasted__pasted__group30";
	rename -uid "B11CA7AE-48DD-34E4-8E25-01AB291E59D3";
	setAttr ".t" -type "double3" 6.6966155782685446 17.317167207179796 5.1662895911623892 ;
	setAttr ".s" -type "double3" 9.1355506576468564 1.8521756668158338 2.5710150523412576 ;
createNode transform -n "pasted__pasted__transform8" -p "pasted__pasted__pasted__pCube2";
	rename -uid "7474283F-4952-57E3-DDEC-B7B6B20A6269";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pCubeShape2" -p "pasted__pasted__transform8";
	rename -uid "541A1AEC-4280-7621-1E6E-2F856788D8CF";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.875 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pCylinder4" -p "pasted__pasted__pasted__group30";
	rename -uid "E67AC723-4154-9A47-8BAC-2BBE2E5D6561";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 4.5520912795960555 ;
	setAttr ".r" -type "double3" 0 0 -90 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__pasted__transform9" -p "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4";
	rename -uid "3CFFDFA5-48B8-7EA5-1011-5BB09062EB0B";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pCylinderShape4" -p "pasted__pasted__transform9";
	rename -uid "AE2FE8B2-430F-ECA2-7CF2-2B9806EFDC0F";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pasted__pCylinder4" -p "pasted__pasted__pasted__group30";
	rename -uid "B13DFC3D-4E2F-5DB6-608D-1B8BAB2EFC1B";
	setAttr ".t" -type "double3" 6.6279036074075623 16.925055671537958 5.6290837922382781 ;
	setAttr ".r" -type "double3" 0 0 -89.999999999999986 ;
	setAttr ".s" -type "double3" 0.22387896678985908 4.4039739599308678 0.22387896678985908 ;
createNode transform -n "pasted__pasted__transform10" -p "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pasted__pCylinder4";
	rename -uid "8A8876D5-4053-9AD5-648C-C18CC9EEE448";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pasted__pCylinderShape4" -p "pasted__pasted__transform10";
	rename -uid "E36B1143-40E5-DD8D-2EA6-ADB1058A54A2";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pasted__pCylinder4" -p "pasted__group49";
	rename -uid "B4E4DFCB-4804-653D-D4AA-35BC1269FDB9";
	setAttr ".t" -type "double3" 7.5451838638472566 0 17.804396678004323 ;
	setAttr ".rp" -type "double3" -64.505630911481134 10.785382089184989 -15.908153157849485 ;
	setAttr ".sp" -type "double3" -64.505630911481134 10.785382089184989 -15.908153157849485 ;
createNode mesh -n "pasted__pasted__pasted__pasted__pCylinder4Shape" -p "|group50|pasted__group49|pasted__pasted__pasted__pasted__pCylinder4";
	rename -uid "79309EA4-4E05-3F46-714D-18832AA05B0C";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group51";
	rename -uid "D5ACA9F9-4E4F-7C3A-A4CD-EBA35333BC71";
	setAttr ".t" -type "double3" 17.775069347376089 0 0 ;
	setAttr ".rp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
	setAttr ".sp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
createNode transform -n "pasted__group22" -p "group51";
	rename -uid "741DE883-48A9-1074-B522-DB9532A3F30E";
	setAttr ".t" -type "double3" -80.842938744581872 0 -26.519747406262752 ;
	setAttr ".rp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
	setAttr ".sp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
createNode transform -n "pasted__pasted__group21" -p "|group51|pasted__group22";
	rename -uid "455B9196-4DFC-9172-56D3-F695235BA196";
createNode transform -n "pasted__pasted__pasted__pasted__pasted__pSphere2" -p "|group51|pasted__group22|pasted__pasted__group21";
	rename -uid "24112C01-41EF-2B81-7D0B-5E85AD9CC1BB";
	setAttr ".t" -type "double3" -5.6203401431626805 5.1767287654009682 -1.7473502899805036 ;
	setAttr ".s" -type "double3" 3.6544077539314501 3.2112480122513745 3.9541897446308223 ;
createNode transform -n "pasted__transform6" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2";
	rename -uid "E2E1C0E6-489A-48DF-7F73-2EBF4756CB99";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pasted__pasted__pSphereShape2" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6";
	rename -uid "C507B15E-437C-DA13-2285-0982AD3147F5";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pPipe2" -p "|group51|pasted__group22|pasted__pasted__group21";
	rename -uid "D43C2632-4C20-5569-70FF-2CB97F51742D";
	setAttr ".t" -type "double3" -5.6236046379070874 6.6504126090073932 -0.58083083356287935 ;
	setAttr ".s" -type "double3" 3.9953044017111052 3.5502110675467176 5.3547678838007471 ;
createNode transform -n "pasted__transform5" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2";
	rename -uid "8E16CC09-4F0B-A1D4-F163-1D858D954708";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pPipeShape2" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5";
	rename -uid "20A0BA12-467C-DA71-DC1B-7FB8F6C15C12";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pTorus1" -p "|group51|pasted__group22|pasted__pasted__group21";
	rename -uid "0BC3996D-4316-ADA4-2609-22B0AD3AAC01";
	setAttr ".t" -type "double3" -5.5472063909372542 1.8198891288413472 -1.7709008657611229 ;
createNode transform -n "pasted__transform7" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1";
	rename -uid "8BE04994-4219-A956-2374-B789A315EBD7";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pTorusShape1" -p "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7";
	rename -uid "6A832F35-48D0-0E8F-2266-1BA59D2EEF51";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__group23" -p "group51";
	rename -uid "E500805D-4884-DC32-8BF7-0AADF21610D4";
	setAttr ".t" -type "double3" -83.42043408210408 -0.62850077020971007 -27.194704009389348 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
createNode transform -n "pasted__pasted__pCube1" -p "|group51|pasted__group23";
	rename -uid "4BCD0A5A-458F-0772-A3F3-33922BDBCE69";
	setAttr ".t" -type "double3" 13.427176024921966 5.4420443587368963 5.8090034824113062 ;
	setAttr ".s" -type "double3" 12.573973824558799 0.96431395389020125 5.1247352724672357 ;
createNode mesh -n "pasted__pasted__pCubeShape1" -p "|group51|pasted__group23|pasted__pasted__pCube1";
	rename -uid "DC394008-4D6B-D953-B30A-3E9222BA4660";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__group" -p "|group51|pasted__group23";
	rename -uid "6A2B15DF-48EE-8986-DEC6-8BB6109D929A";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "pasted__pasted__pasted__pPipe1" -p "|group51|pasted__group23|pasted__pasted__group";
	rename -uid "AFFD5527-443C-A20B-FB74-DA8ECD024DE1";
	setAttr ".t" -type "double3" 22.231501589947122 6.8868889964308009 4.7429559786303859 ;
	setAttr ".r" -type "double3" 89.999999999999957 -90 0 ;
	setAttr ".s" -type "double3" 0.49545456193038218 1.4064558101482285 0.68308864847924422 ;
createNode mesh -n "pasted__pasted__pasted__pPipeShape1" -p "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1";
	rename -uid "7B13B8CF-44D1-F768-5147-51B934911FE4";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75000011920928955 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pTorus1" -p "group51";
	rename -uid "FFA7DE24-436A-9D8D-20BC-E1AC531AD1B2";
	setAttr ".t" -type "double3" 0.13156205101218177 0 0 ;
	setAttr ".rp" -type "double3" -68.772909725350601 5.4528811202438288 -28.619593147373568 ;
	setAttr ".sp" -type "double3" -68.772909725350601 5.4528811202438288 -28.619593147373568 ;
createNode mesh -n "pasted__pasted__pTorus1Shape" -p "|group51|pasted__pasted__pTorus1";
	rename -uid "0EE4341A-4933-7FF5-72B3-8B9A4CC96047";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "group52";
	rename -uid "3C696510-425B-D3CB-2DCA-F3A77CDA06D1";
	setAttr ".t" -type "double3" 5.3021251928128379 -0.71828216342683504 20.313700738879767 ;
	setAttr ".rp" -type "double3" -94.057439767986779 6.3572549005373666 5.8514073701205191 ;
	setAttr ".sp" -type "double3" -94.057439767986779 6.3572549005373666 5.8514073701205191 ;
createNode transform -n "pasted__group39" -p "group52";
	rename -uid "A075A4AD-4D90-BD67-B63B-DA9FEF23C32D";
	setAttr ".t" -type "double3" -86.978481798815764 -0.62258535014284888 -40.951922047610076 ;
	setAttr ".rp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
	setAttr ".sp" -type "double3" -7.8250366374638762 7.594131220305318 46.62703730325758 ;
createNode transform -n "pasted__pasted__pCylinder7" -p "|group52|pasted__group39";
	rename -uid "4C2E7004-41CE-5031-63DF-D88AA889E0BE";
	setAttr ".t" -type "double3" -7.0789579054549749 6.9798401869641804 46.803329417730595 ;
	setAttr ".s" -type "double3" 0.26724442332053377 0.26724442332053377 0.26724442332053377 ;
createNode mesh -n "pasted__pasted__pCylinderShape7" -p "|group52|pasted__group39|pasted__pasted__pCylinder7";
	rename -uid "3FC1EA13-4E8A-39EF-4DF2-2BA46268028C";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49999998509883881 0.84374997019767761 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".pt[61:80]" -type "float3"  -4.47275e-008 -0.97564948 
		-0.16590469 -0.051267512 -0.97564948 -0.15778501 -0.097516574 -0.97564948 -0.13421972 
		-0.13422005 -0.97564948 -0.097515985 -0.1577851 -0.97564948 -0.051267739 -0.16590509 
		-0.97564948 0 -0.15778522 -0.97564948 0.051267739 -0.13422014 -0.97564948 0.097515985 
		-0.097516634 -0.97564948 0.13421972 -0.051267564 -0.97564948 0.15778501 -4.47275e-008 
		-0.97564948 0.16590469 0.051267471 -0.97564948 0.15778501 0.09751647 -0.97564948 
		0.13421972 0.13421994 -0.97564948 0.097515985 0.1577851 -0.97564948 0.051267739 0.16590509 
		-0.97564948 0 0.1577851 -0.97564948 -0.051267739 0.13421994 -0.97564948 -0.097515985 
		0.09751647 -0.97564948 -0.13421972 0.051267471 -0.97564948 -0.15778501;
createNode transform -n "group53";
	rename -uid "3D30F551-4DD9-18F7-411D-55A9F201BB3C";
	setAttr ".t" -type "double3" 0 0 21.080896156090663 ;
	setAttr ".rp" -type "double3" -57.311337916319751 4.6296022713044032 -25.639339022276509 ;
	setAttr ".sp" -type "double3" -57.311337916319751 4.6296022713044032 -25.639339022276509 ;
createNode transform -n "pasted__group51" -p "group53";
	rename -uid "A5CEF788-42D3-F94A-857B-588B23403406";
	setAttr ".t" -type "double3" 17.775069347376089 0 0 ;
	setAttr ".rp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
	setAttr ".sp" -type "double3" -88.02181614294156 4.6296022713044032 -25.639339022276509 ;
createNode transform -n "pasted__pasted__group22" -p "pasted__group51";
	rename -uid "0A6B8B4D-43E1-39B5-C739-19A5F036A500";
	setAttr ".t" -type "double3" -80.842938744581872 0 -26.519747406262752 ;
	setAttr ".rp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
	setAttr ".sp" -type "double3" -5.6236058286005859 4.8727037282108299 -1.864379714837616 ;
createNode transform -n "pasted__pasted__pasted__group21" -p "pasted__pasted__group22";
	rename -uid "815ECAA7-4F2D-D5FF-35F8-578D4D6EB5AE";
createNode transform -n "pasted__pasted__pasted__pasted__pasted__pasted__pSphere2" 
		-p "pasted__pasted__pasted__group21";
	rename -uid "FE371B8A-472B-3A8B-C80C-96B651905F00";
	setAttr ".t" -type "double3" -5.6203401431626805 5.1767287654009682 -1.7473502899805036 ;
	setAttr ".s" -type "double3" 3.6544077539314501 3.2112480122513745 3.9541897446308223 ;
createNode transform -n "pasted__pasted__transform6" -p "pasted__pasted__pasted__pasted__pasted__pasted__pSphere2";
	rename -uid "DAF8D5D6-454A-E413-947B-7AB9E16D7FDF";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2" 
		-p "pasted__pasted__transform6";
	rename -uid "2D078A51-421E-C5C7-26F6-0CBF5BE43EBD";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.50000005960464478 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pPipe2" -p "pasted__pasted__pasted__group21";
	rename -uid "75804888-474D-DE4A-ED88-B6A8DF5B2932";
	setAttr ".t" -type "double3" -5.6236046379070874 6.6504126090073932 -0.58083083356287935 ;
	setAttr ".s" -type "double3" 3.9953044017111052 3.5502110675467176 5.3547678838007471 ;
createNode transform -n "pasted__pasted__transform5" -p "pasted__pasted__pasted__pPipe2";
	rename -uid "418C03A0-4A48-6AB1-AEC6-F489AC5BBDEC";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pPipeShape2" -p "pasted__pasted__transform5";
	rename -uid "7EE08E9A-4447-4EB3-88AC-F8B506EDD6D5";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.50000005960464478 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pTorus1" -p "pasted__pasted__pasted__group21";
	rename -uid "4E6A0C3E-4FFE-226C-468A-338398DDDE5F";
	setAttr ".t" -type "double3" -5.5472063909372542 1.8198891288413472 -1.7709008657611229 ;
createNode transform -n "pasted__pasted__transform7" -p "|group53|pasted__group51|pasted__pasted__group22|pasted__pasted__pasted__group21|pasted__pasted__pasted__pTorus1";
	rename -uid "2E0CAA12-48DE-B5D1-171F-1ABED84E26AE";
	setAttr ".v" no;
createNode mesh -n "pasted__pasted__pasted__pTorusShape1" -p "pasted__pasted__transform7";
	rename -uid "26FC56BF-4A22-B804-DE01-058582DF94BB";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__group23" -p "pasted__group51";
	rename -uid "BAB6D90A-49FE-1EB2-DA47-B0BBC977A466";
	setAttr ".t" -type "double3" -83.42043408210408 -0.62850077020971007 -27.194704009389348 ;
	setAttr ".rp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
	setAttr ".sp" -type "double3" -4.6013820608374854 5.2581030415141132 5.8090034824113062 ;
createNode transform -n "pasted__pasted__pasted__pCube1" -p "pasted__pasted__group23";
	rename -uid "DDB44A4B-49BE-FFDD-8EC7-ADAA5257AA15";
	setAttr ".t" -type "double3" 10.192291870878808 5.4420443587368963 5.8090034824113062 ;
	setAttr ".r" -type "double3" 0 -90 0 ;
	setAttr ".s" -type "double3" 12.573973824558799 0.96431395389020125 5.1247352724672357 ;
createNode mesh -n "pasted__pasted__pasted__pCubeShape1" -p "pasted__pasted__pasted__pCube1";
	rename -uid "1826C256-4192-DD4F-B0A0-4C896737C68D";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__group" -p "pasted__pasted__group23";
	rename -uid "1D6017FB-4C48-E834-B14C-179D0295D506";
	setAttr ".t" -type "double3" -7.1507360465422041 0 0 ;
	setAttr ".rp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
	setAttr ".sp" -type "double3" 3.7373069400869232 8.3653442002098046 -2.384185791015625e-007 ;
createNode transform -n "pasted__pasted__pasted__pasted__pPipe1" -p "pasted__pasted__pasted__group";
	rename -uid "E0DD7294-4DE9-88A0-78D2-2BA3393E8893";
	setAttr ".t" -type "double3" 18.996617435903964 6.8868889964308009 4.7429559786303859 ;
	setAttr ".r" -type "double3" 89.999999999999687 -180 0 ;
	setAttr ".s" -type "double3" 0.49545456193038218 1.4064558101482285 0.68308864847924422 ;
createNode mesh -n "pasted__pasted__pasted__pasted__pPipeShape1" -p "pasted__pasted__pasted__pasted__pPipe1";
	rename -uid "43D9F9FD-40E7-A080-DE2B-E6A100237183";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75000011920928955 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode transform -n "pasted__pasted__pasted__pTorus1" -p "pasted__group51";
	rename -uid "D0AD5619-445C-79C8-A69A-5A8FC84B2D60";
	setAttr ".t" -type "double3" 2.5940647797291803 0 -14.589267604248608 ;
	setAttr ".r" -type "double3" 0 -90 0 ;
	setAttr ".rp" -type "double3" -68.772909725350601 5.4528811202438288 -6.7268909857470121 ;
	setAttr ".sp" -type "double3" -68.772909725350601 5.4528811202438288 -6.7268909857470121 ;
createNode mesh -n "pasted__pasted__pasted__pTorus1Shape" -p "|group53|pasted__group51|pasted__pasted__pasted__pTorus1";
	rename -uid "8524679A-4400-A60A-B4A2-B28199CE8572";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
createNode lightLinker -s -n "lightLinker1";
	rename -uid "A5619D50-41FC-7698-6968-0E97D012D43F";
	setAttr -s 10 ".lnk";
	setAttr -s 10 ".slnk";
createNode displayLayerManager -n "layerManager";
	rename -uid "B88BCE40-4C9B-A491-5733-F3BAECC63A2D";
createNode displayLayer -n "defaultLayer";
	rename -uid "15A0BEE8-4349-A108-3874-3987D7A84D34";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "4E44DE59-499D-5E7C-878E-CDB099ED1DE1";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "741830CD-4001-38A7-0AC3-DBAC2832AC9D";
	setAttr ".g" yes;
createNode ilrOptionsNode -s -n "TurtleRenderOptions";
	rename -uid "A43E5103-4119-A9C8-0B4D-D0BB1D84BC24";
lockNode -l 1 ;
createNode ilrUIOptionsNode -s -n "TurtleUIOptions";
	rename -uid "8159193A-47D8-11CB-6FFA-D9ACBE377ED8";
lockNode -l 1 ;
createNode ilrBakeLayerManager -s -n "TurtleBakeLayerManager";
	rename -uid "AA43DB15-4762-7E9A-05AB-F0AD93EE2AEA";
lockNode -l 1 ;
createNode ilrBakeLayer -s -n "TurtleDefaultBakeLayer";
	rename -uid "1F65A883-4E12-F4F2-2C6A-FF9F12353B27";
lockNode -l 1 ;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "8D7BC6BC-4EB4-FF86-21E7-978042EFA59B";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"top\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n"
		+ "                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n"
		+ "                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n"
		+ "                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 1\n                -height 1\n                -sceneRenderFilter 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n"
		+ "                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n"
		+ "            -textureMaxSize 16384\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n"
		+ "            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n"
		+ "        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"side\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n"
		+ "                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n"
		+ "                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n"
		+ "                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 1\n                -height 1\n                -sceneRenderFilter 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n"
		+ "            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 16384\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n"
		+ "            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n"
		+ "            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"front\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n"
		+ "                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n"
		+ "                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n"
		+ "                -width 1\n                -height 1\n                -sceneRenderFilter 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n"
		+ "            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 16384\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n"
		+ "            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n"
		+ "            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n"
		+ "                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n"
		+ "                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n"
		+ "                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 862\n                -height 418\n                -sceneRenderFilter 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n"
		+ "\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 16384\n            -fogging 0\n            -fogSource \"fragment\" \n"
		+ "            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n"
		+ "            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 862\n            -height 418\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n"
		+ "            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `outlinerPanel -unParent -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            outlinerEditor -e \n                -showShapes 0\n                -showReferenceNodes 1\n                -showReferenceMembers 1\n                -showAttributes 0\n                -showConnected 0\n                -showAnimCurvesOnly 0\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 1\n                -showAssets 1\n                -showContainedOnly 1\n                -showPublishedAsConnected 0\n                -showContainerContents 1\n                -ignoreDagHierarchy 0\n                -expandConnections 0\n"
		+ "                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 0\n                -highlightActive 1\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"defaultSetFilter\" \n                -showSetMembers 1\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n"
		+ "                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 0\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n"
		+ "            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n"
		+ "            -ignoreOutlinerColor 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"graphEditor\" -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n"
		+ "                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n"
		+ "                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 1\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showResults \"off\" \n                -showBufferCurves \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -stackedCurves 0\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n"
		+ "                -stackedCurvesSpace 0.2\n                -displayNormalized 0\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -classicMode 1\n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n"
		+ "                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n"
		+ "                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 1\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showResults \"off\" \n                -showBufferCurves \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -stackedCurves 0\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n"
		+ "                -displayNormalized 0\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -classicMode 1\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dopeSheetPanel\" -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n"
		+ "                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n"
		+ "                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n"
		+ "                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                $editorName;\n"
		+ "\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"clipEditorPanel\" -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n"
		+ "            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 0 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n"
		+ "\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"sequenceEditorPanel\" -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n"
		+ "                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"hyperGraphPanel\" -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n"
		+ "                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n"
		+ "                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n"
		+ "\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"visorPanel\" -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"createNodePanel\" -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"polyTexturePlacementPanel\" -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"renderWindowPanel\" -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"blendShapePanel\" (localizedPanelLabel(\"Blend Shape\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\tblendShapePanel -unParent -l (localizedPanelLabel(\"Blend Shape\")) -mbv $menusOkayInPanels ;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tblendShapePanel -edit -l (localizedPanelLabel(\"Blend Shape\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dynRelEdPanel\" -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n"
		+ "\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"relationshipPanel\" -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"referenceEditorPanel\" -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"componentEditorPanel\" -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dynPaintScriptedPanelType\" -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"scriptEditorPanel\" -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"profilerPanel\" (localizedPanelLabel(\"Profiler Tool\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"profilerPanel\" -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"Stereo\" (localizedPanelLabel(\"Stereo\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"Stereo\" -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels `;\nstring $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n"
		+ "                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n"
		+ "                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n"
		+ "                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels  $panelName;\nstring $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n"
		+ "                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 16384\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n"
		+ "                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n"
		+ "                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n"
		+ "                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"hyperShadePanel\" -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -activeTab -1\n                -editorMode \"default\" \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -activeTab -1\n                -editorMode \"default\" \n"
		+ "                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-defaultImage \"\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 16384\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 862\\n    -height 418\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 16384\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 862\\n    -height 418\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        setFocus `paneLayout -q -p1 $gMainPane`;\n        sceneUIReplacement -deleteRemaining;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "0D15D69A-4CFC-E3AD-83CE-D3A976417E92";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode lambert -n "lambert2";
	rename -uid "8E616382-46B4-ECEF-D8E4-5D99579235D6";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode shadingEngine -n "lambert2SG";
	rename -uid "DBC51338-4D6F-0F95-731C-D09561BF1640";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "EE6F1ADE-4B36-1AFD-4B44-F39569173E70";
createNode materialInfo -n "pasted__materialInfo1";
	rename -uid "B5843CF1-4708-0DB1-E892-0FA09FC8824C";
createNode shadingEngine -n "pasted__lambert2SG";
	rename -uid "CA26F073-4AA3-F183-AB5B-53ABE38242C7";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode lambert -n "pasted__lambert2";
	rename -uid "8781E0C4-4774-0F41-AE93-2C9C5128D7A9";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode polySphere -n "polySphere1";
	rename -uid "39C29301-4F78-A7EB-7D9C-2B9C8001D18C";
createNode deleteComponent -n "deleteComponent9";
	rename -uid "D0A15657-4737-16F8-668E-AFACCAF84B9C";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode deleteComponent -n "deleteComponent10";
	rename -uid "3EB3B087-4859-4181-EF59-4AB6288704EA";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent11";
	rename -uid "0267FBC3-4ADA-287B-7237-F3A068167748";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent12";
	rename -uid "E6EC9818-40B8-BF22-5A9B-4CB24B576382";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent13";
	rename -uid "5EA16476-48DA-75D4-4A86-C8B3E55E875E";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent14";
	rename -uid "7C2FB1E2-4E45-A256-0BC4-B6B21788392B";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent15";
	rename -uid "6DFD143A-4D20-4C24-2688-E0A4B7B88392";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent16";
	rename -uid "BFC4A885-4131-BD52-140E-158A0A532BFD";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "deleteComponent17";
	rename -uid "F7C5F4A1-490D-F390-92CB-D985B8C73CAA";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode polyCloseBorder -n "polyCloseBorder3";
	rename -uid "FBBC6299-4D89-33AB-563D-60B33FF676DB";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode polyCloseBorder -n "pasted__polyCloseBorder3";
	rename -uid "97D0D501-4E75-8865-1C0C-E0AB1FE8CFB0";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__deleteComponent17";
	rename -uid "2FFC31E3-457E-ECC6-CE7E-C78FE4DBB595";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent16";
	rename -uid "5EB5CDF6-4527-A3E7-B4CF-A9B8E9E8FCCC";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent15";
	rename -uid "AFACA7C0-4C02-77C5-E65D-4C8F6D444F47";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent14";
	rename -uid "94595661-49E1-2CD7-09DC-5F808BB335C9";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent13";
	rename -uid "EA5F3917-4113-4F65-FE58-5CAC3B5CDAD1";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent12";
	rename -uid "F5F2C35C-4F33-48F4-33BE-D0B5437D51DD";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent11";
	rename -uid "7E7FBC94-44F1-5AB0-3899-CBA7876556AD";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent10";
	rename -uid "5D914205-4EEE-54DF-7794-F4BDA1944E72";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent9";
	rename -uid "F815D7B1-487C-3392-E65C-0AAD5473AD87";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode polySphere -n "pasted__polySphere1";
	rename -uid "0015C0CD-40DD-E35C-419A-D29B4AF013D1";
createNode groupId -n "groupId1";
	rename -uid "FA58184E-4348-EF5E-865F-79A409265967";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts1";
	rename -uid "1D6725F1-49F1-A363-6057-159B9CD436D7";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode groupId -n "groupId2";
	rename -uid "A3B3BB46-4A48-B01E-EC6E-2CA5E5B60C70";
	setAttr ".ihi" 0;
createNode groupId -n "groupId3";
	rename -uid "619838B6-439B-CE69-7141-E48A6418AB7E";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts2";
	rename -uid "7991C88F-4FD5-8AB1-3113-83B67C4487D3";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode groupId -n "groupId4";
	rename -uid "E1547534-448F-6356-07E3-BCA8DE27C94C";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts1";
	rename -uid "2380E13C-4D17-325C-D024-EE9E3148EC50";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder3";
	rename -uid "02DEE40F-4BF3-6E78-A880-56851D9AA2EC";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__deleteComponent17";
	rename -uid "BAF7D7D5-4EE4-5B5D-532C-27B88636CDD9";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent16";
	rename -uid "ACE0D30F-4B8C-1F4F-9F37-E494F0CC5EF5";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent15";
	rename -uid "7BD44474-462B-8C95-4B9D-F9978CCA8249";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent14";
	rename -uid "E2B0E516-4508-AB59-B9EE-BDAA079661CE";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent13";
	rename -uid "905EED9F-494B-39FF-8E4E-AE9AEAC7BF94";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent12";
	rename -uid "CD2B72C3-4760-5AAD-A48E-8A936D042821";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent11";
	rename -uid "A9BEAC62-498B-8D88-50C7-7DA9D3A4BDF8";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent10";
	rename -uid "A0E2F57D-4935-3E35-CEBF-E0A11E19BB1F";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent9";
	rename -uid "8800EFD8-4E94-338F-E2D8-9EB64A7372CD";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode polySphere -n "pasted__pasted__polySphere1";
	rename -uid "CC6FF7E5-4D20-B43F-AC23-8EB5F1D8A500";
createNode groupId -n "pasted__groupId1";
	rename -uid "D70C3DF6-41DC-709F-6C70-6081D87FA140";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId2";
	rename -uid "6B8682B5-41B0-5815-6FA5-33B785BE9D77";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId3";
	rename -uid "C79F08C6-442F-12BB-8AFE-53B4EBC89687";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts2";
	rename -uid "9E204A04-42B9-DF6B-C7EE-DD90B69121A0";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__polyCloseBorder4";
	rename -uid "61C453DB-4372-B0E5-FD94-4CBBA0416840";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__deleteComponent26";
	rename -uid "209CA894-41E9-73FD-52F0-9F964008A51F";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent25";
	rename -uid "67B59483-4E1E-7DAE-CA13-00A4D4ED2555";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent24";
	rename -uid "98BE664B-4496-3F48-FF63-97978E27E1E7";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent23";
	rename -uid "1B06F685-46F2-E51E-1FC7-CA834B6C9B3D";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent22";
	rename -uid "FBC3EE3E-47F7-1A28-37AA-3CA5CA2DE726";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent21";
	rename -uid "B4E5F16F-4B96-812E-5890-20A423E0560F";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent20";
	rename -uid "9B079AE6-42D0-AC5B-9EE0-95AD142A00A0";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent19";
	rename -uid "9333D156-41B7-827A-8F74-DBA620CC4D54";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__deleteComponent18";
	rename -uid "9DCD6535-4C11-3347-B5BE-F3AF52C17669";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode polySphere -n "pasted__polySphere2";
	rename -uid "92D7E66F-4DA7-55FA-F5DD-0B98C4E3BB6F";
createNode groupId -n "pasted__groupId4";
	rename -uid "A515A251-4848-DEC2-8685-E9A278EB170D";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts1";
	rename -uid "B5DA927A-465C-BA46-7854-02A9B719B501";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder3";
	rename -uid "3B9D852E-4CD1-894E-E6E8-A1880AC93972";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent17";
	rename -uid "8AF8EAB3-4DCE-53BA-8B64-03B567514378";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent16";
	rename -uid "605195F7-4EC6-A6EB-9315-5889A5220B8B";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent15";
	rename -uid "D9C95247-4822-0F20-8A06-A4A602D0AD79";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent14";
	rename -uid "790FFA3E-47A3-A683-5FFA-619BF592DA59";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent13";
	rename -uid "B2FE9B9B-46E5-5BC5-17B5-50A207193B5E";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent12";
	rename -uid "48181859-49CB-1B75-067F-0793BA43DFE6";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent11";
	rename -uid "5D94A928-4258-971A-5AC7-5AA3404C22CA";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent10";
	rename -uid "74C02BA9-4862-98EB-C380-7B9CFE6B3FEC";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent9";
	rename -uid "237220FD-4346-4179-6170-46958708634F";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode polySphere -n "pasted__pasted__pasted__polySphere1";
	rename -uid "E59F72CF-4327-14AA-1B9A-139A43722561";
createNode groupId -n "pasted__pasted__groupId1";
	rename -uid "14EAE5F6-40AE-317B-1058-B8A7B9F35254";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId2";
	rename -uid "AF920919-44D8-5C0E-229E-6AA922B94810";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId3";
	rename -uid "D517B7D6-414E-65F7-4BAA-8CA78D1622C5";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts2";
	rename -uid "0D20C5D6-4443-9B85-D019-92AE757A29F6";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder4";
	rename -uid "FD5D1BA1-4BEB-0BB1-FCC3-ED9E9ECF0BA0";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__deleteComponent26";
	rename -uid "665BE89F-4BC4-61B2-9A75-108AFB7A4B85";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent25";
	rename -uid "72C53940-4FAE-791C-FB69-3885473A7EED";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent24";
	rename -uid "DF8E062C-4F02-691E-22F9-8AB61A9E4B52";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent23";
	rename -uid "64F18690-4DFD-2480-58F7-5F9465598323";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent22";
	rename -uid "7931557B-409A-1AC7-79F4-94849C0E792A";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent21";
	rename -uid "02A853E3-49FD-AE51-8899-738568A981C6";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent20";
	rename -uid "15B42D80-4E7C-0E26-984F-6E887B2A78A3";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent19";
	rename -uid "52C686A0-49C7-62F0-B972-09AB17F120AF";
	setAttr ".dc" -type "componentList" 1 "f[180]";
createNode deleteComponent -n "pasted__pasted__deleteComponent18";
	rename -uid "2E8F6754-4E15-59CE-684B-108E765ACC0E";
	setAttr ".dc" -type "componentList" 3 "f[180:184]" "f[193:359]" "f[380:399]";
createNode polySphere -n "pasted__pasted__polySphere2";
	rename -uid "6A65523F-4804-00A5-F23D-4884B58A1348";
createNode groupId -n "pasted__pasted__groupId4";
	rename -uid "F9F83480-4AEE-B64F-EDC6-DB865FD6E247";
	setAttr ".ihi" 0;
createNode polySphere -n "polySphere3";
	rename -uid "29FF4E23-4D2A-ADAC-4748-E784F6E62CEA";
createNode polyCylinder -n "polyCylinder2";
	rename -uid "B2577851-45A1-E813-19D7-5FB341F83DEA";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyPipe -n "polyPipe3";
	rename -uid "1B153D83-4CF6-C05C-DD52-1B92F80594D1";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode polyUnite -n "polyUnite1";
	rename -uid "1FF0047C-4F2F-04A8-C149-CCBC9DC13DFB";
	setAttr -s 2 ".ip";
	setAttr -s 2 ".im";
createNode groupId -n "groupId5";
	rename -uid "9DAB0CB1-4AB1-2A0B-AE67-19A143C7107E";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts3";
	rename -uid "B8807F9F-4DBE-CBBC-5324-7CBCEEB76872";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode groupId -n "groupId6";
	rename -uid "073A9879-4627-92FF-8433-41ADE1EAE9BA";
	setAttr ".ihi" 0;
createNode groupId -n "groupId7";
	rename -uid "E3533C29-4173-56E2-5C60-939677AEC0E5";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts4";
	rename -uid "5DCDDCD4-4CDF-9352-D32D-3994E3C96224";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode groupId -n "groupId8";
	rename -uid "C28FD26A-4F4A-62BA-CA87-BDBE0EC609A7";
	setAttr ".ihi" 0;
createNode groupId -n "groupId9";
	rename -uid "7E1F6484-47B7-4EFD-C203-54B95914F492";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts5";
	rename -uid "E9AC3093-4FED-A4BE-315F-9E84B146B2E4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:459]";
createNode groupId -n "pasted__groupId6";
	rename -uid "F2EEE2D6-40A3-41F0-F9FD-3DAADF055F89";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts4";
	rename -uid "AE5F4BFC-4872-2F64-864C-58B7E6C74A22";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__polySphere4";
	rename -uid "534367CD-452A-858F-F5EC-BE92672E2556";
createNode groupId -n "pasted__groupId7";
	rename -uid "2DFEA60C-4A18-F39D-919F-C79B04940C1B";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId8";
	rename -uid "A1C8F4EC-4C30-A1A7-5706-B1BBCFACB035";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts5";
	rename -uid "710CB86C-408D-AA10-E290-C8986BEDD295";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__polyCylinder2";
	rename -uid "FA45CB9C-4A04-1F9B-FEF9-34B4255FDE24";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId9";
	rename -uid "3DFA3E3B-4780-DA18-F380-319D1A08F73D";
	setAttr ".ihi" 0;
createNode polyBevel3 -n "polyBevel6";
	rename -uid "7B30AD3A-4DA1-1F0F-87EC-AB8799EDFF79";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[40:59]";
	setAttr ".ix" -type "matrix" 1.5029107237823283 0 0 0 0 1.9276852709247334 0 0 0 0 1.5029107237823283 0
		 -0.016141186617254055 -0.46766010183134921 15.319371141803867 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.066225165624590895;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "polyTweak3";
	rename -uid "DC21A13F-4868-7A9E-9E91-DB8A9796067A";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk";
	setAttr ".tk[20]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[37]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[38]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[39]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[40]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[57]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[58]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[59]" -type "float3" 0 -0.38909867 0 ;
createNode polyCylinder -n "polyCylinder3";
	rename -uid "AD01E5C1-4393-3C50-F8CD-CC9B85067E7F";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyCube -n "polyCube3";
	rename -uid "91661581-453D-5039-A57A-9C9B62937C6D";
	setAttr ".cuv" 4;
createNode polyCube -n "pasted__polyCube3";
	rename -uid "1BE2E946-4D7E-3029-7965-6FB8AE32072C";
	setAttr ".cuv" 4;
createNode polyCube -n "pasted__pasted__polyCube3";
	rename -uid "5B3F7FD3-4DC4-1BE0-23EF-9F8DFBFB6467";
	setAttr ".cuv" 4;
createNode polyCube -n "pasted__pasted__pasted__polyCube3";
	rename -uid "0A7AEE50-40DF-9EA7-FBFC-8C9AF8E02187";
	setAttr ".cuv" 4;
createNode polyCube -n "pasted__pasted__pasted__pasted__polyCube3";
	rename -uid "7AA4FB6C-4C58-AF89-6560-D09363F91DE0";
	setAttr ".cuv" 4;
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder5";
	rename -uid "ECB0DAB5-42B3-96BA-B788-1AAA353D6A37";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent28";
	rename -uid "5186CA2B-4FA4-4CFC-54EC-E39908384A16";
	setAttr ".dc" -type "componentList" 2 "f[180:207]" "f[228:247]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent27";
	rename -uid "5FF7D919-419E-C2D7-3501-7782CD464B75";
	setAttr ".dc" -type "componentList" 2 "f[180:319]" "f[324:335]";
createNode polySphere -n "pasted__pasted__pasted__pasted__polySphere3";
	rename -uid "C756565A-448B-8D42-659B-FAA4978082E5";
createNode polyBevel3 -n "pasted__polyBevel8";
	rename -uid "49122E25-4F31-35BE-328C-BDABCD45EBD9";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[10:19]";
	setAttr ".ix" -type "matrix" 3.5502110675467176 0 0 0 0 3.5502110675467176 0 0 0 0 3.5502110675467176 0
		 -5.6236046379070874 7.018080396418755 -2.1305498808393377 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 5;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "pasted__polyTweak5";
	rename -uid "5556D0D8-41A2-1EBB-F13A-67A17E9D96D5";
	setAttr ".uopa" yes;
	setAttr -s 16 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[12]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[14]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[18]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[19]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[20]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[21]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[23]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[24]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[25]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[29]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[30]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[31]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[32]" -type "float3" 0 -0.62167114 0 ;
createNode polyCloseBorder -n "pasted__polyCloseBorder9";
	rename -uid "E3BA547F-4EBE-404D-1FA4-5E8885DD4AE2";
	setAttr ".ics" -type "componentList" 5 "e[40]" "e[50:51]" "e[61:62]" "e[72:73]" "e[83]";
createNode polyCloseBorder -n "pasted__polyCloseBorder8";
	rename -uid "6DF57EE3-4FEE-2583-9DBD-E2BA6DDB16CD";
	setAttr ".ics" -type "componentList" 4 "e[40]" "e[51]" "e[62]" "e[73]";
createNode deleteComponent -n "pasted__deleteComponent55";
	rename -uid "A42DBC85-4EDA-C283-12DF-D0AD44B2B843";
	setAttr ".dc" -type "componentList" 1 "f[40]";
createNode deleteComponent -n "pasted__deleteComponent54";
	rename -uid "86618E81-402E-0785-D568-0CB72A7A5283";
	setAttr ".dc" -type "componentList" 1 "f[41]";
createNode deleteComponent -n "pasted__deleteComponent53";
	rename -uid "72A35BB9-457E-9B0D-FA4F-A98317050B4D";
	setAttr ".dc" -type "componentList" 1 "f[42]";
createNode deleteComponent -n "pasted__deleteComponent52";
	rename -uid "5BCE9DCC-401D-0186-7A88-939FE958E634";
	setAttr ".dc" -type "componentList" 4 "f[10:19]" "f[30:39]" "f[50:59]" "f[70:76]";
createNode polyPipe -n "pasted__polyPipe5";
	rename -uid "9AAEE3D9-48D0-7EA8-5EC7-FFBA92EA690E";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode polyTorus -n "pasted__polyTorus1";
	rename -uid "2A7C2407-4872-E78F-D44F-E68938D449E1";
createNode polyBevel3 -n "pasted__polyBevel9";
	rename -uid "62204847-407A-A202-66FF-5EA67C924FF5";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[9:17]" "e[45:53]" "e[100]" "e[109:110]" "e[119:120]" "e[129:130]" "e[139]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 5.8090034824113062 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 8;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 52.450331174675995;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace8";
	rename -uid "BC4C5E42-4609-C581-46A1-8D91BEDDF4BC";
	setAttr ".ics" -type "componentList" 4 "f[54]" "f[62]" "f[81]" "f[89]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -4.6013827 4.9598875 0 ;
	setAttr ".rs" 32944;
	setAttr ".lt" -type "double3" 0 1.4264901524317174e-017 3.9357565948106084 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.888369347850507 4.9598873817917957 -2.5623676362336179 ;
	setAttr ".cbx" -type "double3" 1.6856041019746701 4.9598873817917957 2.5623676362336179 ;
createNode polyCube -n "pasted__polyCube4";
	rename -uid "28188D08-414B-860E-07FA-40A8E6D3AC2D";
	setAttr ".sw" 9;
	setAttr ".sd" 4;
	setAttr ".cuv" 4;
createNode polyBevel3 -n "pasted__polyBevel3";
	rename -uid "194DF59F-401C-F379-CC25-1DAC0CBDC57D";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[58]" "e[62]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9477929170881572 6.8868889964308009 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.13245033124918179;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyBevel3 -n "pasted__polyBevel2";
	rename -uid "CDE72B68-4B2A-84AC-7D55-D1B96F2BEB41";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[56]" "e[59]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9126324426542913 6.8028916642144051 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.09933774843688635;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace10";
	rename -uid "C7BCA55A-4F50-838E-E727-458B9A62C06B";
	setAttr ".ics" -type "componentList" 1 "f[24]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 7.9381876 -2.5868127 ;
	setAttr ".rs" 32829;
	setAttr ".lt" -type "double3" -4.4408920985006262e-016 8.8817841970012523e-016 2.7051298293963999 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.9058462035469583 7.6020948135931627 -2.5868128047181895 ;
	setAttr ".cbx" -type "double3" -1.9210118901543185 8.2742807114203121 -2.5868128047181895 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace9";
	rename -uid "E415C8DA-41A6-71EE-9BFB-E6A972EF9D90";
	setAttr ".ics" -type "componentList" 1 "f[25]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 9.2449512 -3.536232 ;
	setAttr ".rs" 63492;
	setAttr ".lt" -type "double3" 8.8817841970012523e-016 -1.1102230246251565e-015 3.5765406179373329 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.905846322756247 9.1410929405768062 -3.8558753237916763 ;
	setAttr ".cbx" -type "double3" -1.9210118901543178 9.3488097930033351 -3.2165885672761729 ;
createNode polyCloseBorder -n "pasted__polyCloseBorder11";
	rename -uid "697A9688-4169-D2CC-B149-AE9180CC4965";
	setAttr ".ics" -type "componentList" 4 "e[24]" "e[31]" "e[38]" "e[45]";
createNode deleteComponent -n "pasted__deleteComponent63";
	rename -uid "94F2BD24-4289-429D-3BB9-1AB2D6C4C5B5";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__deleteComponent62";
	rename -uid "CD7585B8-4B21-987A-B878-699B2DCFE41B";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__deleteComponent61";
	rename -uid "F7C012C6-461D-A89A-E157-1BA84E6BFDE9";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__deleteComponent60";
	rename -uid "D2DBC802-4466-BDAC-E137-4ABA2F66291D";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__deleteComponent59";
	rename -uid "87395A05-4214-B813-7887-FE8E7C56B883";
	setAttr ".dc" -type "componentList" 3 "f[10:13]" "f[20:23]" "f[30:33]";
createNode polyCloseBorder -n "pasted__polyCloseBorder10";
	rename -uid "1052EA7B-4DC2-92FD-947B-99B6AC39E537";
	setAttr ".ics" -type "componentList" 4 "e[50]" "e[61]" "e[72]" "e[83]";
createNode deleteComponent -n "pasted__deleteComponent58";
	rename -uid "ECF508C5-4C6A-7CE1-2E53-1A995FFD116A";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__deleteComponent57";
	rename -uid "15DF6B4A-40D9-A9E5-387D-6984F8747E4E";
	setAttr ".dc" -type "componentList" 1 "f[11]";
createNode deleteComponent -n "pasted__deleteComponent56";
	rename -uid "7B9D0DC1-4362-5D93-AB2E-219B45D6DC33";
	setAttr ".dc" -type "componentList" 5 "f[0:3]" "f[16:24]" "f[35:44]" "f[55:64]" "f[75:79]";
createNode polyPipe -n "pasted__pasted__polyPipe2";
	rename -uid "22F5E314-4443-2975-DF1B-A585CBE47D7B";
	setAttr ".r" 1.3343708621605688;
	setAttr ".h" 5.9696688797225592;
	setAttr ".t" 0.67218543108028439;
createNode materialInfo -n "pasted__materialInfo2";
	rename -uid "5A1F76A2-4E4E-E8AF-9BF5-34A089970927";
createNode shadingEngine -n "pasted__lambert2SG1";
	rename -uid "D2AAFC28-45EF-E59D-B718-90ABE0F98E08";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode lambert -n "pasted__lambert3";
	rename -uid "C809478B-49F3-CC32-5F91-F1B0D98C5532";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode polyBevel3 -n "pasted__polyBevel10";
	rename -uid "0AEC71AD-4969-B380-B320-A19DDB31E0B0";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 20 "e[20:39]" "e[122]" "e[124]" "e[126]" "e[128]" "e[130]" "e[132]" "e[134]" "e[136]" "e[138]" "e[140]" "e[142]" "e[144]" "e[146]" "e[148]" "e[150]" "e[152]" "e[154]" "e[156]" "e[158:159]";
	setAttr ".ix" -type "matrix" 3.9239679896210986 0 0 0 0 2.8400238191961678 0 0 0 0 3.9239679896210986 0
		 -7.162288811478593 4.0117327754752807 16.583395250072442 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.1986754968737727;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace12";
	rename -uid "86D28CBE-49B8-E6AD-07FC-D48A39F883DF";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 3.9239679896210986 0 0 0 0 2.8400238191961678 0 0 0 0 3.9239679896210986 0
		 -7.162288811478593 4.0117327754752807 16.583395250072442 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.1622891 6.8517561 16.583393 ;
	setAttr ".rs" 49514;
	setAttr ".lt" -type "double3" 2.6645352591003757e-015 -1.2039541783580806e-014 -0.29587010740359254 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.41466933314948 6.8517562561142267 13.331012857307812 ;
	setAttr ".cbx" -type "double3" -3.9099092253545793 6.8517562561142267 19.835774836196457 ;
createNode polyTweak -n "pasted__polyTweak6";
	rename -uid "54B1DB91-4A3A-5D5D-FEF5-AAB03E51113C";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[61:80]" -type "float3"  0.10059984 0 -0.13846354 0.052888386
		 0 -0.16277327 -2.0402698e-008 0 -0.17115036 -0.052888468 0 -0.16277327 -0.10059973
		 0 -0.13846354 -0.13846357 0 -0.10059985 -0.16277315 0 -0.052888468 -0.17115036 0
		 -6.1207885e-008 -0.16277334 0 0.052888468 -0.13846377 0 0.10059977 -0.10059997 0
		 0.13846363 -0.052888393 0 0.16277327 -2.0402698e-008 0 0.17115036 0.052888386 0 0.16277327
		 0.10059977 0 0.13846363 0.13846354 0 0.10059977 0.16277337 0 0.052888386 0.17115036
		 0 -6.1207885e-008 0.16277337 0 -0.052888468 0.13846354 0 -0.10059985;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace11";
	rename -uid "DE6AD654-473F-D1DA-9809-AA82679ECF83";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 3.9239679896210986 0 0 0 0 2.8400238191961678 0 0 0 0 3.9239679896210986 0
		 -7.162288811478593 4.0117327754752807 16.583395250072442 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.1622891 6.8517566 16.583395 ;
	setAttr ".rs" 51133;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -11.086257736646564 6.851756594671448 12.659425389357599 ;
	setAttr ".cbx" -type "double3" -3.2383208218574944 6.851756594671448 20.507363707466979 ;
createNode deleteComponent -n "pasted__deleteComponent82";
	rename -uid "A0771F4B-4961-4190-4ED3-D5892C4F16A9";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent81";
	rename -uid "77B60805-4898-3356-F5F7-9EA58398D5ED";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent80";
	rename -uid "146104F3-4ADF-83C3-AD9D-35BEB2464A03";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent79";
	rename -uid "3380B548-4969-FEBE-768D-B080FF92AAEE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent78";
	rename -uid "C64509F9-4C1D-3C08-83F9-249AC2711414";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent77";
	rename -uid "330D76AE-47DA-12E6-0D53-69A5E56E0EC0";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent76";
	rename -uid "3E39E914-4C02-C89B-8BEB-21B88B4A1F19";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent75";
	rename -uid "4FD49236-4DB8-03CE-94FA-C4B67DFCFA80";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent74";
	rename -uid "FED19BCE-40A2-AEBD-DBFC-CC851253BE79";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent73";
	rename -uid "9C6EECF9-4AA4-1F4A-4950-63990A241485";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent72";
	rename -uid "5F2A0C2B-4482-E817-1C65-3482A03BDACA";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent71";
	rename -uid "B9F7441E-47F4-50CF-62A4-A4A227734B09";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent70";
	rename -uid "FF64CBB8-4296-A646-A08A-A6A441726AC1";
	setAttr ".dc" -type "componentList" 1 "e[93]";
createNode deleteComponent -n "pasted__deleteComponent69";
	rename -uid "4085F3ED-4437-1CE5-8B40-07BBCA9BF2B3";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode deleteComponent -n "pasted__deleteComponent68";
	rename -uid "65B9789A-4B60-3D72-FD40-A9893AC193BD";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode deleteComponent -n "pasted__deleteComponent67";
	rename -uid "1BAC0DAE-4072-A6A1-1D5E-9C916FE39198";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode deleteComponent -n "pasted__deleteComponent66";
	rename -uid "77440560-4C60-FDE8-484F-27A9A469E9B2";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode deleteComponent -n "pasted__deleteComponent65";
	rename -uid "8705D1A9-4656-41A6-0929-6C9A94AE2E27";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode deleteComponent -n "pasted__deleteComponent64";
	rename -uid "01D40612-4327-609E-54F6-DF81617FD8BB";
	setAttr ".dc" -type "componentList" 1 "e[94]";
createNode polySplitRing -n "pasted__polySplitRing2";
	rename -uid "CE708011-4D64-EE10-1829-FB87F10E53AE";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[40:59]";
	setAttr ".ix" -type "matrix" 3.9239679896210986 0 0 0 0 2.8400238191961678 0 0 0 0 3.9239679896210986 0
		 -7.162288811478593 4.0117327754752807 16.583395250072442 1;
	setAttr ".wt" 0.78956294059753418;
	setAttr ".dr" no;
	setAttr ".re" 56;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyCylinder -n "pasted__polyCylinder5";
	rename -uid "CB2E6CF5-4D46-4D20-B896-A58E998D54A3";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId11";
	rename -uid "F1FB486F-4B23-A11E-B6D8-B38A2F94C203";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts7";
	rename -uid "4286D6D5-40F8-2462-47EF-559A41B8B2AF";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__polySphere5";
	rename -uid "B4DD7E20-41EA-6B58-93EE-A7AFDF482C07";
createNode groupId -n "pasted__groupId12";
	rename -uid "1404EE73-4020-B5F5-7FF6-DA850E12FA78";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId13";
	rename -uid "E0C86C94-4D15-0481-567E-E4906759A51F";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts8";
	rename -uid "A9CF06BD-4D62-6A70-5B87-90A4D37CEAD4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__polyCylinder6";
	rename -uid "1BBECDFE-48E9-81AD-1BF0-A88683F356A8";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId14";
	rename -uid "CE2CBBAE-4501-B361-DCB6-E88697B39C34";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId16";
	rename -uid "287517D9-4569-4E35-E762-2986A3177D9D";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts10";
	rename -uid "971AC826-44B1-39D9-B6C5-E8A76A1146A3";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__polySphere6";
	rename -uid "2A29377F-4D73-E964-C9C5-88BAD8674B73";
createNode groupId -n "pasted__groupId17";
	rename -uid "33A89163-43FB-95A5-2F79-AA8F9254C808";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId18";
	rename -uid "0E1421CA-41C1-F407-6825-4CABF2D81075";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts11";
	rename -uid "21AD582B-4B5C-67C7-00D4-ADAFC0E1B861";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__polyCylinder8";
	rename -uid "092F1B08-427E-D105-27E8-F8A4795B6907";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId19";
	rename -uid "AB33DA11-48BD-D699-7BDB-FEBDDEE9616A";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId21";
	rename -uid "6D64363B-4FA1-61BD-21F9-51BB3D62BD76";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts13";
	rename -uid "A0479411-415A-F32D-7755-BAA80859C10B";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__polySphere7";
	rename -uid "52E8E56E-49CB-58E6-5383-928E6D509F82";
createNode groupId -n "pasted__groupId22";
	rename -uid "A4CB3847-4DE7-DC21-145D-D290D7E70E39";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId23";
	rename -uid "1A561A9A-4863-44A2-71AD-53989308D69E";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts14";
	rename -uid "534E42E7-440B-C498-2BFD-BEB605BF90E9";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__polyCylinder10";
	rename -uid "A48DEFAC-48F3-BA5D-15BA-EDA88B2521FF";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId24";
	rename -uid "77ACD036-4E6B-55DD-C80D-1FB4657B87A1";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId16";
	rename -uid "25F9C34A-4A30-50EF-BA56-0D957F424F86";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts10";
	rename -uid "46C6F10C-4D90-49E7-B570-509DA35C3512";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__pasted__polySphere6";
	rename -uid "D8292ADC-418A-A7C6-9FA7-E8A6720011D9";
createNode groupId -n "pasted__pasted__groupId17";
	rename -uid "6AD47BD9-4B70-6F91-E5E9-96871E4AAA5B";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId18";
	rename -uid "CD83929A-485C-5BD1-8888-AA8D3173B9FF";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts11";
	rename -uid "50F58378-4A8D-598F-1C5E-9C86451BAE41";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__polyCylinder8";
	rename -uid "975D1F78-413A-8AA5-1E38-4D918EC12AF2";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__pasted__groupId19";
	rename -uid "07E4E662-4B49-68E2-6BD0-2AB778A66C7E";
	setAttr ".ihi" 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace14";
	rename -uid "5999243E-4943-AA76-D22E-65B4CD12B376";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662912 ;
	setAttr ".rs" 37729;
	setAttr ".lt" -type "double3" 0 1.0705161645157078e-015 -0.82117619960703436 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.3583543235052096 16.391079373771881 4.0368509521522382 ;
	setAttr ".cbx" -type "double3" 11.034878466595636 16.391079373771881 6.2957319080390741 ;
createNode polyTweak -n "pasted__polyTweak9";
	rename -uid "B7E63CF3-4170-22F0-56C3-658BF8910813";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[16:19]" -type "float3"  0.025123071 0 0.06070251 -0.025123071
		 0 0.06070251 -0.025123071 0 -0.06070251 0.025123071 0 -0.06070251;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace13";
	rename -uid "6D791628-462A-0AD8-1E84-D2A1F0D44F1D";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662908 ;
	setAttr ".rs" 46837;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.1288410662269941 16.391079373771881 3.8807832909472717 ;
	setAttr ".cbx" -type "double3" 11.264391451613225 16.391079373771881 6.4517983432885293 ;
createNode polyBevel3 -n "pasted__polyBevel13";
	rename -uid "4F402C71-46CD-C9D3-36E8-1FBEA52E9D02";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[1:2]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.52980132499672716;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyCube -n "pasted__polyCube5";
	rename -uid "FBA9D263-4F9B-4CE1-BC96-0EBD338CA2E0";
	setAttr ".cuv" 4;
createNode polyCylinder -n "pasted__polyCylinder12";
	rename -uid "84CF5721-4689-B1C3-766B-C89B8EA6E9F8";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyCylinder -n "pasted__pasted__polyCylinder4";
	rename -uid "1C1422EF-4C2F-31D4-56DE-07861B2D2895";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace64";
	rename -uid "E08C506B-41EC-6FA0-F1BE-178BB3520293";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577435 18.692114 33.12114 ;
	setAttr ".rs" 44468;
	setAttr ".lt" -type "double3" 1.7763568394002505e-015 -6.1412564373607812e-015 0.4918538331165197 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -15.188072887213053 18.692114782529174 32.510503775742279 ;
	setAttr ".cbx" -type "double3" -13.966798035560362 18.692114782529174 33.731778627394966 ;
createNode polyTweak -n "pasted__polyTweak49";
	rename -uid "A8F5E7B8-456A-8372-2F28-A08E6211FFC9";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[121:140]" -type "float3"  -0.20802256 2.1346845e-005
		 0.15113276 -0.15113229 2.1346845e-005 0.20802304 -0.079452798 2.1346845e-005 0.24454111
		 -2.4950873e-007 2.1346845e-005 0.25712281 0.079453275 2.1346845e-005 0.24454111 0.15113372
		 2.1346845e-005 0.20802304 0.20802256 2.1346845e-005 0.15113276 0.24454111 2.1346845e-005
		 0.079452798 0.25712234 2.1346845e-005 2.4947715e-007 0.24454111 2.1346845e-005 -0.079451844
		 0.20802256 2.1346845e-005 -0.15113372 0.15113372 2.1346845e-005 -0.20802209 0.079453275
		 2.1346845e-005 -0.24454015 -2.4950873e-007 2.1346845e-005 -0.25712281 -0.079452798
		 2.1346845e-005 -0.24454015 -0.15113229 2.1346845e-005 -0.20802209 -0.20802256 2.1346845e-005
		 -0.15113372 -0.24453968 2.1346845e-005 -0.079451844 -0.25712234 2.1346845e-005 2.4947715e-007
		 -0.24453968 2.1346845e-005 0.079452798;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace63";
	rename -uid "4BFB3A69-4F25-3788-355B-CFA93B57341C";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577435 18.332666 33.12114 ;
	setAttr ".rs" 35688;
	setAttr ".lt" -type "double3" 1.7763568394002505e-015 4.5955473643295913e-015 0.35937102865673587 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -15.858118697810362 18.332665528399939 31.840456955524729 ;
	setAttr ".cbx" -type "double3" -13.296752224963054 18.332665528399939 34.401825447612516 ;
createNode polyTweak -n "pasted__polyTweak48";
	rename -uid "E1F3558E-4448-853E-5078-28B89B569319";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[101:120]" -type "float3"  -1.9557751e-008 0.05622682
		 8.3353356e-008 -8.3353356e-008 0.05622682 -1.3411048e-007 5.1222826e-009 0.05622682
		 4.6566104e-008 2.7533558e-014 0.05622682 3.4458907e-008 -5.1222826e-009 0.05622682
		 4.6566104e-008 -8.8475804e-009 0.05622682 -1.3411048e-007 1.9557751e-008 0.05622682
		 8.3353356e-008 4.6566104e-008 0.05622682 -2.9103839e-008 -5.7742028e-008 0.05622682
		 -2.664538e-014 4.6566104e-008 0.05622682 -2.5611284e-009 1.9557751e-008 0.05622682
		 -1.3969823e-008 -8.8475804e-009 0.05622682 2.2537527e-014 -5.1222826e-009 0.05622682
		 1.8626716e-009 2.7533558e-014 0.05622682 -3.4458907e-008 2.9103839e-008 0.05622682
		 1.8626716e-009 -8.3353356e-008 0.05622682 2.2537527e-014 -1.9557751e-008 0.05622682
		 -1.3969823e-008 1.8626716e-009 0.05622682 -2.5611284e-009 5.7742028e-008 0.05622682
		 -2.664538e-014 1.8626716e-009 0.05622682 -2.9103839e-008;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace62";
	rename -uid "21ECAE79-4801-966F-B948-F4AF6423C034";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577435 18.125429 33.12114 ;
	setAttr ".rs" 56704;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -15.858118853136551 18.125429191862182 31.840457033187825 ;
	setAttr ".cbx" -type "double3" -13.296752069636863 18.125429191862182 34.401825369949421 ;
createNode polyTweak -n "pasted__polyTweak47";
	rename -uid "F8C9FC9B-4A85-D9A7-19E4-E88798AF24CF";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[81:100]" -type "float3"  -0.23269176 -4.4408921e-016
		 0.16906036 -0.16906036 -4.4408921e-016 0.23269176 -0.088880427 -4.4408921e-016 0.2735455
		 -3.5208396e-007 -4.4408921e-016 0.28762251 0.088880263 -4.4408921e-016 0.2735455
		 0.16906017 -4.4408921e-016 0.23269176 0.23269141 -4.4408921e-016 0.16906036 0.2735455
		 -4.4408921e-016 0.088880263 0.28762233 -4.4408921e-016 1.7604198e-007 0.2735455 -4.4408921e-016
		 -0.088879906 0.23269141 -4.4408921e-016 -0.16906036 0.16906017 -4.4408921e-016 -0.23269071
		 0.088880263 -4.4408921e-016 -0.27354482 -3.5208396e-007 -4.4408921e-016 -0.28762251
		 -0.088880263 -4.4408921e-016 -0.27354482 -0.16906017 -4.4408921e-016 -0.23269071
		 -0.23269166 -4.4408921e-016 -0.16906036 -0.27354535 -4.4408921e-016 -0.088879906
		 -0.28762233 -4.4408921e-016 1.7604198e-007 -0.27354535 -4.4408921e-016 0.088880263;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace61";
	rename -uid "1AE8153B-4979-FEB8-1231-F2BCC34CF25D";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577435 17.496977 33.12114 ;
	setAttr ".rs" 32912;
	setAttr ".lt" -type "double3" 1.7763568394002505e-015 -6.968885487684931e-017 0.6284535479105603 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -16.607645696797039 17.496976263303228 31.090928636265431 ;
	setAttr ".cbx" -type "double3" -12.54722398336685 17.496976263303228 35.151351281652765 ;
createNode polyTweak -n "pasted__polyTweak46";
	rename -uid "C7A69CCD-48DC-AD92-A2F0-63B9A7942614";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[61:80]" -type "float3"  -0.075004093 0 0.054493614
		 -0.05449364 0 0.075004011 -0.028649058 0 0.088172577 -7.6064346e-008 0 0.09271007
		 0.028649002 0 0.088172488 0.054493599 0 0.075004011 0.075004041 0 0.054493614 0.088172555
		 0 0.028648976 0.092710048 0 0 0.088172555 0 -0.028648976 0.075004041 0 -0.054493614
		 0.054493599 0 -0.075003915 0.028649002 0 -0.088172488 -7.6064346e-008 0 -0.09271007
		 -0.028649002 0 -0.088172488 -0.054493599 0 -0.075003915 -0.075004041 0 -0.054493614
		 -0.088172555 0 -0.028648976 -0.092710048 0 0 -0.088172555 0 0.028648976;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace60";
	rename -uid "1FFF3564-4560-262C-166B-DD9B891B9C17";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577435 16.990446 33.12114 ;
	setAttr ".rs" 45181;
	setAttr ".lt" -type "double3" 0 5.7839709505327413e-015 0.50653236235636723 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -16.84924191765689 16.99044595511015 30.84933226007939 ;
	setAttr ".cbx" -type "double3" -12.305626519897475 16.99044595511015 35.392947657838803 ;
createNode polyTweak -n "pasted__polyTweak45";
	rename -uid "678ED429-4EB1-DDC9-C86A-AB8CC6902EEB";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -0.1037321 8.9406967e-008
		 0.075365774 -0.075365774 8.9406967e-008 0.10373203 -0.039622188 8.9406967e-008 0.1219444
		 -6.1139964e-008 8.9406967e-008 0.12821981 0.039622132 8.9406967e-008 0.12194429 0.075365715
		 8.9406967e-008 0.10373203 0.10373203 8.9406967e-008 0.075365774 0.12194429 8.9406967e-008
		 0.039622009 0.12821981 8.9406967e-008 0 0.12194429 8.9406967e-008 -0.039622009 0.10373203
		 8.9406967e-008 -0.075365774 0.075365715 8.9406967e-008 -0.10373192 0.039622132 8.9406967e-008
		 -0.12194429 -6.1139964e-008 8.9406967e-008 -0.12821981 -0.039622132 8.9406967e-008
		 -0.12194429 -0.075365715 8.9406967e-008 -0.10373192 -0.10373203 8.9406967e-008 -0.075365774
		 -0.12194437 8.9406967e-008 -0.039622009 -0.12821981 8.9406967e-008 0 -0.1219444 8.9406967e-008
		 0.039622009;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace59";
	rename -uid "D2214675-46FF-10C6-E162-E3BB4CF3664A";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 2.6059410510844776 0 0 0 0 3.6857184454460463 0 0 0 0 2.6059410510844776 0
		 -14.577432976167657 12.615310415005007 33.121139958959098 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -14.577434 16.43878 33.12114 ;
	setAttr ".rs" 39711;
	setAttr ".lt" -type "double3" -1.7763568394002505e-015 8.2897092786012397e-015 0.55166792050581837 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -17.183374648556896 16.43877897395528 30.515197665265095 ;
	setAttr ".cbx" -type "double3" -11.971491925083178 16.43877897395528 35.727081320695959 ;
createNode polyTweak -n "pasted__polyTweak44";
	rename -uid "3B0B0E7C-47FE-8E79-7C72-4487BEA5C0C2";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[20:39]" -type "float3"  0 0.037374064 0 0 0.037374064
		 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0
		 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0
		 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064 0 0 0.037374064
		 0 0 0.037374064 0 0 0.037374064 0;
createNode deleteComponent -n "pasted__deleteComponent217";
	rename -uid "A373FB22-403A-BF12-D970-D9956F378267";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent216";
	rename -uid "15CFE7D5-449F-49C8-B3D8-2287CD777FB4";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent215";
	rename -uid "193A49DB-4F2F-46D5-18A5-C79215DCFEE6";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent214";
	rename -uid "45A8AB61-4DCD-69E7-9567-5AA9DFCDB4A6";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent213";
	rename -uid "D49EB20D-4B1B-BF53-6EF0-C7912DD66019";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent212";
	rename -uid "80F1E312-4B40-C562-4413-B8A4617FF10B";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent211";
	rename -uid "FBFD0A78-4BE2-3F4C-8A7A-159D8585B68D";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent210";
	rename -uid "671C11C9-4B52-5DB4-8FAE-738B80E9752D";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent209";
	rename -uid "48E8E5A8-4915-DA35-8D27-B39BE5364899";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent208";
	rename -uid "A5F136F9-46F3-AB4F-41FA-56B1E37C6E94";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent207";
	rename -uid "3E1E7180-465E-6FDC-55F8-AF8CEF382BF6";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent206";
	rename -uid "8856CA11-45E9-CA9E-7B8B-DE8657368154";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent205";
	rename -uid "22B2786B-4B69-B681-EFDD-048C0A795BE1";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent204";
	rename -uid "4156FB64-4B0B-D912-F22F-25BE9BABFFEF";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent203";
	rename -uid "1904B442-4DFF-E6E1-3E8A-E388F952BBF5";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent202";
	rename -uid "BE358EF0-4349-88F6-C86D-748990794AED";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent201";
	rename -uid "5ACCFAD7-4997-99A7-8C3B-FDAA4DF4B4B8";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent200";
	rename -uid "9C3503C0-42A1-EB8A-EC62-D0A05C00113A";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent199";
	rename -uid "E0DD3B06-40B9-0F2F-584A-418252913DAB";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode polyCylinder -n "pasted__polyCylinder19";
	rename -uid "53507225-461B-0696-3CE0-879DFE9E97F8";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode deleteComponent -n "pasted__deleteComponent236";
	rename -uid "B7206305-4767-03E9-4EB5-00B140B8E906";
	setAttr ".dc" -type "componentList" 1 "e[61]";
createNode deleteComponent -n "pasted__deleteComponent235";
	rename -uid "148B0157-4394-8D2A-8869-35A3A4B1DB4A";
	setAttr ".dc" -type "componentList" 1 "e[62]";
createNode deleteComponent -n "pasted__deleteComponent234";
	rename -uid "ED331873-478F-DD98-35FC-79A8BC3E60BA";
	setAttr ".dc" -type "componentList" 1 "e[63]";
createNode deleteComponent -n "pasted__deleteComponent233";
	rename -uid "C7D7890D-4E8B-0267-5C1E-CA82EF2D9341";
	setAttr ".dc" -type "componentList" 1 "e[64]";
createNode deleteComponent -n "pasted__deleteComponent232";
	rename -uid "6F78DEEB-4A63-0C10-B89A-6A97F6567C40";
	setAttr ".dc" -type "componentList" 1 "e[65]";
createNode deleteComponent -n "pasted__deleteComponent231";
	rename -uid "69B2471D-4406-E12D-C931-8CA783540D33";
	setAttr ".dc" -type "componentList" 1 "e[66]";
createNode deleteComponent -n "pasted__deleteComponent230";
	rename -uid "47F4BC88-4F81-0AC5-2BBE-86833D79AC10";
	setAttr ".dc" -type "componentList" 1 "e[67]";
createNode deleteComponent -n "pasted__deleteComponent229";
	rename -uid "6E2B05B2-4B04-AE62-2496-309A1AA131FD";
	setAttr ".dc" -type "componentList" 1 "e[67]";
createNode deleteComponent -n "pasted__deleteComponent228";
	rename -uid "31EED108-4B01-EDD2-E570-4C9BFAB41A9B";
	setAttr ".dc" -type "componentList" 1 "e[69]";
createNode deleteComponent -n "pasted__deleteComponent227";
	rename -uid "BB3F183D-49B3-EE11-F3E2-D68AC27190B0";
	setAttr ".dc" -type "componentList" 1 "e[70]";
createNode deleteComponent -n "pasted__deleteComponent226";
	rename -uid "EBE7CA83-4C78-DFE5-F95E-25A6FFB7A1FC";
	setAttr ".dc" -type "componentList" 1 "e[71]";
createNode deleteComponent -n "pasted__deleteComponent225";
	rename -uid "12974DF8-4C7C-A51F-3096-AFB52E5649FC";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent224";
	rename -uid "AEF1B3BE-4D55-71CC-0759-268449A92740";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent223";
	rename -uid "6274836C-4030-2B58-6FDE-E396CA3F6D5A";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent222";
	rename -uid "1BDC64EB-40DB-7312-A851-7499B5B7AB05";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent221";
	rename -uid "4DAC4777-4A98-B3BD-46E2-94B3C1573E2A";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent220";
	rename -uid "95E3E4DB-49F6-DDD8-544C-C59243855E01";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent219";
	rename -uid "4C5D5139-4E01-18C2-F683-AAAAF3ED0735";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode deleteComponent -n "pasted__deleteComponent218";
	rename -uid "AE700BE5-4230-695E-422D-C888D9A3F6A6";
	setAttr ".dc" -type "componentList" 1 "e[72]";
createNode polyTweak -n "pasted__polyTweak52";
	rename -uid "997EC646-485B-DDB9-8522-0398DFBF125D";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[241:260]" -type "float3"  4.9170022 0 0 4.9170022 0
		 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022
		 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022
		 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022 0 0 4.9170022
		 0 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace58";
	rename -uid "20A9BFC1-426D-9082-8100-83B13F51A866";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.064871 19.409491 33.236176 ;
	setAttr ".rs" 54522;
	setAttr ".lt" -type "double3" 8.6412469164514681e-015 2.7817160920361451e-015 1.3717905953372704 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.075654191388956 18.409551365204287 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -19.054085654630533 20.409429294891787 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak43";
	rename -uid "086BA0C7-4CA6-DABB-E538-53AF4EC3CDA8";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[221:240]" -type "float3"  -0.46286759 -0.11923014 0
		 -0.44021395 -0.11339553 0 -0.37446743 -0.096460015 0 -0.27206692 -0.070081957 0 -0.14303391
		 -0.036843985 0 9.1882185e-007 -2.2367746e-007 0 0.14303584 0.036844432 0 0.27206868
		 0.070081517 0 0.37446874 0.096457824 0 0.44021457 0.11339439 0 0.46286759 0.11923014
		 0 0.44021457 0.11339439 0 0.37446874 0.096457824 0 0.27206868 0.070081517 0 0.14303584
		 0.036844432 0 9.1882185e-007 -2.2367746e-007 0 -0.14303391 -0.036843985 0 -0.27206692
		 -0.070081957 0 -0.37446743 -0.096460015 0 -0.44021395 -0.11339553 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace57";
	rename -uid "822C5908-446F-8533-3638-D6A50EF7118F";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.513369 19.168287 33.236176 ;
	setAttr ".rs" 59941;
	setAttr ".lt" -type "double3" 8.0537811674282901e-015 -1.0939579345088183e-014 0.50924369912997414 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.987019700422159 18.287577373810244 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -19.039715690030924 20.048996670074892 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak42";
	rename -uid "9FCB89E0-41F4-BAFC-7088-9181FDFC6A58";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[201:220]" -type "float3"  -0.26034728 -0.20156237 0
		 -0.24760456 -0.19169778 0 -0.2106248 -0.16306776 0 -0.15302767 -0.11847574 0 -0.080451488
		 -0.062286183 0 6.2997429e-007 -1.058761e-007 0 0.080452807 0.062286604 0 0.15302891
		 0.11847553 0 0.21062593 0.16306695 0 0.24760582 0.19169757 0 0.26034728 0.20156237
		 0 0.24760582 0.19169757 0 0.21062593 0.16306695 0 0.15302891 0.11847553 0 0.080452807
		 0.062286604 0 6.2997429e-007 -1.058761e-007 0 -0.080451488 -0.062286183 0 -0.15302767
		 -0.11847574 0 -0.2106248 -0.16306776 0 -0.24760456 -0.19169778 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace56";
	rename -uid "95A2EC82-43D7-A6DE-8DDE-37AA4E212DD3";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.799791 18.858728 33.236176 ;
	setAttr ".rs" 50343;
	setAttr ".lt" -type "double3" 5.2373732706939258e-015 -5.9824035674127994e-015 0.42173933862084151 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -20.533789677038065 18.179581386871767 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -19.065791172399393 19.537874920196963 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak41";
	rename -uid "0557728B-4B59-2EA2-21AF-FD87E6968B9D";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[181:200]" -type "float3"  -0.14983939 -0.21135999 0
		 -0.1425056 -0.20101565 0 -0.12122241 -0.17099376 0 -0.088073276 -0.12423456 0 -0.046302456
		 -0.065313816 0 4.9503706e-007 -6.3594932e-008 0 0.046303488 0.065314174 0 0.088074289
		 0.12423442 0 0.12122341 0.17099364 0 0.14250654 0.20101553 0 0.14983939 0.21135999
		 0 0.14250654 0.20101553 0 0.12122341 0.17099364 0 0.088074289 0.12423442 0 0.046303488
		 0.065314174 0 4.9503706e-007 -6.3594932e-008 0 -0.046302456 -0.065313816 0 -0.088073276
		 -0.12423456 0 -0.12122241 -0.17099376 0 -0.1425056 -0.20101565 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace55";
	rename -uid "E200DBFB-43C3-43C8-7BCF-48BCC70E56DA";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.982889 18.512781 33.236176 ;
	setAttr ".rs" 54695;
	setAttr ".lt" -type "double3" -2.1282826635530069e-015 7.2363535578954543e-015 0.39141311173915905 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -20.866726917638651 18.044995052643252 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -19.099049610509745 18.980568630524111 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak40";
	rename -uid "67DF1CE0-4ED7-BC49-3AF4-8A9B2F568758";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[161:180]" -type "float3"  -0.10707478 -0.60227126 0
		 -0.10183468 -0.57279539 0 -0.086625516 -0.48724794 0 -0.062937543 -0.35400653 0 -0.033087838
		 -0.1861124 0 5.9032743e-007 -1.8589536e-007 0 0.033087838 0.18611242 0 0.062937543
		 0.35400653 0 0.086626604 0.48724768 0 0.10183468 0.57279545 0 0.10707478 0.6022712
		 0 0.10183468 0.57279545 0 0.086626604 0.48724768 0 0.062937543 0.35400653 0 0.033087838
		 0.18611242 0 5.9032743e-007 -1.8589536e-007 0 -0.033087838 -0.1861124 0 -0.062937543
		 -0.35400653 0 -0.086625516 -0.48724794 0 -0.10183468 -0.57279539 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace54";
	rename -uid "AC8DB020-4F01-0C37-1250-B1B8914864EE";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.721441 16.586348 33.236176 ;
	setAttr ".rs" 53159;
	setAttr ".lt" -type "double3" 2.6090241078691179e-015 2.8866998250665619e-015 1.9440944215209257 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -20.712353748693339 16.451863987274599 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -18.730526966466776 16.72083256942792 34.236176501244167 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace53";
	rename -uid "0892B2BA-4E9E-6860-8C86-95A60C917EAC";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.227087 12.943835 33.236176 ;
	setAttr ".rs" 34541;
	setAttr ".lt" -type "double3" 2.4980018054066022e-015 -1.3273160072894372e-015 3.6759070508005958 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -20.218000215902201 12.809351188965273 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -18.236171943559519 13.078318817444277 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak39";
	rename -uid "DF0233DE-4107-0571-67BA-E3938F44BC9F";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[121:140]" -type "float3"  0.052193467 -0.21019021 0
		 0.049639083 -0.19990322 0 0.042225488 -0.17004757 0 0.030678602 -0.12354697 0 0.016128657
		 -0.064952433 0 0 4.4408921e-016 0 -0.016128853 0.064952455 0 -0.030678602 0.12354695
		 0 -0.042225279 0.17004755 0 -0.049639083 0.19990322 0 -0.05219347 0.21019021 0 -0.049639083
		 0.19990322 0 -0.042225279 0.17004755 0 -0.030678602 0.12354695 0 -0.016128853 0.064952455
		 0 0 4.4408921e-016 0 0.016128657 -0.064952433 0 0.030678602 -0.12354697 0 0.042225488
		 -0.17004757 0 0.049639083 -0.19990322 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace52";
	rename -uid "9463C11D-499D-4611-03C6-19BD177EF876";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -19.005507 12.340359 33.236176 ;
	setAttr ".rs" 35582;
	setAttr ".lt" -type "double3" 2.5112199049221688e-015 -9.713287397355131e-015 0.64286968636760267 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.944227022542826 11.995684845276308 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -18.066784141077868 12.685033066101504 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak38";
	rename -uid "0CB8F87F-41A4-B5B4-FD92-9A8DA7350F64";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[101:120]" -type "float3"  0.13246994 -0.2468973 0 0.1259869
		 -0.23481379 0 0.10717074 -0.19974415 0 0.077864088 -0.14512284 0 0.040935703 -0.076295517
		 0 1.3325381e-007 -1.893136e-008 0 -0.040935427 0.076295465 0 -0.077863827 0.14512286
		 0 -0.10717019 0.19974406 0 -0.12598658 0.23481376 0 -0.13246994 0.24689727 0 -0.12598658
		 0.23481376 0 -0.10717019 0.19974406 0 -0.077863827 0.14512286 0 -0.040935427 0.076295465
		 0 1.3325381e-007 -1.893136e-008 0 0.040935703 -0.076295517 0 0.077864088 -0.14512284
		 0 0.10717074 -0.19974415 0 0.1259869 -0.23481379 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace51";
	rename -uid "0F9CDC82-4474-F893-84CB-18AF890AE98C";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -18.592447 11.777401 33.236176 ;
	setAttr ".rs" 41432;
	setAttr ".lt" -type "double3" -1.9428902930940239e-015 -5.5330033567586951e-015 
		0.69823925815597299 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.398697895421854 11.185829860992861 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -17.786194843664042 12.368972523041201 34.236176501244167 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace50";
	rename -uid "D5424642-43E5-EE21-760A-AEBA92AACA93";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -18.217516 11.266408 33.236176 ;
	setAttr ".rs" 64310;
	setAttr ".lt" -type "double3" 1.38847798106804e-015 7.0515589672139396e-015 0.63378864318083272 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.023766917600504 10.674836261101198 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -17.411263150586954 11.857979042358828 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak37";
	rename -uid "298E98DB-48F2-1529-E78F-C7A656D612A7";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[61:80]" -type "float3"  -0.12746587 0.23356304 0 -0.12122765
		 0.22213192 0 -0.10312229 0.18895659 0 -0.074922584 0.1372851 0 -0.039389182 0.072174817
		 0 0 0 0 0.039389189 -0.072174817 0 0.074922591 -0.13728508 0 0.10312203 -0.18895659
		 0 0.12122764 -0.22213192 0 0.12746586 -0.23356304 0 0.12122764 -0.22213192 0 0.10312203
		 -0.18895659 0 0.074922591 -0.13728508 0 0.039389189 -0.072174817 0 0 0 0 -0.039389182
		 0.072174817 0 -0.074922584 0.1372851 0 -0.10312229 0.18895659 0 -0.12122765 0.22213192
		 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace49";
	rename -uid "43014EA8-42CC-1300-693F-47B37B6929CF";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -18.049952 10.829385 33.236176 ;
	setAttr ".rs" 39740;
	setAttr ".lt" -type "double3" 1.5543122344752192e-015 2.6689868848020383e-015 0.46804712202372967 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -18.983668786897532 10.471375686951113 32.236176501244167 ;
	setAttr ".cbx" -type "double3" -17.116232497110239 11.187393410034609 34.236176501244167 ;
createNode polyTweak -n "pasted__polyTweak36";
	rename -uid "4F4D61CC-4E77-C163-3ED3-59B97155A6AD";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[41]" -type "float3" -0.066281848 0.35800883 0 ;
	setAttr ".tk[42]" -type "float3" -0.063037723 0.340487 0 ;
	setAttr ".tk[43]" -type "float3" -0.053623207 0.28963512 0 ;
	setAttr ".tk[44]" -type "float3" -0.038959578 0.21043238 0 ;
	setAttr ".tk[45]" -type "float3" -0.020482175 0.11063094 0 ;
	setAttr ".tk[47]" -type "float3" 0.020482175 -0.11063094 0 ;
	setAttr ".tk[48]" -type "float3" 0.038959548 -0.21043238 0 ;
	setAttr ".tk[49]" -type "float3" 0.053623162 -0.289635 0 ;
	setAttr ".tk[50]" -type "float3" 0.063037738 -0.340487 0 ;
	setAttr ".tk[51]" -type "float3" 0.066281863 -0.35800883 0 ;
	setAttr ".tk[52]" -type "float3" 0.063037738 -0.340487 0 ;
	setAttr ".tk[53]" -type "float3" 0.053623162 -0.289635 0 ;
	setAttr ".tk[54]" -type "float3" 0.038959548 -0.21043238 0 ;
	setAttr ".tk[55]" -type "float3" 0.020482175 -0.11063094 0 ;
	setAttr ".tk[57]" -type "float3" -0.020482175 0.11063094 0 ;
	setAttr ".tk[58]" -type "float3" -0.038959578 0.21043238 0 ;
	setAttr ".tk[59]" -type "float3" -0.053623207 0.28963512 0 ;
	setAttr ".tk[60]" -type "float3" -0.063037723 0.340487 0 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace48";
	rename -uid "B480172D-45B7-CCD8-5DFD-72A669159996";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -18.049950642003886 9.2471206019596579 33.236176501244167 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -18.049952 10.247121 33.236176 ;
	setAttr ".rs" 47691;
	setAttr ".lt" -type "double3" 0 -2.3304809219792322e-014 0.58226448602893122 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -19.049950880422465 10.247120601959658 32.236176024407008 ;
	setAttr ".cbx" -type "double3" -17.049950642003886 10.247120601959658 34.236176620453456 ;
createNode deleteComponent -n "pasted__deleteComponent198";
	rename -uid "5B157438-4659-2214-44E2-7685171EADD9";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent197";
	rename -uid "452B119D-4A14-CCBF-00A9-0A97D5F413A5";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent196";
	rename -uid "18E98921-4637-E3F5-BC01-40872C4B5CFB";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent195";
	rename -uid "2CAE660B-4F80-9B1C-FBB7-9683DF6D60BE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent194";
	rename -uid "60B5DD9D-406E-C8DD-7C0B-5D9FDB4D6C90";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent193";
	rename -uid "8832810E-46A2-EC7D-017C-28AE0B356B52";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent192";
	rename -uid "46FFEA45-42AA-B3E0-54F2-9B82C6C36A1C";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent191";
	rename -uid "5BC30FD7-4996-B46D-378C-36AC5AA739C2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent190";
	rename -uid "5920873B-44EA-99C5-C578-5F8B3CC2AA7E";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent189";
	rename -uid "D182BEAA-461A-0607-5E15-AFABAC5DFA46";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent188";
	rename -uid "571995D2-4EFE-D344-00D3-A7B70AFA1AE2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent187";
	rename -uid "5FC28A12-415E-5C28-DCF1-CD84474CE9B2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent186";
	rename -uid "E0ADADDE-472C-2240-7C21-BFA410014B4E";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent185";
	rename -uid "35E7F2AA-404B-5CB1-D551-B7906F4C165D";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent184";
	rename -uid "E4C11C5E-4285-7148-6CBE-97A4D6D3BFE1";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent183";
	rename -uid "9A8EC881-48F2-2AF2-8C12-888FE788A3CE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent182";
	rename -uid "0AC3F30D-4502-8DA0-E7C9-A3A1902FDB49";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent181";
	rename -uid "80CE5825-4F18-6241-2E9A-B9826C1E0B5C";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent180";
	rename -uid "56E7447C-447F-6AE0-A8DF-2EAE05D00312";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode polyCylinder -n "pasted__polyCylinder18";
	rename -uid "2060CB8B-4F31-E4F8-A2BF-C393B2C13D56";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace66";
	rename -uid "2F897B38-487B-FCD4-E6C6-4AA9760380A1";
	setAttr ".ics" -type "componentList" 1 "f[8]";
	setAttr ".ix" -type "matrix" 1.5622074556485055 0 0 0 0 1.0139319354805696 0 0 0 0 1.3574844558497265 0
		 -14.44974889529623 19.566267596465384 33.110387984282326 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -13.668645 19.228291 33.11039 ;
	setAttr ".rs" 46200;
	setAttr ".lt" -type "double3" 3.5967011469693795e-016 1.9836953699518233e-016 1.6198101945254333 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -13.668645167471977 19.059301628725098 32.431645756357462 ;
	setAttr ".cbx" -type "double3" -13.668645167471977 19.397279585192518 33.789130212207191 ;
createNode polyTweak -n "pasted__polyTweak51";
	rename -uid "410BCD19-4E6C-BD71-221A-0FA6FD63D0F6";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[16:19]" -type "float3"  0.47816122 0.25534114 0 0.47816122
		 0.25534114 0 0.47816122 0.25534114 0 0.47816122 0.25534114 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace65";
	rename -uid "9826239A-4F09-7C24-D587-44BA7E7599EE";
	setAttr ".ics" -type "componentList" 1 "f[10]";
	setAttr ".ix" -type "matrix" 1.5622074556485055 0 0 0 0 1.0139319354805696 0 0 0 0 1.3574844558497265 0
		 -14.44974889529623 19.566267596465384 33.110387984282326 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -13.668645 20.14419 33.11039 ;
	setAttr ".rs" 61532;
	setAttr ".lt" -type "double3" 2.7132685678822637e-016 1.4964541327207699e-016 1.2219475311270642 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -13.668645167471977 19.975201925427751 32.431645756357462 ;
	setAttr ".cbx" -type "double3" -13.668645167471977 20.313179217109589 33.789130212207191 ;
createNode polyTweak -n "pasted__polyTweak50";
	rename -uid "62158376-414D-FF09-DBAC-89A16C68E293";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk";
	setAttr ".tk[5]" -type "float3" 0 0.23664871 0 ;
	setAttr ".tk[7]" -type "float3" 0 0.23664871 0 ;
	setAttr ".tk[9]" -type "float3" 0 0.23664871 0 ;
	setAttr ".tk[11]" -type "float3" 0 0.23664871 0 ;
createNode polyCube -n "pasted__polyCube7";
	rename -uid "084ABD06-471E-7951-67CA-07B77EB3488E";
	setAttr ".sh" 3;
	setAttr ".cuv" 4;
createNode polyBevel3 -n "pasted__pasted__polyBevel9";
	rename -uid "CF73E85A-4364-DBC1-E4F8-D48758B9DCFA";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[9:17]" "e[45:53]" "e[100]" "e[109:110]" "e[119:120]" "e[129:130]" "e[139]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 5.8090034824113062 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 8;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 52.450331174675995;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace8";
	rename -uid "F5B8FC10-4D20-6C5E-9EAA-F2BB8FE13DDC";
	setAttr ".ics" -type "componentList" 4 "f[54]" "f[62]" "f[81]" "f[89]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -4.6013827 4.9598875 0 ;
	setAttr ".rs" 32944;
	setAttr ".lt" -type "double3" 0 1.4264901524317174e-017 3.9357565948106084 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.888369347850507 4.9598873817917957 -2.5623676362336179 ;
	setAttr ".cbx" -type "double3" 1.6856041019746701 4.9598873817917957 2.5623676362336179 ;
createNode polyCube -n "pasted__pasted__polyCube4";
	rename -uid "8A3AC846-4293-5476-0CA9-ED9913B936E0";
	setAttr ".sw" 9;
	setAttr ".sd" 4;
	setAttr ".cuv" 4;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace80";
	rename -uid "F74E1139-4EAD-4092-4A8A-71BB71D941E2";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166151 8.0027885 46.676289 ;
	setAttr ".rs" 37284;
	setAttr ".lt" -type "double3" 0 -3.4686736042553261e-015 -0.52327497779976007 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.5009668022186773 8.002788536867449 45.791936495320201 ;
	setAttr ".cbx" -type "double3" -2.7322631031067388 8.002788536867449 47.56063983680427 ;
createNode polyTweak -n "pasted__polyTweak62";
	rename -uid "060D1B18-4094-8F79-0E6A-D08319EE4B7C";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -2.7572714e-008 0 -0.11564834
		 -0.035737325 0 -0.10998821 -0.067976415 0 -0.0935615 -0.0935615 0 -0.067976221 -0.10998813
		 0 -0.035737325 -0.11564837 0 0 -0.10998821 0 0.035737325 -0.09356159 0 0.067976221
		 -0.067976467 0 0.0935615 -0.035737354 0 0.10998821 -2.7572714e-008 0 0.11564834 0.035737298
		 0 0.10998821 0.067976356 0 0.0935615 0.093561471 0 0.067976221 0.10998813 0 0.035737325
		 0.11564837 0 0 0.10998813 0 -0.035737325 0.093561471 0 -0.067976221 0.067976356 0
		 -0.0935615 0.035737298 0 -0.10998821;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace79";
	rename -uid "E6DA7542-41F1-1322-B14C-C897E05B2CEA";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166148 8.0027876 46.676289 ;
	setAttr ".rs" 62231;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.616614952662708 8.0027880600302908 45.676287689225077 ;
	setAttr ".cbx" -type "double3" -2.6166147142441289 8.0027880600302908 47.676288285271525 ;
createNode deleteComponent -n "pasted__deleteComponent295";
	rename -uid "665DD555-479A-0930-DDE3-4D8238C1C8BE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent294";
	rename -uid "5EFF7991-4AC1-1855-7D61-9DB17BE4B924";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent293";
	rename -uid "A3A2E75A-437C-9C81-92DA-7DB38717BDC0";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent292";
	rename -uid "3100876A-4D60-E11B-CB68-1F81FC1BCB1B";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent291";
	rename -uid "427321A8-4EEF-99D9-AA07-93B12118A8C4";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent290";
	rename -uid "7AB37D14-48E5-2FB0-A52A-998AEEC4DFD2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent289";
	rename -uid "648FD078-471B-4986-5BC8-C58213394C94";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent288";
	rename -uid "9B4D7718-42E4-0694-207A-49BDF29E363A";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent287";
	rename -uid "75917304-48F0-30D4-3125-DEBAB72A3259";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent286";
	rename -uid "083B8584-4F35-7C70-C8D7-82BB435C59E2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent285";
	rename -uid "023DAA52-4179-3493-ADC3-DD9AF2698A06";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent284";
	rename -uid "7F78E680-4245-9C09-18CC-34AB7D21BA69";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent283";
	rename -uid "AA778D88-4F11-AC77-C90C-49A05AAB6378";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent282";
	rename -uid "D28EAC9A-4898-6839-4302-698BFBF6693D";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__deleteComponent281";
	rename -uid "C21FFA33-4A67-CBAA-9181-F996DD78631F";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__deleteComponent280";
	rename -uid "09EB74FA-4366-8BC2-2E2C-0B9ABDB5201A";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__deleteComponent279";
	rename -uid "06F1912A-497A-968D-0966-51927A5A692D";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__deleteComponent278";
	rename -uid "41688557-414C-884F-D5D0-95A153739FD6";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__deleteComponent277";
	rename -uid "F51DAB2B-4FD8-9C19-EE0B-EEB1090AE7CE";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode polyTweak -n "pasted__polyTweak61";
	rename -uid "A0910F1A-4D3E-FFEB-6530-5298DF7DE5A2";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk";
	setAttr ".tk[0]" -type "float3" -0.29600725 0 0.096178517 ;
	setAttr ".tk[1]" -type "float3" -0.25179875 0 0.18294246 ;
	setAttr ".tk[2]" -type "float3" -0.18294257 0 0.25179866 ;
	setAttr ".tk[3]" -type "float3" -0.096178584 0 0.29600713 ;
	setAttr ".tk[4]" -type "float3" -3.7102723e-008 0 0.31124029 ;
	setAttr ".tk[5]" -type "float3" 0.096178517 0 0.29600707 ;
	setAttr ".tk[6]" -type "float3" 0.18294245 0 0.25179866 ;
	setAttr ".tk[7]" -type "float3" 0.25179866 0 0.18294239 ;
	setAttr ".tk[8]" -type "float3" 0.29600707 0 0.096178472 ;
	setAttr ".tk[9]" -type "float3" 0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[10]" -type "float3" 0.29600707 0 -0.096178584 ;
	setAttr ".tk[11]" -type "float3" 0.25179863 0 -0.18294248 ;
	setAttr ".tk[12]" -type "float3" 0.18294239 0 -0.25179866 ;
	setAttr ".tk[13]" -type "float3" 0.096178502 0 -0.29600713 ;
	setAttr ".tk[14]" -type "float3" -2.7827044e-008 0 -0.31124029 ;
	setAttr ".tk[15]" -type "float3" -0.096178554 0 -0.29600707 ;
	setAttr ".tk[16]" -type "float3" -0.18294245 0 -0.25179866 ;
	setAttr ".tk[17]" -type "float3" -0.25179866 0 -0.18294248 ;
	setAttr ".tk[18]" -type "float3" -0.29600707 0 -0.096178569 ;
	setAttr ".tk[19]" -type "float3" -0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[40]" -type "float3" -3.7102723e-008 0 -5.5654088e-008 ;
createNode polyCylinder -n "pasted__polyCylinder22";
	rename -uid "5A6B547C-4DC5-38B0-F237-B4A5EF69A6A1";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace78";
	rename -uid "3154DFC4-42B8-ABD8-F02A-0B94AC22712C";
	setAttr ".ics" -type "componentList" 1 "f[18]";
	setAttr ".ix" -type "matrix" 0.55043185923196292 0 0 0 0 0.15822977857862966 0 0
		 0 0 0.55043185923196292 0 -6.9958586441751507 6.1811367515131037 46.77282134223023 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -6.4588966 6.1811366 46.857864 ;
	setAttr ".rs" 44772;
	setAttr ".lt" -type "double3" 1.0259154636926837e-014 0 0.077097784811346701 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -6.4723668574297255 6.0229069729344742 46.77282134223023 ;
	setAttr ".cbx" -type "double3" -6.4454267849431881 6.3393665300917332 46.942907944728191 ;
createNode polyTweak -n "pasted__polyTweak60";
	rename -uid "8F14F448-46D8-D4D5-4E5B-D29B8A457E0B";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[61:80]" -type "float3"  -0.14368096 0 0.046685383
		 -0.12222234 0 0.088799745 -0.088799581 0 0.1222211 -0.046684898 0 0.14368096 1.5853925e-007
		 0 0.15107399 0.046685066 0 0.14368096 0.088799909 0 0.1222211 0.12222234 0 0.088799745
		 0.14368108 0 0.046685383 0.15107509 0 -1.268314e-006 0.14368108 0 -0.046685383 0.12222234
		 0 -0.088801019 0.088799909 0 -0.12222234 0.046685066 0 -0.14368096 1.5853925e-007
		 0 -0.15107399 -0.046684742 0 -0.14368096 -0.088799581 0 -0.12222234 -0.12222234 0
		 -0.088801019 -0.14368081 0 -0.046685383 -0.15107509 0 -1.268314e-006;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace77";
	rename -uid "97C67018-4615-69B5-9054-2AA4E9B8F7E7";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 0.55043185923196292 0 0 0 0 0.15822977857862966 0 0
		 0 0 0.55043185923196292 0 -6.9958586441751507 6.1811367515131037 46.77282134223023 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -6.9958582 6.5374479 46.77282 ;
	setAttr ".rs" 37667;
	setAttr ".lt" -type "double3" 0 -6.6875878609137501e-015 0.18161487168842871 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.4960767510663375 6.5374478567833902 46.272602546364837 ;
	setAttr ".cbx" -type "double3" -6.4956400123512363 6.5374478567833902 47.273035938633804 ;
createNode polyTweak -n "pasted__polyTweak59";
	rename -uid "77077CFA-4298-F7FB-8A31-BE856C4F870A";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -0.086760364 0.55563438 0.028190164
		 -0.073802844 0.55563438 0.053621039 -0.05362083 0.55563438 0.073802769 -0.028190205
		 0.55563438 0.086760074 4.3499575e-008 0.55563438 0.091224864 0.028190205 0.55563438
		 0.086760074 0.05362092 0.55563438 0.073802769 0.073802724 0.55563438 0.053621039
		 0.086760364 0.55563438 0.028190164 0.09122517 0.55563438 -3.479966e-007 0.086760364
		 0.55563438 -0.028190164 0.073802724 0.55563438 -0.053621039 0.05362092 0.55563438
		 -0.073802769 0.028190205 0.55563438 -0.086760074 4.3499575e-008 0.55563438 -0.091224864
		 -0.028190119 0.55563438 -0.086760074 -0.05362083 0.55563438 -0.073802769 -0.073802724
		 0.55563438 -0.053621039 -0.086760305 0.55563438 -0.028190164 -0.09122517 0.55563438
		 -3.479966e-007;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace76";
	rename -uid "3945E7D2-4A86-9E1A-4E31-35A71A3FEE43";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 0.55043185923196292 0 0 0 0 0.15822977857862966 0 0
		 0 0 0.55043185923196292 0 -6.9958586441751507 6.1811367515131037 46.77282134223023 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -6.9958587 6.3393664 46.77282 ;
	setAttr ".rs" 34868;
	setAttr ".lt" -type "double3" 1.7763568394002505e-015 3.2929563910455724e-015 0.11016392749315251 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.5462906346402949 6.3393665300917332 46.222389220531902 ;
	setAttr ".cbx" -type "double3" -6.4454267849431881 6.3393665300917332 47.323253267078783 ;
createNode deleteComponent -n "pasted__deleteComponent276";
	rename -uid "8A5AFDD2-4133-B24D-EF43-6FA5001A72DC";
	setAttr ".dc" -type "componentList" 1 "e[81]";
createNode deleteComponent -n "pasted__deleteComponent275";
	rename -uid "A041D437-4E33-7B4E-1BF1-72B98D33BAED";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent274";
	rename -uid "3D8536EF-45DC-9218-CA5E-098FD8F7DF1B";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent273";
	rename -uid "1D80B22F-42DA-95CB-6F2C-9CA22DBA776D";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent272";
	rename -uid "F8F830EC-407E-2CAC-96CB-FDABAD7E84C6";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent271";
	rename -uid "4013D935-4E05-119D-F09A-31976E6E97A3";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent270";
	rename -uid "D6797915-4BF9-7856-1056-40A81FD0B712";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent269";
	rename -uid "FC185FA0-41F1-BBE6-F3D7-DCB935448BD3";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent268";
	rename -uid "6FAAD746-49EC-3581-5423-12A93AB17775";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent267";
	rename -uid "28D2B6C1-40A8-3FDE-244C-B3887ECC893F";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent266";
	rename -uid "A9E18577-47E4-B67C-F8E2-CEBF1F3FCC6B";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent265";
	rename -uid "B274851B-479E-F3EC-EED9-AD91E060E05F";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent264";
	rename -uid "4EB558DF-4A59-1226-634D-E4A1B5AC63BB";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent263";
	rename -uid "28E2B6D4-4B14-B649-310A-59AACFCCEDC9";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent262";
	rename -uid "B4247BDE-490D-F81D-3DB0-5E8C9AA4F0DD";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent261";
	rename -uid "846EADAF-4B8D-31C4-CADC-36A8B705FEFE";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent260";
	rename -uid "6EC7C81F-4EC0-0BBC-8EE5-9FA860E1A30D";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent259";
	rename -uid "80999022-4A4C-8343-D169-9AA0E42FF8EB";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent258";
	rename -uid "DECE07EB-4D2F-F057-BE15-AA991D1494F4";
	setAttr ".dc" -type "componentList" 1 "e[83]";
createNode polyCylinder -n "pasted__polyCylinder21";
	rename -uid "07E24FBA-4267-1195-BBA2-28B7A65963E1";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace75";
	rename -uid "28D270EA-45FD-0CC4-2DB6-64AE88351C01";
	setAttr ".ics" -type "componentList" 1 "f[121]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.4614835 8.4305248 46.736088 ;
	setAttr ".rs" 53547;
	setAttr ".lt" -type "double3" 1.950770517599011e-015 6.8240014020295894e-015 0.023179238070243472 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.7315878048939997 8.3003599806293433 46.536122897375222 ;
	setAttr ".cbx" -type "double3" -7.1913789287610346 8.5606900321160264 46.936054484654065 ;
createNode deleteComponent -n "pasted__deleteComponent257";
	rename -uid "61C28DFC-4AF1-6A40-2714-62A6ED0FAC15";
	setAttr ".dc" -type "componentList" 1 "e[242]";
createNode deleteComponent -n "pasted__deleteComponent256";
	rename -uid "4E3EFF7F-4D1A-6C8F-6945-11908E5121A2";
	setAttr ".dc" -type "componentList" 1 "e[243]";
createNode polySplit -n "pasted__polySplit8";
	rename -uid "108D5A08-460B-3390-76A8-89BA65E783B7";
	setAttr ".e[0]"  0.33666101;
	setAttr ".d[0]"  -2147483405;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "pasted__polySplit7";
	rename -uid "2E7F18AA-4930-BC47-35AB-618A7894DF99";
	setAttr -s 2 ".e[0:1]"  0.28226799 0.29420501;
	setAttr -s 2 ".d[0:1]"  -2147483407 -2147483408;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "pasted__polySplit6";
	rename -uid "4C6B187D-4A40-1B06-CA92-C69D197902A3";
	setAttr -s 2 ".e[0:1]"  1 1;
	setAttr -s 2 ".d[0:1]"  -2147483452 -2147483470;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "pasted__polySplit5";
	rename -uid "390B0B72-4A75-59CF-8EED-339D5DA1C98B";
	setAttr -s 2 ".e[0:1]"  1 1;
	setAttr -s 2 ".d[0:1]"  -2147483450 -2147483472;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyTweak -n "pasted__polyTweak58";
	rename -uid "2D41446E-476F-5099-F7C3-29B94CCEDFAC";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[117:120]" -type "float3"  -0.017144158 0.027595133 -0.0092350151
		 0.00058315299 0.044843942 -0.0068340763 0.016575286 -0.027310515 0.0090271067 -0.0013719283
		 -0.050197404 0.007443272;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace74";
	rename -uid "03A4C641-48AE-674D-13D8-8C8BF0CF52EF";
	setAttr ".ics" -type "componentList" 1 "f[79]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.1147165 7.6574421 46.823967 ;
	setAttr ".rs" 37005;
	setAttr ".lt" -type "double3" 4.2479041117982064e-016 -5.7610166637189764e-015 0.13419007057314605 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.1821555868192011 7.617516622933727 46.711499334979649 ;
	setAttr ".cbx" -type "double3" -7.047277189831286 7.6973677008407586 46.936431305218335 ;
createNode polyTweak -n "pasted__polyTweak57";
	rename -uid "C2FD95B7-4FC0-DB3B-F80F-87861ABF9494";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[113:116]" -type "float3"  0.0050214147 0.072482251 -0.046808835
		 -0.0069112843 0.059505805 0.053521022 -0.0067824153 -0.068982631 0.047126178 0.0026281381
		 -0.064879239 -0.053521022;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace73";
	rename -uid "9D77DB68-4B66-9CB9-976A-0EB6602D8387";
	setAttr ".ics" -type "componentList" 1 "f[79]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.2407489 7.7521181 46.812416 ;
	setAttr ".rs" 35923;
	setAttr ".lt" -type "double3" 1.1028504498522551e-015 1.457167719820518e-015 0.15803924272285474 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.3140902296109491 7.6672391139758496 46.646426850665208 ;
	setAttr ".cbx" -type "double3" -7.1674078479810053 7.8369975620690013 46.978402005243893 ;
createNode polyTweak -n "pasted__polyTweak56";
	rename -uid "2EDB21B0-40FA-FD5F-B89E-E582E0D688F4";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk[105:112]" -type "float3"  2.2351742e-008 -1.1175871e-008
		 0 1.8626451e-008 3.7252903e-009 0 -4.0978193e-008 -1.6763806e-008 0 -2.6077032e-008
		 -3.7252903e-009 0 -0.073342495 0.023894347 -0.0093366383 -0.08912912 0.035910916
		 -0.011478983 0.041572098 -0.015328056 0.0083549321 0.065380633 -0.035910916 0.011478983;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace72";
	rename -uid "7D6892D3-4A6F-8F68-D3FE-84AC966BE3F6";
	setAttr ".ics" -type "componentList" 1 "f[79]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.4334917 7.7379427 46.781548 ;
	setAttr ".rs" 58427;
	setAttr ".lt" -type "double3" -4.3055836673744352e-015 9.5930208221517432e-016 0.21355842792531105 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.4638627544446283 7.6282133137207913 46.62703730325758 ;
	setAttr ".cbx" -type "double3" -7.403120376209765 7.8476716904715458 46.936054484654065 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace71";
	rename -uid "16EBAB7E-4F09-22FD-6D68-369408F53C14";
	setAttr ".ics" -type "componentList" 1 "f[59]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.4219713 7.5390348 46.781548 ;
	setAttr ".rs" 56713;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.4515393749280268 7.4427097988938593 46.62703730325758 ;
	setAttr ".cbx" -type "double3" -7.3924029842419916 7.6353599914278139 46.936054484654065 ;
createNode polyTweak -n "pasted__polyTweak55";
	rename -uid "1833D1E1-44BA-1FA4-C26C-0CA10CCD92D2";
	setAttr ".uopa" yes;
	setAttr -s 2 ".tk[101:102]" -type "float3"  0.12411986 0.59604812 0 0.12411986
		 0.59604812 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace70";
	rename -uid "08F6E912-4637-4853-25A9-B7B7FD5A5BA2";
	setAttr ".ics" -type "componentList" 1 "f[99]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -7.327621 8.0740156 46.781548 ;
	setAttr ".rs" 58924;
	setAttr ".lt" -type "double3" 2.0192181260370035e-015 2.3175905639050143e-015 0.12485823223330553 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -7.4638627544446283 7.8264236920818773 46.62703730325758 ;
	setAttr ".cbx" -type "double3" -7.1913789287610346 8.3216073004510562 46.936054484654065 ;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace69";
	rename -uid "452089D1-4CAD-44BE-5669-39B00AC1E047";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -8.3206234 8.2605505 46.627037 ;
	setAttr ".rs" 55671;
	setAttr ".lt" -type "double3" -9.0509411788598208e-017 1.4778255034452907e-015 0.52609691035979977 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -9.2214757576985651 7.8264236072608826 45.62703730325758 ;
	setAttr ".cbx" -type "double3" -7.4197717085881525 8.6946771766895541 47.62703730325758 ;
createNode polyTweak -n "pasted__polyTweak54";
	rename -uid "8C8F6994-4FCB-A9B5-8B64-668FBD2C0F85";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[61:80]" -type "float3"  -0.084102459 -0.38510087 0
		 -0.071541861 -0.32758632 0 -0.051977977 -0.23800553 0 -0.027326636 -0.12512673 0
		 -4.8572257e-016 -3.9968029e-015 0 0.027326638 0.12512675 0 0.051978365 0.23800524
		 0 0.071542032 0.32758608 0 0.084102422 0.3851006 0 0.088430606 0.40491876 0 0.084102422
		 0.3851006 0 0.071542032 0.32758608 0 0.051978365 0.23800524 0 0.027326638 0.12512675
		 0 -4.8572257e-016 -3.9968029e-015 0 -0.027326636 -0.12512673 0 -0.051977947 -0.23800534
		 0 -0.071541846 -0.32758617 0 -0.084102422 -0.3851006 0 -0.088430598 -0.40491876 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace68";
	rename -uid "83A59F35-483C-CB19-A338-EFA910C7276C";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -8.3924026 7.7742281 46.627037 ;
	setAttr ".rs" 54370;
	setAttr ".lt" -type "double3" 1.5959455978986625e-015 -9.1693485076971881e-016 0.49159095226986993 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -9.3816853538556391 7.6282133137207913 45.62703730325758 ;
	setAttr ".cbx" -type "double3" -7.4031206146283441 7.9202430913522832 47.62703730325758 ;
createNode polyTweak -n "pasted__polyTweak53";
	rename -uid "DC6393E4-4293-7CB8-69B4-C99ADC1D84B4";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -0.01019305 0.065304421 0
		 -0.0086707296 0.094452657 0 -0.006299654 0.13985224 0 -0.0033119239 0.19705904 0
		 -4.510281e-017 0.26047322 0 0.0033119239 0.32388741 0 0.006299654 0.38109419 0 0.0086707249
		 0.42649364 0 0.010193042 0.4556419 0 0.010717602 0.46568573 0 0.010193042 0.4556419
		 0 0.0086707249 0.42649364 0 0.006299654 0.38109419 0 0.0033119239 0.32388741 0 -4.510281e-017
		 0.26047322 0 -0.0033119239 0.19705904 0 -0.0062996489 0.13985233 0 -0.0086707249
		 0.094452776 0 -0.010193042 0.06530454 0 -0.010717602 0.05526071 0;
createNode polyExtrudeFace -n "pasted__polyExtrudeFace67";
	rename -uid "248B0B5A-481E-47B4-12B0-9D9A8F649D64";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 0.71153007247614286 0 0 0 0 1 0 -8.3924029842419916 6.7311790478497606 46.62703730325758 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -8.3924026 7.442709 46.627037 ;
	setAttr ".rs" 40320;
	setAttr ".lt" -type "double3" 0 6.122721465746772e-015 0.14618374545303237 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -9.3924032226605707 7.4427091203259037 45.627036826420422 ;
	setAttr ".cbx" -type "double3" -7.3924029842419916 7.4427091203259037 47.62703742246687 ;
createNode deleteComponent -n "pasted__deleteComponent255";
	rename -uid "04A67C6B-4A3F-C4BD-9B01-089085DBFB68";
	setAttr ".dc" -type "componentList" 1 "e[81]";
createNode deleteComponent -n "pasted__deleteComponent254";
	rename -uid "EFD9FB69-49F0-78C8-02AD-079B552A232B";
	setAttr ".dc" -type "componentList" 1 "e[82]";
createNode deleteComponent -n "pasted__deleteComponent253";
	rename -uid "91F8CB2A-4072-3194-AAD8-D092BCAD95F8";
	setAttr ".dc" -type "componentList" 1 "e[83]";
createNode deleteComponent -n "pasted__deleteComponent252";
	rename -uid "1EF73C13-4C5B-B354-52AF-0FA44DAA6967";
	setAttr ".dc" -type "componentList" 1 "e[84]";
createNode deleteComponent -n "pasted__deleteComponent251";
	rename -uid "9EEBBD13-48DB-23A2-335D-B2A8F428DC50";
	setAttr ".dc" -type "componentList" 1 "e[85]";
createNode deleteComponent -n "pasted__deleteComponent250";
	rename -uid "C2D6151F-4E3F-96A1-9EE2-02B3530E576B";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent249";
	rename -uid "81A4B0CF-4007-4342-D52E-64881303C3AC";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent248";
	rename -uid "92270888-4256-7B43-B234-87994E995021";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent247";
	rename -uid "7ACBBF86-49BE-CF16-3365-B687237A29AB";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent246";
	rename -uid "DCA4FE9C-44A8-575C-B5AB-09AF114A83F0";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent245";
	rename -uid "2FD189A2-4E0F-1346-0286-2E8BD3EAC94E";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent244";
	rename -uid "20F41429-4BF6-95CE-7666-01BA5AC96FAD";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent243";
	rename -uid "75FE94EF-4655-416A-AD84-F698B18C16A6";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent242";
	rename -uid "1533A680-4BBD-22CA-7D16-089B1A7A4369";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent241";
	rename -uid "4139BC71-4D95-C0AA-E606-FCA379F3C98D";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent240";
	rename -uid "89B85DEC-4749-13FB-4195-0AB0A7E479B5";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent239";
	rename -uid "F26F0AC8-4E36-1F68-8544-DB935E3ABB49";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent238";
	rename -uid "43923C03-4437-9B00-8FAA-E39D0D443516";
	setAttr ".dc" -type "componentList" 1 "e[86]";
createNode deleteComponent -n "pasted__deleteComponent237";
	rename -uid "EBF91D20-4AFA-7E83-C3E9-9C810627343B";
	setAttr ".dc" -type "componentList" 1 "e[87]";
createNode polyCylinder -n "pasted__polyCylinder20";
	rename -uid "2659EF18-45C6-A060-10AD-7DB6A503CC3A";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace80";
	rename -uid "8EB3DBCE-4BAD-3C4C-F8AC-D8A3A2A36F84";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166151 8.0027885 46.676289 ;
	setAttr ".rs" 37284;
	setAttr ".lt" -type "double3" 0 -3.4686736042553261e-015 -0.52327497779976007 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.5009668022186773 8.002788536867449 45.791936495320201 ;
	setAttr ".cbx" -type "double3" -2.7322631031067388 8.002788536867449 47.56063983680427 ;
createNode polyTweak -n "pasted__pasted__polyTweak62";
	rename -uid "4BE80949-4022-D54E-51CF-F5AD201359B6";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -2.7572714e-008 0 -0.11564834
		 -0.035737325 0 -0.10998821 -0.067976415 0 -0.0935615 -0.0935615 0 -0.067976221 -0.10998813
		 0 -0.035737325 -0.11564837 0 0 -0.10998821 0 0.035737325 -0.09356159 0 0.067976221
		 -0.067976467 0 0.0935615 -0.035737354 0 0.10998821 -2.7572714e-008 0 0.11564834 0.035737298
		 0 0.10998821 0.067976356 0 0.0935615 0.093561471 0 0.067976221 0.10998813 0 0.035737325
		 0.11564837 0 0 0.10998813 0 -0.035737325 0.093561471 0 -0.067976221 0.067976356 0
		 -0.0935615 0.035737298 0 -0.10998821;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace79";
	rename -uid "11D6EF25-4BCB-0B4D-D90A-E69BF2550FE6";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166148 8.0027876 46.676289 ;
	setAttr ".rs" 62231;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.616614952662708 8.0027880600302908 45.676287689225077 ;
	setAttr ".cbx" -type "double3" -2.6166147142441289 8.0027880600302908 47.676288285271525 ;
createNode deleteComponent -n "pasted__pasted__deleteComponent295";
	rename -uid "C94431E0-4A28-C6BC-2EF0-789053D4809D";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent294";
	rename -uid "271B7BF3-40EF-F32A-E3CD-2D98B77129EE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent293";
	rename -uid "27AA659B-4627-47AA-30EF-3591F1958C31";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent292";
	rename -uid "E336B403-4032-BD6C-0DC4-C8AD74C5A7C2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent291";
	rename -uid "B89BEA0F-4B1F-2C04-54B0-CF90EAF1F849";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent290";
	rename -uid "A30E58E5-4C31-2A66-5B71-CD85B9F4D16E";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent289";
	rename -uid "6BF7538A-4C5A-EED9-F453-8A889BC142D0";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent288";
	rename -uid "F25567A2-492F-4D41-176A-97B9C8A09798";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent287";
	rename -uid "77174A23-4B6B-9A7A-3BF5-0480D32BC71F";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent286";
	rename -uid "81C51223-45FD-70EA-9467-6F9705D2BC2A";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent285";
	rename -uid "7F4D020C-41E0-F401-6053-66B9A8ED08EE";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent284";
	rename -uid "4961FA4F-4885-18B1-C851-07A07F2766E1";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent283";
	rename -uid "0F069231-4712-9FA7-CEA3-359AF3074653";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent282";
	rename -uid "890BC497-4C96-0E2B-50F3-A3A6435EE465";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent281";
	rename -uid "2495D59E-485A-20BC-3B0A-439466BE343D";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__deleteComponent280";
	rename -uid "AB96F0F7-4B71-FD0D-9789-C4B118EBF0AD";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__deleteComponent279";
	rename -uid "C3BC774D-439D-8FC4-F6CF-F49AE85BE5DC";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__deleteComponent278";
	rename -uid "C30DDD5D-41EF-3CEE-6DA8-198DD1D1899C";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__deleteComponent277";
	rename -uid "6EB55A82-4F8A-4390-28D3-7BAA1C2CFC9D";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode polyTweak -n "pasted__pasted__polyTweak61";
	rename -uid "C3DFC420-45F7-6570-09B8-D48300905E8C";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk";
	setAttr ".tk[0]" -type "float3" -0.29600725 0 0.096178517 ;
	setAttr ".tk[1]" -type "float3" -0.25179875 0 0.18294246 ;
	setAttr ".tk[2]" -type "float3" -0.18294257 0 0.25179866 ;
	setAttr ".tk[3]" -type "float3" -0.096178584 0 0.29600713 ;
	setAttr ".tk[4]" -type "float3" -3.7102723e-008 0 0.31124029 ;
	setAttr ".tk[5]" -type "float3" 0.096178517 0 0.29600707 ;
	setAttr ".tk[6]" -type "float3" 0.18294245 0 0.25179866 ;
	setAttr ".tk[7]" -type "float3" 0.25179866 0 0.18294239 ;
	setAttr ".tk[8]" -type "float3" 0.29600707 0 0.096178472 ;
	setAttr ".tk[9]" -type "float3" 0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[10]" -type "float3" 0.29600707 0 -0.096178584 ;
	setAttr ".tk[11]" -type "float3" 0.25179863 0 -0.18294248 ;
	setAttr ".tk[12]" -type "float3" 0.18294239 0 -0.25179866 ;
	setAttr ".tk[13]" -type "float3" 0.096178502 0 -0.29600713 ;
	setAttr ".tk[14]" -type "float3" -2.7827044e-008 0 -0.31124029 ;
	setAttr ".tk[15]" -type "float3" -0.096178554 0 -0.29600707 ;
	setAttr ".tk[16]" -type "float3" -0.18294245 0 -0.25179866 ;
	setAttr ".tk[17]" -type "float3" -0.25179866 0 -0.18294248 ;
	setAttr ".tk[18]" -type "float3" -0.29600707 0 -0.096178569 ;
	setAttr ".tk[19]" -type "float3" -0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[40]" -type "float3" -3.7102723e-008 0 -5.5654088e-008 ;
createNode polyCylinder -n "pasted__pasted__polyCylinder22";
	rename -uid "8269FA4B-47D9-28CD-41A0-54A4D79B4DEC";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace80";
	rename -uid "B329EAB8-4A0C-2585-D1CC-5E8E6221F35E";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166151 8.0027885 46.676289 ;
	setAttr ".rs" 37284;
	setAttr ".lt" -type "double3" 0 -3.4686736042553261e-015 -0.52327497779976007 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.5009668022186773 8.002788536867449 45.791936495320201 ;
	setAttr ".cbx" -type "double3" -2.7322631031067388 8.002788536867449 47.56063983680427 ;
createNode polyTweak -n "pasted__pasted__pasted__polyTweak62";
	rename -uid "087B5786-4621-55A1-47DA-FA824ADAEF89";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -2.7572714e-008 0 -0.11564834
		 -0.035737325 0 -0.10998821 -0.067976415 0 -0.0935615 -0.0935615 0 -0.067976221 -0.10998813
		 0 -0.035737325 -0.11564837 0 0 -0.10998821 0 0.035737325 -0.09356159 0 0.067976221
		 -0.067976467 0 0.0935615 -0.035737354 0 0.10998821 -2.7572714e-008 0 0.11564834 0.035737298
		 0 0.10998821 0.067976356 0 0.0935615 0.093561471 0 0.067976221 0.10998813 0 0.035737325
		 0.11564837 0 0 0.10998813 0 -0.035737325 0.093561471 0 -0.067976221 0.067976356 0
		 -0.0935615 0.035737298 0 -0.10998821;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace79";
	rename -uid "214BEEFE-490F-DABA-C0C2-EB9B845E6DC8";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166148 8.0027876 46.676289 ;
	setAttr ".rs" 62231;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.616614952662708 8.0027880600302908 45.676287689225077 ;
	setAttr ".cbx" -type "double3" -2.6166147142441289 8.0027880600302908 47.676288285271525 ;
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent295";
	rename -uid "5DB6F064-4C26-05E8-D1C7-4FAE821D5649";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent294";
	rename -uid "3951923F-4CEC-FBA9-4BF5-149C4A03F1A0";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent293";
	rename -uid "F4BC3AB6-40C5-A93C-5500-F78C4C2A7D68";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent292";
	rename -uid "7E3224C4-4F10-616A-7626-2CBD074C1E53";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent291";
	rename -uid "C7B9552F-4F62-A98C-84D0-A4BB5B9F9E39";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent290";
	rename -uid "4ECEDA66-4A21-0F54-A3D5-0A83A8841581";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent289";
	rename -uid "04F00C65-4AFF-0DB8-CE44-2BAAD5FCC1C2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent288";
	rename -uid "B4372E57-4FEC-1C01-2497-C0818873A49B";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent287";
	rename -uid "912DECEC-4880-9E90-4EC7-80AAE3C69E38";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent286";
	rename -uid "0EDADC1E-4A25-9C28-0D5D-43B30DBD38F3";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent285";
	rename -uid "F621F591-4C16-947F-8468-5FBF6E2A221F";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent284";
	rename -uid "8CC90464-47B8-EB3D-7F7B-35A903FB0DFB";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent283";
	rename -uid "741FFA05-4F5F-A8A2-BBD4-DA8DD1486F81";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent282";
	rename -uid "B42A6C14-469B-1112-1DB8-B6A641AE5E26";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent281";
	rename -uid "2D2621E2-4C13-DE85-187C-47B404C78EDD";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent280";
	rename -uid "F59B9A06-4D64-D049-6F16-FB8BECA9D3CC";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent279";
	rename -uid "AA334A1F-409A-3455-B48B-4FAE99E242EB";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent278";
	rename -uid "988E9CF1-4FA4-6C30-015E-FF8FB143B07C";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent277";
	rename -uid "59823F30-4A11-C989-E985-D1A3089C54A8";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode polyTweak -n "pasted__pasted__pasted__polyTweak61";
	rename -uid "BC35890F-4665-DE4F-E880-85A86841282B";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk";
	setAttr ".tk[0]" -type "float3" -0.29600725 0 0.096178517 ;
	setAttr ".tk[1]" -type "float3" -0.25179875 0 0.18294246 ;
	setAttr ".tk[2]" -type "float3" -0.18294257 0 0.25179866 ;
	setAttr ".tk[3]" -type "float3" -0.096178584 0 0.29600713 ;
	setAttr ".tk[4]" -type "float3" -3.7102723e-008 0 0.31124029 ;
	setAttr ".tk[5]" -type "float3" 0.096178517 0 0.29600707 ;
	setAttr ".tk[6]" -type "float3" 0.18294245 0 0.25179866 ;
	setAttr ".tk[7]" -type "float3" 0.25179866 0 0.18294239 ;
	setAttr ".tk[8]" -type "float3" 0.29600707 0 0.096178472 ;
	setAttr ".tk[9]" -type "float3" 0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[10]" -type "float3" 0.29600707 0 -0.096178584 ;
	setAttr ".tk[11]" -type "float3" 0.25179863 0 -0.18294248 ;
	setAttr ".tk[12]" -type "float3" 0.18294239 0 -0.25179866 ;
	setAttr ".tk[13]" -type "float3" 0.096178502 0 -0.29600713 ;
	setAttr ".tk[14]" -type "float3" -2.7827044e-008 0 -0.31124029 ;
	setAttr ".tk[15]" -type "float3" -0.096178554 0 -0.29600707 ;
	setAttr ".tk[16]" -type "float3" -0.18294245 0 -0.25179866 ;
	setAttr ".tk[17]" -type "float3" -0.25179866 0 -0.18294248 ;
	setAttr ".tk[18]" -type "float3" -0.29600707 0 -0.096178569 ;
	setAttr ".tk[19]" -type "float3" -0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[40]" -type "float3" -3.7102723e-008 0 -5.5654088e-008 ;
createNode polyCylinder -n "pasted__pasted__pasted__polyCylinder22";
	rename -uid "AAE60BF5-49D6-C587-BBB9-62A9BA40BCD1";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyExtrudeFace -n "pasted__pasted__pasted__pasted__polyExtrudeFace80";
	rename -uid "61B7EBAB-4C37-680C-09A5-EB98DE8FBED9";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166151 8.0027885 46.676289 ;
	setAttr ".rs" 37284;
	setAttr ".lt" -type "double3" 0 -3.4686736042553261e-015 -0.52327497779976007 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.5009668022186773 8.002788536867449 45.791936495320201 ;
	setAttr ".cbx" -type "double3" -2.7322631031067388 8.002788536867449 47.56063983680427 ;
createNode polyTweak -n "pasted__pasted__pasted__pasted__polyTweak62";
	rename -uid "983818B6-4611-63A2-90A6-DE99CD0E493A";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -2.7572714e-008 0 -0.11564834
		 -0.035737325 0 -0.10998821 -0.067976415 0 -0.0935615 -0.0935615 0 -0.067976221 -0.10998813
		 0 -0.035737325 -0.11564837 0 0 -0.10998821 0 0.035737325 -0.09356159 0 0.067976221
		 -0.067976467 0 0.0935615 -0.035737354 0 0.10998821 -2.7572714e-008 0 0.11564834 0.035737298
		 0 0.10998821 0.067976356 0 0.0935615 0.093561471 0 0.067976221 0.10998813 0 0.035737325
		 0.11564837 0 0 0.10998813 0 -0.035737325 0.093561471 0 -0.067976221 0.067976356 0
		 -0.0935615 0.035737298 0 -0.10998821;
createNode polyExtrudeFace -n "pasted__pasted__pasted__pasted__polyExtrudeFace79";
	rename -uid "E4E823A0-40A8-7FBE-35D3-3EA549111924";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166148 8.0027876 46.676289 ;
	setAttr ".rs" 62231;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.616614952662708 8.0027880600302908 45.676287689225077 ;
	setAttr ".cbx" -type "double3" -2.6166147142441289 8.0027880600302908 47.676288285271525 ;
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent295";
	rename -uid "3A39C12E-425C-505B-47D0-E2BC4FBDF780";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent294";
	rename -uid "0FF790FE-40BA-3869-81D5-2580143C4E51";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent293";
	rename -uid "240819F7-4E84-D7A0-5D1B-C39095EB23E0";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent292";
	rename -uid "FF462B5C-4255-CA8F-3B3B-10BEBF2DA0EB";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent291";
	rename -uid "ACFDA4D4-4D04-7C59-14D7-DA928F2ED372";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent290";
	rename -uid "5406537D-4985-4227-21F1-92ACCC5A1E0A";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent289";
	rename -uid "008D416A-4261-2C9D-F52B-9A83E4240BE1";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent288";
	rename -uid "C95264AC-4CA5-CE0F-759F-4E980F228193";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent287";
	rename -uid "80306F94-4C8A-6AE7-F68D-F3B959356750";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent286";
	rename -uid "E5BB5D68-4C49-1461-5F16-E2A7DFEC3FCA";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent285";
	rename -uid "08FA525E-4A5A-AC6A-800B-7BA06BEB6C00";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent284";
	rename -uid "15B2C497-49A2-E108-0AB3-56984254ED0D";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent283";
	rename -uid "5D2C316C-4B47-A320-7948-3480774EB61F";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent282";
	rename -uid "75EC3DD5-4239-96C8-0AB7-E29C8EF7CCC9";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent281";
	rename -uid "1EDD0B69-4D9B-6673-7052-2590E20B59DF";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent280";
	rename -uid "8AAC27F9-4BEE-607E-E391-8287FB31C28F";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent279";
	rename -uid "FC893383-4726-D130-4872-699217080072";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent278";
	rename -uid "156B3B3D-4C54-3455-F630-97A2D6D36B26";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent277";
	rename -uid "6FCA8A08-40A4-9509-EA13-5DA0DA93DAF1";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode polyTweak -n "pasted__pasted__pasted__pasted__polyTweak61";
	rename -uid "BE5609DA-432A-C39B-7C77-E5A38F467A51";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk";
	setAttr ".tk[0]" -type "float3" -0.29600725 0 0.096178517 ;
	setAttr ".tk[1]" -type "float3" -0.25179875 0 0.18294246 ;
	setAttr ".tk[2]" -type "float3" -0.18294257 0 0.25179866 ;
	setAttr ".tk[3]" -type "float3" -0.096178584 0 0.29600713 ;
	setAttr ".tk[4]" -type "float3" -3.7102723e-008 0 0.31124029 ;
	setAttr ".tk[5]" -type "float3" 0.096178517 0 0.29600707 ;
	setAttr ".tk[6]" -type "float3" 0.18294245 0 0.25179866 ;
	setAttr ".tk[7]" -type "float3" 0.25179866 0 0.18294239 ;
	setAttr ".tk[8]" -type "float3" 0.29600707 0 0.096178472 ;
	setAttr ".tk[9]" -type "float3" 0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[10]" -type "float3" 0.29600707 0 -0.096178584 ;
	setAttr ".tk[11]" -type "float3" 0.25179863 0 -0.18294248 ;
	setAttr ".tk[12]" -type "float3" 0.18294239 0 -0.25179866 ;
	setAttr ".tk[13]" -type "float3" 0.096178502 0 -0.29600713 ;
	setAttr ".tk[14]" -type "float3" -2.7827044e-008 0 -0.31124029 ;
	setAttr ".tk[15]" -type "float3" -0.096178554 0 -0.29600707 ;
	setAttr ".tk[16]" -type "float3" -0.18294245 0 -0.25179866 ;
	setAttr ".tk[17]" -type "float3" -0.25179866 0 -0.18294248 ;
	setAttr ".tk[18]" -type "float3" -0.29600707 0 -0.096178569 ;
	setAttr ".tk[19]" -type "float3" -0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[40]" -type "float3" -3.7102723e-008 0 -5.5654088e-008 ;
createNode polyCylinder -n "pasted__pasted__pasted__pasted__polyCylinder22";
	rename -uid "D5C042FF-461A-9ABC-5250-EB931BE26A6E";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode polyCube -n "pasted__pasted__pasted__pasted__polyCube4";
	rename -uid "CFE679BC-4752-E640-3191-29B454BA71B8";
	setAttr ".cuv" 4;
createNode polyBevel3 -n "pasted__polyBevel14";
	rename -uid "CD45B9D1-4D1A-34BC-5B63-209E2C932ACE";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[40:59]";
	setAttr ".ix" -type "matrix" 1.5029107237823283 0 0 0 0 1.9276852709247334 0 0 0 0 1.5029107237823283 0
		 -0.016141186617254055 -0.46766010183134921 15.319371141803867 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.066225165624590895;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "pasted__polyTweak63";
	rename -uid "351EBCD6-4F03-571C-68CB-6796A17EC8C9";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk";
	setAttr ".tk[20]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[37]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[38]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[39]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[40]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[57]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[58]" -type "float3" 0 -0.38909867 0 ;
	setAttr ".tk[59]" -type "float3" 0 -0.38909867 0 ;
createNode polyPipe -n "pasted__polyPipe9";
	rename -uid "C52B3E0A-4478-C4FA-E39E-1AB418FBE265";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode polyCylinder -n "pasted__polyCylinder24";
	rename -uid "5D1D97B1-47E9-3A56-27E0-A086C23DF37F";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupParts -n "pasted__groupParts18";
	rename -uid "A591FF38-4212-CAC7-931D-1895A8E1FA02";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:459]";
createNode polyUnite -n "pasted__polyUnite6";
	rename -uid "0499A88F-4BB2-B253-F666-05AC87A8CFBE";
	setAttr -s 2 ".ip";
	setAttr -s 2 ".im";
createNode groupId -n "pasted__groupId26";
	rename -uid "3F2A219E-44FC-6688-2186-0D9F173EF61F";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts16";
	rename -uid "C169469E-4DC1-CA8D-7F39-10955EAB83C8";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polySphere -n "pasted__polySphere8";
	rename -uid "24FF0A8A-4068-4156-0731-42ABB713FE9B";
createNode groupId -n "pasted__groupId27";
	rename -uid "0739F143-475A-766B-38EE-01943B68F148";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId28";
	rename -uid "8CEC2EAB-4FE9-868C-F9F1-BE917B830B72";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts17";
	rename -uid "7AD2BEC8-4C50-91AF-A195-DDA53206967F";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__polyCylinder23";
	rename -uid "9254FEA4-4F34-7326-0AF7-E7BAC3E0AE65";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId29";
	rename -uid "D4212F2D-418A-A343-689E-64B665252E8A";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId30";
	rename -uid "2ABB2D73-4E6C-4845-A1F5-0C828B40D774";
	setAttr ".ihi" 0;
createNode polyUnite -n "polyUnite2";
	rename -uid "912F4971-4FFA-3423-32C9-D68E2D416D23";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupId -n "groupId10";
	rename -uid "D3CDBA3D-47C4-42BC-F4A5-91B5AA80BEA5";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts6";
	rename -uid "FBC1267B-49FD-F57F-3E10-8C97CCD8B01E";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode groupId -n "groupId11";
	rename -uid "D0661087-4EC3-E560-9191-1EAEA439B3B6";
	setAttr ".ihi" 0;
createNode groupId -n "groupId12";
	rename -uid "2A51EF72-4387-2FD2-633F-15AAC548969B";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts7";
	rename -uid "285B1177-4542-6473-CD4A-8A997476CADD";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode groupId -n "groupId13";
	rename -uid "E209CC24-439D-AB20-2262-95814F9EC744";
	setAttr ".ihi" 0;
createNode groupId -n "groupId14";
	rename -uid "2A6F5FB5-46E7-9F54-5006-81A6E9DB2E83";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts8";
	rename -uid "910A756F-4BA3-AD86-297A-CDBAEFF7FB10";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:91]";
createNode groupId -n "groupId15";
	rename -uid "06338EB1-4558-BECF-E6A9-7F86AF0961D2";
	setAttr ".ihi" 0;
createNode groupId -n "groupId16";
	rename -uid "F81BA699-4320-21B1-D869-F8994AEB4421";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts9";
	rename -uid "95105385-4272-C0BD-8932-6080F3466D59";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:692]";
createNode polyUnite -n "polyUnite3";
	rename -uid "FA1DA068-48E4-3E3E-58EE-CE825144D926";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupId -n "groupId17";
	rename -uid "B6447662-4FF5-7F2A-F59B-F8BB3146540C";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts10";
	rename -uid "349BDAA4-4706-F935-0138-3A81560C91B4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode groupId -n "groupId18";
	rename -uid "0698B51F-4C00-6C34-4838-36A09837CBFE";
	setAttr ".ihi" 0;
createNode groupId -n "groupId19";
	rename -uid "CC7B65BB-4790-D23F-8D8A-F7AB955687C5";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts11";
	rename -uid "95C88748-4861-7629-A145-C1879CBE47B0";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode groupId -n "groupId20";
	rename -uid "12843CF9-44CB-24ED-6FCF-54A15B67D3D6";
	setAttr ".ihi" 0;
createNode groupId -n "groupId21";
	rename -uid "32E0E6BE-4779-5EE8-EA22-E4AF44455CD0";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts12";
	rename -uid "9D0FE9B6-4D60-A4E7-FCC0-ECBA6D55C3B3";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:17]";
createNode groupId -n "groupId22";
	rename -uid "3284DEFC-4A1A-0363-5C6B-A284F1A90E4C";
	setAttr ".ihi" 0;
createNode groupId -n "groupId23";
	rename -uid "DCB129B2-466F-D627-FEE5-8CAABCE357B4";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts13";
	rename -uid "35198DF9-43DB-34B5-A357-32BB8B127A57";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:137]";
createNode polyCube -n "pasted__polyCube8";
	rename -uid "0858A9F0-43F2-C582-B8FA-A58D1ADFE071";
	setAttr ".cuv" 4;
createNode groupId -n "PuertaP:puertaobj:groupId1";
	rename -uid "F96846FA-44A1-BDE3-730C-7DB896B07951";
	setAttr ".ihi" 0;
createNode shadingEngine -n "PuertaP:puertaobj:___Default";
	rename -uid "831BFF9D-47BD-D541-B3A4-27AB1CD7DBA8";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "PuertaP:puertaobj:materialInfo1";
	rename -uid "EC02CBFF-4366-78FE-E729-568ACF0679DC";
createNode phong -n "PuertaP:puertaobj:___Default1";
	rename -uid "2D501C6C-474C-C8D0-A0A5-D8AC68BA36DB";
	setAttr ".rfi" 1.5;
	setAttr ".c" -type "float3" 0.58819997 0.58819997 0.58819997 ;
	setAttr ".ambc" -type "float3" 0.58819997 0.58819997 0.58819997 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".cp" 12;
createNode polyCube -n "pasted__pasted__pasted__polyCube4";
	rename -uid "E9ACEAD4-420E-6D5D-9E47-398E1D2B2898";
	setAttr ".cuv" 4;
createNode polyBevel3 -n "pasted__pasted__polyBevel3";
	rename -uid "2A25A5EB-4135-B2AD-15E2-6C8956284D11";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[58]" "e[62]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9477929170881572 6.8868889964308009 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.13245033124918179;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyBevel3 -n "pasted__pasted__polyBevel2";
	rename -uid "B5361D51-4330-C1CD-6D28-6FA7024D6C95";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[56]" "e[59]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9126324426542913 6.8028916642144051 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.09933774843688635;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace10";
	rename -uid "7EB79E47-4BFA-3CDC-C49B-2A8432DDE173";
	setAttr ".ics" -type "componentList" 1 "f[24]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 7.9381876 -2.5868127 ;
	setAttr ".rs" 32829;
	setAttr ".lt" -type "double3" -4.4408920985006262e-016 8.8817841970012523e-016 2.7051298293963999 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.9058462035469583 7.6020948135931627 -2.5868128047181895 ;
	setAttr ".cbx" -type "double3" -1.9210118901543185 8.2742807114203121 -2.5868128047181895 ;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace9";
	rename -uid "E5892B7C-4307-26B9-1D38-5FAE2AC58D9B";
	setAttr ".ics" -type "componentList" 1 "f[25]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 9.2449512 -3.536232 ;
	setAttr ".rs" 63492;
	setAttr ".lt" -type "double3" 8.8817841970012523e-016 -1.1102230246251565e-015 3.5765406179373329 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.905846322756247 9.1410929405768062 -3.8558753237916763 ;
	setAttr ".cbx" -type "double3" -1.9210118901543178 9.3488097930033351 -3.2165885672761729 ;
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder11";
	rename -uid "BCCF5CD5-4663-5ED3-E49F-3F948BA51ED1";
	setAttr ".ics" -type "componentList" 4 "e[24]" "e[31]" "e[38]" "e[45]";
createNode deleteComponent -n "pasted__pasted__deleteComponent63";
	rename -uid "F66E1460-447A-7945-107F-548E2A83DFB6";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent62";
	rename -uid "D1428490-47D2-A0CC-39C5-89BA5F78A75B";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent61";
	rename -uid "BD252D8C-4679-03C0-D4A1-848416E9D558";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent60";
	rename -uid "4944A167-4E69-8F93-FBC1-E996B5C20D41";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent59";
	rename -uid "ED5C8783-455E-8405-08A4-0D85E4BA2019";
	setAttr ".dc" -type "componentList" 3 "f[10:13]" "f[20:23]" "f[30:33]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder10";
	rename -uid "04FA60E0-446A-6C65-7027-77B8515B3E3F";
	setAttr ".ics" -type "componentList" 4 "e[50]" "e[61]" "e[72]" "e[83]";
createNode deleteComponent -n "pasted__pasted__deleteComponent58";
	rename -uid "A9F2AEB7-42A4-5466-DF5F-9E99A6B7E988";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent57";
	rename -uid "E7269D31-418F-CA63-F6DA-449CEE3C83F5";
	setAttr ".dc" -type "componentList" 1 "f[11]";
createNode deleteComponent -n "pasted__pasted__deleteComponent56";
	rename -uid "3994CF76-4063-C41B-2EF7-88AA54ADF18E";
	setAttr ".dc" -type "componentList" 5 "f[0:3]" "f[16:24]" "f[35:44]" "f[55:64]" "f[75:79]";
createNode polyPipe -n "pasted__pasted__pasted__polyPipe2";
	rename -uid "9AAAD6A4-4900-111D-E759-04B4CE774AD0";
	setAttr ".r" 1.3343708621605688;
	setAttr ".h" 5.9696688797225592;
	setAttr ".t" 0.67218543108028439;
createNode materialInfo -n "pasted__pasted__materialInfo2";
	rename -uid "2898C3C1-4158-676E-9D18-1F8317CC8BEB";
createNode shadingEngine -n "pasted__pasted__lambert2SG1";
	rename -uid "0B454979-402E-CC0C-49CE-49954BB733AF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode lambert -n "pasted__pasted__lambert3";
	rename -uid "3AB6C73A-4773-CAA5-88B0-D0802A4CB54A";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode polyBevel3 -n "pasted__pasted__polyBevel10";
	rename -uid "AB751C5B-43A2-BD87-21C0-ACAD947EFF22";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[9:17]" "e[45:53]" "e[100]" "e[109:110]" "e[119:120]" "e[129:130]" "e[139]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 5.8090034824113062 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 8;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 52.450331174675995;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace81";
	rename -uid "2AAD161E-4D10-403A-A2F3-759A07C4E891";
	setAttr ".ics" -type "componentList" 4 "f[54]" "f[62]" "f[81]" "f[89]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -4.6013827 4.9598875 0 ;
	setAttr ".rs" 32944;
	setAttr ".lt" -type "double3" 0 1.4264901524317174e-017 3.9357565948106084 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.888369347850507 4.9598873817917957 -2.5623676362336179 ;
	setAttr ".cbx" -type "double3" 1.6856041019746701 4.9598873817917957 2.5623676362336179 ;
createNode polyCube -n "pasted__pasted__polyCube5";
	rename -uid "0EBCAC66-409A-E3E9-1799-65BC15C8FC7D";
	setAttr ".sw" 9;
	setAttr ".sd" 4;
	setAttr ".cuv" 4;
createNode groupParts -n "pasted__groupParts9";
	rename -uid "001FCA02-442A-7BC4-191A-35971EC32B51";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:692]";
createNode polyUnite -n "pasted__polyUnite2";
	rename -uid "AADC3C97-41F8-2BEE-DA06-BB90A60F98F7";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__groupParts6";
	rename -uid "CBE371E0-4C0A-7DF6-9AB1-938091AB19D6";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polyTorus -n "pasted__pasted__polyTorus1";
	rename -uid "60F73172-4823-3B1B-9EC7-458796AAE624";
createNode groupId -n "pasted__groupId10";
	rename -uid "16D28D4E-468F-2710-E8F7-F5A2AA815ECD";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId31";
	rename -uid "8E23FBA9-49E5-13E3-CF75-C8B383835E00";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts19";
	rename -uid "E789C3A1-4399-5CE7-D0A7-389B25F97E3E";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__pasted__pasted__polyCloseBorder5";
	rename -uid "36992803-4E33-BA70-5269-DBAB4CFCEED3";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent28";
	rename -uid "1B5515CD-43B7-5753-AD25-249B47101625";
	setAttr ".dc" -type "componentList" 2 "f[180:207]" "f[228:247]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent27";
	rename -uid "266454D9-4E3D-A543-7F55-7795E6F7D475";
	setAttr ".dc" -type "componentList" 2 "f[180:319]" "f[324:335]";
createNode polySphere -n "pasted__pasted__pasted__pasted__pasted__polySphere3";
	rename -uid "BFFDB9F0-4FE5-2339-541F-018908DC371B";
createNode groupId -n "pasted__groupId32";
	rename -uid "C5856D10-43DA-72B7-67BB-BBB830C0E505";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId33";
	rename -uid "CC25611B-4A78-5156-DB55-62ACB7F0D168";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts20";
	rename -uid "BCEB7E69-4B20-1016-7D22-A196B663E519";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:91]";
createNode polyBevel3 -n "pasted__pasted__polyBevel8";
	rename -uid "16486479-4590-A7C3-9BED-3AAB6917D6FF";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[10:19]";
	setAttr ".ix" -type "matrix" 3.5502110675467176 0 0 0 0 3.5502110675467176 0 0 0 0 3.5502110675467176 0
		 -5.6236046379070874 7.018080396418755 -2.1305498808393377 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 5;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "pasted__pasted__polyTweak5";
	rename -uid "885209AA-4DB9-B5BF-2FDC-858474293B43";
	setAttr ".uopa" yes;
	setAttr -s 16 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[12]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[14]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[18]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[19]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[20]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[21]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[23]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[24]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[25]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[29]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[30]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[31]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[32]" -type "float3" 0 -0.62167114 0 ;
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder9";
	rename -uid "D7B1F71E-412B-FAB2-4613-828D81EA8CC4";
	setAttr ".ics" -type "componentList" 5 "e[40]" "e[50:51]" "e[61:62]" "e[72:73]" "e[83]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder8";
	rename -uid "EEDF0BC5-4052-92F2-53F0-B0A2FFFBF121";
	setAttr ".ics" -type "componentList" 4 "e[40]" "e[51]" "e[62]" "e[73]";
createNode deleteComponent -n "pasted__pasted__deleteComponent55";
	rename -uid "54BE4B41-4159-D785-4EBE-6EA23EEFF07D";
	setAttr ".dc" -type "componentList" 1 "f[40]";
createNode deleteComponent -n "pasted__pasted__deleteComponent54";
	rename -uid "2EF535C2-4D4C-66E7-7782-F992DE177688";
	setAttr ".dc" -type "componentList" 1 "f[41]";
createNode deleteComponent -n "pasted__pasted__deleteComponent53";
	rename -uid "9692021B-43EF-A725-BFEF-D8BE14109E46";
	setAttr ".dc" -type "componentList" 1 "f[42]";
createNode deleteComponent -n "pasted__pasted__deleteComponent52";
	rename -uid "E1447237-41C1-3CD4-7D74-EDAD0EEE934D";
	setAttr ".dc" -type "componentList" 4 "f[10:19]" "f[30:39]" "f[50:59]" "f[70:76]";
createNode polyPipe -n "pasted__pasted__polyPipe5";
	rename -uid "AB48E8DA-456E-0DAD-4FA7-8F9EA2899357";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode groupId -n "pasted__groupId34";
	rename -uid "3C2A6FCF-478E-F62A-71F3-2B8FAFE7E6E3";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId15";
	rename -uid "799C83CC-49E3-9EA3-7183-69BE6C4B9DB1";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId35";
	rename -uid "B36D8C31-4DE3-7911-71F1-159FAED533B9";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts23";
	rename -uid "85D0CA03-429D-1AA1-0B32-22980D3C29B4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:137]";
createNode polyUnite -n "pasted__polyUnite3";
	rename -uid "4CE729B4-4BDB-A04F-E911-A6B9082BE836";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__groupParts21";
	rename -uid "C90EBB17-4021-2E11-6298-6B9EEBE10A2E";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__pasted__polyCylinder4";
	rename -uid "323EF8BE-4753-224F-455A-7C8755821184";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId36";
	rename -uid "7E0F106E-461B-D0DB-D59B-E6AF4B66325E";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId37";
	rename -uid "E3D1CB5E-4C52-EA08-AB35-1BA84D9B0468";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts22";
	rename -uid "FE8BE8C6-4164-6FF5-4351-F5A436244403";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__polyCylinder12";
	rename -uid "3B2C0CA9-41FB-F50D-0F79-C88AD1232E56";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId38";
	rename -uid "DC593F4F-47F5-AF52-A2AA-94ABBB4B1901";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId20";
	rename -uid "DBAF76C6-44DB-FB29-149B-E896BD562C62";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts12";
	rename -uid "47AA7D60-4E6B-19F1-3CBB-B5BA000E44A0";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:17]";
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace14";
	rename -uid "40F23207-4C4A-642B-91A3-51A804EC36E1";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662912 ;
	setAttr ".rs" 37729;
	setAttr ".lt" -type "double3" 0 1.0705161645157078e-015 -0.82117619960703436 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.3583543235052096 16.391079373771881 4.0368509521522382 ;
	setAttr ".cbx" -type "double3" 11.034878466595636 16.391079373771881 6.2957319080390741 ;
createNode polyTweak -n "pasted__pasted__polyTweak9";
	rename -uid "6AC1C793-4860-8C59-C93C-588A58E26789";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[16:19]" -type "float3"  0.025123071 0 0.06070251 -0.025123071
		 0 0.06070251 -0.025123071 0 -0.06070251 0.025123071 0 -0.06070251;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace13";
	rename -uid "B5024D81-44FE-04DA-E844-298DC83E0E8B";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662908 ;
	setAttr ".rs" 46837;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.1288410662269941 16.391079373771881 3.8807832909472717 ;
	setAttr ".cbx" -type "double3" 11.264391451613225 16.391079373771881 6.4517983432885293 ;
createNode polyBevel3 -n "pasted__pasted__polyBevel13";
	rename -uid "0729CD4F-427D-4E98-4C79-DDBCE1CC7B44";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[1:2]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.52980132499672716;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyCube -n "pasted__pasted__polyCube6";
	rename -uid "168FFCF1-4D48-2F6A-4669-6DBE693DC0F8";
	setAttr ".cuv" 4;
createNode groupId -n "pasted__groupId39";
	rename -uid "A86CEBF8-4FE3-BE75-154D-E3B58E784F05";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId40";
	rename -uid "903941C2-450D-4D42-222D-01B426B971ED";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId41";
	rename -uid "96904C65-41D9-E045-6085-B8AA75CBE3E6";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts27";
	rename -uid "BE2580B6-4179-C2A6-C7B9-C2A857843F42";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:137]";
createNode polyUnite -n "pasted__polyUnite7";
	rename -uid "16F333D7-43FC-7C9D-F37A-AA8B5BA5B709";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__groupParts24";
	rename -uid "DA8502FD-4C3E-EC37-0C15-578F3BD4EF4E";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__pasted__polyCylinder23";
	rename -uid "83D13033-4FFF-4D61-8F38-6BA87AEA06F5";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId42";
	rename -uid "F4D5DC5A-4FA4-B20B-4DDC-439FC09B207B";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId43";
	rename -uid "A41B08E9-44A8-C16A-B077-84A36C233D72";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts25";
	rename -uid "41C008E0-4503-AF85-AE3E-3EBC4EC73CA6";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__polyCylinder23";
	rename -uid "D4F4B658-47A1-D9FD-3B4E-4A877430FEE2";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__groupId44";
	rename -uid "789D41D9-43EE-4DCA-5AC0-E59B1ECF0AB4";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId45";
	rename -uid "BEA4FA83-41C7-5DCE-4683-92ACEF97EBB1";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts26";
	rename -uid "36FC6E05-4E40-EEF7-CCC7-DDA11EDD70EB";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:17]";
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace83";
	rename -uid "1DD7FCB3-4881-A061-6BEA-B69A9DC0101B";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662912 ;
	setAttr ".rs" 37729;
	setAttr ".lt" -type "double3" 0 1.0705161645157078e-015 -0.82117619960703436 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.3583543235052096 16.391079373771881 4.0368509521522382 ;
	setAttr ".cbx" -type "double3" 11.034878466595636 16.391079373771881 6.2957319080390741 ;
createNode polyTweak -n "pasted__pasted__polyTweak63";
	rename -uid "08AABEEB-4C30-75A7-3446-75BC0245F5CF";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[16:19]" -type "float3"  0.025123071 0 0.06070251 -0.025123071
		 0 0.06070251 -0.025123071 0 -0.06070251 0.025123071 0 -0.06070251;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace82";
	rename -uid "FC5AC177-45C0-41D0-F2FA-6292B1761019";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662908 ;
	setAttr ".rs" 46837;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.1288410662269941 16.391079373771881 3.8807832909472717 ;
	setAttr ".cbx" -type "double3" 11.264391451613225 16.391079373771881 6.4517983432885293 ;
createNode polyBevel3 -n "pasted__pasted__polyBevel14";
	rename -uid "804DE075-4DF4-B83F-8BFD-C38B7EA5BD34";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[1:2]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.52980132499672716;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyCube -n "pasted__pasted__polyCube7";
	rename -uid "A8854455-44B6-8ECE-978C-69B39098C960";
	setAttr ".cuv" 4;
createNode groupId -n "pasted__groupId46";
	rename -uid "158F0861-4E2B-CEF4-D8D1-5C81C13AAFBF";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId47";
	rename -uid "52907F01-4D39-B2C7-5FDA-CEAE82B3D7A5";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId48";
	rename -uid "CB2CBA6F-4F04-C415-D776-569BA46C1F33";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts27";
	rename -uid "7884C8CE-479E-6360-4D1E-358B6245A267";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:137]";
createNode polyUnite -n "pasted__pasted__polyUnite7";
	rename -uid "C1F3D8FC-4846-645B-98D0-E981DBBB1026";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__pasted__groupParts24";
	rename -uid "A7D5B647-4B19-E6D4-E95A-1C86032C3A63";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__pasted__pasted__polyCylinder23";
	rename -uid "F339F00D-4D5C-243D-EBE7-0E81CE56E666";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__pasted__groupId42";
	rename -uid "3822D41D-4A3D-3A81-0EC0-7B8E8A04B71E";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId43";
	rename -uid "65169756-4F77-9C60-C653-31BED89834F6";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts25";
	rename -uid "1C17F82C-41B9-B0FE-68A0-C48395D536B7";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:59]";
createNode polyCylinder -n "pasted__pasted__pasted__polyCylinder24";
	rename -uid "2BD0A176-48D0-3151-C4C1-C3BD22B95ED8";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupId -n "pasted__pasted__groupId44";
	rename -uid "92E96858-4477-D8B1-D820-6D874A897041";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId45";
	rename -uid "B7BA4F67-4E64-F599-0125-9BBE68D0B6F7";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts26";
	rename -uid "B95F56A3-4119-EA97-E0AC-09A4B19E16B9";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:17]";
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace83";
	rename -uid "50D7C0A9-4DF9-3F9A-94A5-E2BB361EA4F0";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662912 ;
	setAttr ".rs" 37729;
	setAttr ".lt" -type "double3" 0 1.0705161645157078e-015 -0.82117619960703436 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.3583543235052096 16.391079373771881 4.0368509521522382 ;
	setAttr ".cbx" -type "double3" 11.034878466595636 16.391079373771881 6.2957319080390741 ;
createNode polyTweak -n "pasted__pasted__pasted__polyTweak63";
	rename -uid "F0B21D7D-4968-CB45-3E4C-FAA2426A7EA8";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[16:19]" -type "float3"  0.025123071 0 0.06070251 -0.025123071
		 0 0.06070251 -0.025123071 0 -0.06070251 0.025123071 0 -0.06070251;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace82";
	rename -uid "CEB193FC-4E4A-FAE0-A498-FE98DE5E3ADC";
	setAttr ".ics" -type "componentList" 1 "f[3]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 6.6966162 16.391079 5.1662908 ;
	setAttr ".rs" 46837;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.1288410662269941 16.391079373771881 3.8807832909472717 ;
	setAttr ".cbx" -type "double3" 11.264391451613225 16.391079373771881 6.4517983432885293 ;
createNode polyBevel3 -n "pasted__pasted__pasted__polyBevel14";
	rename -uid "A04DD60F-4212-7C77-AE4C-13AFF5B41047";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[1:2]";
	setAttr ".ix" -type "matrix" 9.1355506576468564 0 0 0 0 1.8521756668158338 0 0 0 0 2.5710150523412576 0
		 6.6966155782685446 17.317167207179796 5.1662895911623892 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.52980132499672716;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyCube -n "pasted__pasted__pasted__polyCube7";
	rename -uid "8116B77C-4E5E-37B3-4423-E49E0A6BCA0D";
	setAttr ".cuv" 4;
createNode groupId -n "pasted__pasted__groupId46";
	rename -uid "4BF73D34-4573-3F7C-8903-9CBBC0E08C21";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId47";
	rename -uid "67A17110-4F14-42B1-F00F-F2B6160BA8DC";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId48";
	rename -uid "9BDC7AEC-4DE5-BAAC-7888-82A465694887";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts31";
	rename -uid "93AE28DB-4262-552D-F020-1EAD00446DD7";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:692]";
createNode polyUnite -n "pasted__polyUnite8";
	rename -uid "9260DDEE-4B9E-B3AA-E68F-4D8527460D6B";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__groupParts28";
	rename -uid "14AE5D79-45A2-8254-0359-39993A2CA36F";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polyTorus -n "pasted__pasted__polyTorus2";
	rename -uid "5FC25ED5-47F5-61F0-C4C7-0D8C9E34071A";
createNode groupId -n "pasted__groupId49";
	rename -uid "385AA277-4311-6790-E817-C18C3F792656";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId50";
	rename -uid "D60929D6-4A99-557F-D2EA-B4A927000C02";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts29";
	rename -uid "410CE4BC-4B16-DEAD-563D-18812EB06343";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__pasted__pasted__polyCloseBorder6";
	rename -uid "139FBEF7-4937-3DF4-B53F-118D259F2E99";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent297";
	rename -uid "E63F975B-421C-3A9E-DD48-20B33508698A";
	setAttr ".dc" -type "componentList" 2 "f[180:207]" "f[228:247]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__deleteComponent296";
	rename -uid "13A5CBF4-4FC3-AFD8-0DE1-0185076FA884";
	setAttr ".dc" -type "componentList" 2 "f[180:319]" "f[324:335]";
createNode polySphere -n "pasted__pasted__pasted__pasted__pasted__polySphere4";
	rename -uid "71D96D8C-4C9F-A5CB-45F4-2A9A7E1715BE";
createNode groupId -n "pasted__groupId51";
	rename -uid "669A83C9-4128-A0BA-CE72-D08F789F6178";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId52";
	rename -uid "B26D3596-4612-C753-291D-E9BEBD102269";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__groupParts30";
	rename -uid "38A51BF6-4065-7B37-CE97-CD84FC76CC20";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:91]";
createNode polyBevel3 -n "pasted__pasted__polyBevel17";
	rename -uid "0F1C43AC-4B8E-5FA2-6993-19A5310CFD0A";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[10:19]";
	setAttr ".ix" -type "matrix" 3.5502110675467176 0 0 0 0 3.5502110675467176 0 0 0 0 3.5502110675467176 0
		 -5.6236046379070874 7.018080396418755 -2.1305498808393377 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 5;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "pasted__pasted__polyTweak64";
	rename -uid "244AE61F-4900-197C-FCA2-B3B29568E16A";
	setAttr ".uopa" yes;
	setAttr -s 16 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[12]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[14]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[18]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[19]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[20]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[21]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[23]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[24]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[25]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[29]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[30]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[31]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[32]" -type "float3" 0 -0.62167114 0 ;
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder13";
	rename -uid "483C13D6-4CC3-FD8C-8C65-A295F44ADE2C";
	setAttr ".ics" -type "componentList" 5 "e[40]" "e[50:51]" "e[61:62]" "e[72:73]" "e[83]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder12";
	rename -uid "2B178103-46FD-CC79-7C05-49B5B4D7AFF3";
	setAttr ".ics" -type "componentList" 4 "e[40]" "e[51]" "e[62]" "e[73]";
createNode deleteComponent -n "pasted__pasted__deleteComponent299";
	rename -uid "E12F8DB8-4AED-0E46-C6E6-9CB195A9F4F2";
	setAttr ".dc" -type "componentList" 1 "f[40]";
createNode deleteComponent -n "pasted__pasted__deleteComponent298";
	rename -uid "7CD7ED86-4C85-17C5-C0A4-51ADDE70996D";
	setAttr ".dc" -type "componentList" 1 "f[41]";
createNode deleteComponent -n "pasted__pasted__deleteComponent297";
	rename -uid "92F9E7E7-48C1-8AFF-0E2E-6798D1C484C3";
	setAttr ".dc" -type "componentList" 1 "f[42]";
createNode deleteComponent -n "pasted__pasted__deleteComponent296";
	rename -uid "20918113-4A65-26E0-3273-A5B5BDC1DC7B";
	setAttr ".dc" -type "componentList" 4 "f[10:19]" "f[30:39]" "f[50:59]" "f[70:76]";
createNode polyPipe -n "pasted__pasted__polyPipe6";
	rename -uid "02F52CC8-410A-0860-8BE7-65BBDA426732";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode groupId -n "pasted__groupId53";
	rename -uid "DDCDC337-4444-E3FE-152F-EEBF46E0917B";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId54";
	rename -uid "63C28662-4520-ACAB-0074-38A5BC66D2F3";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__groupId55";
	rename -uid "9525EBD7-4009-783B-179D-54991E423321";
	setAttr ".ihi" 0;
createNode polyBevel3 -n "pasted__pasted__polyBevel16";
	rename -uid "DF0A8164-46F3-CFC8-B1C8-6D8D156EB701";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[58]" "e[62]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9477929170881572 6.8868889964308009 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.13245033124918179;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyBevel3 -n "pasted__pasted__polyBevel15";
	rename -uid "914D63FD-465C-13C0-7D14-078D2AD7D3DA";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[56]" "e[59]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9126324426542913 6.8028916642144051 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.09933774843688635;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace86";
	rename -uid "55D8708A-418A-2231-8FF5-0B84A4C6D0EA";
	setAttr ".ics" -type "componentList" 1 "f[24]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 7.9381876 -2.5868127 ;
	setAttr ".rs" 32829;
	setAttr ".lt" -type "double3" -4.4408920985006262e-016 8.8817841970012523e-016 2.7051298293963999 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.9058462035469583 7.6020948135931627 -2.5868128047181895 ;
	setAttr ".cbx" -type "double3" -1.9210118901543185 8.2742807114203121 -2.5868128047181895 ;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace85";
	rename -uid "1F2561DF-4708-5496-5950-03AD49E42B34";
	setAttr ".ics" -type "componentList" 1 "f[25]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 9.2449512 -3.536232 ;
	setAttr ".rs" 63492;
	setAttr ".lt" -type "double3" 8.8817841970012523e-016 -1.1102230246251565e-015 3.5765406179373329 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.905846322756247 9.1410929405768062 -3.8558753237916763 ;
	setAttr ".cbx" -type "double3" -1.9210118901543178 9.3488097930033351 -3.2165885672761729 ;
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder15";
	rename -uid "94A3FA2F-47AB-3D21-6961-BDB327BBCCC1";
	setAttr ".ics" -type "componentList" 4 "e[24]" "e[31]" "e[38]" "e[45]";
createNode deleteComponent -n "pasted__pasted__deleteComponent307";
	rename -uid "54CD9686-4137-DF52-2444-29AA18E68166";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent306";
	rename -uid "EFC0A108-4597-B1EB-EBC6-97AFDCBC77F3";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent305";
	rename -uid "A4AAE8B5-4009-B6F9-1801-A08F48710EAA";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent304";
	rename -uid "77F860AE-4B8F-1D3A-4520-BD9BC752CA8E";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent303";
	rename -uid "85D093EC-4617-2B7A-C0A0-78A668A5CD1C";
	setAttr ".dc" -type "componentList" 3 "f[10:13]" "f[20:23]" "f[30:33]";
createNode polyCloseBorder -n "pasted__pasted__polyCloseBorder14";
	rename -uid "8AE170AD-4934-74D9-ACD3-FEBA9A0F7F2C";
	setAttr ".ics" -type "componentList" 4 "e[50]" "e[61]" "e[72]" "e[83]";
createNode deleteComponent -n "pasted__pasted__deleteComponent302";
	rename -uid "F0C4EDE5-488C-D95C-BFE7-4AB67D266512";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__deleteComponent301";
	rename -uid "F02D3704-49CE-1B02-8BDE-05A2B2EA3103";
	setAttr ".dc" -type "componentList" 1 "f[11]";
createNode deleteComponent -n "pasted__pasted__deleteComponent300";
	rename -uid "D7FA5D6A-48BD-A8F9-245C-85BA44E8E58B";
	setAttr ".dc" -type "componentList" 5 "f[0:3]" "f[16:24]" "f[35:44]" "f[55:64]" "f[75:79]";
createNode polyPipe -n "pasted__pasted__pasted__polyPipe3";
	rename -uid "32791A74-4C4D-6B00-C6FB-4796E40A1145";
	setAttr ".r" 1.3343708621605688;
	setAttr ".h" 5.9696688797225592;
	setAttr ".t" 0.67218543108028439;
createNode materialInfo -n "pasted__pasted__materialInfo3";
	rename -uid "4ED664C1-4D5C-8720-4B3E-6C9F36B8A11F";
createNode shadingEngine -n "pasted__pasted__lambert2SG2";
	rename -uid "899ABE9A-4B5F-1718-41CC-829B8AA6DD4C";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode lambert -n "pasted__pasted__lambert4";
	rename -uid "D3D513BB-4D7C-AE29-9C1A-7EB4F45F530D";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode polyBevel3 -n "pasted__pasted__polyBevel18";
	rename -uid "D0794F40-41E3-E191-FF4B-408320F24CD2";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[9:17]" "e[45:53]" "e[100]" "e[109:110]" "e[119:120]" "e[129:130]" "e[139]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 5.8090034824113062 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 8;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 52.450331174675995;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace84";
	rename -uid "2255761E-48C9-7CD2-D496-55B78014AD54";
	setAttr ".ics" -type "componentList" 4 "f[54]" "f[62]" "f[81]" "f[89]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -4.6013827 4.9598875 0 ;
	setAttr ".rs" 32944;
	setAttr ".lt" -type "double3" 0 1.4264901524317174e-017 3.9357565948106084 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.888369347850507 4.9598873817917957 -2.5623676362336179 ;
	setAttr ".cbx" -type "double3" 1.6856041019746701 4.9598873817917957 2.5623676362336179 ;
createNode polyCube -n "pasted__pasted__polyCube8";
	rename -uid "6EECFCA1-41AC-EB31-BE96-76990A95E037";
	setAttr ".sw" 9;
	setAttr ".sd" 4;
	setAttr ".cuv" 4;
createNode nodeGraphEditorInfo -n "hyperShadePrimaryNodeEditorSavedTabsInfo";
	rename -uid "5E1627CC-44DC-6D18-2F92-329B904A110E";
	setAttr ".tgi[0].tn" -type "string" "Untitled_1";
	setAttr ".tgi[0].vl" -type "double2" -140.47618489416843 -178.57142147563781 ;
	setAttr ".tgi[0].vh" -type "double2" 135.71428032148472 184.52380219149242 ;
	setAttr -s 2 ".tgi[0].ni";
	setAttr ".tgi[0].ni[0].x" 262.85714721679687;
	setAttr ".tgi[0].ni[0].y" -65.714286804199219;
	setAttr ".tgi[0].ni[0].nvs" 1923;
	setAttr ".tgi[0].ni[1].x" 1.4285714626312256;
	setAttr ".tgi[0].ni[1].y" -1.4285714626312256;
	setAttr ".tgi[0].ni[1].nvs" 1923;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace88";
	rename -uid "A8209882-447A-CE2A-003E-D78D88CC49B8";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166151 8.0027885 46.676289 ;
	setAttr ".rs" 37284;
	setAttr ".lt" -type "double3" 0 -3.4686736042553261e-015 -0.52327497779976007 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.5009668022186773 8.002788536867449 45.791936495320201 ;
	setAttr ".cbx" -type "double3" -2.7322631031067388 8.002788536867449 47.56063983680427 ;
createNode polyTweak -n "pasted__pasted__polyTweak66";
	rename -uid "4170DED7-4592-FCA0-6C5E-31B144F628C7";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[41:60]" -type "float3"  -2.7572714e-008 0 -0.11564834
		 -0.035737325 0 -0.10998821 -0.067976415 0 -0.0935615 -0.0935615 0 -0.067976221 -0.10998813
		 0 -0.035737325 -0.11564837 0 0 -0.10998821 0 0.035737325 -0.09356159 0 0.067976221
		 -0.067976467 0 0.0935615 -0.035737354 0 0.10998821 -2.7572714e-008 0 0.11564834 0.035737298
		 0 0.10998821 0.067976356 0 0.0935615 0.093561471 0 0.067976221 0.10998813 0 0.035737325
		 0.11564837 0 0 0.10998813 0 -0.035737325 0.093561471 0 -0.067976221 0.067976356 0
		 -0.0935615 0.035737298 0 -0.10998821;
createNode polyExtrudeFace -n "pasted__pasted__polyExtrudeFace87";
	rename -uid "F8E6456B-4425-2D56-1E0B-B49B9DCEDB83";
	setAttr ".ics" -type "componentList" 1 "f[40]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 -3.6166147142441289 7.0027880600302908 46.676288166062236 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.6166148 8.0027876 46.676289 ;
	setAttr ".rs" 62231;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.616614952662708 8.0027880600302908 45.676287689225077 ;
	setAttr ".cbx" -type "double3" -2.6166147142441289 8.0027880600302908 47.676288285271525 ;
createNode deleteComponent -n "pasted__pasted__deleteComponent326";
	rename -uid "8C25C7AC-4F77-1BB1-BE46-439AF1CCDDC6";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent325";
	rename -uid "B82DA60E-4A8A-27C4-DFD5-C5AA1A1C54C9";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent324";
	rename -uid "6BC060B8-45BD-5210-3BA8-B48907A568D4";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent323";
	rename -uid "A68DE5BD-4CE5-B41E-DD47-51A42F681CB6";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent322";
	rename -uid "045157AC-47CA-5DEA-0807-B3B80DE99C63";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent321";
	rename -uid "58A40072-45C1-FAF9-E5B5-D7A962EE8E17";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent320";
	rename -uid "FA64868A-498B-0AC4-DF26-078B5DEE6D50";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent319";
	rename -uid "43A3BFC4-4F91-B5B6-F512-10A107822299";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent318";
	rename -uid "E5738E3E-4266-829E-8E96-BB902242F597";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent317";
	rename -uid "F905A044-4C66-E896-7AE3-C1BB13415673";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent316";
	rename -uid "C91C3E61-40D3-BDC2-6224-92B82AD833F7";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent315";
	rename -uid "78C10607-4EBB-AE71-27A6-8FA4539B45B8";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent314";
	rename -uid "8F058276-4F05-5E04-82A7-1398B21C5F5C";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent313";
	rename -uid "22434D56-48C1-7D1C-8FE9-ABB985C63EF2";
	setAttr ".dc" -type "componentList" 1 "e[80]";
createNode deleteComponent -n "pasted__pasted__deleteComponent312";
	rename -uid "3904FB09-4EF4-3B1B-875F-D0975C555BAF";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__deleteComponent311";
	rename -uid "FB335C3B-418E-A3BE-9C93-3CB3D187B89C";
	setAttr ".dc" -type "componentList" 1 "e[95]";
createNode deleteComponent -n "pasted__pasted__deleteComponent310";
	rename -uid "B9A4DF5F-459F-C3EF-6192-CCA163142252";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__deleteComponent309";
	rename -uid "3C62E012-484B-AA81-91E7-79947D32C17C";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode deleteComponent -n "pasted__pasted__deleteComponent308";
	rename -uid "E07BEDA5-4AA6-0D5F-93CD-CCA565AD8278";
	setAttr ".dc" -type "componentList" 1 "e[97]";
createNode polyTweak -n "pasted__pasted__polyTweak65";
	rename -uid "9FB6F29E-4ECA-9679-07C6-B1AE63762164";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk";
	setAttr ".tk[0]" -type "float3" -0.29600725 0 0.096178517 ;
	setAttr ".tk[1]" -type "float3" -0.25179875 0 0.18294246 ;
	setAttr ".tk[2]" -type "float3" -0.18294257 0 0.25179866 ;
	setAttr ".tk[3]" -type "float3" -0.096178584 0 0.29600713 ;
	setAttr ".tk[4]" -type "float3" -3.7102723e-008 0 0.31124029 ;
	setAttr ".tk[5]" -type "float3" 0.096178517 0 0.29600707 ;
	setAttr ".tk[6]" -type "float3" 0.18294245 0 0.25179866 ;
	setAttr ".tk[7]" -type "float3" 0.25179866 0 0.18294239 ;
	setAttr ".tk[8]" -type "float3" 0.29600707 0 0.096178472 ;
	setAttr ".tk[9]" -type "float3" 0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[10]" -type "float3" 0.29600707 0 -0.096178584 ;
	setAttr ".tk[11]" -type "float3" 0.25179863 0 -0.18294248 ;
	setAttr ".tk[12]" -type "float3" 0.18294239 0 -0.25179866 ;
	setAttr ".tk[13]" -type "float3" 0.096178502 0 -0.29600713 ;
	setAttr ".tk[14]" -type "float3" -2.7827044e-008 0 -0.31124029 ;
	setAttr ".tk[15]" -type "float3" -0.096178554 0 -0.29600707 ;
	setAttr ".tk[16]" -type "float3" -0.18294245 0 -0.25179866 ;
	setAttr ".tk[17]" -type "float3" -0.25179866 0 -0.18294248 ;
	setAttr ".tk[18]" -type "float3" -0.29600707 0 -0.096178569 ;
	setAttr ".tk[19]" -type "float3" -0.31124023 0 -5.5654088e-008 ;
	setAttr ".tk[40]" -type "float3" -3.7102723e-008 0 -5.5654088e-008 ;
createNode polyCylinder -n "pasted__pasted__polyCylinder24";
	rename -uid "8718E86E-4419-CA44-3950-569563B8B34D";
	setAttr ".sc" 1;
	setAttr ".cuv" 3;
createNode groupParts -n "pasted__pasted__groupParts31";
	rename -uid "6116696B-4E69-C817-EFB2-46965CA93D49";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:692]";
createNode polyUnite -n "pasted__pasted__polyUnite8";
	rename -uid "CC54617E-4F6B-211C-1E16-1C800D1F1753";
	setAttr -s 3 ".ip";
	setAttr -s 3 ".im";
createNode groupParts -n "pasted__pasted__groupParts28";
	rename -uid "C41D8D49-4E76-74AE-5EA9-1BBCFB0C5AF1";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:399]";
createNode polyTorus -n "pasted__pasted__pasted__polyTorus2";
	rename -uid "66F6B560-440D-186E-80F9-4A88D3B4CBB0";
createNode groupId -n "pasted__pasted__groupId49";
	rename -uid "9F0596B2-4531-8047-7562-8C83BFBD7E8A";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId50";
	rename -uid "426946DC-448F-3CAC-4EFF-E6B762A279F7";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts29";
	rename -uid "FE91C5A8-4E5A-0530-D687-49B0A4F80266";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:200]";
createNode polyCloseBorder -n "pasted__pasted__pasted__pasted__pasted__polyCloseBorder6";
	rename -uid "759985EA-4571-72A0-1023-5F88E354BEC3";
	setAttr ".ics" -type "componentList" 1 "e[180:199]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__pasted__deleteComponent297";
	rename -uid "ED29432E-4665-3A27-71DC-EC892C8CA446";
	setAttr ".dc" -type "componentList" 2 "f[180:207]" "f[228:247]";
createNode deleteComponent -n "pasted__pasted__pasted__pasted__pasted__deleteComponent296";
	rename -uid "8DD2E391-46CE-3674-B71E-7191DDBC4C8C";
	setAttr ".dc" -type "componentList" 2 "f[180:319]" "f[324:335]";
createNode polySphere -n "pasted__pasted__pasted__pasted__pasted__pasted__polySphere4";
	rename -uid "E531ED51-407E-7F7D-156E-05BB820C0126";
createNode groupId -n "pasted__pasted__groupId51";
	rename -uid "F7D77C57-41C1-4CC0-9DC7-268A48500BA2";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId52";
	rename -uid "96F108FF-43FC-7920-1649-7D98044975C5";
	setAttr ".ihi" 0;
createNode groupParts -n "pasted__pasted__groupParts30";
	rename -uid "A2632A8C-449F-B968-C693-F88D44C77E26";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:91]";
createNode polyBevel3 -n "pasted__pasted__pasted__polyBevel17";
	rename -uid "CE26D3D8-4583-FCC4-BF95-319AD5316B9A";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[10:19]";
	setAttr ".ix" -type "matrix" 3.5502110675467176 0 0 0 0 3.5502110675467176 0 0 0 0 3.5502110675467176 0
		 -5.6236046379070874 7.018080396418755 -2.1305498808393377 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 5;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyTweak -n "pasted__pasted__pasted__polyTweak64";
	rename -uid "8F366D4D-4036-CAB5-76F3-31BE64B7805C";
	setAttr ".uopa" yes;
	setAttr -s 16 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[12]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[14]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[18]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[19]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[20]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[21]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.62167114 0 ;
	setAttr ".tk[23]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[24]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[25]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[29]" -type "float3" 0 -0.0903375 0 ;
	setAttr ".tk[30]" -type "float3" 0 -0.2389871 0 ;
	setAttr ".tk[31]" -type "float3" 0 -0.42711037 0 ;
	setAttr ".tk[32]" -type "float3" 0 -0.62167114 0 ;
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder13";
	rename -uid "1E48AE85-4D80-032C-33CE-F0ABDE825DC9";
	setAttr ".ics" -type "componentList" 5 "e[40]" "e[50:51]" "e[61:62]" "e[72:73]" "e[83]";
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder12";
	rename -uid "AC2234D7-489B-BD90-77F8-4D9A60F050F7";
	setAttr ".ics" -type "componentList" 4 "e[40]" "e[51]" "e[62]" "e[73]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent299";
	rename -uid "0F986BB2-4B1F-5959-4838-0D9092064721";
	setAttr ".dc" -type "componentList" 1 "f[40]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent298";
	rename -uid "E23D0215-4713-18F6-834C-CCAC95B315C4";
	setAttr ".dc" -type "componentList" 1 "f[41]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent297";
	rename -uid "E83C7344-42CB-E3A2-C488-A086BAB7225F";
	setAttr ".dc" -type "componentList" 1 "f[42]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent296";
	rename -uid "F7A5F9B6-4875-D1BC-1D4A-F4856866750D";
	setAttr ".dc" -type "componentList" 4 "f[10:19]" "f[30:39]" "f[50:59]" "f[70:76]";
createNode polyPipe -n "pasted__pasted__pasted__polyPipe6";
	rename -uid "F42E9E7C-41C2-C9BD-90A1-C2BC9CD6A73F";
	setAttr ".t" 0.1;
	setAttr ".sc" 0;
createNode groupId -n "pasted__pasted__groupId53";
	rename -uid "227F2129-414B-20EF-DCBB-74A915CC80A7";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId54";
	rename -uid "FB84812A-4BD2-72D9-6F44-D7A0D8F3CC5A";
	setAttr ".ihi" 0;
createNode groupId -n "pasted__pasted__groupId55";
	rename -uid "E559FD22-41B1-64FA-BEDB-DCACACC6930F";
	setAttr ".ihi" 0;
createNode polyBevel3 -n "pasted__pasted__pasted__polyBevel16";
	rename -uid "8FA84379-4CF0-4ED0-95FD-2398F54E2910";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[58]" "e[62]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9477929170881572 6.8868889964308009 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.13245033124918179;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyBevel3 -n "pasted__pasted__pasted__polyBevel15";
	rename -uid "FA814DFD-4773-C198-DB8E-F3B85788F28E";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[56]" "e[59]";
	setAttr ".ix" -type "matrix" 0 2.7503253115534048e-017 0.49545456193038229 0 -1.4064558101482287 7.8073981177219562e-016 1.5614796235443914e-016 0
		 -4.929474845111291e-016 -0.68308864847924422 0 0 -2.9126324426542913 6.8028916642144051 4.7429559786303859 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.09933774843688635;
	setAttr ".sg" 2;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 30;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace86";
	rename -uid "664B14A5-44DF-0DD6-9C05-DD96C75B6033";
	setAttr ".ics" -type "componentList" 1 "f[24]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 7.9381876 -2.5868127 ;
	setAttr ".rs" 32829;
	setAttr ".lt" -type "double3" -4.4408920985006262e-016 8.8817841970012523e-016 2.7051298293963999 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.9058462035469583 7.6020948135931627 -2.5868128047181895 ;
	setAttr ".cbx" -type "double3" -1.9210118901543185 8.2742807114203121 -2.5868128047181895 ;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace85";
	rename -uid "4E8034A8-4071-E6A2-529F-20B2D8363609";
	setAttr ".ics" -type "componentList" 1 "f[25]";
	setAttr ".ix" -type "matrix" 0 5.5511151231257839e-017 1.0000000000000002 0 -1.0000000000000002 5.5511151231257827e-016 1.1102230246251568e-016 0
		 -7.2164496600635195e-016 -1 0 0 -3.4134291064552826 8.9364663803656246 -2.5868128047181895 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -3.413429 9.2449512 -3.536232 ;
	setAttr ".rs" 63492;
	setAttr ".lt" -type "double3" 8.8817841970012523e-016 -1.1102230246251565e-015 3.5765406179373329 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.905846322756247 9.1410929405768062 -3.8558753237916763 ;
	setAttr ".cbx" -type "double3" -1.9210118901543178 9.3488097930033351 -3.2165885672761729 ;
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder15";
	rename -uid "20C7E054-47A2-883B-6542-C396EA6CC94C";
	setAttr ".ics" -type "componentList" 4 "e[24]" "e[31]" "e[38]" "e[45]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent307";
	rename -uid "C62E2271-4F4C-98F2-DF53-A8A49228BF60";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent306";
	rename -uid "AD121AE0-4AFE-2294-4A0C-DB81020EE5BE";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent305";
	rename -uid "6FD5A512-4E8C-C875-AB77-5AB0D8901E29";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent304";
	rename -uid "1F5458EB-4EB9-1188-1FD6-799B515C46DC";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent303";
	rename -uid "B979583A-480D-12ED-CB8F-C6966EEC9734";
	setAttr ".dc" -type "componentList" 3 "f[10:13]" "f[20:23]" "f[30:33]";
createNode polyCloseBorder -n "pasted__pasted__pasted__polyCloseBorder14";
	rename -uid "9C7349A8-4B0F-A39F-AFE3-AE8FE33D224A";
	setAttr ".ics" -type "componentList" 4 "e[50]" "e[61]" "e[72]" "e[83]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent302";
	rename -uid "2F99E784-42C5-BAEA-7C0E-43813EA5A955";
	setAttr ".dc" -type "componentList" 1 "f[0]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent301";
	rename -uid "D36A5938-40BE-2E9D-50F9-AA83151155C8";
	setAttr ".dc" -type "componentList" 1 "f[11]";
createNode deleteComponent -n "pasted__pasted__pasted__deleteComponent300";
	rename -uid "D638D29C-4B84-E61D-2958-50926CB75A44";
	setAttr ".dc" -type "componentList" 5 "f[0:3]" "f[16:24]" "f[35:44]" "f[55:64]" "f[75:79]";
createNode polyPipe -n "pasted__pasted__pasted__pasted__polyPipe3";
	rename -uid "54F9B8B1-4BC6-2229-25D1-08AD72C1B362";
	setAttr ".r" 1.3343708621605688;
	setAttr ".h" 5.9696688797225592;
	setAttr ".t" 0.67218543108028439;
createNode materialInfo -n "pasted__pasted__pasted__materialInfo3";
	rename -uid "47B513A1-42D0-EB0E-3458-8AAE2377C994";
createNode shadingEngine -n "pasted__pasted__pasted__lambert2SG2";
	rename -uid "3944D601-4CA4-26CA-9272-F88CD4F11AA7";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode lambert -n "pasted__pasted__pasted__lambert4";
	rename -uid "BFA82EA7-49A4-DE82-F097-AB88C3B1D621";
	setAttr ".it" -type "float3" 0.28455284 0.28455284 0.28455284 ;
createNode polyBevel3 -n "pasted__pasted__pasted__polyBevel18";
	rename -uid "75FE9C85-40FF-8990-45F2-6983D3FBE667";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[9:17]" "e[45:53]" "e[100]" "e[109:110]" "e[119:120]" "e[129:130]" "e[139]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 5.8090034824113062 1;
	setAttr ".ws" yes;
	setAttr ".o" 0.16556291406147725;
	setAttr ".sg" 8;
	setAttr ".at" 180;
	setAttr ".fn" yes;
	setAttr ".mv" yes;
	setAttr ".mvt" 0.0001;
	setAttr ".sa" 52.450331174675995;
	setAttr ".ma" 180;
createNode polyExtrudeFace -n "pasted__pasted__pasted__polyExtrudeFace84";
	rename -uid "6080499B-42B6-3AA9-244A-5597D6FBD981";
	setAttr ".ics" -type "componentList" 4 "f[54]" "f[62]" "f[81]" "f[89]";
	setAttr ".ix" -type "matrix" 12.573973824558799 0 0 0 0 0.96431395389020125 0 0 0 0 5.1247352724672357 0
		 -4.6013824355711073 5.4420443587368963 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -4.6013827 4.9598875 0 ;
	setAttr ".rs" 32944;
	setAttr ".lt" -type "double3" 0 1.4264901524317174e-017 3.9357565948106084 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -10.888369347850507 4.9598873817917957 -2.5623676362336179 ;
	setAttr ".cbx" -type "double3" 1.6856041019746701 4.9598873817917957 2.5623676362336179 ;
createNode polyCube -n "pasted__pasted__pasted__polyCube8";
	rename -uid "E33554B9-4449-B335-F46D-0C9043221340";
	setAttr ".sw" 9;
	setAttr ".sd" 4;
	setAttr ".cuv" 4;
createNode lambert -n "lambert3";
	rename -uid "69522F9A-425C-1478-9BD0-ECBC5CD33042";
	setAttr ".it" -type "float3" 0.70731705 0.70731705 0.70731705 ;
createNode shadingEngine -n "lambert3SG";
	rename -uid "171467A1-45AC-8F84-D68D-4483420DF495";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "196BA45F-448A-8EE9-AD9A-3187B7BE9A05";
select -ne :time1;
	setAttr ".o" 1;
	setAttr ".unw" 1;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 10 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 12 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 125 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 98 ".gn";
select -ne :initialParticleSE;
	setAttr ".ro" yes;
select -ne :defaultResolution;
	setAttr ".pa" 1;
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
connectAttr "groupId3.id" "pSphereShape1.iog.og[1].gid";
connectAttr ":initialShadingGroup.mwc" "pSphereShape1.iog.og[1].gco";
connectAttr "groupParts2.og" "pSphereShape1.i";
connectAttr "groupId4.id" "pSphereShape1.ciog.cog[1].cgid";
connectAttr "groupParts1.og" "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.i"
		;
connectAttr "groupId1.id" "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.iog.og[0].gco"
		;
connectAttr "groupId2.id" "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId3.id" "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.iog.og[1].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.iog.og[1].gco"
		;
connectAttr "pasted__groupParts2.og" "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.i"
		;
connectAttr "pasted__groupId4.id" "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.ciog.cog[1].cgid"
		;
connectAttr "pasted__groupParts1.og" "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.i"
		;
connectAttr "pasted__groupId1.id" "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.iog.og[0].gco"
		;
connectAttr "pasted__groupId2.id" "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupId3.id" "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.iog.og[1].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.iog.og[1].gco"
		;
connectAttr "pasted__pasted__groupParts2.og" "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.i"
		;
connectAttr "pasted__pasted__groupId4.id" "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.ciog.cog[1].cgid"
		;
connectAttr "pasted__pasted__groupParts1.og" "pasted__pasted__pasted__pSphereShape1.i"
		;
connectAttr "pasted__pasted__groupId1.id" "pasted__pasted__pasted__pSphereShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pSphereShape1.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId2.id" "pasted__pasted__pasted__pSphereShape1.ciog.cog[0].cgid"
		;
connectAttr "groupId5.id" "pSphereShape3.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pSphereShape3.iog.og[0].gco";
connectAttr "groupParts3.og" "pSphereShape3.i";
connectAttr "groupId6.id" "pSphereShape3.ciog.cog[0].cgid";
connectAttr "groupId7.id" "pCylinderShape2.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCylinderShape2.iog.og[0].gco";
connectAttr "groupParts4.og" "pCylinderShape2.i";
connectAttr "groupId8.id" "pCylinderShape2.ciog.cog[0].cgid";
connectAttr "pasted__groupId6.id" "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__groupParts4.og" "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.i"
		;
connectAttr "pasted__groupId7.id" "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId8.id" "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupParts5.og" "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.i"
		;
connectAttr "pasted__groupId9.id" "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "polyCube3.out" "pCubeShape3.i";
connectAttr "pasted__polyCube3.out" "|group17|pasted__pCube3|pasted__pCubeShape3.i"
		;
connectAttr "pasted__pasted__polyCube3.out" "pasted__pasted__pCubeShape3.i";
connectAttr "pasted__pasted__pasted__polyCube3.out" "|group19|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pCubeShape3.i"
		;
connectAttr "pasted__pasted__pasted__pasted__polyCube3.out" "|group20|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pasted__pCubeShape3.i"
		;
connectAttr "groupParts7.og" "pasted__pasted__pasted__pasted__pSphereShape2.i";
connectAttr "groupId12.id" "pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gco"
		;
connectAttr "groupId13.id" "pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0].cgid"
		;
connectAttr "groupParts8.og" "pasted__pPipeShape2.i";
connectAttr "groupId14.id" "pasted__pPipeShape2.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pPipeShape2.iog.og[0].gco";
connectAttr "groupId15.id" "pasted__pPipeShape2.ciog.cog[0].cgid";
connectAttr "groupParts6.og" "pasted__pTorusShape1.i";
connectAttr "groupId10.id" "pasted__pTorusShape1.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pTorusShape1.iog.og[0].gco";
connectAttr "groupId11.id" "pasted__pTorusShape1.ciog.cog[0].cgid";
connectAttr "pasted__polyBevel9.out" "pasted__pCubeShape1.i";
connectAttr "pasted__polyBevel3.out" "pasted__pasted__pPipeShape1.i";
connectAttr "pasted__polyBevel10.out" "pasted__pCylinderShape1.i";
connectAttr "pasted__groupId11.id" "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__groupParts7.og" "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.i"
		;
connectAttr "pasted__groupId12.id" "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId13.id" "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupParts8.og" "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.i"
		;
connectAttr "pasted__groupId14.id" "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId16.id" "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__groupParts10.og" "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.i"
		;
connectAttr "pasted__groupId17.id" "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId18.id" "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupParts11.og" "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.i"
		;
connectAttr "pasted__groupId19.id" "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "polyBevel6.out" "pPipeShape3.i";
connectAttr "groupParts5.og" "pSphere4Shape.i";
connectAttr "groupId9.id" "pSphere4Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pSphere4Shape.iog.og[0].gco";
connectAttr "polyCylinder3.out" "pCylinderShape3.i";
connectAttr "pasted__groupId21.id" "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__groupParts13.og" "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.i"
		;
connectAttr "pasted__groupId22.id" "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId23.id" "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupParts14.og" "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.i"
		;
connectAttr "pasted__groupId24.id" "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupId16.id" "pasted__pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupParts10.og" "pasted__pasted__pSphereShape3.i";
connectAttr "pasted__pasted__groupId17.id" "pasted__pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupId18.id" "pasted__pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupParts11.og" "pasted__pasted__pCylinderShape2.i"
		;
connectAttr "pasted__pasted__groupId19.id" "pasted__pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "groupParts12.og" "pasted__pCubeShape2.i";
connectAttr "groupId21.id" "pasted__pCubeShape2.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pCubeShape2.iog.og[0].gco";
connectAttr "groupId22.id" "pasted__pCubeShape2.ciog.cog[0].cgid";
connectAttr "groupParts11.og" "pasted__pCylinderShape4.i";
connectAttr "groupId19.id" "pasted__pCylinderShape4.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pCylinderShape4.iog.og[0].gco";
connectAttr "groupId20.id" "pasted__pCylinderShape4.ciog.cog[0].cgid";
connectAttr "groupParts10.og" "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.i"
		;
connectAttr "groupId17.id" "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "groupId18.id" "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__deleteComponent236.og" "pasted__pCylinderShape8.i";
connectAttr "pasted__polyExtrudeFace64.out" "pasted__pCylinderShape9.i";
connectAttr "pasted__polyExtrudeFace66.out" "pasted__pCubeShape4.i";
connectAttr "pasted__pasted__polyBevel9.out" "|group38|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.i"
		;
connectAttr "pasted__polyExtrudeFace75.out" "pasted__pCylinderShape5.i";
connectAttr "pasted__polyExtrudeFace78.out" "pasted__pCylinderShape6.i";
connectAttr "pasted__polyExtrudeFace80.out" "pasted__pCylinderShape7.i";
connectAttr "pasted__pasted__polyExtrudeFace80.out" "|group40|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.i"
		;
connectAttr "pasted__pasted__pasted__polyExtrudeFace80.out" "pasted__pasted__pasted__pCylinderShape7.i"
		;
connectAttr "pasted__pasted__pasted__pasted__polyExtrudeFace80.out" "pasted__pasted__pasted__pasted__pCylinderShape7.i"
		;
connectAttr "pasted__groupId26.id" "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0].gco"
		;
connectAttr "pasted__groupParts16.og" "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.i"
		;
connectAttr "pasted__groupId27.id" "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupId28.id" "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupParts17.og" "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.i"
		;
connectAttr "pasted__groupId29.id" "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__pasted__pasted__polyCube4.out" "|group43|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pasted__pCubeShape3.i"
		;
connectAttr "pasted__polyBevel14.out" "pasted__pPipeShape3.i";
connectAttr "pasted__groupParts18.og" "pasted__pSphere4Shape.i";
connectAttr "pasted__groupId30.id" "pasted__pSphere4Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pSphere4Shape.iog.og[0].gco";
connectAttr "pasted__polyCylinder24.out" "pasted__pCylinderShape3.i";
connectAttr "groupParts9.og" "pasted__pTorus1Shape.i";
connectAttr "groupId16.id" "pasted__pTorus1Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pTorus1Shape.iog.og[0].gco";
connectAttr "groupParts13.og" "pasted__pasted__pCylinder4Shape.i";
connectAttr "groupId23.id" "pasted__pasted__pCylinder4Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pCylinder4Shape.iog.og[0].gco"
		;
connectAttr "pasted__polyCube8.out" "|group44|pasted__pCube3|pasted__pCubeShape3.i"
		;
connectAttr "PuertaP:puertaobj:groupId1.id" "PuertaP:puertaobj:SlidingDoor001Shape.iog.og[0].gid"
		;
connectAttr "PuertaP:puertaobj:___Default.mwc" "PuertaP:puertaobj:SlidingDoor001Shape.iog.og[0].gco"
		;
connectAttr "pasted__pasted__pasted__polyCube4.out" "|group46|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pCubeShape3.i"
		;
connectAttr "pasted__groupParts19.og" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.i"
		;
connectAttr "pasted__groupId32.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId33.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts20.og" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.i"
		;
connectAttr "pasted__groupId34.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId15.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts6.og" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.i"
		;
connectAttr "pasted__groupId10.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0].gco"
		;
connectAttr "pasted__groupId31.id" "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__polyBevel10.out" "|group47|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.i"
		;
connectAttr "pasted__pasted__polyBevel3.out" "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.i"
		;
connectAttr "pasted__groupParts9.og" "|group47|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.i"
		;
connectAttr "pasted__groupId35.id" "|group47|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group47|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0].gco"
		;
connectAttr "pasted__groupParts12.og" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.i"
		;
connectAttr "pasted__groupId39.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId40.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts22.og" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__groupId38.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__groupId20.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts21.og" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__groupId36.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__groupId37.id" "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts23.og" "|group48|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.i"
		;
connectAttr "pasted__groupId41.id" "|group48|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group48|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gco"
		;
connectAttr "pasted__groupParts26.og" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.i"
		;
connectAttr "pasted__groupId46.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId47.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts25.og" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__groupId44.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__groupId45.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts24.og" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__groupId42.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__groupId43.id" "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts27.og" "|group49|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.i"
		;
connectAttr "pasted__groupId48.id" "|group49|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group49|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupParts26.og" "pasted__pasted__pasted__pCubeShape2.i"
		;
connectAttr "pasted__pasted__groupId46.id" "pasted__pasted__pasted__pCubeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pCubeShape2.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId47.id" "pasted__pasted__pasted__pCubeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupParts25.og" "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__pasted__groupId44.id" "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId45.id" "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupParts24.og" "pasted__pasted__pasted__pasted__pCylinderShape4.i"
		;
connectAttr "pasted__pasted__groupId42.id" "pasted__pasted__pasted__pasted__pCylinderShape4.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pasted__pCylinderShape4.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId43.id" "pasted__pasted__pasted__pasted__pCylinderShape4.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupParts27.og" "pasted__pasted__pasted__pasted__pCylinder4Shape.i"
		;
connectAttr "pasted__pasted__groupId48.id" "pasted__pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pasted__pCylinder4Shape.iog.og[0].gco"
		;
connectAttr "pasted__groupParts29.og" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.i"
		;
connectAttr "pasted__groupId51.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId52.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts30.og" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.i"
		;
connectAttr "pasted__groupId53.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0].gco"
		;
connectAttr "pasted__groupId54.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__groupParts28.og" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.i"
		;
connectAttr "pasted__groupId49.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0].gco"
		;
connectAttr "pasted__groupId50.id" "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__polyBevel18.out" "|group51|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.i"
		;
connectAttr "pasted__pasted__polyBevel16.out" "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.i"
		;
connectAttr "pasted__groupParts31.og" "|group51|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.i"
		;
connectAttr "pasted__groupId55.id" "|group51|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "|group51|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0].gco"
		;
connectAttr "pasted__pasted__polyExtrudeFace88.out" "|group52|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.i"
		;
connectAttr "pasted__pasted__groupParts29.og" "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.i"
		;
connectAttr "pasted__pasted__groupId51.id" "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId52.id" "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupParts30.og" "pasted__pasted__pasted__pPipeShape2.i"
		;
connectAttr "pasted__pasted__groupId53.id" "pasted__pasted__pasted__pPipeShape2.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pPipeShape2.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId54.id" "pasted__pasted__pasted__pPipeShape2.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__groupParts28.og" "pasted__pasted__pasted__pTorusShape1.i"
		;
connectAttr "pasted__pasted__groupId49.id" "pasted__pasted__pasted__pTorusShape1.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pTorusShape1.iog.og[0].gco"
		;
connectAttr "pasted__pasted__groupId50.id" "pasted__pasted__pasted__pTorusShape1.ciog.cog[0].cgid"
		;
connectAttr "pasted__pasted__pasted__polyBevel18.out" "pasted__pasted__pasted__pCubeShape1.i"
		;
connectAttr "pasted__pasted__pasted__polyBevel16.out" "pasted__pasted__pasted__pasted__pPipeShape1.i"
		;
connectAttr "pasted__pasted__groupParts31.og" "pasted__pasted__pasted__pTorus1Shape.i"
		;
connectAttr "pasted__pasted__groupId55.id" "pasted__pasted__pasted__pTorus1Shape.iog.og[0].gid"
		;
connectAttr ":initialShadingGroup.mwc" "pasted__pasted__pasted__pTorus1Shape.iog.og[0].gco"
		;
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "pasted__lambert2SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "pasted__lambert2SG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "PuertaP:puertaobj:___Default.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "pasted__pasted__lambert2SG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "pasted__pasted__lambert2SG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "pasted__pasted__pasted__lambert2SG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "pasted__lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "pasted__lambert2SG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "PuertaP:puertaobj:___Default.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "pasted__pasted__lambert2SG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "pasted__pasted__lambert2SG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "pasted__pasted__pasted__lambert2SG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr ":TurtleDefaultBakeLayer.idx" ":TurtleBakeLayerManager.bli[0]";
connectAttr ":TurtleRenderOptions.msg" ":TurtleDefaultBakeLayer.rset";
connectAttr "lambert2.oc" "lambert2SG.ss";
connectAttr "lambert2SG.msg" "materialInfo1.sg";
connectAttr "lambert2.msg" "materialInfo1.m";
connectAttr "pasted__lambert2SG.msg" "pasted__materialInfo1.sg";
connectAttr "pasted__lambert2.msg" "pasted__materialInfo1.m";
connectAttr "pasted__lambert2.oc" "pasted__lambert2SG.ss";
connectAttr "polySphere1.out" "deleteComponent9.ig";
connectAttr "deleteComponent9.og" "deleteComponent10.ig";
connectAttr "deleteComponent10.og" "deleteComponent11.ig";
connectAttr "deleteComponent11.og" "deleteComponent12.ig";
connectAttr "deleteComponent12.og" "deleteComponent13.ig";
connectAttr "deleteComponent13.og" "deleteComponent14.ig";
connectAttr "deleteComponent14.og" "deleteComponent15.ig";
connectAttr "deleteComponent15.og" "deleteComponent16.ig";
connectAttr "deleteComponent16.og" "deleteComponent17.ig";
connectAttr "deleteComponent17.og" "polyCloseBorder3.ip";
connectAttr "pasted__deleteComponent17.og" "pasted__polyCloseBorder3.ip";
connectAttr "pasted__deleteComponent16.og" "pasted__deleteComponent17.ig";
connectAttr "pasted__deleteComponent15.og" "pasted__deleteComponent16.ig";
connectAttr "pasted__deleteComponent14.og" "pasted__deleteComponent15.ig";
connectAttr "pasted__deleteComponent13.og" "pasted__deleteComponent14.ig";
connectAttr "pasted__deleteComponent12.og" "pasted__deleteComponent13.ig";
connectAttr "pasted__deleteComponent11.og" "pasted__deleteComponent12.ig";
connectAttr "pasted__deleteComponent10.og" "pasted__deleteComponent11.ig";
connectAttr "pasted__deleteComponent9.og" "pasted__deleteComponent10.ig";
connectAttr "pasted__polySphere1.out" "pasted__deleteComponent9.ig";
connectAttr "pasted__polyCloseBorder3.out" "groupParts1.ig";
connectAttr "groupId1.id" "groupParts1.gi";
connectAttr "polyCloseBorder3.out" "groupParts2.ig";
connectAttr "groupId3.id" "groupParts2.gi";
connectAttr "pasted__pasted__polyCloseBorder3.out" "pasted__groupParts1.ig";
connectAttr "pasted__groupId1.id" "pasted__groupParts1.gi";
connectAttr "pasted__pasted__deleteComponent17.og" "pasted__pasted__polyCloseBorder3.ip"
		;
connectAttr "pasted__pasted__deleteComponent16.og" "pasted__pasted__deleteComponent17.ig"
		;
connectAttr "pasted__pasted__deleteComponent15.og" "pasted__pasted__deleteComponent16.ig"
		;
connectAttr "pasted__pasted__deleteComponent14.og" "pasted__pasted__deleteComponent15.ig"
		;
connectAttr "pasted__pasted__deleteComponent13.og" "pasted__pasted__deleteComponent14.ig"
		;
connectAttr "pasted__pasted__deleteComponent12.og" "pasted__pasted__deleteComponent13.ig"
		;
connectAttr "pasted__pasted__deleteComponent11.og" "pasted__pasted__deleteComponent12.ig"
		;
connectAttr "pasted__pasted__deleteComponent10.og" "pasted__pasted__deleteComponent11.ig"
		;
connectAttr "pasted__pasted__deleteComponent9.og" "pasted__pasted__deleteComponent10.ig"
		;
connectAttr "pasted__pasted__polySphere1.out" "pasted__pasted__deleteComponent9.ig"
		;
connectAttr "pasted__polyCloseBorder4.out" "pasted__groupParts2.ig";
connectAttr "pasted__groupId3.id" "pasted__groupParts2.gi";
connectAttr "pasted__deleteComponent26.og" "pasted__polyCloseBorder4.ip";
connectAttr "pasted__deleteComponent25.og" "pasted__deleteComponent26.ig";
connectAttr "pasted__deleteComponent24.og" "pasted__deleteComponent25.ig";
connectAttr "pasted__deleteComponent23.og" "pasted__deleteComponent24.ig";
connectAttr "pasted__deleteComponent22.og" "pasted__deleteComponent23.ig";
connectAttr "pasted__deleteComponent21.og" "pasted__deleteComponent22.ig";
connectAttr "pasted__deleteComponent20.og" "pasted__deleteComponent21.ig";
connectAttr "pasted__deleteComponent19.og" "pasted__deleteComponent20.ig";
connectAttr "pasted__deleteComponent18.og" "pasted__deleteComponent19.ig";
connectAttr "pasted__polySphere2.out" "pasted__deleteComponent18.ig";
connectAttr "pasted__pasted__pasted__polyCloseBorder3.out" "pasted__pasted__groupParts1.ig"
		;
connectAttr "pasted__pasted__groupId1.id" "pasted__pasted__groupParts1.gi";
connectAttr "pasted__pasted__pasted__deleteComponent17.og" "pasted__pasted__pasted__polyCloseBorder3.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent16.og" "pasted__pasted__pasted__deleteComponent17.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent15.og" "pasted__pasted__pasted__deleteComponent16.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent14.og" "pasted__pasted__pasted__deleteComponent15.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent13.og" "pasted__pasted__pasted__deleteComponent14.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent12.og" "pasted__pasted__pasted__deleteComponent13.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent11.og" "pasted__pasted__pasted__deleteComponent12.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent10.og" "pasted__pasted__pasted__deleteComponent11.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent9.og" "pasted__pasted__pasted__deleteComponent10.ig"
		;
connectAttr "pasted__pasted__pasted__polySphere1.out" "pasted__pasted__pasted__deleteComponent9.ig"
		;
connectAttr "pasted__pasted__polyCloseBorder4.out" "pasted__pasted__groupParts2.ig"
		;
connectAttr "pasted__pasted__groupId3.id" "pasted__pasted__groupParts2.gi";
connectAttr "pasted__pasted__deleteComponent26.og" "pasted__pasted__polyCloseBorder4.ip"
		;
connectAttr "pasted__pasted__deleteComponent25.og" "pasted__pasted__deleteComponent26.ig"
		;
connectAttr "pasted__pasted__deleteComponent24.og" "pasted__pasted__deleteComponent25.ig"
		;
connectAttr "pasted__pasted__deleteComponent23.og" "pasted__pasted__deleteComponent24.ig"
		;
connectAttr "pasted__pasted__deleteComponent22.og" "pasted__pasted__deleteComponent23.ig"
		;
connectAttr "pasted__pasted__deleteComponent21.og" "pasted__pasted__deleteComponent22.ig"
		;
connectAttr "pasted__pasted__deleteComponent20.og" "pasted__pasted__deleteComponent21.ig"
		;
connectAttr "pasted__pasted__deleteComponent19.og" "pasted__pasted__deleteComponent20.ig"
		;
connectAttr "pasted__pasted__deleteComponent18.og" "pasted__pasted__deleteComponent19.ig"
		;
connectAttr "pasted__pasted__polySphere2.out" "pasted__pasted__deleteComponent18.ig"
		;
connectAttr "pSphereShape3.o" "polyUnite1.ip[0]";
connectAttr "pCylinderShape2.o" "polyUnite1.ip[1]";
connectAttr "pSphereShape3.wm" "polyUnite1.im[0]";
connectAttr "pCylinderShape2.wm" "polyUnite1.im[1]";
connectAttr "polySphere3.out" "groupParts3.ig";
connectAttr "groupId5.id" "groupParts3.gi";
connectAttr "polyCylinder2.out" "groupParts4.ig";
connectAttr "groupId7.id" "groupParts4.gi";
connectAttr "polyUnite1.out" "groupParts5.ig";
connectAttr "groupId9.id" "groupParts5.gi";
connectAttr "pasted__polySphere4.out" "pasted__groupParts4.ig";
connectAttr "pasted__groupId6.id" "pasted__groupParts4.gi";
connectAttr "pasted__polyCylinder2.out" "pasted__groupParts5.ig";
connectAttr "pasted__groupId8.id" "pasted__groupParts5.gi";
connectAttr "polyTweak3.out" "polyBevel6.ip";
connectAttr "pPipeShape3.wm" "polyBevel6.mp";
connectAttr "polyPipe3.out" "polyTweak3.ip";
connectAttr "pasted__pasted__pasted__deleteComponent28.og" "pasted__pasted__pasted__polyCloseBorder5.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent27.og" "pasted__pasted__pasted__deleteComponent28.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__polySphere3.out" "pasted__pasted__pasted__deleteComponent27.ig"
		;
connectAttr "pasted__polyTweak5.out" "pasted__polyBevel8.ip";
connectAttr "pasted__pPipeShape2.wm" "pasted__polyBevel8.mp";
connectAttr "pasted__polyCloseBorder9.out" "pasted__polyTweak5.ip";
connectAttr "pasted__polyCloseBorder8.out" "pasted__polyCloseBorder9.ip";
connectAttr "pasted__deleteComponent55.og" "pasted__polyCloseBorder8.ip";
connectAttr "pasted__deleteComponent54.og" "pasted__deleteComponent55.ig";
connectAttr "pasted__deleteComponent53.og" "pasted__deleteComponent54.ig";
connectAttr "pasted__deleteComponent52.og" "pasted__deleteComponent53.ig";
connectAttr "pasted__polyPipe5.out" "pasted__deleteComponent52.ig";
connectAttr "pasted__polyExtrudeFace8.out" "pasted__polyBevel9.ip";
connectAttr "pasted__pCubeShape1.wm" "pasted__polyBevel9.mp";
connectAttr "pasted__polyCube4.out" "pasted__polyExtrudeFace8.ip";
connectAttr "pasted__pCubeShape1.wm" "pasted__polyExtrudeFace8.mp";
connectAttr "pasted__polyBevel2.out" "pasted__polyBevel3.ip";
connectAttr "pasted__pasted__pPipeShape1.wm" "pasted__polyBevel3.mp";
connectAttr "pasted__polyExtrudeFace10.out" "pasted__polyBevel2.ip";
connectAttr "pasted__pasted__pPipeShape1.wm" "pasted__polyBevel2.mp";
connectAttr "pasted__polyExtrudeFace9.out" "pasted__polyExtrudeFace10.ip";
connectAttr "pasted__pasted__pPipeShape1.wm" "pasted__polyExtrudeFace10.mp";
connectAttr "pasted__polyCloseBorder11.out" "pasted__polyExtrudeFace9.ip";
connectAttr "pasted__pasted__pPipeShape1.wm" "pasted__polyExtrudeFace9.mp";
connectAttr "pasted__deleteComponent63.og" "pasted__polyCloseBorder11.ip";
connectAttr "pasted__deleteComponent62.og" "pasted__deleteComponent63.ig";
connectAttr "pasted__deleteComponent61.og" "pasted__deleteComponent62.ig";
connectAttr "pasted__deleteComponent60.og" "pasted__deleteComponent61.ig";
connectAttr "pasted__deleteComponent59.og" "pasted__deleteComponent60.ig";
connectAttr "pasted__polyCloseBorder10.out" "pasted__deleteComponent59.ig";
connectAttr "pasted__deleteComponent58.og" "pasted__polyCloseBorder10.ip";
connectAttr "pasted__deleteComponent57.og" "pasted__deleteComponent58.ig";
connectAttr "pasted__deleteComponent56.og" "pasted__deleteComponent57.ig";
connectAttr "pasted__pasted__polyPipe2.out" "pasted__deleteComponent56.ig";
connectAttr "pasted__lambert2SG1.msg" "pasted__materialInfo2.sg";
connectAttr "pasted__lambert3.msg" "pasted__materialInfo2.m";
connectAttr "pasted__lambert3.oc" "pasted__lambert2SG1.ss";
connectAttr "pasted__pasted__pPipeShape1.iog" "pasted__lambert2SG1.dsm" -na;
connectAttr "pasted__polyExtrudeFace12.out" "pasted__polyBevel10.ip";
connectAttr "pasted__pCylinderShape1.wm" "pasted__polyBevel10.mp";
connectAttr "pasted__polyTweak6.out" "pasted__polyExtrudeFace12.ip";
connectAttr "pasted__pCylinderShape1.wm" "pasted__polyExtrudeFace12.mp";
connectAttr "pasted__polyExtrudeFace11.out" "pasted__polyTweak6.ip";
connectAttr "pasted__deleteComponent82.og" "pasted__polyExtrudeFace11.ip";
connectAttr "pasted__pCylinderShape1.wm" "pasted__polyExtrudeFace11.mp";
connectAttr "pasted__deleteComponent81.og" "pasted__deleteComponent82.ig";
connectAttr "pasted__deleteComponent80.og" "pasted__deleteComponent81.ig";
connectAttr "pasted__deleteComponent79.og" "pasted__deleteComponent80.ig";
connectAttr "pasted__deleteComponent78.og" "pasted__deleteComponent79.ig";
connectAttr "pasted__deleteComponent77.og" "pasted__deleteComponent78.ig";
connectAttr "pasted__deleteComponent76.og" "pasted__deleteComponent77.ig";
connectAttr "pasted__deleteComponent75.og" "pasted__deleteComponent76.ig";
connectAttr "pasted__deleteComponent74.og" "pasted__deleteComponent75.ig";
connectAttr "pasted__deleteComponent73.og" "pasted__deleteComponent74.ig";
connectAttr "pasted__deleteComponent72.og" "pasted__deleteComponent73.ig";
connectAttr "pasted__deleteComponent71.og" "pasted__deleteComponent72.ig";
connectAttr "pasted__deleteComponent70.og" "pasted__deleteComponent71.ig";
connectAttr "pasted__deleteComponent69.og" "pasted__deleteComponent70.ig";
connectAttr "pasted__deleteComponent68.og" "pasted__deleteComponent69.ig";
connectAttr "pasted__deleteComponent67.og" "pasted__deleteComponent68.ig";
connectAttr "pasted__deleteComponent66.og" "pasted__deleteComponent67.ig";
connectAttr "pasted__deleteComponent65.og" "pasted__deleteComponent66.ig";
connectAttr "pasted__deleteComponent64.og" "pasted__deleteComponent65.ig";
connectAttr "pasted__polySplitRing2.out" "pasted__deleteComponent64.ig";
connectAttr "pasted__polyCylinder5.out" "pasted__polySplitRing2.ip";
connectAttr "pasted__pCylinderShape1.wm" "pasted__polySplitRing2.mp";
connectAttr "pasted__polySphere5.out" "pasted__groupParts7.ig";
connectAttr "pasted__groupId11.id" "pasted__groupParts7.gi";
connectAttr "pasted__polyCylinder6.out" "pasted__groupParts8.ig";
connectAttr "pasted__groupId13.id" "pasted__groupParts8.gi";
connectAttr "pasted__polySphere6.out" "pasted__groupParts10.ig";
connectAttr "pasted__groupId16.id" "pasted__groupParts10.gi";
connectAttr "pasted__polyCylinder8.out" "pasted__groupParts11.ig";
connectAttr "pasted__groupId18.id" "pasted__groupParts11.gi";
connectAttr "pasted__polySphere7.out" "pasted__groupParts13.ig";
connectAttr "pasted__groupId21.id" "pasted__groupParts13.gi";
connectAttr "pasted__polyCylinder10.out" "pasted__groupParts14.ig";
connectAttr "pasted__groupId23.id" "pasted__groupParts14.gi";
connectAttr "pasted__pasted__polySphere6.out" "pasted__pasted__groupParts10.ig";
connectAttr "pasted__pasted__groupId16.id" "pasted__pasted__groupParts10.gi";
connectAttr "pasted__pasted__polyCylinder8.out" "pasted__pasted__groupParts11.ig"
		;
connectAttr "pasted__pasted__groupId18.id" "pasted__pasted__groupParts11.gi";
connectAttr "pasted__polyTweak9.out" "pasted__polyExtrudeFace14.ip";
connectAttr "pasted__pCubeShape2.wm" "pasted__polyExtrudeFace14.mp";
connectAttr "pasted__polyExtrudeFace13.out" "pasted__polyTweak9.ip";
connectAttr "pasted__polyBevel13.out" "pasted__polyExtrudeFace13.ip";
connectAttr "pasted__pCubeShape2.wm" "pasted__polyExtrudeFace13.mp";
connectAttr "pasted__polyCube5.out" "pasted__polyBevel13.ip";
connectAttr "pasted__pCubeShape2.wm" "pasted__polyBevel13.mp";
connectAttr "pasted__polyTweak49.out" "pasted__polyExtrudeFace64.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace64.mp";
connectAttr "pasted__polyExtrudeFace63.out" "pasted__polyTweak49.ip";
connectAttr "pasted__polyTweak48.out" "pasted__polyExtrudeFace63.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace63.mp";
connectAttr "pasted__polyExtrudeFace62.out" "pasted__polyTweak48.ip";
connectAttr "pasted__polyTweak47.out" "pasted__polyExtrudeFace62.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace62.mp";
connectAttr "pasted__polyExtrudeFace61.out" "pasted__polyTweak47.ip";
connectAttr "pasted__polyTweak46.out" "pasted__polyExtrudeFace61.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace61.mp";
connectAttr "pasted__polyExtrudeFace60.out" "pasted__polyTweak46.ip";
connectAttr "pasted__polyTweak45.out" "pasted__polyExtrudeFace60.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace60.mp";
connectAttr "pasted__polyExtrudeFace59.out" "pasted__polyTweak45.ip";
connectAttr "pasted__polyTweak44.out" "pasted__polyExtrudeFace59.ip";
connectAttr "pasted__pCylinderShape9.wm" "pasted__polyExtrudeFace59.mp";
connectAttr "pasted__deleteComponent217.og" "pasted__polyTweak44.ip";
connectAttr "pasted__deleteComponent216.og" "pasted__deleteComponent217.ig";
connectAttr "pasted__deleteComponent215.og" "pasted__deleteComponent216.ig";
connectAttr "pasted__deleteComponent214.og" "pasted__deleteComponent215.ig";
connectAttr "pasted__deleteComponent213.og" "pasted__deleteComponent214.ig";
connectAttr "pasted__deleteComponent212.og" "pasted__deleteComponent213.ig";
connectAttr "pasted__deleteComponent211.og" "pasted__deleteComponent212.ig";
connectAttr "pasted__deleteComponent210.og" "pasted__deleteComponent211.ig";
connectAttr "pasted__deleteComponent209.og" "pasted__deleteComponent210.ig";
connectAttr "pasted__deleteComponent208.og" "pasted__deleteComponent209.ig";
connectAttr "pasted__deleteComponent207.og" "pasted__deleteComponent208.ig";
connectAttr "pasted__deleteComponent206.og" "pasted__deleteComponent207.ig";
connectAttr "pasted__deleteComponent205.og" "pasted__deleteComponent206.ig";
connectAttr "pasted__deleteComponent204.og" "pasted__deleteComponent205.ig";
connectAttr "pasted__deleteComponent203.og" "pasted__deleteComponent204.ig";
connectAttr "pasted__deleteComponent202.og" "pasted__deleteComponent203.ig";
connectAttr "pasted__deleteComponent201.og" "pasted__deleteComponent202.ig";
connectAttr "pasted__deleteComponent200.og" "pasted__deleteComponent201.ig";
connectAttr "pasted__deleteComponent199.og" "pasted__deleteComponent200.ig";
connectAttr "pasted__polyCylinder19.out" "pasted__deleteComponent199.ig";
connectAttr "pasted__deleteComponent235.og" "pasted__deleteComponent236.ig";
connectAttr "pasted__deleteComponent234.og" "pasted__deleteComponent235.ig";
connectAttr "pasted__deleteComponent233.og" "pasted__deleteComponent234.ig";
connectAttr "pasted__deleteComponent232.og" "pasted__deleteComponent233.ig";
connectAttr "pasted__deleteComponent231.og" "pasted__deleteComponent232.ig";
connectAttr "pasted__deleteComponent230.og" "pasted__deleteComponent231.ig";
connectAttr "pasted__deleteComponent229.og" "pasted__deleteComponent230.ig";
connectAttr "pasted__deleteComponent228.og" "pasted__deleteComponent229.ig";
connectAttr "pasted__deleteComponent227.og" "pasted__deleteComponent228.ig";
connectAttr "pasted__deleteComponent226.og" "pasted__deleteComponent227.ig";
connectAttr "pasted__deleteComponent225.og" "pasted__deleteComponent226.ig";
connectAttr "pasted__deleteComponent224.og" "pasted__deleteComponent225.ig";
connectAttr "pasted__deleteComponent223.og" "pasted__deleteComponent224.ig";
connectAttr "pasted__deleteComponent222.og" "pasted__deleteComponent223.ig";
connectAttr "pasted__deleteComponent221.og" "pasted__deleteComponent222.ig";
connectAttr "pasted__deleteComponent220.og" "pasted__deleteComponent221.ig";
connectAttr "pasted__deleteComponent219.og" "pasted__deleteComponent220.ig";
connectAttr "pasted__deleteComponent218.og" "pasted__deleteComponent219.ig";
connectAttr "pasted__polyTweak52.out" "pasted__deleteComponent218.ig";
connectAttr "pasted__polyExtrudeFace58.out" "pasted__polyTweak52.ip";
connectAttr "pasted__polyTweak43.out" "pasted__polyExtrudeFace58.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace58.mp";
connectAttr "pasted__polyExtrudeFace57.out" "pasted__polyTweak43.ip";
connectAttr "pasted__polyTweak42.out" "pasted__polyExtrudeFace57.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace57.mp";
connectAttr "pasted__polyExtrudeFace56.out" "pasted__polyTweak42.ip";
connectAttr "pasted__polyTweak41.out" "pasted__polyExtrudeFace56.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace56.mp";
connectAttr "pasted__polyExtrudeFace55.out" "pasted__polyTweak41.ip";
connectAttr "pasted__polyTweak40.out" "pasted__polyExtrudeFace55.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace55.mp";
connectAttr "pasted__polyExtrudeFace54.out" "pasted__polyTweak40.ip";
connectAttr "pasted__polyExtrudeFace53.out" "pasted__polyExtrudeFace54.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace54.mp";
connectAttr "pasted__polyTweak39.out" "pasted__polyExtrudeFace53.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace53.mp";
connectAttr "pasted__polyExtrudeFace52.out" "pasted__polyTweak39.ip";
connectAttr "pasted__polyTweak38.out" "pasted__polyExtrudeFace52.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace52.mp";
connectAttr "pasted__polyExtrudeFace51.out" "pasted__polyTweak38.ip";
connectAttr "pasted__polyExtrudeFace50.out" "pasted__polyExtrudeFace51.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace51.mp";
connectAttr "pasted__polyTweak37.out" "pasted__polyExtrudeFace50.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace50.mp";
connectAttr "pasted__polyExtrudeFace49.out" "pasted__polyTweak37.ip";
connectAttr "pasted__polyTweak36.out" "pasted__polyExtrudeFace49.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace49.mp";
connectAttr "pasted__polyExtrudeFace48.out" "pasted__polyTweak36.ip";
connectAttr "pasted__deleteComponent198.og" "pasted__polyExtrudeFace48.ip";
connectAttr "pasted__pCylinderShape8.wm" "pasted__polyExtrudeFace48.mp";
connectAttr "pasted__deleteComponent197.og" "pasted__deleteComponent198.ig";
connectAttr "pasted__deleteComponent196.og" "pasted__deleteComponent197.ig";
connectAttr "pasted__deleteComponent195.og" "pasted__deleteComponent196.ig";
connectAttr "pasted__deleteComponent194.og" "pasted__deleteComponent195.ig";
connectAttr "pasted__deleteComponent193.og" "pasted__deleteComponent194.ig";
connectAttr "pasted__deleteComponent192.og" "pasted__deleteComponent193.ig";
connectAttr "pasted__deleteComponent191.og" "pasted__deleteComponent192.ig";
connectAttr "pasted__deleteComponent190.og" "pasted__deleteComponent191.ig";
connectAttr "pasted__deleteComponent189.og" "pasted__deleteComponent190.ig";
connectAttr "pasted__deleteComponent188.og" "pasted__deleteComponent189.ig";
connectAttr "pasted__deleteComponent187.og" "pasted__deleteComponent188.ig";
connectAttr "pasted__deleteComponent186.og" "pasted__deleteComponent187.ig";
connectAttr "pasted__deleteComponent185.og" "pasted__deleteComponent186.ig";
connectAttr "pasted__deleteComponent184.og" "pasted__deleteComponent185.ig";
connectAttr "pasted__deleteComponent183.og" "pasted__deleteComponent184.ig";
connectAttr "pasted__deleteComponent182.og" "pasted__deleteComponent183.ig";
connectAttr "pasted__deleteComponent181.og" "pasted__deleteComponent182.ig";
connectAttr "pasted__deleteComponent180.og" "pasted__deleteComponent181.ig";
connectAttr "pasted__polyCylinder18.out" "pasted__deleteComponent180.ig";
connectAttr "pasted__polyTweak51.out" "pasted__polyExtrudeFace66.ip";
connectAttr "pasted__pCubeShape4.wm" "pasted__polyExtrudeFace66.mp";
connectAttr "pasted__polyExtrudeFace65.out" "pasted__polyTweak51.ip";
connectAttr "pasted__polyTweak50.out" "pasted__polyExtrudeFace65.ip";
connectAttr "pasted__pCubeShape4.wm" "pasted__polyExtrudeFace65.mp";
connectAttr "pasted__polyCube7.out" "pasted__polyTweak50.ip";
connectAttr "pasted__pasted__polyExtrudeFace8.out" "pasted__pasted__polyBevel9.ip"
		;
connectAttr "|group38|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyBevel9.mp"
		;
connectAttr "pasted__pasted__polyCube4.out" "pasted__pasted__polyExtrudeFace8.ip"
		;
connectAttr "|group38|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyExtrudeFace8.mp"
		;
connectAttr "pasted__polyTweak62.out" "pasted__polyExtrudeFace80.ip";
connectAttr "pasted__pCylinderShape7.wm" "pasted__polyExtrudeFace80.mp";
connectAttr "pasted__polyExtrudeFace79.out" "pasted__polyTweak62.ip";
connectAttr "pasted__deleteComponent295.og" "pasted__polyExtrudeFace79.ip";
connectAttr "pasted__pCylinderShape7.wm" "pasted__polyExtrudeFace79.mp";
connectAttr "pasted__deleteComponent294.og" "pasted__deleteComponent295.ig";
connectAttr "pasted__deleteComponent293.og" "pasted__deleteComponent294.ig";
connectAttr "pasted__deleteComponent292.og" "pasted__deleteComponent293.ig";
connectAttr "pasted__deleteComponent291.og" "pasted__deleteComponent292.ig";
connectAttr "pasted__deleteComponent290.og" "pasted__deleteComponent291.ig";
connectAttr "pasted__deleteComponent289.og" "pasted__deleteComponent290.ig";
connectAttr "pasted__deleteComponent288.og" "pasted__deleteComponent289.ig";
connectAttr "pasted__deleteComponent287.og" "pasted__deleteComponent288.ig";
connectAttr "pasted__deleteComponent286.og" "pasted__deleteComponent287.ig";
connectAttr "pasted__deleteComponent285.og" "pasted__deleteComponent286.ig";
connectAttr "pasted__deleteComponent284.og" "pasted__deleteComponent285.ig";
connectAttr "pasted__deleteComponent283.og" "pasted__deleteComponent284.ig";
connectAttr "pasted__deleteComponent282.og" "pasted__deleteComponent283.ig";
connectAttr "pasted__deleteComponent281.og" "pasted__deleteComponent282.ig";
connectAttr "pasted__deleteComponent280.og" "pasted__deleteComponent281.ig";
connectAttr "pasted__deleteComponent279.og" "pasted__deleteComponent280.ig";
connectAttr "pasted__deleteComponent278.og" "pasted__deleteComponent279.ig";
connectAttr "pasted__deleteComponent277.og" "pasted__deleteComponent278.ig";
connectAttr "pasted__polyTweak61.out" "pasted__deleteComponent277.ig";
connectAttr "pasted__polyCylinder22.out" "pasted__polyTweak61.ip";
connectAttr "pasted__polyTweak60.out" "pasted__polyExtrudeFace78.ip";
connectAttr "pasted__pCylinderShape6.wm" "pasted__polyExtrudeFace78.mp";
connectAttr "pasted__polyExtrudeFace77.out" "pasted__polyTweak60.ip";
connectAttr "pasted__polyTweak59.out" "pasted__polyExtrudeFace77.ip";
connectAttr "pasted__pCylinderShape6.wm" "pasted__polyExtrudeFace77.mp";
connectAttr "pasted__polyExtrudeFace76.out" "pasted__polyTweak59.ip";
connectAttr "pasted__deleteComponent276.og" "pasted__polyExtrudeFace76.ip";
connectAttr "pasted__pCylinderShape6.wm" "pasted__polyExtrudeFace76.mp";
connectAttr "pasted__deleteComponent275.og" "pasted__deleteComponent276.ig";
connectAttr "pasted__deleteComponent274.og" "pasted__deleteComponent275.ig";
connectAttr "pasted__deleteComponent273.og" "pasted__deleteComponent274.ig";
connectAttr "pasted__deleteComponent272.og" "pasted__deleteComponent273.ig";
connectAttr "pasted__deleteComponent271.og" "pasted__deleteComponent272.ig";
connectAttr "pasted__deleteComponent270.og" "pasted__deleteComponent271.ig";
connectAttr "pasted__deleteComponent269.og" "pasted__deleteComponent270.ig";
connectAttr "pasted__deleteComponent268.og" "pasted__deleteComponent269.ig";
connectAttr "pasted__deleteComponent267.og" "pasted__deleteComponent268.ig";
connectAttr "pasted__deleteComponent266.og" "pasted__deleteComponent267.ig";
connectAttr "pasted__deleteComponent265.og" "pasted__deleteComponent266.ig";
connectAttr "pasted__deleteComponent264.og" "pasted__deleteComponent265.ig";
connectAttr "pasted__deleteComponent263.og" "pasted__deleteComponent264.ig";
connectAttr "pasted__deleteComponent262.og" "pasted__deleteComponent263.ig";
connectAttr "pasted__deleteComponent261.og" "pasted__deleteComponent262.ig";
connectAttr "pasted__deleteComponent260.og" "pasted__deleteComponent261.ig";
connectAttr "pasted__deleteComponent259.og" "pasted__deleteComponent260.ig";
connectAttr "pasted__deleteComponent258.og" "pasted__deleteComponent259.ig";
connectAttr "pasted__polyCylinder21.out" "pasted__deleteComponent258.ig";
connectAttr "pasted__deleteComponent257.og" "pasted__polyExtrudeFace75.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace75.mp";
connectAttr "pasted__deleteComponent256.og" "pasted__deleteComponent257.ig";
connectAttr "pasted__polySplit8.out" "pasted__deleteComponent256.ig";
connectAttr "pasted__polySplit7.out" "pasted__polySplit8.ip";
connectAttr "pasted__polySplit6.out" "pasted__polySplit7.ip";
connectAttr "pasted__polySplit5.out" "pasted__polySplit6.ip";
connectAttr "pasted__polyTweak58.out" "pasted__polySplit5.ip";
connectAttr "pasted__polyExtrudeFace74.out" "pasted__polyTweak58.ip";
connectAttr "pasted__polyTweak57.out" "pasted__polyExtrudeFace74.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace74.mp";
connectAttr "pasted__polyExtrudeFace73.out" "pasted__polyTweak57.ip";
connectAttr "pasted__polyTweak56.out" "pasted__polyExtrudeFace73.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace73.mp";
connectAttr "pasted__polyExtrudeFace72.out" "pasted__polyTweak56.ip";
connectAttr "pasted__polyExtrudeFace71.out" "pasted__polyExtrudeFace72.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace72.mp";
connectAttr "pasted__polyTweak55.out" "pasted__polyExtrudeFace71.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace71.mp";
connectAttr "pasted__polyExtrudeFace70.out" "pasted__polyTweak55.ip";
connectAttr "pasted__polyExtrudeFace69.out" "pasted__polyExtrudeFace70.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace70.mp";
connectAttr "pasted__polyTweak54.out" "pasted__polyExtrudeFace69.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace69.mp";
connectAttr "pasted__polyExtrudeFace68.out" "pasted__polyTweak54.ip";
connectAttr "pasted__polyTweak53.out" "pasted__polyExtrudeFace68.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace68.mp";
connectAttr "pasted__polyExtrudeFace67.out" "pasted__polyTweak53.ip";
connectAttr "pasted__deleteComponent255.og" "pasted__polyExtrudeFace67.ip";
connectAttr "pasted__pCylinderShape5.wm" "pasted__polyExtrudeFace67.mp";
connectAttr "pasted__deleteComponent254.og" "pasted__deleteComponent255.ig";
connectAttr "pasted__deleteComponent253.og" "pasted__deleteComponent254.ig";
connectAttr "pasted__deleteComponent252.og" "pasted__deleteComponent253.ig";
connectAttr "pasted__deleteComponent251.og" "pasted__deleteComponent252.ig";
connectAttr "pasted__deleteComponent250.og" "pasted__deleteComponent251.ig";
connectAttr "pasted__deleteComponent249.og" "pasted__deleteComponent250.ig";
connectAttr "pasted__deleteComponent248.og" "pasted__deleteComponent249.ig";
connectAttr "pasted__deleteComponent247.og" "pasted__deleteComponent248.ig";
connectAttr "pasted__deleteComponent246.og" "pasted__deleteComponent247.ig";
connectAttr "pasted__deleteComponent245.og" "pasted__deleteComponent246.ig";
connectAttr "pasted__deleteComponent244.og" "pasted__deleteComponent245.ig";
connectAttr "pasted__deleteComponent243.og" "pasted__deleteComponent244.ig";
connectAttr "pasted__deleteComponent242.og" "pasted__deleteComponent243.ig";
connectAttr "pasted__deleteComponent241.og" "pasted__deleteComponent242.ig";
connectAttr "pasted__deleteComponent240.og" "pasted__deleteComponent241.ig";
connectAttr "pasted__deleteComponent239.og" "pasted__deleteComponent240.ig";
connectAttr "pasted__deleteComponent238.og" "pasted__deleteComponent239.ig";
connectAttr "pasted__deleteComponent237.og" "pasted__deleteComponent238.ig";
connectAttr "pasted__polyCylinder20.out" "pasted__deleteComponent237.ig";
connectAttr "pasted__pasted__polyTweak62.out" "pasted__pasted__polyExtrudeFace80.ip"
		;
connectAttr "|group40|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.wm" "pasted__pasted__polyExtrudeFace80.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace79.out" "pasted__pasted__polyTweak62.ip"
		;
connectAttr "pasted__pasted__deleteComponent295.og" "pasted__pasted__polyExtrudeFace79.ip"
		;
connectAttr "|group40|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.wm" "pasted__pasted__polyExtrudeFace79.mp"
		;
connectAttr "pasted__pasted__deleteComponent294.og" "pasted__pasted__deleteComponent295.ig"
		;
connectAttr "pasted__pasted__deleteComponent293.og" "pasted__pasted__deleteComponent294.ig"
		;
connectAttr "pasted__pasted__deleteComponent292.og" "pasted__pasted__deleteComponent293.ig"
		;
connectAttr "pasted__pasted__deleteComponent291.og" "pasted__pasted__deleteComponent292.ig"
		;
connectAttr "pasted__pasted__deleteComponent290.og" "pasted__pasted__deleteComponent291.ig"
		;
connectAttr "pasted__pasted__deleteComponent289.og" "pasted__pasted__deleteComponent290.ig"
		;
connectAttr "pasted__pasted__deleteComponent288.og" "pasted__pasted__deleteComponent289.ig"
		;
connectAttr "pasted__pasted__deleteComponent287.og" "pasted__pasted__deleteComponent288.ig"
		;
connectAttr "pasted__pasted__deleteComponent286.og" "pasted__pasted__deleteComponent287.ig"
		;
connectAttr "pasted__pasted__deleteComponent285.og" "pasted__pasted__deleteComponent286.ig"
		;
connectAttr "pasted__pasted__deleteComponent284.og" "pasted__pasted__deleteComponent285.ig"
		;
connectAttr "pasted__pasted__deleteComponent283.og" "pasted__pasted__deleteComponent284.ig"
		;
connectAttr "pasted__pasted__deleteComponent282.og" "pasted__pasted__deleteComponent283.ig"
		;
connectAttr "pasted__pasted__deleteComponent281.og" "pasted__pasted__deleteComponent282.ig"
		;
connectAttr "pasted__pasted__deleteComponent280.og" "pasted__pasted__deleteComponent281.ig"
		;
connectAttr "pasted__pasted__deleteComponent279.og" "pasted__pasted__deleteComponent280.ig"
		;
connectAttr "pasted__pasted__deleteComponent278.og" "pasted__pasted__deleteComponent279.ig"
		;
connectAttr "pasted__pasted__deleteComponent277.og" "pasted__pasted__deleteComponent278.ig"
		;
connectAttr "pasted__pasted__polyTweak61.out" "pasted__pasted__deleteComponent277.ig"
		;
connectAttr "pasted__pasted__polyCylinder22.out" "pasted__pasted__polyTweak61.ip"
		;
connectAttr "pasted__pasted__pasted__polyTweak62.out" "pasted__pasted__pasted__polyExtrudeFace80.ip"
		;
connectAttr "pasted__pasted__pasted__pCylinderShape7.wm" "pasted__pasted__pasted__polyExtrudeFace80.mp"
		;
connectAttr "pasted__pasted__pasted__polyExtrudeFace79.out" "pasted__pasted__pasted__polyTweak62.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent295.og" "pasted__pasted__pasted__polyExtrudeFace79.ip"
		;
connectAttr "pasted__pasted__pasted__pCylinderShape7.wm" "pasted__pasted__pasted__polyExtrudeFace79.mp"
		;
connectAttr "pasted__pasted__pasted__deleteComponent294.og" "pasted__pasted__pasted__deleteComponent295.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent293.og" "pasted__pasted__pasted__deleteComponent294.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent292.og" "pasted__pasted__pasted__deleteComponent293.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent291.og" "pasted__pasted__pasted__deleteComponent292.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent290.og" "pasted__pasted__pasted__deleteComponent291.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent289.og" "pasted__pasted__pasted__deleteComponent290.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent288.og" "pasted__pasted__pasted__deleteComponent289.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent287.og" "pasted__pasted__pasted__deleteComponent288.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent286.og" "pasted__pasted__pasted__deleteComponent287.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent285.og" "pasted__pasted__pasted__deleteComponent286.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent284.og" "pasted__pasted__pasted__deleteComponent285.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent283.og" "pasted__pasted__pasted__deleteComponent284.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent282.og" "pasted__pasted__pasted__deleteComponent283.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent281.og" "pasted__pasted__pasted__deleteComponent282.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent280.og" "pasted__pasted__pasted__deleteComponent281.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent279.og" "pasted__pasted__pasted__deleteComponent280.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent278.og" "pasted__pasted__pasted__deleteComponent279.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent277.og" "pasted__pasted__pasted__deleteComponent278.ig"
		;
connectAttr "pasted__pasted__pasted__polyTweak61.out" "pasted__pasted__pasted__deleteComponent277.ig"
		;
connectAttr "pasted__pasted__pasted__polyCylinder22.out" "pasted__pasted__pasted__polyTweak61.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__polyTweak62.out" "pasted__pasted__pasted__pasted__polyExtrudeFace80.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape7.wm" "pasted__pasted__pasted__pasted__polyExtrudeFace80.mp"
		;
connectAttr "pasted__pasted__pasted__pasted__polyExtrudeFace79.out" "pasted__pasted__pasted__pasted__polyTweak62.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent295.og" "pasted__pasted__pasted__pasted__polyExtrudeFace79.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape7.wm" "pasted__pasted__pasted__pasted__polyExtrudeFace79.mp"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent294.og" "pasted__pasted__pasted__pasted__deleteComponent295.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent293.og" "pasted__pasted__pasted__pasted__deleteComponent294.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent292.og" "pasted__pasted__pasted__pasted__deleteComponent293.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent291.og" "pasted__pasted__pasted__pasted__deleteComponent292.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent290.og" "pasted__pasted__pasted__pasted__deleteComponent291.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent289.og" "pasted__pasted__pasted__pasted__deleteComponent290.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent288.og" "pasted__pasted__pasted__pasted__deleteComponent289.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent287.og" "pasted__pasted__pasted__pasted__deleteComponent288.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent286.og" "pasted__pasted__pasted__pasted__deleteComponent287.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent285.og" "pasted__pasted__pasted__pasted__deleteComponent286.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent284.og" "pasted__pasted__pasted__pasted__deleteComponent285.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent283.og" "pasted__pasted__pasted__pasted__deleteComponent284.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent282.og" "pasted__pasted__pasted__pasted__deleteComponent283.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent281.og" "pasted__pasted__pasted__pasted__deleteComponent282.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent280.og" "pasted__pasted__pasted__pasted__deleteComponent281.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent279.og" "pasted__pasted__pasted__pasted__deleteComponent280.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent278.og" "pasted__pasted__pasted__pasted__deleteComponent279.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent277.og" "pasted__pasted__pasted__pasted__deleteComponent278.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__polyTweak61.out" "pasted__pasted__pasted__pasted__deleteComponent277.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__polyCylinder22.out" "pasted__pasted__pasted__pasted__polyTweak61.ip"
		;
connectAttr "pasted__polyTweak63.out" "pasted__polyBevel14.ip";
connectAttr "pasted__pPipeShape3.wm" "pasted__polyBevel14.mp";
connectAttr "pasted__polyPipe9.out" "pasted__polyTweak63.ip";
connectAttr "pasted__polyUnite6.out" "pasted__groupParts18.ig";
connectAttr "pasted__groupId30.id" "pasted__groupParts18.gi";
connectAttr "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.o" "pasted__polyUnite6.ip[0]"
		;
connectAttr "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.o" "pasted__polyUnite6.ip[1]"
		;
connectAttr "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.wm" "pasted__polyUnite6.im[0]"
		;
connectAttr "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.wm" "pasted__polyUnite6.im[1]"
		;
connectAttr "pasted__polySphere8.out" "pasted__groupParts16.ig";
connectAttr "pasted__groupId26.id" "pasted__groupParts16.gi";
connectAttr "pasted__polyCylinder23.out" "pasted__groupParts17.ig";
connectAttr "pasted__groupId28.id" "pasted__groupParts17.gi";
connectAttr "pasted__pTorusShape1.o" "polyUnite2.ip[0]";
connectAttr "pasted__pasted__pasted__pasted__pSphereShape2.o" "polyUnite2.ip[1]"
		;
connectAttr "pasted__pPipeShape2.o" "polyUnite2.ip[2]";
connectAttr "pasted__pTorusShape1.wm" "polyUnite2.im[0]";
connectAttr "pasted__pasted__pasted__pasted__pSphereShape2.wm" "polyUnite2.im[1]"
		;
connectAttr "pasted__pPipeShape2.wm" "polyUnite2.im[2]";
connectAttr "pasted__polyTorus1.out" "groupParts6.ig";
connectAttr "groupId10.id" "groupParts6.gi";
connectAttr "pasted__pasted__pasted__polyCloseBorder5.out" "groupParts7.ig";
connectAttr "groupId12.id" "groupParts7.gi";
connectAttr "pasted__polyBevel8.out" "groupParts8.ig";
connectAttr "groupId14.id" "groupParts8.gi";
connectAttr "polyUnite2.out" "groupParts9.ig";
connectAttr "groupId16.id" "groupParts9.gi";
connectAttr "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.o" "polyUnite3.ip[0]"
		;
connectAttr "pasted__pCylinderShape4.o" "polyUnite3.ip[1]";
connectAttr "pasted__pCubeShape2.o" "polyUnite3.ip[2]";
connectAttr "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.wm" "polyUnite3.im[0]"
		;
connectAttr "pasted__pCylinderShape4.wm" "polyUnite3.im[1]";
connectAttr "pasted__pCubeShape2.wm" "polyUnite3.im[2]";
connectAttr "pasted__pasted__polyCylinder4.out" "groupParts10.ig";
connectAttr "groupId17.id" "groupParts10.gi";
connectAttr "pasted__polyCylinder12.out" "groupParts11.ig";
connectAttr "groupId19.id" "groupParts11.gi";
connectAttr "pasted__polyExtrudeFace14.out" "groupParts12.ig";
connectAttr "groupId21.id" "groupParts12.gi";
connectAttr "polyUnite3.out" "groupParts13.ig";
connectAttr "groupId23.id" "groupParts13.gi";
connectAttr "PuertaP:puertaobj:___Default1.oc" "PuertaP:puertaobj:___Default.ss"
		;
connectAttr "PuertaP:puertaobj:groupId1.msg" "PuertaP:puertaobj:___Default.gn" -na
		;
connectAttr "PuertaP:puertaobj:SlidingDoor001Shape.iog.og[0]" "PuertaP:puertaobj:___Default.dsm"
		 -na;
connectAttr "PuertaP:puertaobj:___Default.msg" "PuertaP:puertaobj:materialInfo1.sg"
		;
connectAttr "PuertaP:puertaobj:___Default1.msg" "PuertaP:puertaobj:materialInfo1.m"
		;
connectAttr "pasted__pasted__polyBevel2.out" "pasted__pasted__polyBevel3.ip";
connectAttr "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyBevel3.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace10.out" "pasted__pasted__polyBevel2.ip"
		;
connectAttr "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyBevel2.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace9.out" "pasted__pasted__polyExtrudeFace10.ip"
		;
connectAttr "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyExtrudeFace10.mp"
		;
connectAttr "pasted__pasted__polyCloseBorder11.out" "pasted__pasted__polyExtrudeFace9.ip"
		;
connectAttr "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyExtrudeFace9.mp"
		;
connectAttr "pasted__pasted__deleteComponent63.og" "pasted__pasted__polyCloseBorder11.ip"
		;
connectAttr "pasted__pasted__deleteComponent62.og" "pasted__pasted__deleteComponent63.ig"
		;
connectAttr "pasted__pasted__deleteComponent61.og" "pasted__pasted__deleteComponent62.ig"
		;
connectAttr "pasted__pasted__deleteComponent60.og" "pasted__pasted__deleteComponent61.ig"
		;
connectAttr "pasted__pasted__deleteComponent59.og" "pasted__pasted__deleteComponent60.ig"
		;
connectAttr "pasted__pasted__polyCloseBorder10.out" "pasted__pasted__deleteComponent59.ig"
		;
connectAttr "pasted__pasted__deleteComponent58.og" "pasted__pasted__polyCloseBorder10.ip"
		;
connectAttr "pasted__pasted__deleteComponent57.og" "pasted__pasted__deleteComponent58.ig"
		;
connectAttr "pasted__pasted__deleteComponent56.og" "pasted__pasted__deleteComponent57.ig"
		;
connectAttr "pasted__pasted__pasted__polyPipe2.out" "pasted__pasted__deleteComponent56.ig"
		;
connectAttr "pasted__pasted__lambert2SG1.msg" "pasted__pasted__materialInfo2.sg"
		;
connectAttr "pasted__pasted__lambert3.msg" "pasted__pasted__materialInfo2.m";
connectAttr "pasted__pasted__lambert3.oc" "pasted__pasted__lambert2SG1.ss";
connectAttr "|group47|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.iog" "pasted__pasted__lambert2SG1.dsm"
		 -na;
connectAttr "pasted__pasted__polyExtrudeFace81.out" "pasted__pasted__polyBevel10.ip"
		;
connectAttr "|group47|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyBevel10.mp"
		;
connectAttr "pasted__pasted__polyCube5.out" "pasted__pasted__polyExtrudeFace81.ip"
		;
connectAttr "|group47|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyExtrudeFace81.mp"
		;
connectAttr "pasted__polyUnite2.out" "pasted__groupParts9.ig";
connectAttr "pasted__groupId35.id" "pasted__groupParts9.gi";
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.o" "pasted__polyUnite2.ip[0]"
		;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.o" "pasted__polyUnite2.ip[1]"
		;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.o" "pasted__polyUnite2.ip[2]"
		;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.wm" "pasted__polyUnite2.im[0]"
		;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.wm" "pasted__polyUnite2.im[1]"
		;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.wm" "pasted__polyUnite2.im[2]"
		;
connectAttr "pasted__pasted__polyTorus1.out" "pasted__groupParts6.ig";
connectAttr "pasted__groupId10.id" "pasted__groupParts6.gi";
connectAttr "pasted__pasted__pasted__pasted__polyCloseBorder5.out" "pasted__groupParts19.ig"
		;
connectAttr "pasted__groupId32.id" "pasted__groupParts19.gi";
connectAttr "pasted__pasted__pasted__pasted__deleteComponent28.og" "pasted__pasted__pasted__pasted__polyCloseBorder5.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent27.og" "pasted__pasted__pasted__pasted__deleteComponent28.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__polySphere3.out" "pasted__pasted__pasted__pasted__deleteComponent27.ig"
		;
connectAttr "pasted__pasted__polyBevel8.out" "pasted__groupParts20.ig";
connectAttr "pasted__groupId34.id" "pasted__groupParts20.gi";
connectAttr "pasted__pasted__polyTweak5.out" "pasted__pasted__polyBevel8.ip";
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.wm" "pasted__pasted__polyBevel8.mp"
		;
connectAttr "pasted__pasted__polyCloseBorder9.out" "pasted__pasted__polyTweak5.ip"
		;
connectAttr "pasted__pasted__polyCloseBorder8.out" "pasted__pasted__polyCloseBorder9.ip"
		;
connectAttr "pasted__pasted__deleteComponent55.og" "pasted__pasted__polyCloseBorder8.ip"
		;
connectAttr "pasted__pasted__deleteComponent54.og" "pasted__pasted__deleteComponent55.ig"
		;
connectAttr "pasted__pasted__deleteComponent53.og" "pasted__pasted__deleteComponent54.ig"
		;
connectAttr "pasted__pasted__deleteComponent52.og" "pasted__pasted__deleteComponent53.ig"
		;
connectAttr "pasted__pasted__polyPipe5.out" "pasted__pasted__deleteComponent52.ig"
		;
connectAttr "pasted__polyUnite3.out" "pasted__groupParts23.ig";
connectAttr "pasted__groupId41.id" "pasted__groupParts23.gi";
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.o" "pasted__polyUnite3.ip[0]"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.o" "pasted__polyUnite3.ip[1]"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.o" "pasted__polyUnite3.ip[2]"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.wm" "pasted__polyUnite3.im[0]"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.wm" "pasted__polyUnite3.im[1]"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__polyUnite3.im[2]"
		;
connectAttr "pasted__pasted__pasted__polyCylinder4.out" "pasted__groupParts21.ig"
		;
connectAttr "pasted__groupId36.id" "pasted__groupParts21.gi";
connectAttr "pasted__pasted__polyCylinder12.out" "pasted__groupParts22.ig";
connectAttr "pasted__groupId38.id" "pasted__groupParts22.gi";
connectAttr "pasted__pasted__polyExtrudeFace14.out" "pasted__groupParts12.ig";
connectAttr "pasted__groupId39.id" "pasted__groupParts12.gi";
connectAttr "pasted__pasted__polyTweak9.out" "pasted__pasted__polyExtrudeFace14.ip"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyExtrudeFace14.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace13.out" "pasted__pasted__polyTweak9.ip"
		;
connectAttr "pasted__pasted__polyBevel13.out" "pasted__pasted__polyExtrudeFace13.ip"
		;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyExtrudeFace13.mp"
		;
connectAttr "pasted__pasted__polyCube6.out" "pasted__pasted__polyBevel13.ip";
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyBevel13.mp"
		;
connectAttr "pasted__polyUnite7.out" "pasted__groupParts27.ig";
connectAttr "pasted__groupId48.id" "pasted__groupParts27.gi";
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.o" "pasted__polyUnite7.ip[0]"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.o" "pasted__polyUnite7.ip[1]"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.o" "pasted__polyUnite7.ip[2]"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.wm" "pasted__polyUnite7.im[0]"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.wm" "pasted__polyUnite7.im[1]"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__polyUnite7.im[2]"
		;
connectAttr "pasted__pasted__pasted__polyCylinder23.out" "pasted__groupParts24.ig"
		;
connectAttr "pasted__groupId42.id" "pasted__groupParts24.gi";
connectAttr "pasted__pasted__polyCylinder23.out" "pasted__groupParts25.ig";
connectAttr "pasted__groupId44.id" "pasted__groupParts25.gi";
connectAttr "pasted__pasted__polyExtrudeFace83.out" "pasted__groupParts26.ig";
connectAttr "pasted__groupId46.id" "pasted__groupParts26.gi";
connectAttr "pasted__pasted__polyTweak63.out" "pasted__pasted__polyExtrudeFace83.ip"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyExtrudeFace83.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace82.out" "pasted__pasted__polyTweak63.ip"
		;
connectAttr "pasted__pasted__polyBevel14.out" "pasted__pasted__polyExtrudeFace82.ip"
		;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyExtrudeFace82.mp"
		;
connectAttr "pasted__pasted__polyCube7.out" "pasted__pasted__polyBevel14.ip";
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyBevel14.mp"
		;
connectAttr "pasted__pasted__polyUnite7.out" "pasted__pasted__groupParts27.ig";
connectAttr "pasted__pasted__groupId48.id" "pasted__pasted__groupParts27.gi";
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape4.o" "pasted__pasted__polyUnite7.ip[0]"
		;
connectAttr "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.o" "pasted__pasted__polyUnite7.ip[1]"
		;
connectAttr "pasted__pasted__pasted__pCubeShape2.o" "pasted__pasted__polyUnite7.ip[2]"
		;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape4.wm" "pasted__pasted__polyUnite7.im[0]"
		;
connectAttr "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.wm" "pasted__pasted__polyUnite7.im[1]"
		;
connectAttr "pasted__pasted__pasted__pCubeShape2.wm" "pasted__pasted__polyUnite7.im[2]"
		;
connectAttr "pasted__pasted__pasted__pasted__polyCylinder23.out" "pasted__pasted__groupParts24.ig"
		;
connectAttr "pasted__pasted__groupId42.id" "pasted__pasted__groupParts24.gi";
connectAttr "pasted__pasted__pasted__polyCylinder24.out" "pasted__pasted__groupParts25.ig"
		;
connectAttr "pasted__pasted__groupId44.id" "pasted__pasted__groupParts25.gi";
connectAttr "pasted__pasted__pasted__polyExtrudeFace83.out" "pasted__pasted__groupParts26.ig"
		;
connectAttr "pasted__pasted__groupId46.id" "pasted__pasted__groupParts26.gi";
connectAttr "pasted__pasted__pasted__polyTweak63.out" "pasted__pasted__pasted__polyExtrudeFace83.ip"
		;
connectAttr "pasted__pasted__pasted__pCubeShape2.wm" "pasted__pasted__pasted__polyExtrudeFace83.mp"
		;
connectAttr "pasted__pasted__pasted__polyExtrudeFace82.out" "pasted__pasted__pasted__polyTweak63.ip"
		;
connectAttr "pasted__pasted__pasted__polyBevel14.out" "pasted__pasted__pasted__polyExtrudeFace82.ip"
		;
connectAttr "pasted__pasted__pasted__pCubeShape2.wm" "pasted__pasted__pasted__polyExtrudeFace82.mp"
		;
connectAttr "pasted__pasted__pasted__polyCube7.out" "pasted__pasted__pasted__polyBevel14.ip"
		;
connectAttr "pasted__pasted__pasted__pCubeShape2.wm" "pasted__pasted__pasted__polyBevel14.mp"
		;
connectAttr "pasted__polyUnite8.out" "pasted__groupParts31.ig";
connectAttr "pasted__groupId55.id" "pasted__groupParts31.gi";
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.o" "pasted__polyUnite8.ip[0]"
		;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.o" "pasted__polyUnite8.ip[1]"
		;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.o" "pasted__polyUnite8.ip[2]"
		;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.wm" "pasted__polyUnite8.im[0]"
		;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.wm" "pasted__polyUnite8.im[1]"
		;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.wm" "pasted__polyUnite8.im[2]"
		;
connectAttr "pasted__pasted__polyTorus2.out" "pasted__groupParts28.ig";
connectAttr "pasted__groupId49.id" "pasted__groupParts28.gi";
connectAttr "pasted__pasted__pasted__pasted__polyCloseBorder6.out" "pasted__groupParts29.ig"
		;
connectAttr "pasted__groupId51.id" "pasted__groupParts29.gi";
connectAttr "pasted__pasted__pasted__pasted__deleteComponent297.og" "pasted__pasted__pasted__pasted__polyCloseBorder6.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__deleteComponent296.og" "pasted__pasted__pasted__pasted__deleteComponent297.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__polySphere4.out" "pasted__pasted__pasted__pasted__deleteComponent296.ig"
		;
connectAttr "pasted__pasted__polyBevel17.out" "pasted__groupParts30.ig";
connectAttr "pasted__groupId53.id" "pasted__groupParts30.gi";
connectAttr "pasted__pasted__polyTweak64.out" "pasted__pasted__polyBevel17.ip";
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.wm" "pasted__pasted__polyBevel17.mp"
		;
connectAttr "pasted__pasted__polyCloseBorder13.out" "pasted__pasted__polyTweak64.ip"
		;
connectAttr "pasted__pasted__polyCloseBorder12.out" "pasted__pasted__polyCloseBorder13.ip"
		;
connectAttr "pasted__pasted__deleteComponent299.og" "pasted__pasted__polyCloseBorder12.ip"
		;
connectAttr "pasted__pasted__deleteComponent298.og" "pasted__pasted__deleteComponent299.ig"
		;
connectAttr "pasted__pasted__deleteComponent297.og" "pasted__pasted__deleteComponent298.ig"
		;
connectAttr "pasted__pasted__deleteComponent296.og" "pasted__pasted__deleteComponent297.ig"
		;
connectAttr "pasted__pasted__polyPipe6.out" "pasted__pasted__deleteComponent296.ig"
		;
connectAttr "pasted__pasted__polyBevel15.out" "pasted__pasted__polyBevel16.ip";
connectAttr "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyBevel16.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace86.out" "pasted__pasted__polyBevel15.ip"
		;
connectAttr "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyBevel15.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace85.out" "pasted__pasted__polyExtrudeFace86.ip"
		;
connectAttr "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyExtrudeFace86.mp"
		;
connectAttr "pasted__pasted__polyCloseBorder15.out" "pasted__pasted__polyExtrudeFace85.ip"
		;
connectAttr "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__polyExtrudeFace85.mp"
		;
connectAttr "pasted__pasted__deleteComponent307.og" "pasted__pasted__polyCloseBorder15.ip"
		;
connectAttr "pasted__pasted__deleteComponent306.og" "pasted__pasted__deleteComponent307.ig"
		;
connectAttr "pasted__pasted__deleteComponent305.og" "pasted__pasted__deleteComponent306.ig"
		;
connectAttr "pasted__pasted__deleteComponent304.og" "pasted__pasted__deleteComponent305.ig"
		;
connectAttr "pasted__pasted__deleteComponent303.og" "pasted__pasted__deleteComponent304.ig"
		;
connectAttr "pasted__pasted__polyCloseBorder14.out" "pasted__pasted__deleteComponent303.ig"
		;
connectAttr "pasted__pasted__deleteComponent302.og" "pasted__pasted__polyCloseBorder14.ip"
		;
connectAttr "pasted__pasted__deleteComponent301.og" "pasted__pasted__deleteComponent302.ig"
		;
connectAttr "pasted__pasted__deleteComponent300.og" "pasted__pasted__deleteComponent301.ig"
		;
connectAttr "pasted__pasted__pasted__polyPipe3.out" "pasted__pasted__deleteComponent300.ig"
		;
connectAttr "pasted__pasted__lambert2SG2.msg" "pasted__pasted__materialInfo3.sg"
		;
connectAttr "pasted__pasted__lambert4.msg" "pasted__pasted__materialInfo3.m";
connectAttr "pasted__pasted__lambert4.oc" "pasted__pasted__lambert2SG2.ss";
connectAttr "|group51|pasted__group23|pasted__pasted__group|pasted__pasted__pasted__pPipe1|pasted__pasted__pasted__pPipeShape1.iog" "pasted__pasted__lambert2SG2.dsm"
		 -na;
connectAttr "pasted__pasted__polyExtrudeFace84.out" "pasted__pasted__polyBevel18.ip"
		;
connectAttr "|group51|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyBevel18.mp"
		;
connectAttr "pasted__pasted__polyCube8.out" "pasted__pasted__polyExtrudeFace84.ip"
		;
connectAttr "|group51|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.wm" "pasted__pasted__polyExtrudeFace84.mp"
		;
connectAttr "lambert2SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[0].dn"
		;
connectAttr "lambert2.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[1].dn"
		;
connectAttr "pasted__pasted__polyTweak66.out" "pasted__pasted__polyExtrudeFace88.ip"
		;
connectAttr "|group52|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.wm" "pasted__pasted__polyExtrudeFace88.mp"
		;
connectAttr "pasted__pasted__polyExtrudeFace87.out" "pasted__pasted__polyTweak66.ip"
		;
connectAttr "pasted__pasted__deleteComponent326.og" "pasted__pasted__polyExtrudeFace87.ip"
		;
connectAttr "|group52|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.wm" "pasted__pasted__polyExtrudeFace87.mp"
		;
connectAttr "pasted__pasted__deleteComponent325.og" "pasted__pasted__deleteComponent326.ig"
		;
connectAttr "pasted__pasted__deleteComponent324.og" "pasted__pasted__deleteComponent325.ig"
		;
connectAttr "pasted__pasted__deleteComponent323.og" "pasted__pasted__deleteComponent324.ig"
		;
connectAttr "pasted__pasted__deleteComponent322.og" "pasted__pasted__deleteComponent323.ig"
		;
connectAttr "pasted__pasted__deleteComponent321.og" "pasted__pasted__deleteComponent322.ig"
		;
connectAttr "pasted__pasted__deleteComponent320.og" "pasted__pasted__deleteComponent321.ig"
		;
connectAttr "pasted__pasted__deleteComponent319.og" "pasted__pasted__deleteComponent320.ig"
		;
connectAttr "pasted__pasted__deleteComponent318.og" "pasted__pasted__deleteComponent319.ig"
		;
connectAttr "pasted__pasted__deleteComponent317.og" "pasted__pasted__deleteComponent318.ig"
		;
connectAttr "pasted__pasted__deleteComponent316.og" "pasted__pasted__deleteComponent317.ig"
		;
connectAttr "pasted__pasted__deleteComponent315.og" "pasted__pasted__deleteComponent316.ig"
		;
connectAttr "pasted__pasted__deleteComponent314.og" "pasted__pasted__deleteComponent315.ig"
		;
connectAttr "pasted__pasted__deleteComponent313.og" "pasted__pasted__deleteComponent314.ig"
		;
connectAttr "pasted__pasted__deleteComponent312.og" "pasted__pasted__deleteComponent313.ig"
		;
connectAttr "pasted__pasted__deleteComponent311.og" "pasted__pasted__deleteComponent312.ig"
		;
connectAttr "pasted__pasted__deleteComponent310.og" "pasted__pasted__deleteComponent311.ig"
		;
connectAttr "pasted__pasted__deleteComponent309.og" "pasted__pasted__deleteComponent310.ig"
		;
connectAttr "pasted__pasted__deleteComponent308.og" "pasted__pasted__deleteComponent309.ig"
		;
connectAttr "pasted__pasted__polyTweak65.out" "pasted__pasted__deleteComponent308.ig"
		;
connectAttr "pasted__pasted__polyCylinder24.out" "pasted__pasted__polyTweak65.ip"
		;
connectAttr "pasted__pasted__polyUnite8.out" "pasted__pasted__groupParts31.ig";
connectAttr "pasted__pasted__groupId55.id" "pasted__pasted__groupParts31.gi";
connectAttr "pasted__pasted__pasted__pTorusShape1.o" "pasted__pasted__polyUnite8.ip[0]"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.o" "pasted__pasted__polyUnite8.ip[1]"
		;
connectAttr "pasted__pasted__pasted__pPipeShape2.o" "pasted__pasted__polyUnite8.ip[2]"
		;
connectAttr "pasted__pasted__pasted__pTorusShape1.wm" "pasted__pasted__polyUnite8.im[0]"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.wm" "pasted__pasted__polyUnite8.im[1]"
		;
connectAttr "pasted__pasted__pasted__pPipeShape2.wm" "pasted__pasted__polyUnite8.im[2]"
		;
connectAttr "pasted__pasted__pasted__polyTorus2.out" "pasted__pasted__groupParts28.ig"
		;
connectAttr "pasted__pasted__groupId49.id" "pasted__pasted__groupParts28.gi";
connectAttr "pasted__pasted__pasted__pasted__pasted__polyCloseBorder6.out" "pasted__pasted__groupParts29.ig"
		;
connectAttr "pasted__pasted__groupId51.id" "pasted__pasted__groupParts29.gi";
connectAttr "pasted__pasted__pasted__pasted__pasted__deleteComponent297.og" "pasted__pasted__pasted__pasted__pasted__polyCloseBorder6.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__deleteComponent296.og" "pasted__pasted__pasted__pasted__pasted__deleteComponent297.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__pasted__pasted__polySphere4.out" "pasted__pasted__pasted__pasted__pasted__deleteComponent296.ig"
		;
connectAttr "pasted__pasted__pasted__polyBevel17.out" "pasted__pasted__groupParts30.ig"
		;
connectAttr "pasted__pasted__groupId53.id" "pasted__pasted__groupParts30.gi";
connectAttr "pasted__pasted__pasted__polyTweak64.out" "pasted__pasted__pasted__polyBevel17.ip"
		;
connectAttr "pasted__pasted__pasted__pPipeShape2.wm" "pasted__pasted__pasted__polyBevel17.mp"
		;
connectAttr "pasted__pasted__pasted__polyCloseBorder13.out" "pasted__pasted__pasted__polyTweak64.ip"
		;
connectAttr "pasted__pasted__pasted__polyCloseBorder12.out" "pasted__pasted__pasted__polyCloseBorder13.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent299.og" "pasted__pasted__pasted__polyCloseBorder12.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent298.og" "pasted__pasted__pasted__deleteComponent299.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent297.og" "pasted__pasted__pasted__deleteComponent298.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent296.og" "pasted__pasted__pasted__deleteComponent297.ig"
		;
connectAttr "pasted__pasted__pasted__polyPipe6.out" "pasted__pasted__pasted__deleteComponent296.ig"
		;
connectAttr "pasted__pasted__pasted__polyBevel15.out" "pasted__pasted__pasted__polyBevel16.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__pasted__polyBevel16.mp"
		;
connectAttr "pasted__pasted__pasted__polyExtrudeFace86.out" "pasted__pasted__pasted__polyBevel15.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__pasted__polyBevel15.mp"
		;
connectAttr "pasted__pasted__pasted__polyExtrudeFace85.out" "pasted__pasted__pasted__polyExtrudeFace86.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__pasted__polyExtrudeFace86.mp"
		;
connectAttr "pasted__pasted__pasted__polyCloseBorder15.out" "pasted__pasted__pasted__polyExtrudeFace85.ip"
		;
connectAttr "pasted__pasted__pasted__pasted__pPipeShape1.wm" "pasted__pasted__pasted__polyExtrudeFace85.mp"
		;
connectAttr "pasted__pasted__pasted__deleteComponent307.og" "pasted__pasted__pasted__polyCloseBorder15.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent306.og" "pasted__pasted__pasted__deleteComponent307.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent305.og" "pasted__pasted__pasted__deleteComponent306.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent304.og" "pasted__pasted__pasted__deleteComponent305.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent303.og" "pasted__pasted__pasted__deleteComponent304.ig"
		;
connectAttr "pasted__pasted__pasted__polyCloseBorder14.out" "pasted__pasted__pasted__deleteComponent303.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent302.og" "pasted__pasted__pasted__polyCloseBorder14.ip"
		;
connectAttr "pasted__pasted__pasted__deleteComponent301.og" "pasted__pasted__pasted__deleteComponent302.ig"
		;
connectAttr "pasted__pasted__pasted__deleteComponent300.og" "pasted__pasted__pasted__deleteComponent301.ig"
		;
connectAttr "pasted__pasted__pasted__pasted__polyPipe3.out" "pasted__pasted__pasted__deleteComponent300.ig"
		;
connectAttr "pasted__pasted__pasted__lambert2SG2.msg" "pasted__pasted__pasted__materialInfo3.sg"
		;
connectAttr "pasted__pasted__pasted__lambert4.msg" "pasted__pasted__pasted__materialInfo3.m"
		;
connectAttr "pasted__pasted__pasted__lambert4.oc" "pasted__pasted__pasted__lambert2SG2.ss"
		;
connectAttr "pasted__pasted__pasted__pasted__pPipeShape1.iog" "pasted__pasted__pasted__lambert2SG2.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__polyExtrudeFace84.out" "pasted__pasted__pasted__polyBevel18.ip"
		;
connectAttr "pasted__pasted__pasted__pCubeShape1.wm" "pasted__pasted__pasted__polyBevel18.mp"
		;
connectAttr "pasted__pasted__pasted__polyCube8.out" "pasted__pasted__pasted__polyExtrudeFace84.ip"
		;
connectAttr "pasted__pasted__pasted__pCubeShape1.wm" "pasted__pasted__pasted__polyExtrudeFace84.mp"
		;
connectAttr "lambert3.oc" "lambert3SG.ss";
connectAttr "|group44|pasted__pCube3|pasted__pCubeShape3.iog" "lambert3SG.dsm" -na
		;
connectAttr "lambert3SG.msg" "materialInfo2.sg";
connectAttr "lambert3.msg" "materialInfo2.m";
connectAttr "lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "pasted__lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "pasted__lambert2SG1.pa" ":renderPartition.st" -na;
connectAttr "PuertaP:puertaobj:___Default.pa" ":renderPartition.st" -na;
connectAttr "pasted__pasted__lambert2SG1.pa" ":renderPartition.st" -na;
connectAttr "pasted__pasted__lambert2SG2.pa" ":renderPartition.st" -na;
connectAttr "pasted__pasted__pasted__lambert2SG2.pa" ":renderPartition.st" -na;
connectAttr "lambert3SG.pa" ":renderPartition.st" -na;
connectAttr "lambert2.msg" ":defaultShaderList1.s" -na;
connectAttr "pasted__lambert2.msg" ":defaultShaderList1.s" -na;
connectAttr "pasted__lambert3.msg" ":defaultShaderList1.s" -na;
connectAttr "PuertaP:puertaobj:___Default1.msg" ":defaultShaderList1.s" -na;
connectAttr "pasted__pasted__lambert3.msg" ":defaultShaderList1.s" -na;
connectAttr "pasted__pasted__lambert4.msg" ":defaultShaderList1.s" -na;
connectAttr "pasted__pasted__pasted__lambert4.msg" ":defaultShaderList1.s" -na;
connectAttr "lambert3.msg" ":defaultShaderList1.s" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group2|pasted__pSphere1|transform2|pasted__pSphereShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pSphereShape1.iog.og[1]" ":initialShadingGroup.dsm" -na;
connectAttr "pSphereShape1.ciog.cog[1]" ":initialShadingGroup.dsm" -na;
connectAttr "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group3|pasted__group2|pasted__pasted__pSphere1|pasted__transform2|pasted__pasted__pSphereShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.iog.og[1]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group3|pasted__pSphere2|pasted__transform1|pasted__pSphereShape1.ciog.cog[1]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pSphereShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pSphereShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.iog.og[1]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group4|pasted__group3|pasted__pasted__pSphere2|pasted__pasted__transform1|pasted__pasted__pSphereShape1.ciog.cog[1]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pPipeShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pSphere4Shape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group12|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group12|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pCylinderShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group17|pasted__pCube3|pasted__pCubeShape3.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pCubeShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group19|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pCubeShape3.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group20|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pasted__pCubeShape3.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pCubeShape1.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape1.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group26|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group26|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group27|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group27|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group29|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group29|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pCylinderShape8.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape9.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCubeShape4.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group38|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pCylinderShape5.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape6.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape7.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group40|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pCylinderShape7.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape7.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pPipeShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group43|pasted__pSphere3|pasted__transform4|pasted__pSphereShape3.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group43|pasted__pCylinder2|pasted__transform3|pasted__pCylinderShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pSphere4Shape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "|group43|pasted__group19|pasted__pasted__group18|pasted__pasted__pasted__group17|pasted__pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pasted__pCubeShape3.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pTorusShape1.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pTorusShape1.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pPipeShape2.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pPipeShape2.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pTorus1Shape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group31|pasted__group30|pasted__pasted__pCylinder4|transform10|pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm" -na
		;
connectAttr "pasted__pCubeShape2.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pCubeShape2.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pasted__pasted__pCylinder4Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group46|pasted__group18|pasted__pasted__group17|pasted__pasted__pasted__pCube3|pasted__pasted__pasted__pCubeShape3.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group47|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group48|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__transform10|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCylinder4|pasted__transform9|pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__group31|pasted__pasted__group30|pasted__pasted__pCube2|pasted__transform8|pasted__pasted__pCubeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group49|pasted__pasted__pasted__pCylinder4|pasted__pasted__pasted__pCylinder4Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group50|pasted__group49|pasted__pasted__group31|pasted__pasted__pasted__group30|pasted__pasted__pasted__pCylinder4|pasted__pasted__transform9|pasted__pasted__pasted__pCylinderShape4.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pCubeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pCubeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pCylinder4Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group23|pasted__pasted__pCube1|pasted__pasted__pCubeShape1.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pTorus1|pasted__transform7|pasted__pasted__pTorusShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pasted__pasted__pasted__pSphere2|pasted__transform6|pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__group22|pasted__pasted__group21|pasted__pasted__pPipe2|pasted__transform5|pasted__pasted__pPipeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group51|pasted__pasted__pTorus1|pasted__pasted__pTorus1Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "|group52|pasted__group39|pasted__pasted__pCylinder7|pasted__pasted__pCylinderShape7.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pCubeShape1.iog" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pTorusShape1.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pTorusShape1.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pasted__pasted__pasted__pSphereShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pPipeShape2.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pPipeShape2.ciog.cog[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "pasted__pasted__pasted__pTorus1Shape.iog.og[0]" ":initialShadingGroup.dsm"
		 -na;
connectAttr "groupId1.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId2.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId3.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId4.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId1.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId2.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId3.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId4.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId1.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId2.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId3.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId4.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId5.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId6.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId7.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId8.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId9.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId6.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId7.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId8.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId9.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId11.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId12.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId13.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId14.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId16.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId17.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId18.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId19.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId21.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId22.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId23.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId24.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId16.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId17.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId18.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId19.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId26.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId27.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId28.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId29.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId30.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId10.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId11.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId12.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId13.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId14.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId15.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId16.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId17.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId18.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId19.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId20.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId21.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId22.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId23.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId10.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId31.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId32.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId33.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId34.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId15.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId35.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId36.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId37.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId38.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId20.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId39.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId40.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId41.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId42.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId43.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId44.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId45.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId46.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId47.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId48.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId42.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId43.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId44.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId45.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId46.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId47.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId48.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId49.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId50.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId51.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId52.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId53.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId54.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__groupId55.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId49.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId50.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId51.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId52.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId53.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId54.msg" ":initialShadingGroup.gn" -na;
connectAttr "pasted__pasted__groupId55.msg" ":initialShadingGroup.gn" -na;
// End of ComisariaF.ma
