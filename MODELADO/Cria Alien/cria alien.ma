//Maya ASCII 2015 scene
//Name: cria alien.ma
//Last modified: Thu, Mar 30, 2017 04:33:06 PM
//Codeset: 1252
requires maya "2015";
requires -nodeType "mentalrayFramebuffer" -nodeType "mentalrayOptions" -nodeType "mentalrayGlobals"
		 -nodeType "mentalrayItemsList" -dataType "byteArray" "Mayatomr" "2015.0 - 3.12.1.16 ";
currentUnit -l centimeter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2015";
fileInfo "version" "2015";
fileInfo "cutIdentifier" "201405190330-916664";
fileInfo "osv" "Microsoft Windows 8 Home Premium Edition, 64-bit  (Build 9200)\n";
fileInfo "license" "student";
createNode transform -s -n "persp";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 6.8002597706240682 3.6270095773059534 6.5830740897750015 ;
	setAttr ".r" -type "double3" -370.53835324390974 765.39999999992551 -1.1324292716139606e-015 ;
createNode camera -s -n "perspShape" -p "persp";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".coi" 10.639970802797382;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" 1.557594358921051 -0.9893319350215527 1.1192784155587154 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
createNode transform -s -n "top";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.38206325008582331 100.1 -2.164904859784226 ;
	setAttr ".r" -type "double3" -89.999999999999986 0 0 ;
createNode camera -s -n "topShape" -p "top";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 24.256351596920219;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
createNode transform -s -n "front";
	setAttr ".t" -type "double3" 0.45275722946499575 0.14686713478160768 100.10183992213007 ;
createNode camera -s -n "frontShape" -p "front";
	setAttr -k off ".v";
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 8.1221381091057996;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
createNode transform -s -n "side";
	setAttr ".t" -type "double3" 100.1 -0.95727503459835095 0.39693793990551518 ;
	setAttr ".r" -type "double3" 0 89.999999999999986 0 ;
createNode camera -s -n "sideShape" -p "side";
	setAttr -k off ".v";
	setAttr ".rnd" no;
	setAttr ".coi" 100.1;
	setAttr ".ow" 8.831066581020659;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
createNode transform -n "pCube1";
	setAttr ".t" -type "double3" 0 0.16300540231280791 0.041168307141795424 ;
	setAttr ".s" -type "double3" 0.42215091683826994 0.89676638125666508 0.61472140929830843 ;
createNode transform -n "transform10" -p "pCube1";
	setAttr ".v" no;
createNode mesh -n "pCubeShape1" -p "transform10";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 55 ".pt";
	setAttr ".pt[41]" -type "float3" 0 0.057522938 0 ;
	setAttr ".pt[648]" -type "float3" -0.065857381 -0.030745259 -0.00031529058 ;
	setAttr ".pt[649]" -type "float3" -0.065857381 -0.030745259 0.025906073 ;
	setAttr ".pt[650]" -type "float3" 0 0 -0.00022587158 ;
	setAttr ".pt[651]" -type "float3" 0 0 0.018266499 ;
	setAttr ".pt[652]" -type "float3" 0 0 -0.026740603 ;
	setAttr ".pt[653]" -type "float3" -0.065857381 -0.030745259 -0.025906079 ;
	setAttr ".pt[654]" -type "float3" -0.065857381 -0.030745259 -0.00031529058 ;
	setAttr ".pt[655]" -type "float3" -0.065857381 -0.030745259 0.025906073 ;
	setAttr ".pt[656]" -type "float3" 0 0 -0.00022587158 ;
	setAttr ".pt[657]" -type "float3" 0 0 0.015826246 ;
	setAttr ".pt[658]" -type "float3" 0 0 -0.027054448 ;
	setAttr ".pt[659]" -type "float3" -0.065857381 -0.030745259 -0.025906079 ;
	setAttr ".pt[660]" -type "float3" 0.050930101 0.0034145045 -0.00086260849 ;
	setAttr ".pt[661]" -type "float3" 0.091051176 0.00076517049 0.070878111 ;
	setAttr ".pt[662]" -type "float3" 0.22590037 0.021881966 -0.00061796769 ;
	setAttr ".pt[663]" -type "float3" -0.050974898 0.0241278 0.044327874 ;
	setAttr ".pt[664]" -type "float3" 0.095026277 -0.017780507 -0.056625351 ;
	setAttr ".pt[665]" -type "float3" 0.1367327 -0.0241278 -0.070878096 ;
	setAttr ".pt[666]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[667]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[668]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[669]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[670]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[671]" -type "float3" -0.024905887 0.026873149 0 ;
	setAttr ".pt[672]" -type "float3" 0 0 -0.08902359 ;
	setAttr ".pt[673]" -type "float3" 0 0 -0.072098181 ;
	setAttr ".pt[674]" -type "float3" 0 0 -0.010441317 ;
	setAttr ".pt[675]" -type "float3" 0 0.057522938 -0.0035022628 ;
	setAttr ".pt[676]" -type "float3" 0 0 0.0011738259 ;
	setAttr ".pt[677]" -type "float3" 0 -0.017008537 0.033408541 ;
	setAttr ".pt[678]" -type "float3" 0 0 -0.043532819 ;
	setAttr ".pt[679]" -type "float3" 0 0 -0.035256248 ;
	setAttr ".pt[680]" -type "float3" 0 0 -0.0051058377 ;
	setAttr ".pt[681]" -type "float3" 0 0.075793356 -0.001712617 ;
	setAttr ".pt[682]" -type "float3" -0.17246194 0 -0.041214105 ;
	setAttr ".pt[683]" -type "float3" -0.083955482 -0.062507525 0.043532822 ;
	setAttr ".pt[684]" -type "float3" 0.26518607 -0.040207773 -0.043532819 ;
	setAttr ".pt[685]" -type "float3" 0 0 -0.035256248 ;
	setAttr ".pt[686]" -type "float3" 0.19465241 -0.040207773 -0.0051058377 ;
	setAttr ".pt[687]" -type "float3" 0.37243354 -0.0011868251 -0.001712617 ;
	setAttr ".pt[688]" -type "float3" 0.0927241 -0.040207773 -0.051703624 ;
	setAttr ".pt[689]" -type "float3" 0.14482671 -0.091859393 0.043532822 ;
	setAttr ".pt[690]" -type "float3" 0.27683029 0 -0.043532819 ;
	setAttr ".pt[691]" -type "float3" 0.27683029 0 -0.035256248 ;
	setAttr ".pt[692]" -type "float3" 0.20629662 0 -0.0051058377 ;
	setAttr ".pt[693]" -type "float3" 0.44257349 0 -0.001712617 ;
	setAttr ".pt[694]" -type "float3" 0.10436831 0 0.022868292 ;
	setAttr ".pt[695]" -type "float3" 0.089654364 0 0.043532822 ;
	setAttr ".pt[696]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".pt[697]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".pt[698]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".pt[699]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".pt[700]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".pt[701]" -type "float3" 0 0 -0.14154835 ;
	setAttr ".dr" 1;
createNode transform -n "pCube2";
	setAttr ".t" -type "double3" 3.6678571022772699 0.15264964297183156 1.798975160868683 ;
	setAttr ".r" -type "double3" 89.999999999999986 6.8160889908004876 -8.0079853791192195e-016 ;
createNode transform -n "transform2" -p "pCube2";
	setAttr ".v" no;
createNode mesh -n "pCubeShape2" -p "transform2";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0.0030306624 -0.16085684 
		0 0.0030306624 -0.16085684 0 0.13425493 1.0500343 -0.13122427 -0.12819362 1.0500343 
		-0.13122427 0.13122427 1.0506896 0.13122427 -0.13122427 1.0506896 0.13122427 0 -0.16020159 
		0 0 -0.16020159 0;
	setAttr ".dr" 1;
createNode transform -n "pCube3";
	setAttr ".t" -type "double3" 2.6769934446448045 0.15264964297183156 1.6014902922079985 ;
	setAttr ".r" -type "double3" 89.999999999999986 -21.956563044949121 1.7146446604482112e-015 ;
createNode transform -n "transform1" -p "pCube3";
	setAttr ".v" no;
createNode mesh -n "pCubeShape3" -p "transform1";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0
		 0.875 0.25 0.125 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0.0030306624 -0.16085684 
		0 0.0030306624 -0.16085684 0 0.13425493 1.0500343 -0.13122427 -0.12819362 1.0500343 
		-0.13122427 0.13122427 1.0506896 0.13122427 -0.13122427 1.0506896 0.13122427 0 -0.16020159 
		0 0 -0.16020159 0;
	setAttr -s 8 ".vt[0:7]"  -0.15000001 -0.15000001 0.15000001 0.15000001 -0.15000001 0.15000001
		 -0.15000001 0.15000001 0.15000001 0.15000001 0.15000001 0.15000001 -0.15000001 0.15000001 -0.15000001
		 0.15000001 0.15000001 -0.15000001 -0.15000001 -0.15000001 -0.15000001 0.15000001 -0.15000001 -0.15000001;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 1 7 -3 -7
		mu 0 4 2 3 5 4
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 3 11 -1 -11
		mu 0 4 6 7 9 8
		f 4 -12 -10 -8 -6
		mu 0 4 1 10 11 3
		f 4 10 4 6 8
		mu 0 4 12 0 2 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dr" 1;
createNode transform -n "pCube4";
	setAttr ".t" -type "double3" 4.9375516447831149 -0.27227539481510993 -0.88990279272875483 ;
	setAttr ".s" -type "double3" 1.5588221618526028 1.5846246471401551 1.9398279235601623 ;
createNode transform -n "transform6" -p "pCube4";
	setAttr ".v" no;
createNode mesh -n "pCubeShape4" -p "transform6";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt";
	setAttr ".pt[1]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[2]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[4]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[5]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[7]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[8]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[10]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[11]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[13]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[14]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[16]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[17]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[19]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[20]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[22]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[23]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[24]" -type "float3" 2.7465379 0 1.1446614e-016 ;
	setAttr ".dr" 1;
createNode transform -n "pCube5";
	setAttr ".t" -type "double3" 4.8617706876170939 -0.27227539481510993 -2.3810791032482461 ;
	setAttr ".r" -type "double3" 0 10.088935329518213 0 ;
	setAttr ".s" -type "double3" 1.5588221618526028 1.5846246471401551 1.9398279235601623 ;
createNode transform -n "transform5" -p "pCube5";
	setAttr ".v" no;
createNode mesh -n "pCubeShape5" -p "transform5";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:23]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.375 0 0.5 0 0.625
		 0 0.375 0.125 0.5 0.125 0.625 0.125 0.375 0.25 0.5 0.25 0.625 0.25 0.375 0.375 0.5
		 0.375 0.625 0.375 0.375 0.5 0.5 0.5 0.625 0.5 0.375 0.625 0.5 0.625 0.625 0.625 0.375
		 0.75 0.5 0.75 0.625 0.75 0.375 0.875 0.5 0.875 0.625 0.875 0.375 1 0.5 1 0.625 1
		 0.875 0 0.75 0 0.875 0.125 0.75 0.125 0.875 0.25 0.75 0.25 0.125 0 0.25 0 0.125 0.125
		 0.25 0.125 0.125 0.25 0.25 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt";
	setAttr ".pt[1]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[2]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[4]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[5]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[7]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[8]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[10]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[11]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[13]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[14]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[16]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[17]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[19]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[20]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[22]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[23]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[24]" -type "float3" 2.7241004 0 0.204243 ;
	setAttr -s 26 ".vt[0:25]"  -0.41921708 -0.14845927 0.16293819 0 -0.14845927 0.16293819
		 0.41921708 -0.14845927 0.16293819 -0.41921708 0 0.16293819 0 0 0.16293819 0.41921708 0 0.16293819
		 -0.41921708 0.14845927 0.16293819 0 0.14845927 0.16293819 0.41921708 0.14845927 0.16293819
		 -0.41921708 0.14845927 0 0 0.14845927 0 0.41921708 0.14845927 0 -0.41921708 0.14845927 -0.16293819
		 0 0.14845927 -0.16293819 0.41921708 0.14845927 -0.16293819 -0.41921708 0 -0.16293819
		 0 0 -0.16293819 0.41921708 0 -0.16293819 -0.41921708 -0.14845927 -0.16293819 0 -0.14845927 -0.16293819
		 0.41921708 -0.14845927 -0.16293819 -0.41921708 -0.14845927 0 0 -0.14845927 0 0.41921708 -0.14845927 0
		 0.41921708 0 0 -0.41921708 0 0;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 3 4 1 4 5 1 6 7 0 7 8 0 9 10 1
		 10 11 1 12 13 0 13 14 0 15 16 1 16 17 1 18 19 0 19 20 0 21 22 1 22 23 1 0 3 0 1 4 1
		 2 5 0 3 6 0 4 7 1 5 8 0 6 9 0 7 10 1 8 11 0 9 12 0 10 13 1 11 14 0 12 15 0 13 16 1
		 14 17 0 15 18 0 16 19 1 17 20 0 18 21 0 19 22 1 20 23 0 21 0 0 22 1 1 23 2 0 17 24 1
		 24 5 1 23 24 1 24 11 1 15 25 1 25 3 1 21 25 1 25 9 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 0 17 -3 -17
		mu 0 4 0 1 4 3
		f 4 1 18 -4 -18
		mu 0 4 1 2 5 4
		f 4 2 20 -5 -20
		mu 0 4 3 4 7 6
		f 4 3 21 -6 -21
		mu 0 4 4 5 8 7
		f 4 4 23 -7 -23
		mu 0 4 6 7 10 9
		f 4 5 24 -8 -24
		mu 0 4 7 8 11 10
		f 4 6 26 -9 -26
		mu 0 4 9 10 13 12
		f 4 7 27 -10 -27
		mu 0 4 10 11 14 13
		f 4 8 29 -11 -29
		mu 0 4 12 13 16 15
		f 4 9 30 -12 -30
		mu 0 4 13 14 17 16
		f 4 10 32 -13 -32
		mu 0 4 15 16 19 18
		f 4 11 33 -14 -33
		mu 0 4 16 17 20 19
		f 4 12 35 -15 -35
		mu 0 4 18 19 22 21
		f 4 13 36 -16 -36
		mu 0 4 19 20 23 22
		f 4 14 38 -1 -38
		mu 0 4 21 22 25 24
		f 4 15 39 -2 -39
		mu 0 4 22 23 26 25
		f 4 -37 -34 40 -43
		mu 0 4 28 27 29 30
		f 4 -40 42 41 -19
		mu 0 4 2 28 30 5
		f 4 -41 -31 -28 -44
		mu 0 4 30 29 31 32
		f 4 -42 43 -25 -22
		mu 0 4 5 30 32 8
		f 4 34 46 -45 31
		mu 0 4 33 34 36 35
		f 4 37 16 -46 -47
		mu 0 4 34 0 3 36
		f 4 44 47 25 28
		mu 0 4 35 36 38 37
		f 4 45 19 22 -48
		mu 0 4 36 3 6 38;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dr" 1;
createNode transform -n "pCube6";
	setAttr ".t" -type "double3" 4.8306326814958958 -0.2722753948151117 0.43663733433212681 ;
	setAttr ".r" -type "double3" 0 -8.7621162870725797 0 ;
	setAttr ".s" -type "double3" 1.5588221618526028 1.5846246471401551 1.9398279235601623 ;
createNode transform -n "transform4" -p "pCube6";
	setAttr ".v" no;
createNode mesh -n "pCubeShape6" -p "transform4";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:23]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75 0.125 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.375 0 0.5 0 0.625
		 0 0.375 0.125 0.5 0.125 0.625 0.125 0.375 0.25 0.5 0.25 0.625 0.25 0.375 0.375 0.5
		 0.375 0.625 0.375 0.375 0.5 0.5 0.5 0.625 0.5 0.375 0.625 0.5 0.625 0.625 0.625 0.375
		 0.75 0.5 0.75 0.625 0.75 0.375 0.875 0.5 0.875 0.625 0.875 0.375 1 0.5 1 0.625 1
		 0.875 0 0.75 0 0.875 0.125 0.75 0.125 0.875 0.25 0.75 0.25 0.125 0 0.25 0 0.125 0.125
		 0.25 0.125 0.125 0.25 0.25 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt";
	setAttr ".pt[1]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[2]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[4]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[5]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[7]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[8]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[10]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[11]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[13]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[14]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[16]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[17]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[19]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[20]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[22]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[23]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[24]" -type "float3" 1.2956337 0 0 ;
	setAttr -s 26 ".vt[0:25]"  -0.41921708 -0.14845927 0.16293819 0 -0.14845927 0.16293819
		 0.41921708 -0.14845927 0.16293819 -0.41921708 0 0.16293819 0 0 0.16293819 0.41921708 0 0.16293819
		 -0.41921708 0.14845927 0.16293819 0 0.14845927 0.16293819 0.41921708 0.14845927 0.16293819
		 -0.41921708 0.14845927 0 0 0.14845927 0 0.41921708 0.14845927 0 -0.41921708 0.14845927 -0.16293819
		 0 0.14845927 -0.16293819 0.41921708 0.14845927 -0.16293819 -0.41921708 0 -0.16293819
		 0 0 -0.16293819 0.41921708 0 -0.16293819 -0.41921708 -0.14845927 -0.16293819 0 -0.14845927 -0.16293819
		 0.41921708 -0.14845927 -0.16293819 -0.41921708 -0.14845927 0 0 -0.14845927 0 0.41921708 -0.14845927 0
		 0.41921708 0 0 -0.41921708 0 0;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 3 4 1 4 5 1 6 7 0 7 8 0 9 10 1
		 10 11 1 12 13 0 13 14 0 15 16 1 16 17 1 18 19 0 19 20 0 21 22 1 22 23 1 0 3 0 1 4 1
		 2 5 0 3 6 0 4 7 1 5 8 0 6 9 0 7 10 1 8 11 0 9 12 0 10 13 1 11 14 0 12 15 0 13 16 1
		 14 17 0 15 18 0 16 19 1 17 20 0 18 21 0 19 22 1 20 23 0 21 0 0 22 1 1 23 2 0 17 24 1
		 24 5 1 23 24 1 24 11 1 15 25 1 25 3 1 21 25 1 25 9 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 0 17 -3 -17
		mu 0 4 0 1 4 3
		f 4 1 18 -4 -18
		mu 0 4 1 2 5 4
		f 4 2 20 -5 -20
		mu 0 4 3 4 7 6
		f 4 3 21 -6 -21
		mu 0 4 4 5 8 7
		f 4 4 23 -7 -23
		mu 0 4 6 7 10 9
		f 4 5 24 -8 -24
		mu 0 4 7 8 11 10
		f 4 6 26 -9 -26
		mu 0 4 9 10 13 12
		f 4 7 27 -10 -27
		mu 0 4 10 11 14 13
		f 4 8 29 -11 -29
		mu 0 4 12 13 16 15
		f 4 9 30 -12 -30
		mu 0 4 13 14 17 16
		f 4 10 32 -13 -32
		mu 0 4 15 16 19 18
		f 4 11 33 -14 -33
		mu 0 4 16 17 20 19
		f 4 12 35 -15 -35
		mu 0 4 18 19 22 21
		f 4 13 36 -16 -36
		mu 0 4 19 20 23 22
		f 4 14 38 -1 -38
		mu 0 4 21 22 25 24
		f 4 15 39 -2 -39
		mu 0 4 22 23 26 25
		f 4 -37 -34 40 -43
		mu 0 4 28 27 29 30
		f 4 -40 42 41 -19
		mu 0 4 2 28 30 5
		f 4 -41 -31 -28 -44
		mu 0 4 30 29 31 32
		f 4 -42 43 -25 -22
		mu 0 4 5 30 32 8
		f 4 34 46 -45 31
		mu 0 4 33 34 36 35
		f 4 37 16 -46 -47
		mu 0 4 34 0 3 36
		f 4 44 47 25 28
		mu 0 4 35 36 38 37
		f 4 45 19 22 -48
		mu 0 4 36 3 6 38;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dr" 1;
createNode transform -n "pCube7";
	setAttr ".t" -type "double3" 3.5653609264495971 0.12676872630982056 -3.6081911293061588 ;
	setAttr ".r" -type "double3" 0 33.738008792472641 0 ;
	setAttr ".s" -type "double3" 1.2384386052664758 1.5846246471401551 1.9398279235601623 ;
createNode transform -n "transform3" -p "pCube7";
	setAttr ".v" no;
createNode mesh -n "pCubeShape7" -p "transform3";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:23]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.375 0 0.5 0 0.625
		 0 0.375 0.125 0.5 0.125 0.625 0.125 0.375 0.25 0.5 0.25 0.625 0.25 0.375 0.375 0.5
		 0.375 0.625 0.375 0.375 0.5 0.5 0.5 0.625 0.5 0.375 0.625 0.5 0.625 0.625 0.625 0.375
		 0.75 0.5 0.75 0.625 0.75 0.375 0.875 0.5 0.875 0.625 0.875 0.375 1 0.5 1 0.625 1
		 0.875 0 0.75 0 0.875 0.125 0.75 0.125 0.875 0.25 0.75 0.25 0.125 0 0.25 0 0.125 0.125
		 0.25 0.125 0.125 0.25 0.25 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt";
	setAttr ".pt[1]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[2]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[4]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[5]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[7]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[8]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[10]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[11]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[13]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[14]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[16]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[17]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[19]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[20]" -type "float3" 0.41498348 0 0 ;
	setAttr ".pt[22]" -type "float3" 0.22341104 0 0 ;
	setAttr ".pt[23]" -type "float3" 0.41498345 0 0 ;
	setAttr ".pt[24]" -type "float3" 2.037925 0 -0.0082952585 ;
	setAttr -s 26 ".vt[0:25]"  -0.41921708 -0.14845927 0.16293819 0 -0.14845927 0.16293819
		 0.41921708 -0.14845927 0.16293819 -0.41921708 0 0.16293819 0 0 0.16293819 0.41921708 0 0.16293819
		 -0.41921708 0.14845927 0.16293819 0 0.14845927 0.16293819 0.41921708 0.14845927 0.16293819
		 -0.41921708 0.14845927 0 0 0.14845927 0 0.41921708 0.14845927 0 -0.41921708 0.14845927 -0.16293819
		 0 0.14845927 -0.16293819 0.41921708 0.14845927 -0.16293819 -0.41921708 0 -0.16293819
		 0 0 -0.16293819 0.41921708 0 -0.16293819 -0.41921708 -0.14845927 -0.16293819 0 -0.14845927 -0.16293819
		 0.41921708 -0.14845927 -0.16293819 -0.41921708 -0.14845927 0 0 -0.14845927 0 0.41921708 -0.14845927 0
		 0.41921708 0 0 -0.41921708 0 0;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 3 4 1 4 5 1 6 7 0 7 8 0 9 10 1
		 10 11 1 12 13 0 13 14 0 15 16 1 16 17 1 18 19 0 19 20 0 21 22 1 22 23 1 0 3 0 1 4 1
		 2 5 0 3 6 0 4 7 1 5 8 0 6 9 0 7 10 1 8 11 0 9 12 0 10 13 1 11 14 0 12 15 0 13 16 1
		 14 17 0 15 18 0 16 19 1 17 20 0 18 21 0 19 22 1 20 23 0 21 0 0 22 1 1 23 2 0 17 24 1
		 24 5 1 23 24 1 24 11 1 15 25 1 25 3 1 21 25 1 25 9 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 0 17 -3 -17
		mu 0 4 0 1 4 3
		f 4 1 18 -4 -18
		mu 0 4 1 2 5 4
		f 4 2 20 -5 -20
		mu 0 4 3 4 7 6
		f 4 3 21 -6 -21
		mu 0 4 4 5 8 7
		f 4 4 23 -7 -23
		mu 0 4 6 7 10 9
		f 4 5 24 -8 -24
		mu 0 4 7 8 11 10
		f 4 6 26 -9 -26
		mu 0 4 9 10 13 12
		f 4 7 27 -10 -27
		mu 0 4 10 11 14 13
		f 4 8 29 -11 -29
		mu 0 4 12 13 16 15
		f 4 9 30 -12 -30
		mu 0 4 13 14 17 16
		f 4 10 32 -13 -32
		mu 0 4 15 16 19 18
		f 4 11 33 -14 -33
		mu 0 4 16 17 20 19
		f 4 12 35 -15 -35
		mu 0 4 18 19 22 21
		f 4 13 36 -16 -36
		mu 0 4 19 20 23 22
		f 4 14 38 -1 -38
		mu 0 4 21 22 25 24
		f 4 15 39 -2 -39
		mu 0 4 22 23 26 25
		f 4 -37 -34 40 -43
		mu 0 4 28 27 29 30
		f 4 -40 42 41 -19
		mu 0 4 2 28 30 5
		f 4 -41 -31 -28 -44
		mu 0 4 30 29 31 32
		f 4 -42 43 -25 -22
		mu 0 4 5 30 32 8
		f 4 34 46 -45 31
		mu 0 4 33 34 36 35
		f 4 37 16 -46 -47
		mu 0 4 34 0 3 36
		f 4 44 47 25 28
		mu 0 4 35 36 38 37
		f 4 45 19 22 -48
		mu 0 4 36 3 6 38;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dr" 1;
createNode transform -n "pCube8";
	setAttr ".t" -type "double3" 0.85837794457155714 -0.35939586013968122 1.0576519002529159 ;
	setAttr ".r" -type "double3" 186.59321467925469 -5.3758791957180643 -74.753833606277112 ;
	setAttr ".s" -type "double3" 0.040077651854292642 0.037506551498324166 0.03411786524644763 ;
createNode transform -n "transform9" -p "pCube8";
	setAttr ".v" no;
createNode mesh -n "pCube8Shape" -p "transform9";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.4375 0.125 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 353 ".pt";
	setAttr ".pt[0]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[1]" -type "float3" 0.045078866 -4.4703484e-008 0.18863276 ;
	setAttr ".pt[2]" -type "float3" 0.0054256567 -7.4505806e-008 0.081288591 ;
	setAttr ".pt[4]" -type "float3" 0.045078032 2.9802322e-008 0.18863647 ;
	setAttr ".pt[5]" -type "float3" -0.0017658958 -4.4703484e-008 0.084456041 ;
	setAttr ".pt[7]" -type "float3" 0.045078032 -1.4901161e-008 0.18863276 ;
	setAttr ".pt[8]" -type "float3" -1.4901161e-008 0 -2.9802322e-008 ;
	setAttr ".pt[10]" -type "float3" -0.009052394 0 -0.0054935934 ;
	setAttr ".pt[11]" -type "float3" -2.9802322e-008 2.9802322e-008 2.2351742e-008 ;
	setAttr ".pt[13]" -type "float3" -0.0631826 0 -0.19962354 ;
	setAttr ".pt[14]" -type "float3" 1.4901161e-008 -1.4901161e-008 -1.8626451e-009 ;
	setAttr ".pt[16]" -type "float3" -0.063183352 1.4901161e-008 -0.19962192 ;
	setAttr ".pt[17]" -type "float3" -0.021484764 -2.9802322e-008 -0.094522886 ;
	setAttr ".pt[18]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[19]" -type "float3" -0.063183352 -5.9604645e-008 -0.19962016 ;
	setAttr ".pt[20]" -type "float3" -0.017622842 -4.4703484e-008 -0.09622205 ;
	setAttr ".pt[21]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[22]" -type "float3" -0.009052394 0 -0.0054935934 ;
	setAttr ".pt[23]" -type "float3" 0.0094625307 4.4703484e-008 -0.0079688653 ;
	setAttr ".pt[24]" -type "float3" -5.9604645e-008 -3.7252903e-009 0 ;
	setAttr ".pt[25]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[26]" -type "float3" 0.084565051 2.9802322e-008 0.2071602 ;
	setAttr ".pt[27]" -type "float3" 0.023752285 -2.9802322e-008 0.057083562 ;
	setAttr ".pt[29]" -type "float3" 0.084563032 4.5634806e-008 0.2071602 ;
	setAttr ".pt[30]" -type "float3" 0.023752019 2.9802322e-008 0.057085235 ;
	setAttr ".pt[32]" -type "float3" 0.084564 -1.4901161e-008 0.2071602 ;
	setAttr ".pt[33]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".pt[35]" -type "float3" -0.0053421231 2.2351742e-008 -0.0032430622 ;
	setAttr ".pt[36]" -type "float3" 0 0 -4.4703484e-008 ;
	setAttr ".pt[38]" -type "float3" -0.095249914 0 -0.21364824 ;
	setAttr ".pt[39]" -type "float3" 0 4.4703484e-008 8.9406967e-008 ;
	setAttr ".pt[41]" -type "float3" -0.095250927 -4.4703484e-008 -0.21365021 ;
	setAttr ".pt[42]" -type "float3" -0.02596584 7.4505806e-008 -0.057924248 ;
	setAttr ".pt[43]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[44]" -type "float3" -0.095252037 -2.6077032e-008 -0.21364613 ;
	setAttr ".pt[45]" -type "float3" -0.025483936 -2.9802322e-008 -0.05813612 ;
	setAttr ".pt[46]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[47]" -type "float3" -0.0053409864 0 -0.0032430622 ;
	setAttr ".pt[48]" -type "float3" -0.00086628116 5.9604645e-008 -0.00052539509 ;
	setAttr ".pt[49]" -type "float3" 1.4901161e-008 0 5.9604645e-008 ;
	setAttr ".pt[50]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[51]" -type "float3" 0.016320985 -0.098357446 0.57849514 ;
	setAttr ".pt[52]" -type "float3" 0.14360262 -0.098357446 1.173309 ;
	setAttr ".pt[53]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[54]" -type "float3" 0.016322594 -0.098357506 0.57849616 ;
	setAttr ".pt[55]" -type "float3" 0.12623996 -0.098357446 1.1675843 ;
	setAttr ".pt[57]" -type "float3" 0.016322594 -0.098357506 0.57849616 ;
	setAttr ".pt[58]" -type "float3" 0.13881421 -0.098357446 1.0171269 ;
	setAttr ".pt[60]" -type "float3" 0.079942666 -0.098357506 0.37200403 ;
	setAttr ".pt[61]" -type "float3" 0.20397529 -0.098357446 1.0053403 ;
	setAttr ".pt[63]" -type "float3" 0.14355959 -0.098357446 0.16551365 ;
	setAttr ".pt[64]" -type "float3" 0.27096173 -0.098357446 1.0012773 ;
	setAttr ".pt[66]" -type "float3" 0.14355887 -0.098357387 0.16551308 ;
	setAttr ".pt[67]" -type "float3" 0.25465396 -0.098357446 0.84970909 ;
	setAttr ".pt[68]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[69]" -type "float3" 0.1435564 -0.098357506 0.16551571 ;
	setAttr ".pt[70]" -type "float3" 0.27201745 -0.098357506 0.85543233 ;
	setAttr ".pt[71]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[72]" -type "float3" 0.079942666 -0.098357446 0.37200618 ;
	setAttr ".pt[73]" -type "float3" 0.22844431 -0.098357506 1.0211712 ;
	setAttr ".pt[74]" -type "float3" 0.20501247 -0.098357446 1.201821 ;
	setAttr ".pt[75]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[76]" -type "float3" 0.080767259 -2.9802322e-008 0.08786051 ;
	setAttr ".pt[77]" -type "float3" 0.042262852 -2.9802322e-008 0.047835704 ;
	setAttr ".pt[79]" -type "float3" 0.080767803 4.4703484e-008 0.087861739 ;
	setAttr ".pt[80]" -type "float3" 0.035267662 2.2351742e-008 0.050913196 ;
	setAttr ".pt[82]" -type "float3" 0.080767803 -2.2351742e-008 0.08786051 ;
	setAttr ".pt[83]" -type "float3" 0 7.4505806e-009 8.9406967e-008 ;
	setAttr ".pt[85]" -type "float3" -0.0047704456 1.4901161e-008 -0.0028956344 ;
	setAttr ".pt[86]" -type "float3" 0 -7.4505806e-009 8.9406967e-008 ;
	setAttr ".pt[88]" -type "float3" -0.090305969 1.4901161e-008 -0.09364944 ;
	setAttr ".pt[89]" -type "float3" 0 -1.4901161e-008 1.4901161e-007 ;
	setAttr ".pt[91]" -type "float3" -0.090307236 0 -0.09364944 ;
	setAttr ".pt[92]" -type "float3" -0.051315799 2.9802322e-008 -0.053852569 ;
	setAttr ".pt[93]" -type "float3" 1.4901161e-008 -2.9802322e-008 -1.4901161e-008 ;
	setAttr ".pt[94]" -type "float3" -0.090307243 -2.9802322e-008 -0.093649462 ;
	setAttr ".pt[95]" -type "float3" -0.04482365 -2.9802322e-008 -0.056712136 ;
	setAttr ".pt[96]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[97]" -type "float3" -0.0047687255 4.4703484e-008 -0.0028944453 ;
	setAttr ".pt[98]" -type "float3" 0.0060603325 -2.9802322e-008 -0.0076693567 ;
	setAttr ".pt[99]" -type "float3" -2.9802322e-008 -3.7252903e-009 -5.9604645e-008 ;
	setAttr ".pt[123]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[130]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[156]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[201]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[213]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[214]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[215]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[216]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[217]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[218]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[219]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[220]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[221]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[222]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[223]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[224]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[225]" -type "float3" 1.4901161e-008 -2.9802322e-008 -1.4901161e-008 ;
	setAttr ".pt[253]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[279]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[285]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[286]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[287]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[291]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[292]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[293]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[294]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[299]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[300]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[305]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[307]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[308]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[309]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[310]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[311]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[312]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[313]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[314]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[315]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[316]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[317]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[318]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[319]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[320]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[321]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[322]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[323]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[324]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[325]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[326]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[327]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[328]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[329]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[330]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[331]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[332]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[333]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[357]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[380]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[384]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[409]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[410]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[411]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[412]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[413]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[414]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[415]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[416]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[417]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[418]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[419]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[420]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[421]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[422]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[423]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[424]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[425]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[426]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[427]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[428]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[429]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[430]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[431]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[432]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[433]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[434]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[445]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".pt[461]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[462]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[463]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[464]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[465]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[466]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[467]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[468]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[469]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[470]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[471]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[472]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[473]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[474]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[475]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[476]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[477]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[478]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[479]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[480]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[481]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[482]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[483]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[484]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[485]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[486]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[532]" -type "float3" -1.4901161e-008 -2.9802322e-008 -2.7939677e-009 ;
	setAttr ".pt[533]" -type "float3" -5.9604645e-008 -5.9604645e-008 -1.4901161e-008 ;
	setAttr ".pt[534]" -type "float3" 0 2.9802322e-008 9.3132257e-010 ;
	setAttr ".pt[535]" -type "float3" -8.9406967e-008 -1.8626451e-009 0 ;
	setAttr ".pt[536]" -type "float3" -2.9802322e-008 -4.4703484e-008 1.4901161e-008 ;
	setAttr ".pt[537]" -type "float3" 2.9802322e-008 -1.4901161e-008 -4.4703484e-008 ;
	setAttr ".pt[538]" -type "float3" 1.8626451e-009 2.9802322e-008 -5.9604645e-008 ;
	setAttr ".pt[539]" -type "float3" 0 0 1.4901161e-008 ;
	setAttr ".pt[540]" -type "float3" 0 1.4901161e-008 2.9802322e-008 ;
	setAttr ".pt[541]" -type "float3" 4.4703484e-008 -2.2351742e-008 0 ;
	setAttr ".pt[542]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".pt[543]" -type "float3" -1.8626451e-009 0 1.4901161e-008 ;
	setAttr ".pt[544]" -type "float3" 0.28622088 -0.098357506 1.0283104 ;
	setAttr ".pt[545]" -type "float3" 0.21172109 -0.098357446 1.0476946 ;
	setAttr ".pt[546]" -type "float3" 0.28407785 -0.098357446 1.0192604 ;
	setAttr ".pt[547]" -type "float3" 0.20598397 -0.098357446 1.2155589 ;
	setAttr ".pt[548]" -type "float3" 0.1321272 -0.098357446 1.0455662 ;
	setAttr ".pt[549]" -type "float3" 0.12998426 -0.098357446 1.036515 ;
	setAttr ".pt[550]" -type "float3" 2.9802322e-008 -1.4901161e-008 -1.3411045e-007 ;
	setAttr ".pt[551]" -type "float3" 2.9802322e-008 -5.9604645e-008 2.9802322e-008 ;
	setAttr ".pt[552]" -type "float3" 2.9802322e-008 -1.4901161e-008 1.1920929e-007 ;
	setAttr ".pt[553]" -type "float3" -2.9802322e-008 0 0 ;
	setAttr ".pt[554]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".pt[555]" -type "float3" -2.9802322e-008 -1.4901161e-008 -2.9802322e-008 ;
	setAttr ".pt[556]" -type "float3" -5.9604645e-008 -2.9802322e-008 -3.7252903e-009 ;
	setAttr ".pt[557]" -type "float3" 5.9604645e-008 2.9802322e-008 3.7252903e-009 ;
	setAttr ".pt[558]" -type "float3" 5.9604645e-008 0 7.4505806e-009 ;
	setAttr ".pt[559]" -type "float3" 5.9604645e-008 1.4901161e-008 7.4505806e-009 ;
	setAttr ".pt[560]" -type "float3" 0 -2.9802322e-008 -2.2351742e-008 ;
	setAttr ".pt[561]" -type "float3" -2.9802322e-008 2.2351742e-008 1.4901161e-008 ;
	setAttr ".pt[562]" -type "float3" 7.4505806e-009 2.9802322e-008 -1.4901161e-007 ;
	setAttr ".pt[563]" -type "float3" -2.2351742e-008 5.9604645e-008 0 ;
	setAttr ".pt[564]" -type "float3" -1.4901161e-008 -1.4901161e-008 -2.9802322e-008 ;
	setAttr ".pt[565]" -type "float3" 0.053841531 -0.070198022 -0.66765594 ;
	setAttr ".pt[566]" -type "float3" 2.9802322e-008 -1.4901161e-008 4.4703484e-008 ;
	setAttr ".pt[567]" -type "float3" -2.9802322e-008 -5.9604645e-008 4.4703484e-008 ;
	setAttr ".pt[568]" -type "float3" 0.32784799 -0.098357446 1.26677 ;
	setAttr ".pt[569]" -type "float3" 0.24131808 -0.098357446 1.2869421 ;
	setAttr ".pt[570]" -type "float3" 0.32570508 -0.098357446 1.2577198 ;
	setAttr ".pt[571]" -type "float3" 0.98303723 0.89882463 1.1504503 ;
	setAttr ".pt[572]" -type "float3" 0.1496954 -0.098357446 1.2856016 ;
	setAttr ".pt[573]" -type "float3" 0.14755304 -0.098357446 1.2765504 ;
	setAttr ".pt[574]" -type "float3" -2.9802322e-008 -7.4505806e-009 -7.4505806e-008 ;
	setAttr ".pt[575]" -type "float3" 1.4901161e-008 0 -5.9604645e-008 ;
	setAttr ".pt[576]" -type "float3" -4.4703484e-008 -3.7252903e-009 5.9604645e-008 ;
	setAttr ".pt[577]" -type "float3" -1.4901161e-008 4.4703484e-008 -5.9604645e-008 ;
	setAttr ".pt[578]" -type "float3" -1.4901161e-008 -3.7252903e-009 1.4901161e-007 ;
	setAttr ".pt[579]" -type "float3" -1.4901161e-008 9.3132257e-010 -5.9604645e-008 ;
	setAttr ".pt[580]" -type "float3" 2.9802322e-008 -2.2351742e-008 -2.9802322e-008 ;
	setAttr ".pt[581]" -type "float3" 0 0 1.1920929e-007 ;
	setAttr ".pt[582]" -type "float3" 2.9802322e-008 0 1.1920929e-007 ;
	setAttr ".pt[583]" -type "float3" 0 -1.4901161e-008 -7.4505806e-008 ;
	setAttr ".pt[584]" -type "float3" 0 -1.4901161e-008 8.9406967e-008 ;
	setAttr ".pt[585]" -type "float3" 1.4901161e-008 -2.9802322e-008 2.9802322e-008 ;
	setAttr ".pt[586]" -type "float3" -2.9802322e-008 1.4901161e-008 0 ;
	setAttr ".pt[587]" -type "float3" -4.4703484e-008 3.7252903e-009 0 ;
	setAttr ".pt[588]" -type "float3" -5.9604645e-008 -1.4901161e-008 -1.4901161e-007 ;
	setAttr ".pt[589]" -type "float3" 5.9604645e-008 -1.4901161e-008 -1.3411045e-007 ;
	setAttr ".pt[590]" -type "float3" 2.9802322e-008 -1.4901161e-008 -1.1920929e-007 ;
	setAttr ".pt[591]" -type "float3" -2.9802322e-008 -1.4901161e-008 5.9604645e-008 ;
	setAttr ".pt[595]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[596]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[597]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[609]" -type "float3" 0.0017780052 -2.2351742e-008 0.0040525631 ;
	setAttr ".pt[610]" -type "float3" -2.9802322e-008 -7.4505806e-009 -5.9604645e-008 ;
	setAttr ".pt[611]" -type "float3" 1.4901161e-008 0 -1.4901161e-007 ;
	setAttr ".pt[612]" -type "float3" 1.4901161e-008 0 -2.9802322e-008 ;
	setAttr ".pt[613]" -type "float3" -5.9604645e-008 1.8626451e-009 8.9406967e-008 ;
	setAttr ".pt[614]" -type "float3" -2.9802322e-008 1.8626451e-009 -8.9406967e-008 ;
	setAttr ".pt[615]" -type "float3" 2.9802322e-008 0 0 ;
	setAttr ".pt[616]" -type "float3" 2.9802322e-008 -7.4505806e-009 -1.1920929e-007 ;
	setAttr ".pt[617]" -type "float3" 5.9604645e-008 -1.4901161e-008 -8.9406967e-008 ;
	setAttr ".pt[618]" -type "float3" -2.9802322e-008 4.4703484e-008 2.0861626e-007 ;
	setAttr ".pt[619]" -type "float3" 0 -2.9802322e-008 8.9406967e-008 ;
	setAttr ".pt[620]" -type "float3" 0.0088319704 -2.9802322e-008 -0.0034196028 ;
	setAttr ".pt[621]" -type "float3" 0.0017800641 0 0.0040535526 ;
	setAttr ".pt[622]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[623]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[632]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[633]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[634]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[635]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[641]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[642]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[643]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[655]" -type "float3" -0.024572361 7.4505806e-009 -0.048246253 ;
	setAttr ".pt[656]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".pt[657]" -type "float3" -1.4901161e-008 0 5.9604645e-008 ;
	setAttr ".pt[658]" -type "float3" 1.4901161e-008 1.4901161e-008 0 ;
	setAttr ".pt[659]" -type "float3" 0.053841561 -0.070198014 -0.66765559 ;
	setAttr ".pt[660]" -type "float3" 0 -4.4703484e-008 0 ;
	setAttr ".pt[661]" -type "float3" 9.3132257e-010 -2.9802322e-008 -4.4703484e-008 ;
	setAttr ".pt[662]" -type "float3" -0.0061318115 6.7055225e-008 -0.012847874 ;
	setAttr ".pt[663]" -type "float3" -0.024572361 2.2351742e-008 -0.048246253 ;
	setAttr ".pt[664]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[665]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[674]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[675]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[676]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[677]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[682]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[683]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[684]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[696]" -type "float3" -0.021917319 2.9802322e-008 -0.051630877 ;
	setAttr ".pt[697]" -type "float3" 0 -2.9802322e-008 0 ;
	setAttr ".pt[698]" -type "float3" 5.9604645e-008 3.7252903e-009 7.4505806e-009 ;
	setAttr ".pt[699]" -type "float3" 2.9802322e-008 -1.8626451e-009 3.7252903e-009 ;
	setAttr ".pt[700]" -type "float3" 5.9604645e-008 7.4505806e-009 -7.4505806e-009 ;
	setAttr ".pt[701]" -type "float3" -5.9604645e-008 -2.9802322e-008 1.8626451e-009 ;
	setAttr ".pt[702]" -type "float3" 5.9604645e-008 5.9604645e-008 -2.2351742e-008 ;
	setAttr ".pt[703]" -type "float3" 0.0059074373 4.4703484e-008 -0.027194116 ;
	setAttr ".pt[704]" -type "float3" -0.021917319 2.9802322e-008 -0.051629964 ;
	setAttr ".pt[705]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[706]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[715]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[716]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[717]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[718]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[721]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[722]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[723]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[724]" -type "float3" -3.7252903e-009 0 -5.9604645e-008 ;
	setAttr ".pt[733]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[734]" -type "float3" 1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[735]" -type "float3" 0.064038537 -0.098357446 0.42362416 ;
	setAttr ".pt[736]" -type "float3" 0.20723572 -0.098357446 1.0592026 ;
	setAttr ".pt[737]" -type "float3" 0.1918242 -0.098357446 1.0471623 ;
	setAttr ".pt[738]" -type "float3" 0.2184142 -0.098357446 1.286607 ;
	setAttr ".pt[739]" -type "float3" 0.96103168 0.89882535 1.1058898 ;
	setAttr ".pt[740]" -type "float3" 0.18698545 -0.098357446 1.1708018 ;
	setAttr ".pt[741]" -type "float3" 0.18875742 -0.098357446 1.1568875 ;
	setAttr ".pt[742]" -type "float3" 0.18768628 -0.098357446 1.0082871 ;
	setAttr ".pt[743]" -type "float3" 0.064038746 -0.098357446 0.42362273 ;
	setAttr ".pt[755]" -type "float3" -0.040872321 0.053288829 0.50683188 ;
	setAttr ".pt[756]" -type "float3" -0.07440801 0.097012252 0.92268699 ;
	setAttr ".pt[757]" -type "float3" -0.068930797 0.089871131 0.8547675 ;
	setAttr ".pt[761]" -type "float3" -1.8626451e-009 2.9802322e-008 1.4901161e-008 ;
	setAttr ".pt[762]" -type "float3" -5.9604645e-008 0 5.9604645e-008 ;
	setAttr ".pt[763]" -type "float3" -2.9802322e-008 7.4505806e-009 2.9802322e-008 ;
	setAttr ".pt[764]" -type "float3" 0 -1.4901161e-008 1.4901161e-008 ;
	setAttr ".pt[765]" -type "float3" 1.8626451e-009 2.9802322e-008 -5.9604645e-008 ;
	setAttr ".pt[766]" -type "float3" 0 -2.9802322e-008 -2.9802322e-008 ;
	setAttr ".pt[767]" -type "float3" 4.6566129e-010 0 -2.9802322e-008 ;
	setAttr ".pt[768]" -type "float3" -1.8626451e-009 2.9802322e-008 -1.4901161e-008 ;
	setAttr ".pt[769]" -type "float3" 1.4901161e-008 2.9802322e-008 -2.9802322e-008 ;
	setAttr ".pt[770]" -type "float3" 2.9802322e-008 -1.8626451e-009 -3.7252903e-009 ;
	setAttr ".pt[771]" -type "float3" 8.9406967e-008 -5.5879354e-009 3.7252903e-009 ;
	setAttr ".pt[772]" -type "float3" 1.4901161e-008 2.9802322e-008 0 ;
	setAttr ".pt[773]" -type "float3" -2.9802322e-008 1.4901161e-008 1.8626451e-009 ;
	setAttr ".pt[774]" -type "float3" -1.4901161e-008 -4.4703484e-008 -7.4505806e-009 ;
	setAttr ".pt[775]" -type "float3" -1.4901161e-008 -2.9802322e-008 -7.4505806e-009 ;
	setAttr ".pt[776]" -type "float3" 0 -4.4703484e-008 1.4901161e-008 ;
	setAttr ".pt[777]" -type "float3" 0.13484615 -0.098357446 1.0294957 ;
	setAttr ".pt[778]" -type "float3" 0.18784679 -0.098357446 1.1640387 ;
	setAttr ".pt[779]" -type "float3" 0.20551178 -0.098357446 1.2088813 ;
	setAttr ".pt[780]" -type "float3" 0.27827206 -0.098357446 1.0129241 ;
	setAttr ".pt[781]" -type "float3" 0.28041515 -0.098357446 1.0219746 ;
	setAttr ".pt[782]" -type "float3" 0.21124896 -0.098357446 1.0410167 ;
	setAttr ".pt[783]" -type "float3" 0.1926854 -0.098357446 1.0403993 ;
	setAttr ".pt[784]" -type "float3" 0.1369887 -0.098357446 1.0385468 ;
	setAttr ".dr" 1;
createNode transform -n "pCube9";
	setAttr ".t" -type "double3" 3.2485613271632161 0.086817188581805038 2.3874936624903933 ;
	setAttr ".s" -type "double3" 0.91717092144911083 0.79574140329254761 1.6931465751264418 ;
createNode transform -n "transform7" -p "pCube9";
	setAttr ".v" no;
createNode mesh -n "pCubeShape8" -p "transform7";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 84 ".pt[0:83]" -type "float3"  -0.1374902 0 0 -0.087663397 
		0.018223731 0 0 0 0.021718882 -0.1374902 0 0 -0.087663397 0 0 0 0 0.029696926 -0.1374902 
		0 0 -0.087663397 2.9802322e-008 0 0 0 0.029441088 -0.1374902 0 0 -0.087663397 0.084086604 
		0.0025114221 0.085115515 0 0 -0.1374902 0 0 -0.087663397 2.9802322e-008 -0.0025114221 
		0 0 -0.029174814 -0.1374902 0 0 -0.087663397 0 0 0 0 -0.029696926 -0.1374902 0 0 
		-0.087663397 0.018223731 0 0 0 -0.021718882 -0.1374902 0 0 -0.087663397 0.037408836 
		0 0.059206489 0 0 0.085115515 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 -0.0034080083 -0.1374902 0 2.2586974e-005 -0.1374902 0 0.0034531823 -0.1374902 
		0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 -0.0038576303 -0.1374902 0 2.2586974e-005 
		-0.1374902 0 0.0038576303 -0.1374902 0 -0.0037641504 -0.1374902 0 -0.0037208404 -0.1374902 
		0 2.2586974e-005 -0.1374902 0 2.2586974e-005 -0.1374902 0 0.0037666094 -0.1374902 
		0 0.0038094237 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 0 -0.087663397 2.9802322e-008 -0.0025114221 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 
		0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 2.9802322e-008 0 -0.14484955 2.9802322e-008 
		0.0025114221 -0.087663397 2.9802322e-008 -0.0025114221 -0.087663397 0 0 -0.087663397 
		0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 0 0 0.022798415 
		2.9802322e-008 0.0025114221 -0.085731789 0 -0.021718882 0 0 -0.029696926 0 0 -0.021718882 
		0 0 0 0 0 0.021718882 0 0 0.029696926 -0.085731789 0 0.021718882 -0.085731789 0 0 
		0 0 0.029441088 0.085115515 0 0 0 0 -0.029174814 0 0 -0.021718882 0 0 0.021718882 
		-0.024298441 0 0;
	setAttr ".dr" 1;
createNode transform -n "pCube13";
	setAttr ".t" -type "double3" 3.2912207811377199 0.086817188581805038 1.9820922493263469 ;
	setAttr ".r" -type "double3" 0 -12.85439459889915 0 ;
	setAttr ".s" -type "double3" 0.91717092144911083 0.79574140329254761 1.6931465751264418 ;
createNode transform -n "transform8" -p "pCube13";
	setAttr ".v" no;
createNode mesh -n "pCubeShape13" -p "transform8";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".iog[0].og[2].gcl" -type "componentList" 1 "f[0:79]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 118 ".uvst[0].uvsp[0:117]" -type "float2" 0.375 0 0.5 0 0.625
		 0 0.375 0.125 0.5 0.125 0.625 0.125 0.375 0.25 0.5 0.25 0.625 0.25 0.375 0.375 0.5
		 0.375 0.375 0.5 0.5 0.5 0.625 0.5 0.375 0.625 0.5 0.625 0.625 0.625 0.375 0.75 0.5
		 0.75 0.625 0.75 0.375 0.875 0.5 0.875 0.625 0.875 0.375 1 0.5 1 0.625 1 0.875 0 0.75
		 0 0.875 0.125 0.75 0.125 0.875 0.25 0.75 0.25 0.125 0 0.25 0 0.125 0.125 0.25 0.125
		 0.125 0.25 0.25 0.25 0.42587274 0.5 0.42587274 0.625 0.42587274 0.75 0.42587274 0.875
		 0.42587274 0 0.42587274 1 0.42587274 0.125 0.42587274 0.25 0.42587274 0.375 0.375
		 0.25 0.42587274 0.25 0.42587274 0.375 0.375 0.375 0.42587274 0.5 0.375 0.5 0.42587277
		 0.5 0.42587277 0.375 0.42587277 0.25 0.375 0.25 0.375 0.375 0.375 0.5 0.375 0.375
		 0.375 0.25 0.375 0.5 0.42587277 0.375 0.42587277 0.5 0.42587277 0.25 0.375 0.25 0.375
		 0.5 0.49411443 0.5 0.49411443 0.625 0.49411443 0.75 0.49411443 0.875 0.49411443 0
		 0.49411443 1 0.49411443 0.125 0.49411443 0.25 0.49411443 0.375 0.50787115 0.5 0.50787115
		 0.625 0.50787115 0.75 0.50787115 0.87499994 0.50787115 0 0.50787115 1 0.50787115
		 0.125 0.50787115 0.25 0.50787115 0.375 0.60444587 0.5 0.60444587 0.625 0.60444587
		 0.75 0.60444587 0.875 0.60444587 0 0.60444587 1 0.60444587 0.125 0.60444587 0.25
		 0.60444587 0.375 0 0 1 0 1 1 0 1 0 0 1 0 1 1 0 1 0 0 1 0 1 1 0 1 0 0 1 0 1 1 0 1
		 0 0 1 0 1 1 0 1 0 0 1 0 1 1 0 1;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 84 ".pt[0:83]" -type "float3"  -0.1374902 0 0 -0.087663397 
		0.018223731 0 0 0 0.021718882 -0.1374902 0 0 -0.087663397 0 0 0 0 0.029696926 -0.1374902 
		0 0 -0.087663397 2.9802322e-008 0 0 0 0.029441088 -0.1374902 0 0 -0.087663397 0.084086604 
		0.0025114221 0.085115515 0 0 -0.1374902 0 0 -0.087663397 2.9802322e-008 -0.0025114221 
		0 0 -0.029174814 -0.1374902 0 0 -0.087663397 0 0 0 0 -0.029696926 -0.1374902 0 0 
		-0.087663397 0.018223731 0 0 0 -0.021718882 -0.1374902 0 0 -0.087663397 0.037408836 
		0 0.059206489 0 0 0.085115515 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 -0.0034080083 -0.1374902 0 2.2586974e-005 -0.1374902 0 0.0034531823 -0.1374902 
		0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 -0.0038576303 -0.1374902 0 2.2586974e-005 
		-0.1374902 0 0.0038576303 -0.1374902 0 -0.0037641504 -0.1374902 0 -0.0037208404 -0.1374902 
		0 2.2586974e-005 -0.1374902 0 2.2586974e-005 -0.1374902 0 0.0037666094 -0.1374902 
		0 0.0038094237 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 0 0 -0.1374902 
		0 0 -0.087663397 2.9802322e-008 -0.0025114221 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 
		0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 2.9802322e-008 0 -0.14484955 2.9802322e-008 
		0.0025114221 -0.087663397 2.9802322e-008 -0.0025114221 -0.087663397 0 0 -0.087663397 
		0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 0 0 -0.087663397 0 0 0.022798415 
		2.9802322e-008 0.0025114221 -0.085731789 0 -0.021718882 0 0 -0.029696926 0 0 -0.021718882 
		0 0 0 0 0 0.021718882 0 0 0.029696926 -0.085731789 0 0.021718882 -0.085731789 0 0 
		0 0 0.029441088 0.085115515 0 0 0 0 -0.029174814 0 0 -0.021718882 0 0 0.021718882 
		-0.024298441 0 0;
	setAttr -s 84 ".vt[0:83]"  -0.17315245 -0.063452534 0.032971621 0.074259043 -0.063493729 0.032971621
		 0.46179414 -0.063493729 0.032971621 -0.1853714 -0.030779436 0.045083165 0.074259043 4.4703484e-008 0.045083165
		 0.46327639 4.4703484e-008 0.045083165 -0.21179032 0.0023425668 0.04228282 0.074259043 0.063493803 0.032971621
		 0.46179414 0.063493773 0.044694781 -0.21350718 0.056314006 0 0.074259043 0.08681719 0
		 0.46327639 0.08681719 0 -0.20740247 0.0084397197 -0.041760325 0.074259043 0.063493803 -0.032971621
		 0.46179414 0.063493773 -0.044290543 -0.18242931 -0.030687913 -0.045083165 0.074259043 4.4703484e-008 -0.045083165
		 0.46327639 4.4703484e-008 -0.045083165 -0.17315245 -0.063452534 -0.032971621 0.074259043 -0.063493729 -0.032971621
		 0.46179414 -0.063493729 -0.032971621 -0.17462754 -0.086749732 0 0.074259043 -0.086817145 0
		 0.46327639 -0.086817145 0 0.46327639 4.4703484e-008 0 -0.19256783 -0.02386649 0 -0.10293412 0.063493773 -0.032971621
		 -0.10381317 4.4703484e-008 -0.045083165 -0.1013329 -0.063493729 -0.032971621 -0.10221171 -0.086817145 0
		 -0.1013329 -0.063493729 0.032971621 -0.10381317 4.4703484e-008 0.045083165 -0.10293412 0.063493773 0.032971621
		 -0.10381317 0.08681719 0 -0.27932286 0.023199633 0.037081003 -0.36644077 -0.05284062 0
		 -0.27932286 0.023199633 -0.037081003 -0.10535645 0.069622815 -0.033241749 -0.11190248 0.091801822 0
		 -0.10535645 0.069622815 0.033241749 -0.21622753 0.008191511 0.041940928 -0.22450733 0.050773725 0
		 -0.21212816 0.013888031 -0.041452646 -0.28003478 0.027075276 0.04093051 -0.1711483 0.095161229 0.040462375
		 -0.25981808 0.1031751 0 -0.36790466 -0.046030767 0 -0.17114615 0.095149815 -0.040468812
		 -0.28003311 0.027056694 -0.040931582 -0.1051507 0.074591205 -0.035918117 -0.11153483 0.10083431 0
		 -0.10515213 0.074609801 0.035917044 -0.21618676 0.0091329664 0.046778917 -0.21208405 0.014792264 -0.046292543
		 0.060189962 0.063493773 -0.032971621 0.060120344 4.4703484e-008 -0.045083165 0.060317039 -0.063493729 -0.032971621
		 0.060247421 -0.086817145 0 0.060317039 -0.063493729 0.032971621 0.060120344 4.4703484e-008 0.045083165
		 0.060189962 0.063493773 0.032971621 0.060120344 0.08681719 0 0.08785367 0.063493773 -0.032971621
		 0.087946892 4.4703484e-008 -0.045083165 0.08785367 -0.063493729 -0.032971621 0.087946892 -0.086817138 0
		 0.08785367 -0.063493729 0.032971621 0.087946892 4.4703484e-008 0.045083165 0.08785367 0.063493773 0.032971621
		 0.087946892 0.08681719 0 0.33118629 0.063493773 -0.032971621 0.33242512 4.4703484e-008 -0.045083165
		 0.33118629 -0.063493729 -0.032971621 0.33242512 -0.086817145 0 0.33118629 -0.063493729 0.032971621
		 0.33242512 4.4703484e-008 0.045083165 0.33118629 0.063493773 0.032971621 0.33242512 0.08681719 0
		 0.46179414 0.25875586 0.044694781 0.46327639 0.28207928 0 0.46179414 0.25875586 -0.044290543
		 0.33118629 0.25875586 -0.032971621 0.33118629 0.25875586 0.032971621 0.33242512 0.28207928 0;
	setAttr -s 163 ".ed[0:162]"  0 30 0 1 66 0 3 31 1 4 67 1 6 32 0 7 68 0
		 10 69 1 12 26 0 13 62 0 15 27 1 16 63 1 18 28 0 19 64 0 21 29 1 22 65 1 0 3 0 1 4 1
		 2 5 0 3 6 0 4 7 1 5 8 0 6 9 1 7 10 1 8 11 1 9 12 1 10 13 1 11 14 1 12 15 0 13 16 1
		 14 17 0 15 18 0 16 19 1 17 20 0 18 21 0 19 22 1 20 23 0 21 0 0 22 1 1 23 2 0 17 24 1
		 24 5 1 23 24 1 24 11 1 15 25 1 25 3 1 21 25 1 25 9 1 26 54 0 27 55 1 26 27 1 28 56 0
		 27 28 1 29 57 1 28 29 1 30 58 0 29 30 1 31 59 1 30 31 1 32 60 0 31 32 1 33 61 1 32 33 0
		 33 26 0 6 40 0 32 39 0 33 38 1 9 41 1 34 35 0 26 37 0 12 42 0 35 36 0 37 38 0 38 39 0
		 40 34 0 39 40 0 41 35 1 40 41 1 42 36 1 41 42 1 42 37 0 34 43 0 43 44 0 44 45 0 35 46 0
		 46 45 1 43 46 0 45 47 0 36 48 0 48 47 0 46 48 0 37 49 0 38 50 1 49 50 0 49 47 0 50 45 1
		 39 51 0 50 51 0 51 44 0 40 52 0 51 52 0 52 43 0 42 53 1 53 49 0 53 48 0 54 13 0 55 16 1
		 54 55 1 56 19 0 55 56 1 57 22 1 56 57 1 58 1 0 57 58 1 59 4 1 58 59 1 60 7 0 59 60 1
		 61 10 1 60 61 1 61 54 1 62 70 0 63 71 1 62 63 1 64 72 0 63 64 1 65 73 1 64 65 1 66 74 0
		 65 66 1 67 75 1 66 67 1 68 76 0 67 68 1 69 77 1 68 69 1 69 62 1 70 14 1 71 17 1 70 71 1
		 72 20 0 71 72 1 73 23 1 72 73 1 74 2 0 73 74 1 75 5 1 74 75 1 76 8 1 75 76 1 76 77 0
		 77 70 0 8 78 0 11 79 1 78 79 0 14 80 0 79 80 0 70 81 0 81 80 0 76 82 0 82 78 0 77 83 1
		 82 83 0 83 81 0;
	setAttr -s 80 -ch 320 ".fc[0:79]" -type "polyFaces" 
		f 4 0 57 -3 -16
		mu 0 4 0 42 44 3
		f 4 1 130 -4 -17
		mu 0 4 1 80 82 4
		f 4 2 59 -5 -19
		mu 0 4 3 44 45 6
		f 4 3 132 -6 -20
		mu 0 4 4 82 83 7
		f 4 81 82 -85 -86
		mu 0 4 60 48 49 59
		f 4 5 134 -7 -23
		mu 0 4 7 83 84 10
		f 4 84 86 -89 -90
		mu 0 4 59 49 51 61
		f 4 6 135 -9 -26
		mu 0 4 10 84 76 12
		f 4 7 49 -10 -28
		mu 0 4 11 38 39 14
		f 4 8 122 -11 -29
		mu 0 4 12 76 77 15
		f 4 9 51 -12 -31
		mu 0 4 14 39 40 17
		f 4 10 124 -13 -32
		mu 0 4 15 77 78 18
		f 4 11 53 -14 -34
		mu 0 4 17 40 41 20
		f 4 12 126 -15 -35
		mu 0 4 18 78 79 21
		f 4 13 55 -1 -37
		mu 0 4 20 41 43 23
		f 4 14 128 -2 -38
		mu 0 4 21 79 81 24
		f 4 -36 -33 39 -42
		mu 0 4 27 26 28 29
		f 4 -39 41 40 -18
		mu 0 4 2 27 29 5
		f 4 -40 -30 -27 -43
		mu 0 4 29 28 30 31
		f 4 -41 42 -24 -21
		mu 0 4 5 29 31 8
		f 4 33 45 -44 30
		mu 0 4 32 33 35 34
		f 4 36 15 -45 -46
		mu 0 4 33 0 3 35
		f 4 43 46 24 27
		mu 0 4 34 35 37 36
		f 4 44 18 21 -47
		mu 0 4 35 3 6 37
		f 4 47 106 -49 -50
		mu 0 4 38 67 68 39
		f 4 -52 48 108 -51
		mu 0 4 40 39 68 69
		f 4 -54 50 110 -53
		mu 0 4 41 40 69 70
		f 4 -56 52 112 -55
		mu 0 4 43 41 70 72
		f 4 -58 54 114 -57
		mu 0 4 44 42 71 73
		f 4 -60 56 116 -59
		mu 0 4 45 44 73 74
		f 4 -62 58 118 -61
		mu 0 4 46 45 74 75
		f 4 -63 60 119 -48
		mu 0 4 38 46 75 67
		f 4 4 64 74 -64
		mu 0 4 6 45 55 56
		f 4 61 65 72 -65
		mu 0 4 45 46 54 55
		f 4 -22 63 76 -67
		mu 0 4 9 6 56 57
		f 4 62 68 71 -66
		mu 0 4 46 38 53 54
		f 4 -8 69 79 -69
		mu 0 4 38 11 58 53
		f 4 -25 66 78 -70
		mu 0 4 11 9 57 58
		f 4 -93 93 -87 -95
		mu 0 4 62 63 51 49
		f 4 -97 94 -83 -98
		mu 0 4 64 62 49 48
		f 4 -100 97 -82 -101
		mu 0 4 65 64 48 60
		f 4 -77 73 67 -76
		mu 0 4 57 56 47 50
		f 4 -79 75 70 -78
		mu 0 4 58 57 50 52
		f 4 -103 103 88 -94
		mu 0 4 63 66 61 51
		f 4 -68 80 85 -84
		mu 0 4 50 47 60 59
		f 4 -71 83 89 -88
		mu 0 4 52 50 59 61
		f 4 -72 90 92 -92
		mu 0 4 54 53 63 62
		f 4 -73 91 96 -96
		mu 0 4 55 54 62 64
		f 4 -75 95 99 -99
		mu 0 4 56 55 64 65
		f 4 -74 98 100 -81
		mu 0 4 47 56 65 60
		f 4 -80 101 102 -91
		mu 0 4 53 58 66 63
		f 4 77 87 -104 -102
		mu 0 4 58 52 61 66
		f 4 104 28 -106 -107
		mu 0 4 67 12 15 68
		f 4 -109 105 31 -108
		mu 0 4 69 68 15 18
		f 4 -111 107 34 -110
		mu 0 4 70 69 18 21
		f 4 -113 109 37 -112
		mu 0 4 72 70 21 24
		f 4 -115 111 16 -114
		mu 0 4 73 71 1 4
		f 4 -117 113 19 -116
		mu 0 4 74 73 4 7
		f 4 -119 115 22 -118
		mu 0 4 75 74 7 10
		f 4 -120 117 25 -105
		mu 0 4 67 75 10 12
		f 4 120 138 -122 -123
		mu 0 4 76 85 86 77
		f 4 -125 121 140 -124
		mu 0 4 78 77 86 87
		f 4 -127 123 142 -126
		mu 0 4 79 78 87 88
		f 4 -129 125 144 -128
		mu 0 4 81 79 88 90
		f 4 -131 127 146 -130
		mu 0 4 82 80 89 91
		f 4 -133 129 148 -132
		mu 0 4 83 82 91 92
		f 4 -135 131 149 -134
		mu 0 4 84 83 92 93
		f 4 -136 133 150 -121
		mu 0 4 76 84 93 85
		f 4 136 29 -138 -139
		mu 0 4 85 13 16 86
		f 4 -141 137 32 -140
		mu 0 4 87 86 16 19
		f 4 -143 139 35 -142
		mu 0 4 88 87 19 22
		f 4 -145 141 38 -144
		mu 0 4 90 88 22 25
		f 4 -147 143 17 -146
		mu 0 4 91 89 2 5
		f 4 -149 145 20 -148
		mu 0 4 92 91 5 8
		f 4 23 152 -154 -152
		mu 0 4 94 95 96 97
		f 4 26 154 -156 -153
		mu 0 4 98 99 100 101
		f 4 -137 156 157 -155
		mu 0 4 102 103 104 105
		f 4 147 151 -160 -159
		mu 0 4 106 107 108 109
		f 4 -150 158 161 -161
		mu 0 4 110 111 112 113
		f 4 -151 160 162 -157
		mu 0 4 114 115 116 117;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dr" 1;
createNode transform -n "pCube14";
	setAttr ".t" -type "double3" 0 2.2484370805269247 0 ;
createNode mesh -n "pCube14Shape" -p "pCube14";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.2083333432674408 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".pt";
	setAttr ".pt[113]" -type "float3" 0 1.4901161e-008 1.4901161e-008 ;
	setAttr ".pt[131]" -type "float3" 0 0.18429206 0.090972647 ;
	setAttr ".pt[210]" -type "float3" 0 0.06350901 -0.035856314 ;
	setAttr ".dr" 3;
	setAttr ".dsm" 2;
createNode mentalrayItemsList -s -n "mentalrayItemsList";
createNode mentalrayGlobals -s -n "mentalrayGlobals";
createNode mentalrayOptions -s -n "miDefaultOptions";
	addAttr -ci true -m -sn "stringOptions" -ln "stringOptions" -at "compound" -nc 
		3;
	addAttr -ci true -sn "name" -ln "name" -dt "string" -p "stringOptions";
	addAttr -ci true -sn "value" -ln "value" -dt "string" -p "stringOptions";
	addAttr -ci true -sn "type" -ln "type" -dt "string" -p "stringOptions";
	setAttr -s 48 ".stringOptions";
	setAttr ".stringOptions[0].name" -type "string" "rast motion factor";
	setAttr ".stringOptions[0].value" -type "string" "1.0";
	setAttr ".stringOptions[0].type" -type "string" "scalar";
	setAttr ".stringOptions[1].name" -type "string" "rast transparency depth";
	setAttr ".stringOptions[1].value" -type "string" "8";
	setAttr ".stringOptions[1].type" -type "string" "integer";
	setAttr ".stringOptions[2].name" -type "string" "rast useopacity";
	setAttr ".stringOptions[2].value" -type "string" "true";
	setAttr ".stringOptions[2].type" -type "string" "boolean";
	setAttr ".stringOptions[3].name" -type "string" "importon";
	setAttr ".stringOptions[3].value" -type "string" "false";
	setAttr ".stringOptions[3].type" -type "string" "boolean";
	setAttr ".stringOptions[4].name" -type "string" "importon density";
	setAttr ".stringOptions[4].value" -type "string" "1.0";
	setAttr ".stringOptions[4].type" -type "string" "scalar";
	setAttr ".stringOptions[5].name" -type "string" "importon merge";
	setAttr ".stringOptions[5].value" -type "string" "0.0";
	setAttr ".stringOptions[5].type" -type "string" "scalar";
	setAttr ".stringOptions[6].name" -type "string" "importon trace depth";
	setAttr ".stringOptions[6].value" -type "string" "0";
	setAttr ".stringOptions[6].type" -type "string" "integer";
	setAttr ".stringOptions[7].name" -type "string" "importon traverse";
	setAttr ".stringOptions[7].value" -type "string" "true";
	setAttr ".stringOptions[7].type" -type "string" "boolean";
	setAttr ".stringOptions[8].name" -type "string" "shadowmap pixel samples";
	setAttr ".stringOptions[8].value" -type "string" "3";
	setAttr ".stringOptions[8].type" -type "string" "integer";
	setAttr ".stringOptions[9].name" -type "string" "ambient occlusion";
	setAttr ".stringOptions[9].value" -type "string" "false";
	setAttr ".stringOptions[9].type" -type "string" "boolean";
	setAttr ".stringOptions[10].name" -type "string" "ambient occlusion rays";
	setAttr ".stringOptions[10].value" -type "string" "64";
	setAttr ".stringOptions[10].type" -type "string" "integer";
	setAttr ".stringOptions[11].name" -type "string" "ambient occlusion cache";
	setAttr ".stringOptions[11].value" -type "string" "false";
	setAttr ".stringOptions[11].type" -type "string" "boolean";
	setAttr ".stringOptions[12].name" -type "string" "ambient occlusion cache density";
	setAttr ".stringOptions[12].value" -type "string" "1.0";
	setAttr ".stringOptions[12].type" -type "string" "scalar";
	setAttr ".stringOptions[13].name" -type "string" "ambient occlusion cache points";
	setAttr ".stringOptions[13].value" -type "string" "64";
	setAttr ".stringOptions[13].type" -type "string" "integer";
	setAttr ".stringOptions[14].name" -type "string" "irradiance particles";
	setAttr ".stringOptions[14].value" -type "string" "false";
	setAttr ".stringOptions[14].type" -type "string" "boolean";
	setAttr ".stringOptions[15].name" -type "string" "irradiance particles rays";
	setAttr ".stringOptions[15].value" -type "string" "256";
	setAttr ".stringOptions[15].type" -type "string" "integer";
	setAttr ".stringOptions[16].name" -type "string" "irradiance particles interpolate";
	setAttr ".stringOptions[16].value" -type "string" "1";
	setAttr ".stringOptions[16].type" -type "string" "integer";
	setAttr ".stringOptions[17].name" -type "string" "irradiance particles interppoints";
	setAttr ".stringOptions[17].value" -type "string" "64";
	setAttr ".stringOptions[17].type" -type "string" "integer";
	setAttr ".stringOptions[18].name" -type "string" "irradiance particles indirect passes";
	setAttr ".stringOptions[18].value" -type "string" "0";
	setAttr ".stringOptions[18].type" -type "string" "integer";
	setAttr ".stringOptions[19].name" -type "string" "irradiance particles scale";
	setAttr ".stringOptions[19].value" -type "string" "1.0";
	setAttr ".stringOptions[19].type" -type "string" "scalar";
	setAttr ".stringOptions[20].name" -type "string" "irradiance particles env";
	setAttr ".stringOptions[20].value" -type "string" "true";
	setAttr ".stringOptions[20].type" -type "string" "boolean";
	setAttr ".stringOptions[21].name" -type "string" "irradiance particles env rays";
	setAttr ".stringOptions[21].value" -type "string" "256";
	setAttr ".stringOptions[21].type" -type "string" "integer";
	setAttr ".stringOptions[22].name" -type "string" "irradiance particles env scale";
	setAttr ".stringOptions[22].value" -type "string" "1";
	setAttr ".stringOptions[22].type" -type "string" "integer";
	setAttr ".stringOptions[23].name" -type "string" "irradiance particles rebuild";
	setAttr ".stringOptions[23].value" -type "string" "true";
	setAttr ".stringOptions[23].type" -type "string" "boolean";
	setAttr ".stringOptions[24].name" -type "string" "irradiance particles file";
	setAttr ".stringOptions[24].value" -type "string" "";
	setAttr ".stringOptions[24].type" -type "string" "string";
	setAttr ".stringOptions[25].name" -type "string" "geom displace motion factor";
	setAttr ".stringOptions[25].value" -type "string" "1.0";
	setAttr ".stringOptions[25].type" -type "string" "scalar";
	setAttr ".stringOptions[26].name" -type "string" "contrast all buffers";
	setAttr ".stringOptions[26].value" -type "string" "true";
	setAttr ".stringOptions[26].type" -type "string" "boolean";
	setAttr ".stringOptions[27].name" -type "string" "finalgather normal tolerance";
	setAttr ".stringOptions[27].value" -type "string" "25.842";
	setAttr ".stringOptions[27].type" -type "string" "scalar";
	setAttr ".stringOptions[28].name" -type "string" "trace camera clip";
	setAttr ".stringOptions[28].value" -type "string" "false";
	setAttr ".stringOptions[28].type" -type "string" "boolean";
	setAttr ".stringOptions[29].name" -type "string" "unified sampling";
	setAttr ".stringOptions[29].value" -type "string" "true";
	setAttr ".stringOptions[29].type" -type "string" "boolean";
	setAttr ".stringOptions[30].name" -type "string" "samples quality";
	setAttr ".stringOptions[30].value" -type "string" "0.25 0.25 0.25 0.25";
	setAttr ".stringOptions[30].type" -type "string" "color";
	setAttr ".stringOptions[31].name" -type "string" "samples min";
	setAttr ".stringOptions[31].value" -type "string" "1.0";
	setAttr ".stringOptions[31].type" -type "string" "scalar";
	setAttr ".stringOptions[32].name" -type "string" "samples max";
	setAttr ".stringOptions[32].value" -type "string" "100.0";
	setAttr ".stringOptions[32].type" -type "string" "scalar";
	setAttr ".stringOptions[33].name" -type "string" "samples error cutoff";
	setAttr ".stringOptions[33].value" -type "string" "0.0 0.0 0.0 0.0";
	setAttr ".stringOptions[33].type" -type "string" "color";
	setAttr ".stringOptions[34].name" -type "string" "samples per object";
	setAttr ".stringOptions[34].value" -type "string" "false";
	setAttr ".stringOptions[34].type" -type "string" "boolean";
	setAttr ".stringOptions[35].name" -type "string" "progressive";
	setAttr ".stringOptions[35].value" -type "string" "false";
	setAttr ".stringOptions[35].type" -type "string" "boolean";
	setAttr ".stringOptions[36].name" -type "string" "progressive max time";
	setAttr ".stringOptions[36].value" -type "string" "0";
	setAttr ".stringOptions[36].type" -type "string" "integer";
	setAttr ".stringOptions[37].name" -type "string" "progressive subsampling size";
	setAttr ".stringOptions[37].value" -type "string" "4";
	setAttr ".stringOptions[37].type" -type "string" "integer";
	setAttr ".stringOptions[38].name" -type "string" "iray";
	setAttr ".stringOptions[38].value" -type "string" "false";
	setAttr ".stringOptions[38].type" -type "string" "boolean";
	setAttr ".stringOptions[39].name" -type "string" "light relative scale";
	setAttr ".stringOptions[39].value" -type "string" "0.31831";
	setAttr ".stringOptions[39].type" -type "string" "scalar";
	setAttr ".stringOptions[40].name" -type "string" "trace camera motion vectors";
	setAttr ".stringOptions[40].value" -type "string" "false";
	setAttr ".stringOptions[40].type" -type "string" "boolean";
	setAttr ".stringOptions[41].name" -type "string" "ray differentials";
	setAttr ".stringOptions[41].value" -type "string" "true";
	setAttr ".stringOptions[41].type" -type "string" "boolean";
	setAttr ".stringOptions[42].name" -type "string" "environment lighting mode";
	setAttr ".stringOptions[42].value" -type "string" "off";
	setAttr ".stringOptions[42].type" -type "string" "string";
	setAttr ".stringOptions[43].name" -type "string" "environment lighting quality";
	setAttr ".stringOptions[43].value" -type "string" "0.2";
	setAttr ".stringOptions[43].type" -type "string" "scalar";
	setAttr ".stringOptions[44].name" -type "string" "environment lighting shadow";
	setAttr ".stringOptions[44].value" -type "string" "transparent";
	setAttr ".stringOptions[44].type" -type "string" "string";
	setAttr ".stringOptions[45].name" -type "string" "environment lighting resolution";
	setAttr ".stringOptions[45].value" -type "string" "512";
	setAttr ".stringOptions[45].type" -type "string" "integer";
	setAttr ".stringOptions[46].name" -type "string" "environment lighting shader samples";
	setAttr ".stringOptions[46].value" -type "string" "2";
	setAttr ".stringOptions[46].type" -type "string" "integer";
	setAttr ".stringOptions[47].name" -type "string" "environment lighting scale";
	setAttr ".stringOptions[47].value" -type "string" "1.0 1.0 1.0";
	setAttr ".stringOptions[47].type" -type "string" "color";
createNode mentalrayFramebuffer -s -n "miDefaultFramebuffer";
createNode lightLinker -s -n "lightLinker1";
	setAttr -s 2 ".lnk";
	setAttr -s 2 ".slnk";
createNode displayLayerManager -n "layerManager";
	setAttr ".cdl" 2;
	setAttr -s 3 ".dli[1:2]"  1 2;
	setAttr -s 3 ".dli";
createNode displayLayer -n "defaultLayer";
createNode renderLayerManager -n "renderLayerManager";
createNode renderLayer -n "defaultRenderLayer";
	setAttr ".g" yes;
createNode displayLayer -n "lado";
	setAttr ".dt" 2;
	setAttr ".c" 13;
	setAttr ".do" 1;
createNode displayLayer -n "frebte";
	setAttr ".dt" 2;
	setAttr ".c" 30;
	setAttr ".do" 2;
createNode script -n "uiConfigurationScriptNode";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"top\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n"
		+ "                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 8192\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n"
		+ "                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n"
		+ "                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 8192\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -maxConstantTransparency 1\n"
		+ "            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n"
		+ "            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"side\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 1\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 8192\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n"
		+ "                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n"
		+ "                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n"
		+ "                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 1\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n"
		+ "            -textureMaxSize 8192\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n"
		+ "            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n"
		+ "\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"front\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 1\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n"
		+ "                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 8192\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n"
		+ "                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n"
		+ "                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 1\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 8192\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n"
		+ "            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n"
		+ "            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `modelPanel -unParent -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            modelEditor -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n"
		+ "                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 8192\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -maxConstantTransparency 1\n                -rendererName \"vp2Renderer\" \n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 256 256 \n                -bumpResolution 512 512 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n"
		+ "                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 1\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 0\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n"
		+ "                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                $editorName;\n            modelEditor -e -viewSelected 0 $editorName;\n            modelEditor -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n"
		+ "            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 8192\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 0\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n"
		+ "            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `outlinerPanel -unParent -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels `;\n\t\t\t$editorName = $panelName;\n            outlinerEditor -e \n                -showShapes 0\n                -showReferenceNodes 1\n                -showReferenceMembers 1\n"
		+ "                -showAttributes 0\n                -showConnected 0\n                -showAnimCurvesOnly 0\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 1\n                -showAssets 1\n                -showContainedOnly 1\n                -showPublishedAsConnected 0\n                -showContainerContents 1\n                -ignoreDagHierarchy 0\n                -expandConnections 0\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 0\n                -highlightActive 1\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"defaultSetFilter\" \n                -showSetMembers 1\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n"
		+ "                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 0\n                -ignoreHiddenAttribute 0\n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n"
		+ "            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n"
		+ "            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"graphEditor\" -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n"
		+ "                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n"
		+ "                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 1\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n"
		+ "                -snapValue \"none\" \n                -showResults \"off\" \n                -showBufferCurves \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -stackedCurves 0\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -displayNormalized 0\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -classicMode 1\n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n"
		+ "                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n"
		+ "                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 1\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showResults \"off\" \n                -showBufferCurves \"off\" \n"
		+ "                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -stackedCurves 0\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -displayNormalized 0\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -classicMode 1\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dopeSheetPanel\" -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n"
		+ "                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n"
		+ "                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n"
		+ "                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n"
		+ "                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n"
		+ "                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayKeys 1\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n"
		+ "\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"clipEditorPanel\" -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 0 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n"
		+ "                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"sequenceEditorPanel\" -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 1 \n                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayKeys 0\n                -displayTangents 0\n                -displayActiveKeys 0\n                -displayActiveKeyTangents 0\n                -displayInfinities 0\n                -autoFit 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"hyperGraphPanel\" -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n"
		+ "                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n"
		+ "                $editorName;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n"
		+ "                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"hyperShadePanel\" -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" == $panelName) {\n"
		+ "\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"visorPanel\" -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -defaultPinnedState 0\n                -ignoreAssets 1\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n"
		+ "                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -keyReleaseCommand \"nodeEdKeyReleaseCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                $editorName;;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -defaultPinnedState 0\n                -ignoreAssets 1\n"
		+ "                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -keyReleaseCommand \"nodeEdKeyReleaseCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                $editorName;;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"createNodePanel\" -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Texture Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"polyTexturePlacementPanel\" -l (localizedPanelLabel(\"UV Texture Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Texture Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"renderWindowPanel\" -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"blendShapePanel\" (localizedPanelLabel(\"Blend Shape\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\tblendShapePanel -unParent -l (localizedPanelLabel(\"Blend Shape\")) -mbv $menusOkayInPanels ;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tblendShapePanel -edit -l (localizedPanelLabel(\"Blend Shape\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dynRelEdPanel\" -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n"
		+ "\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"relationshipPanel\" -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"referenceEditorPanel\" -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"componentEditorPanel\" -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"dynPaintScriptedPanelType\" -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels `;\n"
		+ "\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" == $panelName) {\n\t\tif ($useSceneConfig) {\n\t\t\t$panelName = `scriptedPanel -unParent  -type \"scriptEditorPanel\" -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels `;\n\t\t}\n\t} else {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-defaultImage \"\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n"
		+ "\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 8192\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 0\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 8192\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 0\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        setFocus `paneLayout -q -p1 $gMainPane`;\n        sceneUIReplacement -deleteRemaining;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode polyCube -n "polyCube1";
	setAttr ".w" 2.734811434871169;
	setAttr ".h" 2.8192609961181261;
	setAttr ".d" 4.3947614906934653;
	setAttr ".sw" 4;
	setAttr ".sh" 6;
	setAttr ".sd" 6;
	setAttr ".cuv" 4;
createNode deleteComponent -n "deleteComponent1";
	setAttr ".dc" -type "componentList" 25 "f[0:1]" "f[4:5]" "f[8:9]" "f[12:13]" "f[16:17]" "f[20:21]" "f[24:25]" "f[28:29]" "f[32:33]" "f[36:37]" "f[40:41]" "f[44:45]" "f[48:49]" "f[52:53]" "f[56:57]" "f[60:61]" "f[64:65]" "f[68:69]" "f[72:73]" "f[76:77]" "f[80:81]" "f[84:85]" "f[88:89]" "f[92:93]" "f[132:167]";
createNode polyTweak -n "polyTweak1";
	setAttr ".uopa" yes;
	setAttr -s 78 ".tk";
	setAttr ".tk[1]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[2]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[4]" -type "float3" -5.9604645e-008 9.3132257e-010 0 ;
	setAttr ".tk[5]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[7]" -type "float3" -7.4505806e-009 0 0 ;
	setAttr ".tk[8]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[9]" -type "float3" 0 5.9604645e-008 3.5762787e-007 ;
	setAttr ".tk[10]" -type "float3" 0 5.9604645e-008 3.5762787e-007 ;
	setAttr ".tk[11]" -type "float3" 0 5.9604645e-008 3.5762787e-007 ;
	setAttr ".tk[12]" -type "float3" 0 0 -0.064736746 ;
	setAttr ".tk[13]" -type "float3" 0 0 -0.064736746 ;
	setAttr ".tk[14]" -type "float3" 0 0 -0.064736746 ;
	setAttr ".tk[17]" -type "float3" 0 -1.1175871e-008 0 ;
	setAttr ".tk[18]" -type "float3" 0 -0.29686207 -0.33369648 ;
	setAttr ".tk[19]" -type "float3" 0 -0.29686213 -0.33369648 ;
	setAttr ".tk[20]" -type "float3" 1.1920929e-007 -0.29686219 -0.33369648 ;
	setAttr ".tk[21]" -type "float3" 0 -0.18637985 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.18637988 0 ;
	setAttr ".tk[23]" -type "float3" 1.1920929e-007 -0.18637997 0 ;
	setAttr ".tk[25]" -type "float3" 0 -3.7252903e-008 0 ;
	setAttr ".tk[26]" -type "float3" 1.1920929e-007 -1.1920929e-007 0 ;
	setAttr ".tk[28]" -type "float3" 0 -3.7252903e-008 0 ;
	setAttr ".tk[29]" -type "float3" 1.1920929e-007 -1.1920929e-007 0 ;
	setAttr ".tk[30]" -type "float3" 0 -0.088752352 0 ;
	setAttr ".tk[31]" -type "float3" 0 -0.088752389 0 ;
	setAttr ".tk[32]" -type "float3" 1.1920929e-007 -0.088752471 0 ;
	setAttr ".tk[33]" -type "float3" 0 -0.2840074 0.22010495 ;
	setAttr ".tk[34]" -type "float3" 0 -0.28400746 0.22010495 ;
	setAttr ".tk[35]" -type "float3" 1.1920929e-007 -0.28400752 0.22010495 ;
	setAttr ".tk[36]" -type "float3" 0 -0.51032609 0.62794566 ;
	setAttr ".tk[37]" -type "float3" 0 -0.51032609 0.62794566 ;
	setAttr ".tk[38]" -type "float3" 1.1920929e-007 -0.51032621 0.62794566 ;
	setAttr ".tk[39]" -type "float3" 0 -0.31063315 0.38842019 ;
	setAttr ".tk[40]" -type "float3" 0 -0.31063315 0.38842019 ;
	setAttr ".tk[41]" -type "float3" 0 -0.31063315 0.38842019 ;
	setAttr ".tk[42]" -type "float3" 0 -0.053251412 0.31720993 ;
	setAttr ".tk[43]" -type "float3" 0 -0.053251412 0.31720993 ;
	setAttr ".tk[44]" -type "float3" 0 -0.053251412 0.31720993 ;
	setAttr ".tk[45]" -type "float3" 0 0 0.051789396 ;
	setAttr ".tk[46]" -type "float3" 0 0 0.051789396 ;
	setAttr ".tk[47]" -type "float3" 0 0 0.051789396 ;
	setAttr ".tk[48]" -type "float3" 0 0 0.25894699 ;
	setAttr ".tk[49]" -type "float3" -7.4505806e-009 0 0.25894699 ;
	setAttr ".tk[50]" -type "float3" 2.9802322e-008 4.6566129e-009 0.25894699 ;
	setAttr ".tk[52]" -type "float3" -5.9604645e-008 9.3132257e-010 0 ;
	setAttr ".tk[53]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[55]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[56]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[58]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[59]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[61]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[62]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[64]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[65]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[67]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[68]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[70]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[71]" -type "float3" 5.364418e-007 1.1920929e-007 0 ;
	setAttr ".tk[72]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[73]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[74]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[75]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[76]" -type "float3" 3.5762787e-007 0 0 ;
	setAttr ".tk[77]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[78]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[79]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[80]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[81]" -type "float3" 2.9802322e-008 4.6566129e-009 0 ;
	setAttr ".tk[85]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[86]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[87]" -type "float3" 0 -0.026625706 0.12299982 ;
	setAttr ".tk[90]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[91]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[92]" -type "float3" 0 -0.14644137 0.18773657 ;
	setAttr ".tk[93]" -type "float3" 0 -0.026625715 0 ;
	setAttr ".tk[94]" -type "float3" 0 -0.026625715 0 ;
	setAttr ".tk[95]" -type "float3" 0 -0.026625715 0 ;
	setAttr ".tk[96]" -type "float3" 0 -0.026625715 0 ;
createNode deleteComponent -n "deleteComponent2";
	setAttr ".dc" -type "componentList" 1 "f[71]";
createNode deleteComponent -n "deleteComponent3";
	setAttr ".dc" -type "componentList" 2 "f[4:7]" "f[65]";
createNode deleteComponent -n "deleteComponent4";
	setAttr ".dc" -type "componentList" 2 "f[60]" "f[65]";
createNode polySplitRing -n "polySplitRing1";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[82:84]" "e[154:157]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.51471006870269775;
	setAttr ".dr" no;
	setAttr ".re" 84;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak2";
	setAttr ".uopa" yes;
	setAttr -s 77 ".tk";
	setAttr ".tk[0]" -type "float3" 0 0.3211081 -0.75919187 ;
	setAttr ".tk[1]" -type "float3" -0.34011859 0.3211081 -0.75919187 ;
	setAttr ".tk[2]" -type "float3" -0.70222259 0.32110834 -0.75919187 ;
	setAttr ".tk[3]" -type "float3" 0 0.14394499 -0.49266765 ;
	setAttr ".tk[4]" -type "float3" -0.19588245 0.14394499 -0.49266765 ;
	setAttr ".tk[5]" -type "float3" -0.48062539 0.14394499 -0.49266765 ;
	setAttr ".tk[6]" -type "float3" 0 -0.049827099 -0.37959635 ;
	setAttr ".tk[7]" -type "float3" -0.18594418 -0.049827099 -0.37959635 ;
	setAttr ".tk[8]" -type "float3" -0.27976722 -0.049827099 -0.37959635 ;
	setAttr ".tk[9]" -type "float3" 0 -0.060899787 -0.048459105 ;
	setAttr ".tk[10]" -type "float3" 0 -0.060899787 -0.048459105 ;
	setAttr ".tk[11]" -type "float3" 0 -0.060899787 -0.048459105 ;
	setAttr ".tk[12]" -type "float3" 0 -0.11866482 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.11866482 0 ;
	setAttr ".tk[14]" -type "float3" -0.015891526 -0.25659126 0 ;
	setAttr ".tk[17]" -type "float3" -0.096097976 -0.26412213 0 ;
	setAttr ".tk[20]" -type "float3" -0.13443474 -0.21370359 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.055207338 0 ;
	setAttr ".tk[23]" -type "float3" -0.1568215 -0.26467404 0 ;
	setAttr ".tk[25]" -type "float3" 0 -0.036667958 0 ;
	setAttr ".tk[26]" -type "float3" -0.22036839 -0.26467404 0 ;
	setAttr ".tk[29]" -type "float3" -0.21561785 -0.21370353 0 ;
	setAttr ".tk[32]" -type "float3" -0.096097976 -0.17508191 0.034182504 ;
	setAttr ".tk[35]" -type "float3" -0.042568091 -0.13531828 0.056718636 ;
	setAttr ".tk[38]" -type "float3" 1.3411045e-007 -0.065513223 0.074896596 ;
	setAttr ".tk[39]" -type "float3" 0 -0.065608621 0 ;
	setAttr ".tk[40]" -type "float3" 0 -0.065608621 -0.13051973 ;
	setAttr ".tk[41]" -type "float3" 0 -0.065608621 0 ;
	setAttr ".tk[43]" -type "float3" -0.0984888 0 -0.1058646 ;
	setAttr ".tk[44]" -type "float3" -0.23364489 0 0 ;
	setAttr ".tk[46]" -type "float3" -0.10457237 0 -0.069363296 ;
	setAttr ".tk[47]" -type "float3" -0.2654202 0 0 ;
	setAttr ".tk[48]" -type "float3" 0 0.24359925 0.37151983 ;
	setAttr ".tk[49]" -type "float3" -0.14318621 0.24359925 0.32218522 ;
	setAttr ".tk[50]" -type "float3" -0.32282883 0.24359925 0.37151983 ;
	setAttr ".tk[51]" -type "float3" 0 0.48166218 0.58150899 ;
	setAttr ".tk[52]" -type "float3" -0.23255388 0.48166218 0.58150899 ;
	setAttr ".tk[53]" -type "float3" -0.48062539 0.48166218 0.58150899 ;
	setAttr ".tk[54]" -type "float3" 0 0.27681732 0.20998947 ;
	setAttr ".tk[55]" -type "float3" -0.34208873 0.27681732 0.20998947 ;
	setAttr ".tk[56]" -type "float3" -0.67799824 0.27681756 0.20998947 ;
	setAttr ".tk[57]" -type "float3" 0 0.14394499 0 ;
	setAttr ".tk[58]" -type "float3" -0.36768046 0.14394499 0 ;
	setAttr ".tk[59]" -type "float3" -0.77510875 0.14394499 0 ;
	setAttr ".tk[60]" -type "float3" 0 -0.0042035785 0 ;
	setAttr ".tk[61]" -type "float3" -0.42631346 -0.0042035785 0 ;
	setAttr ".tk[62]" -type "float3" -0.8351683 -0.0042035785 0 ;
	setAttr ".tk[63]" -type "float3" 0 -0.037421644 0 ;
	setAttr ".tk[64]" -type "float3" -0.41401628 -0.037421644 0 ;
	setAttr ".tk[65]" -type "float3" -0.81550729 -0.037421644 0 ;
	setAttr ".tk[66]" -type "float3" 0 0.14948134 -0.29075465 ;
	setAttr ".tk[67]" -type "float3" -0.41143656 0.14948134 -0.29075465 ;
	setAttr ".tk[68]" -type "float3" -0.80940014 0.14948134 -0.29075465 ;
	setAttr ".tk[69]" -type "float3" -0.38528246 0.12179961 0.11307126 ;
	setAttr ".tk[70]" -type "float3" -0.48062539 0 0 ;
	setAttr ".tk[71]" -type "float3" -0.48062539 0 4.5151472e-017 ;
	setAttr ".tk[72]" -type "float3" -0.48062539 0 0 ;
	setAttr ".tk[73]" -type "float3" -0.48062539 0.10519058 -0.18575989 ;
	setAttr ".tk[74]" -type "float3" -0.2654202 0 0 ;
	setAttr ".tk[75]" -type "float3" -0.2654202 0 0 ;
	setAttr ".tk[76]" -type "float3" -0.2654202 0 0 ;
	setAttr ".tk[77]" -type "float3" -0.2654202 0.011072691 0.10499474 ;
	setAttr ".tk[78]" -type "float3" -0.2654202 0 0 ;
	setAttr ".tk[79]" -type "float3" -0.23364489 0 0 ;
	setAttr ".tk[80]" -type "float3" -0.23364489 0 0 ;
	setAttr ".tk[81]" -type "float3" -0.23364489 0 0 ;
	setAttr ".tk[82]" -type "float3" -0.23364489 0 -0.25844857 ;
	setAttr ".tk[83]" -type "float3" 0 -0.065608621 0 ;
	setAttr ".tk[84]" -type "float3" 0 -0.065608621 0 ;
	setAttr ".tk[85]" -type "float3" 0 -0.065608621 0 ;
	setAttr ".tk[86]" -type "float3" 0 -0.016337639 0.09691821 ;
	setAttr ".tk[87]" -type "float3" 0 -0.044290755 0 ;
	setAttr ".tk[88]" -type "float3" 5.9604645e-008 -0.13829342 0.088874519 ;
	setAttr ".tk[89]" -type "float3" -0.015891526 -0.25659126 0 ;
	setAttr ".tk[90]" -type "float3" -0.015891526 -0.25659126 0 ;
	setAttr ".tk[91]" -type "float3" -0.015891526 -0.25659126 0 ;
	setAttr ".tk[92]" -type "float3" -0.015891526 -0.25659126 0 ;
createNode polySplitRing -n "polySplitRing2";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 2 "e[85:87]" "e[150:153]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.60085678100585938;
	setAttr ".dr" no;
	setAttr ".re" 87;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing3";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[106:108]" "e[116]" "e[122]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.53223550319671631;
	setAttr ".re" 122;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak3";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.070053585 -0.15984407 ;
	setAttr ".tk[39]" -type "float3" 0 0 -0.018990107 ;
	setAttr ".tk[40]" -type "float3" 0 0 0.086230583 ;
	setAttr ".tk[41]" -type "float3" 0 0 0.054874007 ;
	setAttr ".tk[42]" -type "float3" -3.2873997e-017 0 -0.064460866 ;
	setAttr ".tk[43]" -type "float3" -1.110223e-016 0 0.039083067 ;
	setAttr ".tk[44]" -type "float3" 0 0 0.11366758 ;
	setAttr ".tk[48]" -type "float3" 0 0 0.047034863 ;
	setAttr ".tk[49]" -type "float3" 0 0 0.047034863 ;
	setAttr ".tk[50]" -type "float3" 0 0 0.047034863 ;
	setAttr ".tk[86]" -type "float3" 0 0.11675597 -0.028824346 ;
	setAttr ".tk[87]" -type "float3" 0 -0.053887371 -0.44284701 ;
	setAttr ".tk[93]" -type "float3" 0 0 -0.1289486 ;
	setAttr ".tk[97]" -type "float3" 0 0 0.12934588 ;
	setAttr ".tk[98]" -type "float3" 0 0 0.12934588 ;
	setAttr ".tk[99]" -type "float3" 0 0 0.055481762 ;
	setAttr ".tk[100]" -type "float3" -2.220446e-016 0 -0.094231658 ;
	setAttr ".tk[104]" -type "float3" 0 0 -0.058793578 ;
	setAttr ".tk[105]" -type "float3" -1.110223e-016 0 -0.13337807 ;
	setAttr ".tk[106]" -type "float3" -3.2873997e-017 0 -0.23692201 ;
createNode polySplitRing -n "polySplitRing4";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[58:60]" "e[133]" "e[139]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.51118814945220947;
	setAttr ".dr" no;
	setAttr ".re" 133;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing5";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[49:51]" "e[88:90]" "e[145:149]" "e[196]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.45251965522766113;
	setAttr ".re" 149;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak4";
	setAttr ".uopa" yes;
	setAttr -s 33 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -0.019514158 -0.060493644 ;
	setAttr ".tk[12]" -type "float3" 0 -0.072924607 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.11160149 0 ;
	setAttr ".tk[14]" -type "float3" -0.15524545 4.4408921e-016 -0.2108006 ;
	setAttr ".tk[15]" -type "float3" 0 -0.11210481 0.12713775 ;
	setAttr ".tk[16]" -type "float3" 0 -0.11210481 0.12713775 ;
	setAttr ".tk[33]" -type "float3" 0 -0.11160149 0 ;
	setAttr ".tk[36]" -type "float3" 0 -0.11160149 0 ;
	setAttr ".tk[44]" -type "float3" -0.078050226 0 0 ;
	setAttr ".tk[60]" -type "float3" -3.2873997e-017 -0.019398721 0 ;
	setAttr ".tk[61]" -type "float3" -5.5511151e-017 0.0075443722 0 ;
	setAttr ".tk[62]" -type "float3" 0 0.05350611 0 ;
	setAttr ".tk[63]" -type "float3" -3.2873997e-017 -0.019398721 0 ;
	setAttr ".tk[64]" -type "float3" -5.5511151e-017 0.0075443722 0 ;
	setAttr ".tk[65]" -type "float3" 0 0.05350611 0 ;
	setAttr ".tk[79]" -type "float3" -0.078050226 0 0 ;
	setAttr ".tk[80]" -type "float3" -0.078050226 0 0 ;
	setAttr ".tk[81]" -type "float3" -0.078050226 0 0 ;
	setAttr ".tk[82]" -type "float3" -0.078050226 0 0 ;
	setAttr ".tk[86]" -type "float3" 0 0 0.0498183 ;
	setAttr ".tk[87]" -type "float3" 0 0.012196349 0.046259847 ;
	setAttr ".tk[91]" -type "float3" 0 0.028137904 -0.061405312 ;
	setAttr ".tk[92]" -type "float3" 0 0 -0.25589782 ;
	setAttr ".tk[100]" -type "float3" -0.10406698 0 0 ;
	setAttr ".tk[101]" -type "float3" -0.10406698 0 0 ;
	setAttr ".tk[102]" -type "float3" -0.10406698 0 0 ;
	setAttr ".tk[103]" -type "float3" -0.10406698 0 0 ;
	setAttr ".tk[104]" -type "float3" -0.10406698 0 0 ;
	setAttr ".tk[107]" -type "float3" 2.220446e-016 -0.048958119 0 ;
	setAttr ".tk[110]" -type "float3" 0 -0.045961745 0 ;
	setAttr ".tk[111]" -type "float3" 3.6497469e-033 -0.072904833 0 ;
	setAttr ".tk[112]" -type "float3" 0 0.098865993 0 ;
	setAttr ".tk[113]" -type "float3" 0 0 -0.25589782 ;
createNode polyAppend -n "polyAppend1";
	setAttr -s 2 ".d[0:1]"  -2147483642 -2147483644;
	setAttr ".tx" 1;
createNode polyTweak -n "polyTweak5";
	setAttr ".uopa" yes;
	setAttr -s 10 ".tk";
	setAttr ".tk[6]" -type "float3" 0 0.033893123 -0.17140539 ;
	setAttr ".tk[7]" -type "float3" 0 0.033893123 -0.17140539 ;
	setAttr ".tk[8]" -type "float3" 0 0.033893123 -0.17140539 ;
	setAttr ".tk[73]" -type "float3" 0 -0.020335875 0.075813957 ;
	setAttr ".tk[108]" -type "float3" 1.110223e-016 -0.04519083 0 ;
	setAttr ".tk[123]" -type "float3" 0 0 -0.046147626 ;
	setAttr ".tk[125]" -type "float3" 0 -0.013557249 0.082406469 ;
	setAttr ".tk[126]" -type "float3" 0 0.088122152 0.059332673 ;
	setAttr ".tk[127]" -type "float3" 0 0.088122152 0.059332673 ;
	setAttr ".tk[128]" -type "float3" 0 0.088122152 0.059332673 ;
createNode polyCloseBorder -n "polyCloseBorder1";
	setAttr ".ics" -type "componentList" 11 "e[5]" "e[7]" "e[122:123]" "e[132:133]" "e[153]" "e[157]" "e[168]" "e[181]" "e[194]" "e[203]" "e[236]";
createNode polySplit -n "polySplit1";
	setAttr -s 2 ".e[0:1]"  1 1;
	setAttr -s 2 ".d[0:1]"  -2147483641 -2147483643;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit2";
	setAttr -s 2 ".e[0:1]"  1 0;
	setAttr -s 2 ".d[0:1]"  -2147483515 -2147483525;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit3";
	setAttr -s 2 ".e[0:1]"  1 0;
	setAttr -s 2 ".d[0:1]"  -2147483516 -2147483454;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit4";
	setAttr -s 2 ".e[0:1]"  0 0;
	setAttr -s 2 ".d[0:1]"  -2147483516 -2147483526;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit5";
	setAttr -s 7 ".e[0:6]"  1 0.365448 0.233412 0.334187 0.24890999 0.67939597
		 0.307127;
	setAttr -s 7 ".d[0:6]"  -2147483491 -2147483408 -2147483409 -2147483410 -2147483411 -2147483412 
		-2147483413;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit6";
	setAttr -s 7 ".e[0:6]"  0 0.34222499 0.32949901 0.370433 0.37208501
		 0.60036999 0.42276999;
	setAttr -s 7 ".d[0:6]"  -2147483491 -2147483407 -2147483406 -2147483405 -2147483404 -2147483412 
		-2147483402;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit7";
	setAttr -s 7 ".e[0:6]"  1 0.58890897 0.520495 0.570719 0.54067397
		 0.453805 0.55533898;
	setAttr -s 7 ".d[0:6]"  -2147483495 -2147483395 -2147483394 -2147483393 -2147483392 -2147483412 
		-2147483390;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode deleteComponent -n "deleteComponent5";
	setAttr ".dc" -type "componentList" 1 "f[107:130]";
createNode polyExtrudeEdge -n "polyExtrudeEdge1";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 9 "e[4:7]" "e[122:123]" "e[132:133]" "e[153]" "e[157]" "e[168]" "e[181]" "e[194]" "e[203]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -0.57417464467302404 1.27675647831893e-014 -0.15303178906535408 ;
	setAttr ".pvt" -type "float3" -0.28554875 0.18840173 0.67442542 ;
	setAttr ".rs" 39217;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.29762356703782772 0.3325534408887052 ;
	setAttr ".cbx" -type "double3" 0.57725160042804258 0.67442703165662699 1.3223613769026115 ;
createNode polyTweak -n "polyTweak6";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk[129:143]" -type "float3"  1.36011708 0 0.10528291 0.86235839
		 0 0.10528291 0.2724784 0 -0.033080041 1.36011708 0 0 0.67641413 0 0 -0.0072887931
		 0 0 0.25813147 0 0 0.25813147 0 0 0.25813147 0 0 -0.0072887931 0 0 -0.0072887931
		 0 0 -0.0072887931 0 0 0.3495155 0 0 0.30440632 0 0 0.11297072 0 0;
createNode deleteComponent -n "deleteComponent6";
	setAttr ".dc" -type "componentList" 1 "e[236]";
createNode deleteComponent -n "deleteComponent7";
	setAttr ".dc" -type "componentList" 1 "e[237]";
createNode deleteComponent -n "deleteComponent8";
	setAttr ".dc" -type "componentList" 1 "vtx[129:131]";
createNode polyTweak -n "polyTweak7";
	setAttr ".uopa" yes;
	setAttr -s 9 ".tk";
	setAttr ".tk[11]" -type "float3" 0 -4.4703484e-008 0 ;
	setAttr ".tk[129]" -type "float3" 0 -0.089085437 0.028879849 ;
	setAttr ".tk[130]" -type "float3" 0 -0.08908546 0.028879849 ;
	setAttr ".tk[132]" -type "float3" 0 0 0.24598658 ;
	setAttr ".tk[133]" -type "float3" 0 0 0.19798984 ;
	setAttr ".tk[134]" -type "float3" 0 0 0.21637182 ;
	setAttr ".tk[138]" -type "float3" 0 -0.028961293 0.2687265 ;
	setAttr ".tk[139]" -type "float3" 0 0 0.28260538 ;
	setAttr ".tk[140]" -type "float3" 0 0 0.28012556 ;
createNode deleteComponent -n "deleteComponent9";
	setAttr ".dc" -type "componentList" 1 "e[237]";
createNode deleteComponent -n "deleteComponent10";
	setAttr ".dc" -type "componentList" 1 "vtx[129:130]";
createNode polyExtrudeFace -n "polyExtrudeFace1";
	setAttr ".ics" -type "componentList" 1 "f[4]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 0 0.077829566373573966 ;
	setAttr ".pvt" -type "float3" 0.078742474 0.64665192 1.4020112 ;
	setAttr ".rs" 39652;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 0.46691223267062965 1.2148569011995305 ;
	setAttr ".cbx" -type "double3" 0.15748494879062161 0.82639167163827409 1.4335065012491082 ;
createNode polyTweak -n "polyTweak8";
	setAttr ".uopa" yes;
	setAttr -s 74 ".tk";
	setAttr ".tk[1]" -type "float3" -0.030504122 0 0 ;
	setAttr ".tk[2]" -type "float3" -0.17683217 0 -0.40927395 ;
	setAttr ".tk[4]" -type "float3" -0.15974794 0 0 ;
	setAttr ".tk[5]" -type "float3" -0.31927797 0 -0.40398708 ;
	setAttr ".tk[7]" -type "float3" -0.18976298 0 0 ;
	setAttr ".tk[8]" -type "float3" -0.50377709 0 -0.3095355 ;
	setAttr ".tk[9]" -type "float3" 0 -0.045013919 -0.061496284 ;
	setAttr ".tk[10]" -type "float3" -0.31583202 -0.070085302 -0.17488348 ;
	setAttr ".tk[11]" -type "float3" -0.72111821 0.020097168 -0.32317784 ;
	setAttr ".tk[12]" -type "float3" 0 -0.0084107006 0.067609556 ;
	setAttr ".tk[13]" -type "float3" -0.31064922 0.0039877952 -0.11089131 ;
	setAttr ".tk[14]" -type "float3" -0.50976717 0 -0.37308615 ;
	setAttr ".tk[15]" -type "float3" 0 -0.0039877957 0.081444524 ;
	setAttr ".tk[16]" -type "float3" -0.30177915 -0.0039877957 0.051229686 ;
	setAttr ".tk[17]" -type "float3" -0.46731833 -9.9920072e-016 -0.23344134 ;
	setAttr ".tk[19]" -type "float3" -0.11117302 0 -0.3095355 ;
	setAttr ".tk[20]" -type "float3" -0.38985103 0 -0.3095355 ;
	setAttr ".tk[22]" -type "float3" -0.10816726 0 -0.3095355 ;
	setAttr ".tk[23]" -type "float3" -0.3189818 0 -0.3095355 ;
	setAttr ".tk[24]" -type "float3" 0 0 -1.3877788e-017 ;
	setAttr ".tk[25]" -type "float3" -1.110223e-016 0 -0.3095355 ;
	setAttr ".tk[26]" -type "float3" -0.10432657 0 -0.3095355 ;
	setAttr ".tk[42]" -type "float3" 3.2873997e-017 0 0 ;
	setAttr ".tk[46]" -type "float3" 0 0 -0.022269916 ;
	setAttr ".tk[49]" -type "float3" 1.110223e-016 0 -0.038129028 ;
	setAttr ".tk[52]" -type "float3" 5.5511151e-017 0 -0.05114023 ;
	setAttr ".tk[55]" -type "float3" 0 -0.034057889 0 ;
	setAttr ".tk[58]" -type "float3" 0 -0.054452609 0 ;
	setAttr ".tk[60]" -type "float3" 3.2873997e-017 0 -1.3877788e-017 ;
	setAttr ".tk[61]" -type "float3" 0.09599071 0 0 ;
	setAttr ".tk[62]" -type "float3" 0.034104522 0 -0.3095355 ;
	setAttr ".tk[64]" -type "float3" 0.057487946 0 0 ;
	setAttr ".tk[65]" -type "float3" -0.055430245 0.011652812 -0.35649693 ;
	setAttr ".tk[67]" -type "float3" 0.056455743 0 0 ;
	setAttr ".tk[68]" -type "float3" -0.057873819 0.017418573 -0.35379943 ;
	setAttr ".tk[71]" -type "float3" -0.045725953 0 -0.3095355 ;
	setAttr ".tk[72]" -type "float3" -0.18942228 0 -0.3095355 ;
	setAttr ".tk[73]" -type "float3" -0.18942228 0 -0.3095355 ;
	setAttr ".tk[76]" -type "float3" -0.094182454 0 -0.3095355 ;
	setAttr ".tk[77]" -type "float3" -0.45976788 0 -0.30953607 ;
	setAttr ".tk[78]" -type "float3" -0.50951755 -0.018454187 -0.3095355 ;
	setAttr ".tk[81]" -type "float3" -0.083763003 0 -0.30449522 ;
	setAttr ".tk[82]" -type "float3" -0.44125244 0 -3.8743019e-007 ;
	setAttr ".tk[85]" -type "float3" -0.15394571 0 -0.3095355 ;
	setAttr ".tk[86]" -type "float3" -0.5659672 -0.032891598 -0.29867691 ;
	setAttr ".tk[87]" -type "float3" -0.62074929 0.010139946 -0.21986839 ;
	setAttr ".tk[90]" -type "float3" -0.15036747 0 -0.3095355 ;
	setAttr ".tk[91]" -type "float3" -0.37537029 0 -0.3095355 ;
	setAttr ".tk[92]" -type "float3" -0.44217634 0 -0.3095355 ;
	setAttr ".tk[93]" -type "float3" -0.51784915 0 -3.8743019e-007 ;
	setAttr ".tk[94]" -type "float3" -0.12686753 0 -0.30449522 ;
	setAttr ".tk[100]" -type "float3" -0.42320359 0 -3.8743019e-007 ;
	setAttr ".tk[101]" -type "float3" -0.073606014 0 -0.30449522 ;
	setAttr ".tk[106]" -type "float3" 3.2873997e-017 0 0 ;
	setAttr ".tk[107]" -type "float3" -0.45976788 0 -0.3095355 ;
	setAttr ".tk[108]" -type "float3" -0.18942228 0 -0.3095355 ;
	setAttr ".tk[109]" -type "float3" -0.013645491 0 -0.35601124 ;
	setAttr ".tk[110]" -type "float3" 0.05693857 0 0 ;
	setAttr ".tk[112]" -type "float3" -0.60017496 0 -0.3095355 ;
	setAttr ".tk[113]" -type "float3" -0.47342664 0 -0.3095355 ;
	setAttr ".tk[114]" -type "float3" -0.4274528 0 -0.3095355 ;
	setAttr ".tk[115]" -type "float3" -0.11194716 0 -0.3095355 ;
	setAttr ".tk[118]" -type "float3" 0 0 -0.042380575 ;
	setAttr ".tk[122]" -type "float3" -0.067653492 0 -0.3095355 ;
	setAttr ".tk[123]" -type "float3" -0.2283875 0 -0.3095355 ;
	setAttr ".tk[124]" -type "float3" -0.2283875 0 -0.3095355 ;
	setAttr ".tk[125]" -type "float3" -0.27874184 0 -0.3095355 ;
	setAttr ".tk[126]" -type "float3" -0.42317221 0 -0.40398708 ;
	setAttr ".tk[127]" -type "float3" -0.17557313 0 0 ;
	setAttr ".tk[129]" -type "float3" 0 0.020097168 0.22470152 ;
	setAttr ".tk[133]" -type "float3" 0 -0.088515051 0.14480151 ;
	setAttr ".tk[134]" -type "float3" 0 0.010139946 0.30437756 ;
	setAttr ".tk[135]" -type "float3" 0 0 0.21932927 ;
	setAttr ".tk[136]" -type "float3" 0 0.033139557 0 ;
createNode polyExtrudeFace -n "polyExtrudeFace2";
	setAttr ".ics" -type "componentList" 1 "f[4]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 -0.079101324566739573 0.26468065831294307 ;
	setAttr ".s" -type "double3" 1.5833333267584082 1.5833333267584082 1.5833333267584082 ;
	setAttr ".pvt" -type "float3" 0.078742474 0.56755072 1.6666919 ;
	setAttr ".rs" 62313;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 0.46691223267062965 1.2926867305477319 ;
	setAttr ".cbx" -type "double3" 0.15748494879062161 0.8263917250897157 1.5113361107558021 ;
createNode polyExtrudeFace -n "polyExtrudeFace3";
	setAttr ".ics" -type "componentList" 1 "f[4]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 -0.35655594470220864 0.28495687115773949 ;
	setAttr ".s" -type "double3" 0.1850000143877836 0.1850000143877836 0.1850000143877836 ;
	setAttr ".pvt" -type "float3" 0.078742474 0.21099462 1.9516494 ;
	setAttr ".rs" 52365;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -0.045933112160777591 0.28296258410626501 1.493594901106821 ;
	setAttr ".cbx" -type "double3" 0.20341806095139919 0.85213848273744563 1.8397898752371031 ;
createNode polyTweak -n "polyTweak9";
	setAttr ".uopa" yes;
	setAttr -s 9 ".tk";
	setAttr ".tk[10]" -type "float3" 0 0 0.15876795 ;
	setAttr ".tk[13]" -type "float3" 0 0 0.15876795 ;
	setAttr ".tk[140]" -type "float3" 0 0 0.15876795 ;
	setAttr ".tk[141]" -type "float3" 0 0 0.15876795 ;
	setAttr ".tk[144]" -type "float3" 0 0 0.29116818 ;
	setAttr ".tk[145]" -type "float3" 0 0 0.29116818 ;
	setAttr ".tk[147]" -type "float3" -2.7755576e-017 0 0.0029641946 ;
	setAttr ".tk[148]" -type "float3" 0 0.0063597974 0.033982918 ;
	setAttr ".tk[149]" -type "float3" 0 0.0063597974 0.033982918 ;
createNode deleteComponent -n "deleteComponent11";
	setAttr ".dc" -type "componentList" 3 "f[121]" "f[125]" "f[129]";
createNode polySplitRing -n "polySplitRing6";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[262:263]" "e[265]" "e[267]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.46933937072753906;
	setAttr ".re" 263;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak10";
	setAttr ".uopa" yes;
	setAttr -s 10 ".tk";
	setAttr ".tk[12]" -type "float3" 0 -0.010853839 0 ;
	setAttr ".tk[13]" -type "float3" 0 -0.010853839 0 ;
	setAttr ".tk[141]" -type "float3" 0 0.030752543 -0.010555847 ;
	setAttr ".tk[142]" -type "float3" 0 0.030752543 -0.010555847 ;
	setAttr ".tk[143]" -type "float3" 0 0.0045755329 0.095610105 ;
	setAttr ".tk[144]" -type "float3" 0 0.045312777 -0.017098693 ;
	setAttr ".tk[145]" -type "float3" 0 -0.10672938 -0.10555842 ;
	setAttr ".tk[146]" -type "float3" 0 -0.10672938 -0.10555842 ;
	setAttr ".tk[147]" -type "float3" 0 0.025325624 -0.065974042 ;
	setAttr ".tk[148]" -type "float3" 0 0.025325624 -0.065974042 ;
createNode polySplitRing -n "polySplitRing7";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[255:256]" "e[258]" "e[260]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.056129634380340576;
	setAttr ".re" 256;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak11";
	setAttr ".uopa" yes;
	setAttr -s 14 ".tk";
	setAttr ".tk[9]" -type "float3" 0.043738849 0.086627141 0.028408766 ;
	setAttr ".tk[10]" -type "float3" -0.042523514 0.09250614 0.017767545 ;
	setAttr ".tk[12]" -type "float3" 0.043738846 -0.039513528 -0.028408766 ;
	setAttr ".tk[13]" -type "float3" -0.043738849 -0.03335147 -0.023781572 ;
	setAttr ".tk[139]" -type "float3" 0 -0.010440477 -0.058001593 ;
	setAttr ".tk[140]" -type "float3" 0 -0.010440477 -0.058001593 ;
	setAttr ".tk[143]" -type "float3" 0.10880733 0 0 ;
	setAttr ".tk[146]" -type "float3" 0.10880733 0 0 ;
	setAttr ".tk[147]" -type "float3" -0.13189001 0 0 ;
	setAttr ".tk[150]" -type "float3" -0.13189001 0 0 ;
	setAttr ".tk[151]" -type "float3" 0.051067561 0.013082461 0.025446564 ;
	setAttr ".tk[152]" -type "float3" 0 0.013082461 0.025446564 ;
	setAttr ".tk[153]" -type "float3" 0 -0.063231878 -0.17812584 ;
	setAttr ".tk[154]" -type "float3" 0.051067561 -0.063231878 -0.17812584 ;
createNode polySplitRing -n "polySplitRing8";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[255:256]" "e[258]" "e[260]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.89793449640274048;
	setAttr ".dr" no;
	setAttr ".re" 258;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak12";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk[139:158]" -type "float3"  0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552 0 -0.004230551 0.015598552
		 0 -0.004230551 0.015598552;
createNode polySplitRing -n "polySplitRing9";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[255:256]" "e[258]" "e[260]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.15130966901779175;
	setAttr ".re" 258;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak13";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk";
	setAttr ".tk[9]" -type "float3" 0 0.013396412 -0.033025898 ;
	setAttr ".tk[10]" -type "float3" 0 0.013396412 -0.033025898 ;
	setAttr ".tk[12]" -type "float3" 0 0.013396412 -0.033025898 ;
	setAttr ".tk[13]" -type "float3" 0 0.013396412 -0.033025898 ;
createNode polyTweak -n "polyTweak14";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[139]" -type "float3" 0 -0.029504592 0.0050637405 ;
	setAttr ".tk[140]" -type "float3" 0.14272955 -0.029504592 0.0050637405 ;
	setAttr ".tk[141]" -type "float3" 0.14272955 0 0 ;
	setAttr ".tk[142]" -type "float3" 0 0.043389104 -0.0075956127 ;
	setAttr ".tk[143]" -type "float3" 0 0.026033465 0.017723098 ;
	setAttr ".tk[144]" -type "float3" 0.041474693 0.026033461 0.017723097 ;
	setAttr ".tk[145]" -type "float3" 0.041474693 0 0 ;
	setAttr ".tk[147]" -type "float3" 0 -0.04165354 -0.050637424 ;
	setAttr ".tk[148]" -type "float3" -0.10125487 -0.04165354 -0.050637424 ;
	setAttr ".tk[149]" -type "float3" -0.10125487 -0.020826768 0.010127484 ;
	setAttr ".tk[150]" -type "float3" 0 -0.020826768 0.010127484 ;
	setAttr ".tk[152]" -type "float3" 0.14272955 0 0 ;
	setAttr ".tk[153]" -type "float3" 0.14272955 -0.04165354 0.0075956127 ;
	setAttr ".tk[154]" -type "float3" 0 -0.04165354 0.0075956127 ;
	setAttr ".tk[163]" -type "float3" 0 -4.6566129e-010 0 ;
	setAttr ".tk[164]" -type "float3" 0 4.6566129e-010 0 ;
	setAttr ".tk[165]" -type "float3" 0 4.6566129e-010 0 ;
	setAttr ".tk[166]" -type "float3" 0 -2.3283064e-010 0 ;
createNode polySplitRing -n "polySplitRing10";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[284:285]" "e[287]" "e[289]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.35580301284790039;
	setAttr ".re" 285;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyExtrudeFace -n "polyExtrudeFace4";
	setAttr ".ics" -type "componentList" 3 "f[4]" "f[121:129]" "f[139:141]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.11964829 0.5173493 1.6609458 ;
	setAttr ".rs" 58496;
	setAttr ".lt" -type "double3" -1.7564075194265172e-017 2.3245294578089215e-016 0.054585273367009801 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 0.14561293628125113 1.3224046123990711 ;
	setAttr ".cbx" -type "double3" 0.23929657709569599 0.88908561581264012 1.9994868499368144 ;
createNode polyTweak -n "polyTweak15";
	setAttr ".uopa" yes;
	setAttr -s 48 ".tk";
	setAttr ".tk[9]" -type "float3" 0.013992487 -0.0034964713 0.029568162 ;
	setAttr ".tk[10]" -type "float3" 0.00030973452 -0.0025639504 0.027880348 ;
	setAttr ".tk[12]" -type "float3" 0.013992495 -0.015099054 0.020555971 ;
	setAttr ".tk[13]" -type "float3" 0.00011696453 -0.014121665 0.021289887 ;
	setAttr ".tk[139]" -type "float3" 0.01611767 0.0035098742 0.025006369 ;
	setAttr ".tk[140]" -type "float3" 0.01611767 -0.02029223 0.011543316 ;
	setAttr ".tk[141]" -type "float3" 0.01611767 0.009337795 -0.0021659061 ;
	setAttr ".tk[142]" -type "float3" 0.01611767 -0.012899081 -0.010170899 ;
	setAttr ".tk[143]" -type "float3" 0.01611767 0.019942207 -0.017701928 ;
	setAttr ".tk[144]" -type "float3" 0.01611767 0.014812441 -0.027164357 ;
	setAttr ".tk[145]" -type "float3" 0.01611767 -0.016339246 -8.0263322e-005 ;
	setAttr ".tk[146]" -type "float3" 0.01611767 0.01090505 0.019578308 ;
	setAttr ".tk[147]" -type "float3" 0.014111727 -0.029535586 0.065355621 ;
	setAttr ".tk[148]" -type "float3" -2.3226385e-006 -0.028541358 0.066102207 ;
	setAttr ".tk[149]" -type "float3" 0.000193764 -0.016498471 0.072935343 ;
	setAttr ".tk[150]" -type "float3" 0.014111727 -0.017447019 0.074652225 ;
	setAttr ".tk[151]" -type "float3" 0.014099616 -0.014462218 0.017916996 ;
	setAttr ".tk[152]" -type "float3" 9.8541304e-006 -0.013469718 0.018662263 ;
	setAttr ".tk[153]" -type "float3" 0.00020560248 -0.0014763697 0.02547065 ;
	setAttr ".tk[154]" -type "float3" 0.014099616 -0.0024232855 0.027184615 ;
	setAttr ".tk[155]" -type "float3" 0.014008708 -0.015002719 0.020156657 ;
	setAttr ".tk[156]" -type "float3" 0.00010075722 -0.014023014 0.020892298 ;
	setAttr ".tk[157]" -type "float3" 0.00029397605 -0.0023993894 0.027515735 ;
	setAttr ".tk[158]" -type "float3" 0.014008708 -0.0033340831 0.029207589 ;
	setAttr ".tk[159]" -type "float3" -0.032684077 -0.031609274 0.056752801 ;
	setAttr ".tk[160]" -type "float3" -0.05069305 -0.029764498 0.057443552 ;
	setAttr ".tk[161]" -type "float3" -0.05047714 -0.014308583 0.065641329 ;
	setAttr ".tk[162]" -type "float3" -0.032684077 -0.015353067 0.067531891 ;
	setAttr ".tk[163]" -type "float3" 0.015962539 0.022125093 -0.017541949 ;
	setAttr ".tk[164]" -type "float3" 0.0065245354 0.022617918 -0.017784972 ;
	setAttr ".tk[165]" -type "float3" 0.0064669065 0.015558039 -0.029988578 ;
	setAttr ".tk[166]" -type "float3" 0.015722312 0.015397077 -0.030527024 ;
	setAttr ".tk[167]" -type "float3" 0.0156065 0.0044727875 0.029044442 ;
	setAttr ".tk[168]" -type "float3" -0.012786959 0.0051314393 0.026019823 ;
	setAttr ".tk[169]" -type "float3" -0.014988007 0.013599637 0.019969914 ;
	setAttr ".tk[170]" -type "float3" 0.016036106 0.012997234 0.02125033 ;
	setAttr ".tk[171]" -type "float3" -0.013173195 -0.018918505 0.013385022 ;
	setAttr ".tk[172]" -type "float3" -0.01621823 -0.01648161 -0.00082398718 ;
	setAttr ".tk[173]" -type "float3" 0.015079159 -0.022617903 0.012426177 ;
	setAttr ".tk[174]" -type "float3" 0.015104882 -0.019003838 -0.0017909327 ;
	setAttr ".tk[175]" -type "float3" 0.016218252 0.0118466 -0.00091552536 ;
	setAttr ".tk[176]" -type "float3" -0.013893979 0.011065968 -0.0025300039 ;
	setAttr ".tk[177]" -type "float3" -0.013500703 -0.012128051 -0.01323247 ;
	setAttr ".tk[178]" -type "float3" 0.015492427 -0.014756829 -0.013147905 ;
	setAttr ".tk[179]" -type "float3" -0.033537086 -0.018464761 0.012416514 ;
	setAttr ".tk[180]" -type "float3" -0.053081572 -0.016031656 0.013090508 ;
	setAttr ".tk[181]" -type "float3" -0.052783966 0.00072437385 0.021765636 ;
	setAttr ".tk[182]" -type "float3" -0.033373717 0.00039173773 0.024150154 ;
createNode deleteComponent -n "deleteComponent12";
	setAttr ".dc" -type "componentList" 3 "f[142:148]" "f[150]" "f[153]";
createNode polyExtrudeFace -n "polyExtrudeFace5";
	setAttr ".ics" -type "componentList" 7 "f[5:9]" "f[69]" "f[75]" "f[92:95]" "f[108]" "f[111]" "f[117]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.19193888 0.9019568 0.96441776 ;
	setAttr ".rs" 36619;
	setAttr ".lt" -type "double3" 1.5785983631388945e-016 -8.5001450322863548e-017 0.030576682742626118 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -2.7755576109938642e-017 0.46746337048498082 0.52045752828062375 ;
	setAttr ".cbx" -type "double3" 0.383877768685083 1.336450235769818 1.4083780307067173 ;
createNode polyTweak -n "polyTweak16";
	setAttr ".uopa" yes;
	setAttr -s 24 ".tk";
	setAttr ".tk[18]" -type "float3" -6.5747994e-017 0.085278489 -0.18137741 ;
	setAttr ".tk[19]" -type "float3" -2.220446e-016 0.063986346 -0.19302538 ;
	setAttr ".tk[20]" -type "float3" -1.110223e-016 0.063986346 -0.068780087 ;
	setAttr ".tk[87]" -type "float3" -1.110223e-016 0.095924556 -0.068780087 ;
	setAttr ".tk[92]" -type "float3" -1.110223e-016 0.063986346 -0.068780087 ;
	setAttr ".tk[112]" -type "float3" 0 -0.087830037 0 ;
	setAttr ".tk[133]" -type "float3" 0 0.031938188 0 ;
	setAttr ".tk[134]" -type "float3" -6.5747994e-017 0.016079076 -0.068780087 ;
	setAttr ".tk[155]" -type "float3" 0.01002087 0.013889558 -0.010547036 ;
	setAttr ".tk[156]" -type "float3" 0.0040959287 0.014198936 -0.0106996 ;
	setAttr ".tk[157]" -type "float3" 0.004059759 0.0097669447 -0.018360715 ;
	setAttr ".tk[158]" -type "float3" 0.0098700607 0.0096658999 -0.018698703 ;
	setAttr ".tk[159]" -type "float3" 0.0097973533 0.0028079019 0.018698703 ;
	setAttr ".tk[160]" -type "float3" -0.0080273226 0.0032213796 0.016799891 ;
	setAttr ".tk[161]" -type "float3" -0.0094090886 0.019494275 0.060953751 ;
	setAttr ".tk[162]" -type "float3" 0.010067054 0.019116107 0.061757557 ;
	setAttr ".tk[163]" -type "float3" -0.008269785 -0.011876527 0.0088681038 ;
	setAttr ".tk[164]" -type "float3" -0.010181406 -0.010346726 -5.1928684e-005 ;
	setAttr ".tk[165]" -type "float3" 0.0094662756 -0.014198936 0.0082661724 ;
	setAttr ".tk[166]" -type "float3" 0.0094824117 -0.011930121 -0.00065895356 ;
	setAttr ".tk[167]" -type "float3" 0.010181406 0.057838194 0.051039204 ;
	setAttr ".tk[168]" -type "float3" -0.0087222653 0.057348128 0.050025672 ;
	setAttr ".tk[169]" -type "float3" -0.0084753977 -0.08869388 0.02412622 ;
	setAttr ".tk[170]" -type "float3" 0.0097257597 -0.090344153 0.024179306 ;
createNode polySplitRing -n "polySplitRing11";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 13 "e[298]" "e[301]" "e[304]" "e[307]" "e[313]" "e[322]" "e[324]" "e[327]" "e[330]" "e[333]" "e[336:337]" "e[341]" "e[343]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.13607633113861084;
	setAttr ".re" 330;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak17";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[168]" -type "float3" 0.015701162 -0.039884105 0.0083455415 ;
	setAttr ".tk[169]" -type "float3" 0.02107998 -0.011170419 0.014830332 ;
	setAttr ".tk[172]" -type "float3" -0.0048239063 0.014908624 0.049444027 ;
	setAttr ".tk[173]" -type "float3" -0.036732607 0.015138989 0.051885955 ;
	setAttr ".tk[174]" -type "float3" 0.030229507 0.0023500889 0.016118232 ;
	setAttr ".tk[175]" -type "float3" 0.010362152 0.028637275 -0.0048732744 ;
	setAttr ".tk[176]" -type "float3" -0.03603112 0.029077234 0.019414803 ;
	setAttr ".tk[177]" -type "float3" 0.031980902 0.0087354397 -0.0054780548 ;
	setAttr ".tk[178]" -type "float3" 0.025407091 -0.037758403 -0.020961775 ;
	setAttr ".tk[179]" -type "float3" 0.036313903 -0.012181871 -0.012467246 ;
	setAttr ".tk[180]" -type "float3" 0.023006031 -0.027548771 -0.051885948 ;
	setAttr ".tk[181]" -type "float3" 0.038740911 -0.0081870593 -0.047490034 ;
	setAttr ".tk[182]" -type "float3" 0.033123445 0.020281453 -0.026841402 ;
	setAttr ".tk[183]" -type "float3" 0.010249224 0.037962869 -0.035870157 ;
	setAttr ".tk[184]" -type "float3" -0.035634775 0.040071793 -0.010638613 ;
	setAttr ".tk[186]" -type "float3" -0.038092509 -0.040071793 0.031383157 ;
	setAttr ".tk[187]" -type "float3" -0.038740911 -0.031285558 0.00020733615 ;
	setAttr ".tk[188]" -type "float3" -0.038174547 -0.034784459 -0.030596547 ;
createNode polySplitRing -n "polySplitRing12";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 10 "e[191]" "e[224]" "e[323]" "e[326]" "e[329]" "e[332]" "e[335]" "e[344]" "e[357]" "e[373]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.71842151880264282;
	setAttr ".dr" no;
	setAttr ".re" 329;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak18";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk";
	setAttr ".tk[180]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[181]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[182]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[183]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[184]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[188]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[205]" -type "float3" 0 0 -0.088490248 ;
	setAttr ".tk[210]" -type "float3" 0 0 -0.088490248 ;
createNode deleteComponent -n "deleteComponent13";
	setAttr ".dc" -type "componentList" 5 "f[147:148]" "f[153]" "f[169:171]" "f[180:181]" "f[193]";
createNode polyExtrudeFace -n "polyExtrudeFace6";
	setAttr ".ics" -type "componentList" 1 "f[169:173]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.21516278 0.93371862 0.64239818 ;
	setAttr ".rs" 59665;
	setAttr ".lt" -type "double3" -8.5147139989791287e-017 -5.3342746886286818e-017 
		0.02655697416394371 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 9.4358082899064553e-009 0.46945048127795136 0.43105839304331789 ;
	setAttr ".cbx" -type "double3" 0.43032554757322522 1.397986742427749 0.85373791305738178 ;
createNode polyTweak -n "polyTweak19";
	setAttr ".uopa" yes;
	setAttr -s 61 ".tk";
	setAttr ".tk[9]" -type "float3" -0.057731338 0 0 ;
	setAttr ".tk[11]" -type "float3" -0.057731342 0 0 ;
	setAttr ".tk[13]" -type "float3" 6.5747994e-017 0 0 ;
	setAttr ".tk[19]" -type "float3" 0 0 -1.3877788e-017 ;
	setAttr ".tk[124]" -type "float3" 6.5747994e-017 0 0 ;
	setAttr ".tk[129]" -type "float3" -0.055395529 0 0 ;
	setAttr ".tk[132]" -type "float3" -0.055395532 0 0 ;
	setAttr ".tk[133]" -type "float3" -0.055633988 0 0 ;
	setAttr ".tk[137]" -type "float3" -0.057413999 0 0 ;
	setAttr ".tk[140]" -type "float3" -0.057413999 0 0 ;
	setAttr ".tk[141]" -type "float3" 0.006089177 0 0 ;
	setAttr ".tk[144]" -type "float3" 0.0060891733 0 0 ;
	setAttr ".tk[145]" -type "float3" -0.029176265 0 0 ;
	setAttr ".tk[148]" -type "float3" -0.033729464 0 0 ;
	setAttr ".tk[155]" -type "float3" -0.045920186 0 0 ;
	setAttr ".tk[156]" -type "float3" -0.045433223 0 0 ;
	setAttr ".tk[157]" -type "float3" -0.024329472 0 0 ;
	setAttr ".tk[160]" -type "float3" -0.038086716 0 0 ;
	setAttr ".tk[161]" -type "float3" -0.010613773 0 0 ;
	setAttr ".tk[164]" -type "float3" -0.0074144569 0 0 ;
	setAttr ".tk[169]" -type "float3" -0.065947369 0 0 ;
	setAttr ".tk[171]" -type "float3" 0.024600981 0 0 ;
	setAttr ".tk[174]" -type "float3" 0.014897913 0 0 ;
	setAttr ".tk[178]" -type "float3" 1.4901161e-008 0 -1.1175871e-008 ;
	setAttr ".tk[179]" -type "float3" -4.4703484e-008 3.7252903e-009 -3.7252903e-009 ;
	setAttr ".tk[180]" -type "float3" 2.9802322e-008 -9.3132257e-009 2.3283064e-009 ;
	setAttr ".tk[181]" -type "float3" -1.4901161e-008 -3.1664968e-008 1.4901161e-008 ;
	setAttr ".tk[182]" -type "float3" 0.0094156563 1.6763806e-008 0 ;
	setAttr ".tk[184]" -type "float3" 0.043411475 0 0 ;
	setAttr ".tk[185]" -type "float3" 0.052380241 0 0 ;
	setAttr ".tk[186]" -type "float3" 0.044546276 4.4703484e-008 3.7252903e-009 ;
	setAttr ".tk[187]" -type "float3" -1.1641532e-010 3.3527613e-008 2.3283064e-009 ;
	setAttr ".tk[188]" -type "float3" -1.8626451e-008 1.8626451e-009 2.3283064e-009 ;
	setAttr ".tk[189]" -type "float3" -2.4214387e-008 -1.8626451e-009 0 ;
	setAttr ".tk[190]" -type "float3" 3.1664968e-008 0 -1.8626451e-009 ;
	setAttr ".tk[191]" -type "float3" 0.00606177 -1.1175871e-008 -2.3283064e-010 ;
	setAttr ".tk[192]" -type "float3" 0.0071277115 0 0 ;
	setAttr ".tk[193]" -type "float3" 0.0059072743 0 0 ;
	setAttr ".tk[194]" -type "float3" -0.059128709 0 0 ;
	setAttr ".tk[197]" -type "float3" -0.05884935 0 0 ;
	setAttr ".tk[198]" -type "float3" 0.0012812838 -1.1175871e-008 1.8626451e-009 ;
	setAttr ".tk[199]" -type "float3" 4.7234772e-017 0 0 ;
	setAttr ".tk[200]" -type "float3" 0.0063618589 0 0 ;
	setAttr ".tk[201]" -type "float3" 0.046752162 2.2351742e-008 0 ;
	setAttr ".tk[202]" -type "float3" -5.4016709e-008 7.4505806e-009 -9.3132257e-009 ;
	setAttr ".tk[203]" -type "float3" -5.9604645e-008 1.2107193e-008 -4.6566129e-009 ;
	setAttr ".tk[204]" -type "float3" -1.4901161e-008 -1.3038516e-008 2.7939677e-009 ;
	setAttr ".tk[205]" -type "float3" -1.4901161e-008 -7.4505806e-009 -4.6566129e-010 ;
	setAttr ".tk[206]" -type "float3" 0.010959357 0 1.8626451e-009 ;
	setAttr ".tk[207]" -type "float3" 1.8626451e-008 -3.7252903e-009 -9.3132257e-009 ;
	setAttr ".tk[208]" -type "float3" 1.6763806e-008 2.6077032e-008 -1.4901161e-008 ;
	setAttr ".tk[209]" -type "float3" 0.035718761 1.8626451e-008 5.1222742e-009 ;
	setAttr ".tk[210]" -type "float3" 0.033512898 7.4505806e-009 2.3283064e-010 ;
	setAttr ".tk[211]" -type "float3" 0 -9.3132257e-010 8.3819032e-009 ;
	setAttr ".tk[212]" -type "float3" -6.7055225e-008 -5.5879354e-009 3.7252903e-009 ;
	setAttr ".tk[213]" -type "float3" 6.7055225e-008 1.1175871e-008 -9.3132257e-010 ;
	setAttr ".tk[214]" -type "float3" 2.6077032e-008 -1.8626451e-009 4.6566129e-010 ;
	setAttr ".tk[215]" -type "float3" 5.5879354e-009 -3.9115548e-008 0 ;
	setAttr ".tk[216]" -type "float3" 0 1.1175871e-008 0 ;
	setAttr ".tk[217]" -type "float3" -0.032135084 1.6763806e-008 1.4901161e-008 ;
	setAttr ".tk[218]" -type "float3" -0.033678785 -1.1175871e-008 2.2351742e-008 ;
createNode polyTweak -n "polyTweak20";
	setAttr ".uopa" yes;
	setAttr -s 14 ".tk";
	setAttr ".tk[178]" -type "float3" -0.02239953 0.035665441 0.024860591 ;
	setAttr ".tk[179]" -type "float3" -0.041042965 0.012724763 0.019652097 ;
	setAttr ".tk[180]" -type "float3" -0.034387134 -0.0210061 -0.0048134108 ;
	setAttr ".tk[181]" -type "float3" -0.0072846534 -0.041955896 0.0058842911 ;
	setAttr ".tk[182]" -type "float3" 0.046274401 -0.044454657 -0.024011247 ;
	setAttr ".tk[186]" -type "float3" 0.046274401 0.044238634 -0.00036414055 ;
	setAttr ".tk[191]" -type "float3" 0.029988158 0 0 ;
	setAttr ".tk[201]" -type "float3" 0.046274401 0.043071311 -0.010641159 ;
	setAttr ".tk[207]" -type "float3" -0.025316633 0.03732013 0.025186747 ;
	setAttr ".tk[210]" -type "float3" 0.045533601 0.046733759 6.7757363e-005 ;
	setAttr ".tk[212]" -type "float3" -0.046274405 0.013037917 0.019687394 ;
	setAttr ".tk[214]" -type "float3" -0.039290771 -0.021784844 -0.0052103349 ;
	setAttr ".tk[216]" -type "float3" -0.010320259 -0.043780219 0.004974525 ;
	setAttr ".tk[218]" -type "float3" 0.04464101 -0.046733759 -0.025186745 ;
createNode deleteComponent -n "deleteComponent14";
	setAttr ".dc" -type "componentList" 6 "f[151]" "f[153]" "f[155]" "f[160:162]" "f[167]" "f[175]";
createNode deleteComponent -n "deleteComponent15";
	setAttr ".dc" -type "componentList" 1 "f[161]";
createNode polyTweak -n "polyTweak21";
	setAttr ".uopa" yes;
	setAttr -s 12 ".tk";
	setAttr ".tk[134]" -type "float3" -0.055633996 0 0 ;
	setAttr ".tk[147]" -type "float3" -0.035924651 0 0 ;
	setAttr ".tk[150]" -type "float3" -0.027781999 0 0 ;
	setAttr ".tk[180]" -type "float3" -0.046274461 0 0 ;
	setAttr ".tk[181]" -type "float3" -0.068000369 0 0 ;
	setAttr ".tk[189]" -type "float3" -0.029988237 0 0 ;
	setAttr ".tk[194]" -type "float3" -4.4237822e-008 0 0 ;
	setAttr ".tk[195]" -type "float3" -0.046274424 0 0 ;
	setAttr ".tk[200]" -type "float3" -5.9604645e-008 0 0 ;
	setAttr ".tk[203]" -type "float3" -0.0086482018 0 0 ;
	setAttr ".tk[211]" -type "float3" -0.019068494 0 0 ;
	setAttr ".tk[212]" -type "float3" -0.063709505 0 0 ;
createNode deleteComponent -n "deleteComponent16";
	setAttr ".dc" -type "componentList" 1 "f[176]";
createNode polyTweak -n "polyTweak22";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk";
	setAttr ".tk[17]" -type "float3" 0 0 -2.9802322e-008 ;
	setAttr ".tk[18]" -type "float3" 0 0 -2.9802322e-008 ;
	setAttr ".tk[176]" -type "float3" -0.0056034545 0.016736342 0 ;
	setAttr ".tk[180]" -type "float3" 0 0 -0.043943401 ;
	setAttr ".tk[184]" -type "float3" 0 0.024840621 -0.077867284 ;
	setAttr ".tk[201]" -type "float3" -0.0056034545 0.016736342 0 ;
	setAttr ".tk[204]" -type "float3" 0 0.024840621 -0.077867284 ;
	setAttr ".tk[212]" -type "float3" 0 0 -0.043943401 ;
createNode polySplit -n "polySplit8";
	setAttr -s 11 ".e[0:10]"  0.61515403 0.53683501 0.54663199 0.180696
		 0.59807003 0.85203499 1 0 0.47306699 0.55093598 0;
	setAttr -s 11 ".d[0:10]"  -2147483599 -2147483598 -2147483597 -2147483523 -2147483501 -2147483529 
		-2147483492 -2147483534 -2147483475 -2147483512 -2147483542;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace7";
	setAttr ".ics" -type "componentList" 7 "f[10:27]" "f[56:57]" "f[60:68]" "f[70:74]" "f[77:81]" "f[84:87]" "f[180]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.28862581 0.58437514 -0.35236645 ;
	setAttr ".rs" 50386;
	setAttr ".lt" -type "double3" -1.6086849734253672e-017 2.8189256484623115e-017 0.015903552578136856 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.25836444530760994 -1.3468980733542919 ;
	setAttr ".cbx" -type "double3" 0.57725160042804258 1.4271146779168533 0.64216519433298469 ;
createNode polyTweak -n "polyTweak23";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk";
	setAttr ".tk[14]" -type "float3" 0 1.1641532e-010 0 ;
	setAttr ".tk[16]" -type "float3" 0 0 -0.25870767 ;
	setAttr ".tk[180]" -type "float3" 0 0.019121349 0 ;
	setAttr ".tk[192]" -type "float3" 0 0 -0.018265745 ;
	setAttr ".tk[193]" -type "float3" 0 0 -0.055460144 ;
	setAttr ".tk[195]" -type "float3" 2.220446e-016 0 0.02744469 ;
	setAttr ".tk[212]" -type "float3" 0 0.019121349 0 ;
	setAttr ".tk[213]" -type "float3" 0 -0.017263519 0.033131301 ;
	setAttr ".tk[214]" -type "float3" 0 0 0.079842024 ;
	setAttr ".tk[215]" -type "float3" 0 0 0.11540703 ;
	setAttr ".tk[216]" -type "float3" 0 0 0.11668877 ;
	setAttr ".tk[217]" -type "float3" 0 0.0066399481 0.11382544 ;
	setAttr ".tk[233]" -type "float3" 0 0 -0.13191852 ;
	setAttr ".tk[237]" -type "float3" 0 0 -0.083117925 ;
	setAttr ".tk[238]" -type "float3" 0 0 -0.2046032 ;
createNode polyExtrudeFace -n "polyExtrudeFace8";
	setAttr ".ics" -type "componentList" 7 "f[10:27]" "f[56:57]" "f[60:68]" "f[70:74]" "f[77:81]" "f[84:87]" "f[180]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.29541609 0.58669919 -0.35800374 ;
	setAttr ".rs" 33797;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -0.0022581550333163852 -0.26938217715912277 -1.360527220887441 ;
	setAttr ".cbx" -type "double3" 0.59309032176408061 1.4427805471300168 0.64451973351772895 ;
createNode polySplit -n "polySplit9";
	setAttr -s 8 ".e[0:7]"  0.37784299 0.516711 0.54216802 0 0 1 0.57123798
		 1;
	setAttr -s 8 ".d[0:7]"  -2147483262 -2147483265 -2147483259 -2147483173 -2147483186 -2147483191 
		-2147483199 -2147483200;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace9";
	setAttr ".ics" -type "componentList" 6 "f[63]" "f[68]" "f[77]" "f[84:87]" "f[180]" "f[234:240]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.27017114 0.57091761 -0.35800368 ;
	setAttr ".rs" 47086;
	setAttr ".lt" -type "double3" 1.8301332671555315e-016 1.5959455978986625e-016 0.032231651792705381 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -0.0010320706254507458 -0.26938217715912277 -1.3605270743264362 ;
	setAttr ".cbx" -type "double3" 0.54137434239151772 1.4112173639615566 0.64451973351772895 ;
createNode polyTweak -n "polyTweak24";
	setAttr ".uopa" yes;
	setAttr -s 5 ".tk";
	setAttr ".tk[243]" -type "float3" 0 -0.057316914 0 ;
	setAttr ".tk[244]" -type "float3" 0 -0.064812765 0 ;
	setAttr ".tk[246]" -type "float3" 4.4408921e-016 -0.027096719 0.016920889 ;
	setAttr ".tk[247]" -type "float3" 0 0.043773592 -0.098994389 ;
	setAttr ".tk[262]" -type "float3" 0 0.006299308 -0.021836581 ;
createNode polyExtrudeFace -n "polyExtrudeFace10";
	setAttr ".ics" -type "componentList" 7 "f[241:245]" "f[248]" "f[250]" "f[252:254]" "f[257]" "f[259]" "f[264]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.25710392 0.56391209 -0.2955988 ;
	setAttr ".rs" 42864;
	setAttr ".lt" -type "double3" 2.6758109616942249e-016 6.9388939039072284e-017 0.084757515376688977 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -0.0023336906444704798 -0.2954822488358374 -1.2405151557415772 ;
	setAttr ".cbx" -type "double3" 0.51654150924216269 1.4233064765085262 0.64931755457571361 ;
createNode polyTweak -n "polyTweak25";
	setAttr ".uopa" yes;
	setAttr -s 34 ".tk";
	setAttr ".tk[184]" -type "float3" 0 4.6566129e-009 -2.2351742e-008 ;
	setAttr ".tk[273]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[274]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[276]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[277]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[279]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[281]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[282]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[284]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[287]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[289]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[290]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[291]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[292]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[295]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[298]" -type "float3" 0.023287011 0 0 ;
	setAttr ".tk[300]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[301]" -type "float3" 0.065030307 0 0 ;
	setAttr ".tk[304]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[305]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[307]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[308]" -type "float3" 0.016437255 0 0 ;
	setAttr ".tk[310]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[311]" -type "float3" 0.058180548 0 0 ;
	setAttr ".tk[313]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[314]" -type "float3" 0 -0.037152551 -0.041001607 ;
	setAttr ".tk[315]" -type "float3" 0.041743297 -0.037152551 -0.041001607 ;
	setAttr ".tk[316]" -type "float3" 0 -0.037152551 -0.041001607 ;
	setAttr ".tk[317]" -type "float3" 0.041743297 -0.037152551 -0.041001607 ;
	setAttr ".tk[319]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[322]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[323]" -type "float3" 0.041743297 0 0 ;
	setAttr ".tk[324]" -type "float3" 0 4.6566129e-009 -2.2351742e-008 ;
	setAttr ".tk[325]" -type "float3" 0.041743297 4.6566129e-009 -2.2351742e-008 ;
createNode deleteComponent -n "deleteComponent17";
	setAttr ".dc" -type "componentList" 9 "f[187]" "f[189:196]" "f[202]" "f[207]" "f[231]" "f[251]" "f[256]" "f[279]" "f[287]";
createNode deleteComponent -n "deleteComponent18";
	setAttr ".dc" -type "componentList" 1 "f[209]";
createNode polySplitRing -n "polySplitRing13";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[481]" "e[507]" "e[510]" "e[513]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.4002099335193634;
	setAttr ".dr" no;
	setAttr ".re" 481;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak26";
	setAttr ".uopa" yes;
	setAttr -s 99 ".tk";
	setAttr ".tk[16]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[17]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[18]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[65]" -type "float3" -3.6497469e-033 0 0 ;
	setAttr ".tk[66]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[67]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[68]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[114]" -type "float3" -7.4505806e-009 0 0 ;
	setAttr ".tk[117]" -type "float3" -7.4505806e-009 0 0 ;
	setAttr ".tk[128]" -type "float3" -1.8626451e-009 0 0 ;
	setAttr ".tk[143]" -type "float3" -0.046274427 0 0 ;
	setAttr ".tk[154]" -type "float3" -2.220446e-016 0 0 ;
	setAttr ".tk[163]" -type "float3" -0.054181803 0 0 ;
	setAttr ".tk[180]" -type "float3" -0.007698494 0 0 ;
	setAttr ".tk[182]" -type "float3" -0.0069803274 0 0 ;
	setAttr ".tk[184]" -type "float3" -0.0031004464 0 0 ;
	setAttr ".tk[185]" -type "float3" 3.0634263e-005 0 0 ;
	setAttr ".tk[186]" -type "float3" 0.0020108917 0 0 ;
	setAttr ".tk[187]" -type "float3" 0.0053491653 0 0 ;
	setAttr ".tk[188]" -type "float3" 0.0048047882 0 0 ;
	setAttr ".tk[189]" -type "float3" 0.0028535076 0 0 ;
	setAttr ".tk[190]" -type "float3" 0.002152991 0 0 ;
	setAttr ".tk[191]" -type "float3" 0.00036126221 0 0.12316819 ;
	setAttr ".tk[199]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[200]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[201]" -type "float3" 0.0024447907 0.12407657 0 ;
	setAttr ".tk[203]" -type "float3" -0.007698494 0 0 ;
	setAttr ".tk[206]" -type "float3" -0.0069803274 0 0 ;
	setAttr ".tk[210]" -type "float3" -0.0031004464 0 0 ;
	setAttr ".tk[213]" -type "float3" 3.0634263e-005 0 0 ;
	setAttr ".tk[216]" -type "float3" 0.0020108917 0 0 ;
	setAttr ".tk[219]" -type "float3" 0.0053491653 0 0 ;
	setAttr ".tk[222]" -type "float3" 0.0048047882 0 0 ;
	setAttr ".tk[225]" -type "float3" 0.0028535076 0 -1.4901161e-008 ;
	setAttr ".tk[228]" -type "float3" 0.002152991 0 0 ;
	setAttr ".tk[230]" -type "float3" 0.00036126221 0 0.12316819 ;
	setAttr ".tk[231]" -type "float3" 0 0 0.082756288 ;
	setAttr ".tk[232]" -type "float3" 0 0.046589814 0.18402283 ;
	setAttr ".tk[233]" -type "float3" 0.00081765943 0.046589814 0.18402283 ;
	setAttr ".tk[234]" -type "float3" 0.0005237679 0 0.095379539 ;
	setAttr ".tk[235]" -type "float3" 0.015448249 0.06922885 0.067020141 ;
	setAttr ".tk[236]" -type "float3" 0.11877497 -0.033512764 0.058815293 ;
	setAttr ".tk[237]" -type "float3" 0.22474456 0 0 ;
	setAttr ".tk[239]" -type "float3" 0 6.7055225e-008 4.8428774e-008 ;
	setAttr ".tk[242]" -type "float3" 0 -0.033512767 0.058815293 ;
	setAttr ".tk[245]" -type "float3" 0 -0.033512767 0.058815293 ;
	setAttr ".tk[251]" -type "float3" 0 -0.033512767 0.058815293 ;
	setAttr ".tk[253]" -type "float3" 2.3283064e-010 1.4901161e-008 -1.4156103e-007 ;
	setAttr ".tk[254]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[255]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[256]" -type "float3" 0.0024447907 0.12407657 0 ;
	setAttr ".tk[258]" -type "float3" -0.0074271397 0 0 ;
	setAttr ".tk[261]" -type "float3" 0.086597256 -0.033512764 0.058815293 ;
	setAttr ".tk[262]" -type "float3" 0.25520623 0.040034018 0.060452305 ;
	setAttr ".tk[263]" -type "float3" 0.20181604 0.040033966 0.060452044 ;
	setAttr ".tk[264]" -type "float3" 0 -0.033512771 0.058815278 ;
	setAttr ".tk[265]" -type "float3" 0.11553796 0 0 ;
	setAttr ".tk[266]" -type "float3" 0.19617425 0.040033907 0.060452163 ;
	setAttr ".tk[267]" -type "float3" 2.3283064e-010 -0.03351279 0.058815502 ;
	setAttr ".tk[268]" -type "float3" 0.16463931 -2.0489097e-008 -1.6298145e-009 ;
	setAttr ".tk[269]" -type "float3" 0 -0.033512753 0.058815293 ;
	setAttr ".tk[270]" -type "float3" 0.14813519 0 -2.2351742e-008 ;
	setAttr ".tk[271]" -type "float3" 0.061640654 1.6391277e-007 1.2665987e-007 ;
	setAttr ".tk[272]" -type "float3" 0.11877497 -0.033512853 0.05881542 ;
	setAttr ".tk[273]" -type "float3" 0.0033763833 0.1240766 -0.06537845 ;
	setAttr ".tk[274]" -type "float3" 0.015448249 0.06922888 0.067019917 ;
	setAttr ".tk[275]" -type "float3" 0 0.046589814 0.1307569 ;
	setAttr ".tk[276]" -type "float3" 0 0.092747979 -0.025787329 ;
	setAttr ".tk[277]" -type "float3" 0.0039009647 0.046589814 0.1307569 ;
	setAttr ".tk[278]" -type "float3" -0.036215201 0.071028076 -0.14805686 ;
	setAttr ".tk[280]" -type "float3" -0.065139145 0.037941158 0 ;
	setAttr ".tk[281]" -type "float3" 0 0.037941158 0 ;
	setAttr ".tk[283]" -type "float3" -0.023124494 0 0 ;
	setAttr ".tk[284]" -type "float3" 0.11553796 0.037941158 0 ;
	setAttr ".tk[286]" -type "float3" 0.08103402 -0.033512749 0.058815427 ;
	setAttr ".tk[289]" -type "float3" 0 7.9162419e-009 -5.2154064e-008 ;
	setAttr ".tk[290]" -type "float3" -4.6566129e-010 9.3132257e-008 5.9604645e-007 ;
	setAttr ".tk[291]" -type "float3" 0 0 -0.011777734 ;
	setAttr ".tk[292]" -type "float3" 0 0 -0.010288739 ;
	setAttr ".tk[293]" -type "float3" 0 0 -0.010288739 ;
	setAttr ".tk[294]" -type "float3" 0 0 -0.011777734 ;
	setAttr ".tk[295]" -type "float3" 0.030468576 -0.040677417 0.039059687 ;
	setAttr ".tk[296]" -type "float3" 0.030468576 -0.040677357 0.039059702 ;
	setAttr ".tk[297]" -type "float3" 0 -1.4901161e-008 -1.1175871e-008 ;
	setAttr ".tk[298]" -type "float3" 0 -2.9802322e-008 3.7252903e-008 ;
	setAttr ".tk[299]" -type "float3" 0 -4.4703484e-008 -2.3841858e-007 ;
	setAttr ".tk[300]" -type "float3" 0 -5.2154064e-008 1.15484e-007 ;
	setAttr ".tk[301]" -type "float3" 0 0.12407657 0 ;
	setAttr ".tk[302]" -type "float3" -0.058264226 0.1240766 0.017330609 ;
	setAttr ".tk[303]" -type "float3" 0 0.11565723 -0.037256971 ;
	setAttr ".tk[304]" -type "float3" 0 0.11565723 -0.037256971 ;
	setAttr ".tk[305]" -type "float3" -0.034943908 0.11565723 -0.037256971 ;
	setAttr ".tk[306]" -type "float3" -0.073603898 0.11565723 -0.037256971 ;
	setAttr ".tk[309]" -type "float3" -0.093713932 0 0.025002021 ;
	setAttr ".tk[310]" -type "float3" 0 0 -0.023557646 ;
	setAttr ".tk[311]" -type "float3" 0 0 -0.023557646 ;
	setAttr ".tk[312]" -type "float3" -0.15115458 0 0.025002021 ;
	setAttr ".tk[313]" -type "float3" -1.110223e-016 0 -0.011167047 ;
	setAttr ".tk[314]" -type "float3" -1.110223e-016 0 -0.011167047 ;
createNode polyTweak -n "polyTweak27";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk[315:318]" -type "float3"  0 -0.015654109 0.00029950403
		 0 -0.015654109 0.00029950403 0 -0.015654109 0.00029950403 0 -0.015654109 0.00029950403;
createNode deleteComponent -n "deleteComponent19";
	setAttr ".dc" -type "componentList" 1 "f[200]";
createNode polyTweak -n "polyTweak28";
	setAttr ".uopa" yes;
	setAttr -s 38 ".tk";
	setAttr ".tk[2]" -type "float3" 4.9960036e-016 0.070137531 0.12753683 ;
	setAttr ".tk[19]" -type "float3" 0 0 -0.083979286 ;
	setAttr ".tk[21]" -type "float3" -0.16045839 0 0.078904487 ;
	setAttr ".tk[24]" -type "float3" -0.24203578 0 0.11429653 ;
	setAttr ".tk[27]" -type "float3" 0 0.088887908 0.04605367 ;
	setAttr ".tk[30]" -type "float3" 0 0.082890436 0.026407095 ;
	setAttr ".tk[33]" -type "float3" 0 0.085416548 0.12932166 ;
	setAttr ".tk[36]" -type "float3" 5.5511151e-016 0.077821836 0.074255563 ;
	setAttr ".tk[39]" -type "float3" 0 0.051054031 0.095826209 ;
	setAttr ".tk[51]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[57]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[63]" -type "float3" 0 0.048012972 0.11476877 ;
	setAttr ".tk[66]" -type "float3" 0 0 -0.083979286 ;
	setAttr ".tk[68]" -type "float3" -0.10310467 0 0.056777846 ;
	setAttr ".tk[194]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[202]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".tk[244]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[245]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[257]" -type "float3" -7.4505806e-009 0.024843836 -0.060895912 ;
	setAttr ".tk[262]" -type "float3" -0.10161995 0.00093115645 -0.10610534 ;
	setAttr ".tk[263]" -type "float3" -0.062170804 0.13491459 -0.1067441 ;
	setAttr ".tk[264]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[265]" -type "float3" -0.034415223 0 0 ;
	setAttr ".tk[266]" -type "float3" -0.016331723 -0.05006557 -0.13082506 ;
	setAttr ".tk[268]" -type "float3" -0.042681266 0 0 ;
	setAttr ".tk[272]" -type "float3" 0.038843423 0 0 ;
	setAttr ".tk[277]" -type "float3" 0 0 0.048990101 ;
	setAttr ".tk[278]" -type "float3" 0 0 0.048990101 ;
	setAttr ".tk[279]" -type "float3" 2.2351742e-008 3.7252903e-009 0 ;
	setAttr ".tk[288]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[289]" -type "float3" 0 0.13491459 -0.1067441 ;
	setAttr ".tk[292]" -type "float3" 0 -0.0068657794 0.029127209 ;
	setAttr ".tk[293]" -type "float3" 0 -0.0068657794 0.029127209 ;
	setAttr ".tk[305]" -type "float3" 0 0 -0.031647358 ;
	setAttr ".tk[306]" -type "float3" 0 0 -0.031647358 ;
	setAttr ".tk[307]" -type "float3" -7.4505806e-009 0.024843836 -0.060895912 ;
	setAttr ".tk[308]" -type "float3" -7.4505806e-009 0.024843836 -0.060895912 ;
	setAttr ".tk[318]" -type "float3" 0.030471053 0 -0.01318411 ;
createNode deleteComponent -n "deleteComponent20";
	setAttr ".dc" -type "componentList" 1 "e[500]";
createNode deleteComponent -n "deleteComponent21";
	setAttr ".dc" -type "componentList" 1 "e[475]";
createNode polyExtrudeFace -n "polyExtrudeFace11";
	setAttr ".ics" -type "componentList" 1 "f[106]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.066857003 -0.31611645 1.1051257 ;
	setAttr ".rs" 65390;
	setAttr ".lt" -type "double3" -2.7755575615628914e-017 0.030351858355350828 0.28724683551438795 ;
	setAttr ".ls" -type "double3" 0.11666665427185226 0.11666665427185226 0.11666665427185226 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.35957956060944596 1.0532327958457552 ;
	setAttr ".cbx" -type "double3" 0.13371400892513488 -0.27265335193368173 1.1570186524507877 ;
createNode polyTweak -n "polyTweak29";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk";
	setAttr ".tk[34]" -type "float3" 0 0.054618381 -0.074991301 ;
	setAttr ".tk[35]" -type "float3" 0 0.054618381 -0.074991301 ;
	setAttr ".tk[48]" -type "float3" -0.036767453 0 0.12999491 ;
	setAttr ".tk[64]" -type "float3" 0 0.054618381 -0.074991301 ;
	setAttr ".tk[65]" -type "float3" 0 0.054618381 -0.074991301 ;
	setAttr ".tk[264]" -type "float3" 0.046635725 0 0 ;
	setAttr ".tk[269]" -type "float3" 0.014679781 0 0 ;
	setAttr ".tk[273]" -type "float3" -0.035223413 -2.220446e-016 0.014289997 ;
	setAttr ".tk[286]" -type "float3" 0.037906796 0 0 ;
	setAttr ".tk[289]" -type "float3" 0.046635725 0 0 ;
	setAttr ".tk[296]" -type "float3" 0.038010508 0 0 ;
	setAttr ".tk[300]" -type "float3" 0.038010508 0 0 ;
	setAttr ".tk[301]" -type "float3" -0.0351527 0 -0.00089456653 ;
	setAttr ".tk[302]" -type "float3" 0.032434478 0 0 ;
	setAttr ".tk[318]" -type "float3" 0.00049921707 0.014154214 0.0052526076 ;
createNode polySplit -n "polySplit10";
	setAttr -s 5 ".e[0:4]"  0.101692 0.078041501 0.087936401 0.070317298
		 0.101692;
	setAttr -s 5 ".d[0:4]"  -2147483052 -2147483048 -2147483050 -2147483053 -2147483052;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyTweak -n "polyTweak30";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk";
	setAttr ".tk[31]" -type "float3" 0 0 -2.7755576e-017 ;
	setAttr ".tk[32]" -type "float3" 0 0 -2.7755576e-017 ;
	setAttr ".tk[48]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[52]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[56]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[58]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[78]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[81]" -type "float3" 0 -0.079097793 0.00017707908 ;
	setAttr ".tk[83]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[84]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[85]" -type "float3" 0 0 2.9802322e-008 ;
	setAttr ".tk[319]" -type "float3" 0.026542377 -0.026243052 0.060616072 ;
	setAttr ".tk[320]" -type "float3" 0.026542377 -0.026243052 0.060616072 ;
	setAttr ".tk[321]" -type "float3" 0.026542377 -0.026243052 0.060616072 ;
	setAttr ".tk[322]" -type "float3" 0.026542377 -0.026243052 0.060616072 ;
createNode polySplit -n "polySplit11";
	setAttr -s 2 ".e[0:1]"  0.517138 0.26084599;
	setAttr -s 2 ".d[0:1]"  -2147483453 -2147483460;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit12";
	setAttr -s 2 ".e[0:1]"  0.55814999 0.183336;
	setAttr -s 2 ".d[0:1]"  -2147483453 -2147483036;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyTweak -n "polyTweak31";
	setAttr ".uopa" yes;
	setAttr -s 3 ".tk";
	setAttr ".tk[110]" -type "float3" -0.099266246 0.016499866 0 ;
	setAttr ".tk[111]" -type "float3" -0.099266246 0.016499866 0 ;
	setAttr ".tk[116]" -type "float3" -0.099266246 0.016499866 0 ;
createNode polySplit -n "polySplit13";
	setAttr -s 2 ".e[0:1]"  0.220405 0.25805199;
	setAttr -s 2 ".d[0:1]"  -2147483035 -2147483032;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit14";
	setAttr -s 2 ".e[0:1]"  0.29431599 0.34155601;
	setAttr -s 2 ".d[0:1]"  -2147483031 -2147483030;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace12";
	setAttr ".ics" -type "componentList" 1 "f[288]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.25587416 0.53522974 1.7012706 ;
	setAttr ".rs" 48311;
	setAttr ".lt" -type "double3" -1.700029006457271e-016 -1.0111269460599814e-015 -0.039504220665154736 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.25347004182257588 0.48871900438076415 1.6635505599088873 ;
	setAttr ".cbx" -type "double3" 0.25827827810555781 0.58174052147381361 1.7389906387909055 ;
createNode polySplitRing -n "polySplitRing14";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[623:624]" "e[626]" "e[628]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.13422031700611115;
	setAttr ".re" 626;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak32";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk[328:342]" -type "float3"  0 -1.8626451e-009 0 0 0.012688961
		 0.0087937843 0 0.012688959 0.0087937843 0 -0.0068984777 0.016235374 0 0.0017868394
		 0.02176862 0 -0.0045639733 0.012467387 0 0.0042820559 0.017530536 0 -0.0068169436
		 0.015950963 0 0.0018683749 0.021484252 0 0.0043635978 0.017246122 0 -0.0044824374
		 0.012183084 0 0.0042930082 0.017492332 0 0.0017977825 0.021730479 0 -0.0068875416
		 0.016197223 0 -0.0045530298 0.012429239;
createNode polySplit -n "polySplit15";
	setAttr -s 2 ".e[0:1]"  1 0.125984;
	setAttr -s 2 ".d[0:1]"  -2147483453 -2147483469;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit16";
	setAttr -s 2 ".e[0:1]"  0 0.32686901;
	setAttr -s 2 ".d[0:1]"  -2147483037 -2147483009;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit17";
	setAttr -s 2 ".e[0:1]"  0.22265001 0.135252;
	setAttr -s 2 ".d[0:1]"  -2147483006 -2147483008;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit18";
	setAttr -s 2 ".e[0:1]"  0.146872 0.149462;
	setAttr -s 2 ".d[0:1]"  -2147483005 -2147483004;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace13";
	setAttr ".ics" -type "componentList" 1 "f[299]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.088827789 0.40939081 1.7984058 ;
	setAttr ".rs" 47282;
	setAttr ".lt" -type "double3" -2.5240226575462543e-016 9.4976110309730188e-017 -0.01990576688667552 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.076959282763606571 0.37881229715160253 1.7720825015371575 ;
	setAttr ".cbx" -type "double3" 0.1006962914624828 0.43996931193702471 1.8247291198076199 ;
createNode polyTweak -n "polyTweak33";
	setAttr ".uopa" yes;
	setAttr -s 30 ".tk";
	setAttr ".tk[103]" -type "float3" -0.14317682 0 0 ;
	setAttr ".tk[104]" -type "float3" -0.1657304 0 0 ;
	setAttr ".tk[107]" -type "float3" 0.13421604 0 0 ;
	setAttr ".tk[108]" -type "float3" -0.067179672 0 0 ;
	setAttr ".tk[110]" -type "float3" 0.025584437 0 0 ;
	setAttr ".tk[111]" -type "float3" -0.21326196 0 0 ;
	setAttr ".tk[115]" -type "float3" -0.29707459 0 0 ;
	setAttr ".tk[116]" -type "float3" -0.35845813 0 0 ;
	setAttr ".tk[327]" -type "float3" -0.33303297 0 0 ;
	setAttr ".tk[328]" -type "float3" -0.069214366 0 0 ;
	setAttr ".tk[329]" -type "float3" -0.33303297 0 0 ;
	setAttr ".tk[330]" -type "float3" -0.022577677 0 0 ;
	setAttr ".tk[331]" -type "float3" -0.34138972 0 0 ;
	setAttr ".tk[332]" -type "float3" -0.34138972 0 0 ;
	setAttr ".tk[333]" -type "float3" -0.18203124 0.018282801 -0.04283214 ;
	setAttr ".tk[334]" -type "float3" -0.18203124 0.018282801 -0.04283214 ;
	setAttr ".tk[335]" -type "float3" -0.30919802 0 0 ;
	setAttr ".tk[336]" -type "float3" -0.35644776 0 0 ;
	setAttr ".tk[337]" -type "float3" -0.20170316 0.029759724 -0.063410513 ;
	setAttr ".tk[338]" -type "float3" -0.20170316 0.029759724 -0.063410513 ;
	setAttr ".tk[339]" -type "float3" -0.18203124 0.018282801 -0.04283214 ;
	setAttr ".tk[340]" -type "float3" -0.34138972 0 0 ;
	setAttr ".tk[341]" -type "float3" -0.34138972 0 0 ;
	setAttr ".tk[342]" -type "float3" -0.18203124 0.018282801 -0.04283214 ;
	setAttr ".tk[343]" -type "float3" -0.14317682 0 0 ;
	setAttr ".tk[344]" -type "float3" -0.14317682 0 0 ;
	setAttr ".tk[345]" -type "float3" -0.30234501 0 0 ;
	setAttr ".tk[346]" -type "float3" -0.30234501 0 0 ;
	setAttr ".tk[347]" -type "float3" -0.28000328 0 0 ;
	setAttr ".tk[348]" -type "float3" -0.28000328 0 0 ;
createNode polySplitRing -n "polySplitRing15";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[649:650]" "e[652]" "e[654]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.24331475794315338;
	setAttr ".re" 652;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak34";
	setAttr ".uopa" yes;
	setAttr -s 13 ".tk";
	setAttr ".tk[327]" -type "float3" -0.021632025 0 0 ;
	setAttr ".tk[345]" -type "float3" 0 0 0.022296377 ;
	setAttr ".tk[346]" -type "float3" 2.7755576e-017 -0.0033841266 0.048105132 ;
	setAttr ".tk[347]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[348]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[349]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[350]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[351]" -type "float3" 2.7755576e-017 -0.0033841266 0.048105132 ;
	setAttr ".tk[352]" -type "float3" 0 0 0.022296377 ;
	setAttr ".tk[353]" -type "float3" 2.7755576e-017 -0.0033841266 0.048105132 ;
	setAttr ".tk[354]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[355]" -type "float3" -0.022457443 0 0.038200084 ;
	setAttr ".tk[356]" -type "float3" 0 0 0.022296377 ;
createNode deleteComponent -n "deleteComponent22";
	setAttr ".dc" -type "componentList" 1 "e[647]";
createNode deleteComponent -n "deleteComponent23";
	setAttr ".dc" -type "componentList" 1 "e[646]";
createNode deleteComponent -n "deleteComponent24";
	setAttr ".dc" -type "componentList" 1 "vtx[344]";
createNode deleteComponent -n "deleteComponent25";
	setAttr ".dc" -type "componentList" 1 "vtx[343]";
createNode polySplit -n "polySplit19";
	setAttr -s 2 ".e[0:1]"  0 0.51173198;
	setAttr -s 2 ".d[0:1]"  -2147483004 -2147483453;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit20";
	setAttr -s 2 ".e[0:1]"  1 0.25024301;
	setAttr -s 2 ".d[0:1]"  -2147483006 -2147483456;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyTweak -n "polyTweak35";
	setAttr ".uopa" yes;
	setAttr -s 37 ".tk";
	setAttr ".tk[16]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[66]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[188]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[189]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[190]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[191]" -type "float3" 0 0 0.00051147398 ;
	setAttr ".tk[201]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[217]" -type "float3" -0.15617952 0 0.032131109 ;
	setAttr ".tk[220]" -type "float3" -0.30792025 0.0021503048 -0.028886737 ;
	setAttr ".tk[222]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[223]" -type "float3" -0.26749399 0 -0.035380669 ;
	setAttr ".tk[225]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[226]" -type "float3" -0.33373588 0 -0.035380669 ;
	setAttr ".tk[228]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[229]" -type "float3" -0.26029089 0 -0.035380669 ;
	setAttr ".tk[230]" -type "float3" 0 0 0.00051147398 ;
	setAttr ".tk[231]" -type "float3" 0 0 0.082783401 ;
	setAttr ".tk[233]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[240]" -type "float3" 0.076527424 0 0 ;
	setAttr ".tk[256]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[273]" -type "float3" -0.13436085 0 -0.035380669 ;
	setAttr ".tk[277]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[278]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[305]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[306]" -type "float3" 0 0 -0.060021464 ;
	setAttr ".tk[333]" -type "float3" 0 -0.010240685 0.027108928 ;
	setAttr ".tk[334]" -type "float3" 0 -0.010240685 0.027108928 ;
	setAttr ".tk[335]" -type "float3" -0.033320181 0 0 ;
	setAttr ".tk[336]" -type "float3" -0.033320181 0 0 ;
	setAttr ".tk[337]" -type "float3" -0.033320181 -0.022744974 0.050902136 ;
	setAttr ".tk[338]" -type "float3" -0.033320181 -0.022744974 0.050902136 ;
	setAttr ".tk[339]" -type "float3" 0 -0.010240685 0.027108928 ;
	setAttr ".tk[342]" -type "float3" 0 -0.010240685 0.027108928 ;
	setAttr ".tk[347]" -type "float3" -0.017813312 0 0 ;
	setAttr ".tk[348]" -type "float3" -0.017813312 0 0 ;
	setAttr ".tk[349]" -type "float3" -0.017813312 0 0 ;
	setAttr ".tk[350]" -type "float3" -0.017813312 0 0 ;
createNode polySplit -n "polySplit21";
	setAttr -s 2 ".e[0:1]"  0.55972099 0.271988;
	setAttr -s 2 ".d[0:1]"  -2147483029 -2147483449;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit22";
	setAttr -s 2 ".e[0:1]"  0.70350301 0.359532;
	setAttr -s 2 ".d[0:1]"  -2147483461 -2147482981;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyTweak -n "polyTweak36";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk";
	setAttr ".tk[107]" -type "float3" -0.25685251 0 0 ;
	setAttr ".tk[108]" -type "float3" 0.031731118 0.1210742 0 ;
	setAttr ".tk[110]" -type "float3" 0.030613011 0 0 ;
	setAttr ".tk[328]" -type "float3" -0.029485747 0 -2.9802322e-008 ;
	setAttr ".tk[330]" -type "float3" -0.064866357 0 0 ;
	setAttr ".tk[359]" -type "float3" -0.019597933 0 -2.9802322e-008 ;
createNode polySplit -n "polySplit23";
	setAttr -s 2 ".e[0:1]"  1 0.77809602;
	setAttr -s 2 ".d[0:1]"  -2147483461 -2147483463;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit24";
	setAttr -s 2 ".e[0:1]"  0 0.849958;
	setAttr -s 2 ".d[0:1]"  -2147483037 -2147483463;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit25";
	setAttr -s 2 ".e[0:1]"  1 0.83212698;
	setAttr -s 2 ".d[0:1]"  -2147483037 -2147483463;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace14";
	setAttr ".ics" -type "componentList" 1 "f[309]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -0.042232143495748442 0 0 ;
	setAttr ".ro" -type "double3" -0.13571302165331658 -0.12216264259338037 -0.53845280387075589 ;
	setAttr ".pvt" -type "float3" 0.15941277 0.66807872 1.6407322 ;
	setAttr ".rs" 47715;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.177720983249155 0.62909555890329161 1.6101913620323667 ;
	setAttr ".cbx" -type "double3" 0.22556888511458673 0.70706186277775207 1.6712728592596087 ;
createNode polyTweak -n "polyTweak37";
	setAttr ".uopa" yes;
	setAttr -s 3 ".tk[361:363]" -type "float3"  0.060995098 0 0 0.082538612
		 0 0 0.075078636 0 0;
createNode polySplitRing -n "polySplitRing16";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 3 "e[677:678]" "e[680]" "e[682]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.11691334098577499;
	setAttr ".re" 682;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak38";
	setAttr ".uopa" yes;
	setAttr -s 34 ".tk";
	setAttr ".tk[106]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[107]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[110]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[112]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[327]" -type "float3" 0 0.011495177 0.015343582 ;
	setAttr ".tk[328]" -type "float3" -0.026227927 -0.023546733 -0.065756112 ;
	setAttr ".tk[329]" -type "float3" 0 0.011495177 0.015343582 ;
	setAttr ".tk[330]" -type "float3" 0 0 -1.4901161e-008 ;
	setAttr ".tk[331]" -type "float3" -3.7252903e-009 0.015373735 0.029910374 ;
	setAttr ".tk[332]" -type "float3" 0 0.015373733 0.029910374 ;
	setAttr ".tk[333]" -type "float3" -0.06440632 0.015373735 0.029910363 ;
	setAttr ".tk[334]" -type "float3" -0.06440632 0.015373733 0.029910387 ;
	setAttr ".tk[335]" -type "float3" -0.0069611049 0.014381484 0.029134406 ;
	setAttr ".tk[336]" -type "float3" -3.7252903e-009 0.01377579 0.033795554 ;
	setAttr ".tk[337]" -type "float3" 0 0.015373737 0.029910387 ;
	setAttr ".tk[338]" -type "float3" 9.3132257e-010 0.015373738 0.029910378 ;
	setAttr ".tk[339]" -type "float3" -0.064406313 0.015373729 0.029910387 ;
	setAttr ".tk[340]" -type "float3" -4.656612e-010 0.015373733 0.029910378 ;
	setAttr ".tk[341]" -type "float3" 0 0.015373736 0.029910374 ;
	setAttr ".tk[342]" -type "float3" -0.06440632 0.015373735 0.029910367 ;
	setAttr ".tk[357]" -type "float3" -0.041333847 -0.014458383 -0.045823965 ;
	setAttr ".tk[359]" -type "float3" 0 -0.0080359653 -0.065756112 ;
	setAttr ".tk[360]" -type "float3" 0.021927772 -0.014458383 -0.045823965 ;
	setAttr ".tk[361]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[362]" -type "float3" 0 0.011393926 -0.041966174 ;
	setAttr ".tk[363]" -type "float3" 0 0.011393926 -0.041966189 ;
	setAttr ".tk[364]" -type "float3" 0 -0.0080359653 -0.065756112 ;
	setAttr ".tk[365]" -type "float3" 0.021927768 -0.0080359653 -0.065756112 ;
	setAttr ".tk[366]" -type "float3" 0 -0.0080359653 -0.065756112 ;
	setAttr ".tk[367]" -type "float3" -0.0409563 -0.020740403 -0.10260476 ;
	setAttr ".tk[368]" -type "float3" -0.026227927 -0.023546733 -0.065756112 ;
	setAttr ".tk[369]" -type "float3" -0.041333847 -0.014458383 -0.045823965 ;
	setAttr ".tk[370]" -type "float3" 0.021927768 -0.014458383 -0.045823965 ;
	setAttr ".tk[371]" -type "float3" 0 -0.0080359653 -0.065756112 ;
createNode polySplit -n "polySplit26";
	setAttr -s 3 ".e[0:2]"  0.81917 0.260396 0.26083899;
	setAttr -s 3 ".d[0:2]"  -2147483418 -2147483423 -2147483431;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit27";
	setAttr -s 3 ".e[0:2]"  0.31935099 0.29036 0.60348302;
	setAttr -s 3 ".d[0:2]"  -2147482953 -2147482954 -2147483418;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace15";
	setAttr ".ics" -type "componentList" 2 "f[7]" "f[9]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.26409137 0.98773324 1.1033449 ;
	setAttr ".rs" 51451;
	setAttr ".lt" -type "double3" -3.7296554733501353e-016 5.0751503694046463e-016 -0.015021428519655855 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.19973708923211811 0.76395755492153206 0.8826016373718828 ;
	setAttr ".cbx" -type "double3" 0.32844564089993428 1.2115089876671066 1.3240883052239161 ;
createNode polyTweak -n "polyTweak39";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[372:377]" -type "float3"  0.031727523 0.010884277 -0.047499537
		 -0.047357317 0.0027996143 0.036843751 -0.087442085 -0.010847937 0.047861692 -0.032133821
		 -0.010884277 0.029073074 0.012369437 0.0011724501 0.023649365 0.087442085 0.0069840853
		 -0.047861684;
createNode polySplit -n "polySplit28";
	setAttr -s 3 ".e[0:2]"  0.47589001 0.699018 0.63680202;
	setAttr -s 3 ".d[0:2]"  -2147483372 -2147483416 -2147483433;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit29";
	setAttr -s 3 ".e[0:2]"  0.75536299 0.75658399 0.458911;
	setAttr -s 3 ".d[0:2]"  -2147483433 -2147483416 -2147483372;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace16";
	setAttr ".ics" -type "componentList" 2 "f[69]" "f[92]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.36750475 0.67758083 0.84306222 ;
	setAttr ".rs" 49406;
	setAttr ".lt" -type "double3" -1.7433970933566911e-016 -7.8496237287950521e-017 
		-0.015979316114858227 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.3108980317772056 0.57751783086158892 0.65341038055964618 ;
	setAttr ".cbx" -type "double3" 0.42411145134151357 0.7776438499949907 1.0327141085920006 ;
createNode polyTweak -n "polyTweak40";
	setAttr ".uopa" yes;
	setAttr -s 15 ".tk";
	setAttr ".tk[375]" -type "float3" 0 -0.0079043219 -0.042121634 ;
	setAttr ".tk[376]" -type "float3" 0 -0.0079043219 -0.042121634 ;
	setAttr ".tk[377]" -type "float3" 0 -0.0079043219 -0.042121634 ;
	setAttr ".tk[384]" -type "float3" 0.0042918073 0.041909263 0.096059844 ;
	setAttr ".tk[385]" -type "float3" 0.0023436532 0.014606828 0.0054842308 ;
	setAttr ".tk[386]" -type "float3" -0.0041112457 0.0095059555 0.042273317 ;
	setAttr ".tk[387]" -type "float3" -0.0045002378 -0.023933757 0.023866814 ;
	setAttr ".tk[388]" -type "float3" 0.0014821409 -0.018473066 -0.013504403 ;
	setAttr ".tk[389]" -type "float3" 0.0045002387 0.023933755 0.070337176 ;
	setAttr ".tk[390]" -type "float3" 0.01149106 0 0 ;
	setAttr ".tk[391]" -type "float3" 0.01149106 0 0 ;
	setAttr ".tk[392]" -type "float3" 0.01149106 0 0 ;
	setAttr ".tk[393]" -type "float3" 0.01149106 0 0 ;
	setAttr ".tk[394]" -type "float3" 0.01149106 0 0.095555477 ;
	setAttr ".tk[395]" -type "float3" 0.01149106 0 0.095555477 ;
createNode polySplit -n "polySplit30";
	setAttr -s 8 ".e[0:7]"  0.26309499 0.15957899 0.162916 0.76342201
		 0 0 1 0;
	setAttr -s 8 ".d[0:7]"  -2147483282 -2147483285 -2147483281 -2147483205 -2147483211 -2147483221 
		-2147483225 -2147483234;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit31";
	setAttr -s 6 ".e[0:5]"  0 0.24188501 0.3513 0.49908999 0 1;
	setAttr -s 6 ".d[0:5]"  -2147482909 -2147483206 -2147483214 -2147483215 -2147483224 -2147483228;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace17";
	setAttr ".ics" -type "componentList" 4 "f[61]" "f[79:81]" "f[342:344]" "f[349:353]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.29650033 0.80360991 -0.4606517 ;
	setAttr ".rs" 44985;
	setAttr ".lt" -type "double3" 1.176105247262596e-016 3.5710909056241302e-017 -0.014209869535839597 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 0.16453833620649205 -1.2551319778870724 ;
	setAttr ".cbx" -type "double3" 0.59300064384209328 1.442681448157288 0.33382855827200592 ;
createNode deleteComponent -n "deleteComponent26";
	setAttr ".dc" -type "componentList" 1 "f[363]";
createNode deleteComponent -n "deleteComponent27";
	setAttr ".dc" -type "componentList" 1 "f[200]";
createNode polySplit -n "polySplit32";
	setAttr -s 7 ".e[0:6]"  0.70114201 0.76951897 0.75442702 0.68579501
		 0.44248301 0 1;
	setAttr -s 7 ".d[0:6]"  -2147482923 -2147482922 -2147482921 -2147482913 -2147483216 -2147483224 
		-2147483256;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit33";
	setAttr -s 4 ".e[0:3]"  0 0.36040699 0.332142 1;
	setAttr -s 4 ".d[0:3]"  -2147483280 -2147482851 -2147483217 -2147483262;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace18";
	setAttr ".ics" -type "componentList" 5 "f[12:13]" "f[22:23]" "f[64]" "f[73]" "f[378:380]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.29654515 0.96054924 -0.53682399 ;
	setAttr ".rs" 32941;
	setAttr ".lt" -type "double3" 2.3094035669533278e-017 1.22514845490862e-017 -0.010611121413944775 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 0.47831791508528487 -1.1783837687553889 ;
	setAttr ".cbx" -type "double3" 0.59309032176408061 1.4427805471300168 0.10473576755493748 ;
createNode polyTweak -n "polyTweak41";
	setAttr ".uopa" yes;
	setAttr -s 5 ".tk";
	setAttr ".tk[217]" -type "float3" -0.035522938 -0.10729062 -0.077844098 ;
	setAttr ".tk[220]" -type "float3" 0 -0.081765309 -0.039358199 ;
	setAttr ".tk[248]" -type "float3" 3.7252903e-009 0 0 ;
	setAttr ".tk[401]" -type "float3" 3.7252903e-009 0 0 ;
	setAttr ".tk[402]" -type "float3" 3.7252903e-009 0 0 ;
createNode deleteComponent -n "deleteComponent28";
	setAttr ".dc" -type "componentList" 1 "f[383]";
createNode deleteComponent -n "deleteComponent29";
	setAttr ".dc" -type "componentList" 4 "f[204]" "f[211]" "f[359]" "f[387]";
createNode polyTweak -n "polyTweak42";
	setAttr ".uopa" yes;
	setAttr -s 3 ".tk";
	setAttr ".tk[184]" -type "float3" -1.0519679e-015 0.047560174 0.22335613 ;
	setAttr ".tk[211]" -type "float3" -1.0519679e-015 0.047560181 0.22335616 ;
	setAttr ".tk[212]" -type "float3" -0.10250355 0.049728759 -0.0056759235 ;
createNode polySplit -n "polySplit34";
	setAttr -s 2 ".v[0:1]" -type "float3"  0.95502299 1.174637 -0.86359799 
		0.93937701 0.84826499 -1.506799;
	setAttr -s 7 ".e[0:6]"  0.168892 0.227338 17 0.63851202 19 0.78494799
		 0.805094;
	setAttr -s 7 ".d[0:6]"  -2147483277 -2147483280 0 -2147483275 1 -2147483274 
		-2147483271;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace19";
	setAttr ".ics" -type "componentList" 1 "f[393:396]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.24185464 1.1310165 -0.63043159 ;
	setAttr ".rs" 42608;
	setAttr ".lt" -type "double3" 2.1656938395397951e-017 6.5052130349130266e-017 -0.010453111302510471 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -4.4408921775901826e-016 0.8570792667418633 -0.98381831880744341 ;
	setAttr ".cbx" -type "double3" 0.48370927460833468 1.4049536033260646 -0.27704487352126156 ;
createNode polyTweak -n "polyTweak43";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[210]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[211]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[212]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[213]" -type "float3" 0 -0.017160002 0.034017611 ;
	setAttr ".tk[215]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[216]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[217]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[218]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[445]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[446]" -type "float3" 0.024725419 -0.052072864 -0.10789668 ;
	setAttr ".tk[447]" -type "float3" -0.086368613 0.029358637 -9.3132257e-010 ;
	setAttr ".tk[448]" -type "float3" -0.031957816 0.022386743 0.081652552 ;
	setAttr ".tk[449]" -type "float3" 0 0.014690135 0 ;
	setAttr ".tk[450]" -type "float3" -0.14246856 -0.0022516372 -0.12435046 ;
	setAttr ".tk[451]" -type "float3" -0.21373758 0.050587781 0.03222701 ;
	setAttr ".tk[454]" -type "float3" 0 -4.6566129e-010 -1.8626451e-009 ;
	setAttr ".tk[459]" -type "float3" -7.4505806e-009 0 1.8626451e-009 ;
	setAttr ".tk[461]" -type "float3" 0 -0.015758134 0 ;
createNode deleteComponent -n "deleteComponent30";
	setAttr ".dc" -type "componentList" 2 "f[202]" "f[410]";
createNode deleteComponent -n "deleteComponent31";
	setAttr ".dc" -type "componentList" 6 "f[187]" "f[192]" "f[201]" "f[224]" "f[242]" "f[398]";
createNode polyCloseBorder -n "polyCloseBorder2";
	setAttr ".ics" -type "componentList" 5 "e[511]" "e[515]" "e[517]" "e[519]" "e[557:558]";
createNode polyTweak -n "polyTweak44";
	setAttr ".uopa" yes;
	setAttr -s 2 ".tk";
	setAttr ".tk[450]" -type "float3" 0 0.022472022 0 ;
	setAttr ".tk[459]" -type "float3" 1.110223e-016 0.019362144 0 ;
createNode polySplit -n "polySplit35";
	setAttr -s 2 ".e[0:1]"  0 0;
	setAttr -s 2 ".d[0:1]"  -2147483129 -2147483133;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplitRing -n "polySplitRing17";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 12 "e[51:53]" "e[63]" "e[69]" "e[73]" "e[95]" "e[98]" "e[123]" "e[310]" "e[347]" "e[432]" "e[536]" "e[538]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.51221209764480591;
	setAttr ".re" 69;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing18";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 12 "e[51:53]" "e[63]" "e[69]" "e[73]" "e[123]" "e[310]" "e[347]" "e[432]" "e[536]" "e[538]" "e[879]" "e[883]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.19174063205718994;
	setAttr ".re" 883;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak45";
	setAttr ".uopa" yes;
	setAttr -s 14 ".tk[465:478]" -type "float3"  0.080374926 0 0 0.080374926
		 0 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0
		 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0 0 0.080374926 0 0
		 0.080374926 0 0 0.080374926 0 0;
createNode polyExtrudeFace -n "polyExtrudeFace20";
	setAttr ".ics" -type "componentList" 7 "f[38:39]" "f[47]" "f[53]" "f[59]" "f[76]" "f[82]" "f[101]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.22972184 -0.3478049 0.13092324 ;
	setAttr ".rs" 52436;
	setAttr ".lt" -type "double3" 4.4828795216960218e-017 -1.7103289270958832e-017 0.0075888937664512733 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.02742452257857168 -1.1143248735655567 0.013662378937511509 ;
	setAttr ".cbx" -type "double3" 0.43201916193156392 0.41871504105300217 0.24818409613996584 ;
createNode polySplitRing -n "polySplitRing19";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 6 "e[48:50]" "e[62]" "e[68]" "e[72]" "e[100]" "e[121]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.38188716769218445;
	setAttr ".re" 100;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak46";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk";
	setAttr ".tk[470]" -type "float3" 0 0.030304912 0.031069411 ;
	setAttr ".tk[487]" -type "float3" 0 0.030304912 0.031069411 ;
	setAttr ".tk[507]" -type "float3" 0 0.030304912 0.031069411 ;
	setAttr ".tk[508]" -type "float3" 0 0.030304912 0.031069411 ;
createNode polySplitRing -n "polySplitRing20";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 12 "e[48:50]" "e[62]" "e[68]" "e[72]" "e[89:90]" "e[121]" "e[146]" "e[882]" "e[906]" "e[949]" "e[952]" "e[971]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.40256649255752563;
	setAttr ".re" 971;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode deleteComponent -n "deleteComponent32";
	setAttr ".dc" -type "componentList" 6 "e[993]" "e[995]" "e[997]" "e[999]" "e[1001]" "e[1003]";
createNode deleteComponent -n "deleteComponent33";
	setAttr ".dc" -type "componentList" 1 "vtx[532:533]";
createNode deleteComponent -n "deleteComponent34";
	setAttr ".dc" -type "componentList" 1 "vtx[528:531]";
createNode polyExtrudeFace -n "polyExtrudeFace21";
	setAttr ".ics" -type "componentList" 1 "f[449:455]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.22526096 -0.4154079 -0.23347588 ;
	setAttr ".rs" 63501;
	setAttr ".lt" -type "double3" -1.3616901660060132e-017 -4.2500725161431774e-017 
		0.0069607413927360324 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -1.0686048622832214 -0.33617190646701656 ;
	setAttr ".cbx" -type "double3" 0.45052190131263009 0.23778906036286157 -0.13077984852254176 ;
createNode polySplitRing -n "polySplitRing21";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[45:47]" "e[61]" "e[67]" "e[118]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.59283292293548584;
	setAttr ".dr" no;
	setAttr ".re" 118;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing22";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[45:47]" "e[61]" "e[67]" "e[118]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.75920784473419189;
	setAttr ".dr" no;
	setAttr ".re" 67;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyExtrudeFace -n "polyExtrudeFace22";
	setAttr ".ics" -type "componentList" 1 "f[485:489]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.2326021 -0.61162597 -0.5877037 ;
	setAttr ".rs" 57543;
	setAttr ".lt" -type "double3" 6.1893968005292607e-017 2.099286456475058e-016 0.0078760389845974974 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.96488757809714454 -0.65669562137308213 ;
	setAttr ".cbx" -type "double3" 0.46520422030896807 -0.25836433840472672 -0.51871176947720243 ;
createNode polySplitRing -n "polySplitRing23";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[42:44]" "e[60]" "e[66]" "e[116]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.55651998519897461;
	setAttr ".dr" no;
	setAttr ".re" 116;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak47";
	setAttr ".uopa" yes;
	setAttr -s 9 ".tk";
	setAttr ".tk[18]" -type "float3" -0.26133102 -1.110223e-016 0.086755648 ;
	setAttr ".tk[23]" -type "float3" -0.019968331 -0.055898152 0.011224733 ;
	setAttr ".tk[46]" -type "float3" 0 0.042860866 -0.030099979 ;
	setAttr ".tk[196]" -type "float3" -0.26133102 -1.110223e-016 0.086755648 ;
	setAttr ".tk[251]" -type "float3" -0.26133102 -1.110223e-016 0.086755514 ;
	setAttr ".tk[544]" -type "float3" 2.220446e-016 0.096366026 0.0047922572 ;
	setAttr ".tk[550]" -type "float3" 2.220446e-016 0.068356119 -0.015940845 ;
	setAttr ".tk[558]" -type "float3" 2.220446e-016 0.068356119 -0.015940845 ;
	setAttr ".tk[559]" -type "float3" 2.220446e-016 0.096366026 0.0047922572 ;
createNode polySplitRing -n "polySplitRing24";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[42:44]" "e[60]" "e[66]" "e[85]" "e[116]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.50228762626647949;
	setAttr ".re" 44;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyExtrudeFace -n "polyExtrudeFace23";
	setAttr ".ics" -type "componentList" 1 "f[508:512]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.21230015 -0.49441224 -0.90619415 ;
	setAttr ".rs" 37185;
	setAttr ".lt" -type "double3" -5.2909066017292616e-017 2.5326962749261384e-016 0.011544177968241727 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.81062479338384885 -1.0306394302532242 ;
	setAttr ".cbx" -type "double3" 0.42460030169739704 -0.17819971036580817 -0.78174887212564714 ;
createNode deleteComponent -n "deleteComponent35";
	setAttr ".dc" -type "componentList" 1 "f[524]";
createNode deleteComponent -n "deleteComponent36";
	setAttr ".dc" -type "componentList" 1 "f[501]";
createNode deleteComponent -n "deleteComponent37";
	setAttr ".dc" -type "componentList" 1 "f[466]";
createNode deleteComponent -n "deleteComponent38";
	setAttr ".dc" -type "componentList" 1 "f[433]";
createNode polySplitRing -n "polySplitRing25";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[54:56]" "e[64]" "e[70]" "e[124]" "e[136]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.76163548231124878;
	setAttr ".dr" no;
	setAttr ".re" 124;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak48";
	setAttr ".uopa" yes;
	setAttr -s 5 ".tk";
	setAttr ".tk[298]" -type "float3" -0.075857803 -0.023832848 0.01892776 ;
	setAttr ".tk[299]" -type "float3" -0.075857803 -0.023832848 0.01892776 ;
	setAttr ".tk[403]" -type "float3" -0.030313922 0.0070218025 0.070692889 ;
	setAttr ".tk[406]" -type "float3" 0 0.0070218025 0.042350508 ;
	setAttr ".tk[408]" -type "float3" 0 0.0070218025 0.013626361 ;
createNode polyExtrudeFace -n "polyExtrudeFace24";
	setAttr ".ics" -type "componentList" 1 "f[521:526]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.15952612 -0.67878985 0.58365989 ;
	setAttr ".rs" 41368;
	setAttr ".lt" -type "double3" 1.4718044491490723e-017 -1.6197980456933436e-016 0.0051897913418666904 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -3.3079722368808511e-018 -1.0716809927473774 0.43738110807728631 ;
	setAttr ".cbx" -type "double3" 0.31905225600409926 -0.28589867261392943 0.72993871154365619 ;
createNode deleteComponent -n "deleteComponent39";
	setAttr ".dc" -type "componentList" 1 "f[528]";
createNode deleteComponent -n "deleteComponent40";
	setAttr ".dc" -type "componentList" 1 "f[539]";
createNode polySplitRing -n "polySplitRing26";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[57:59]" "e[65]" "e[71]" "e[128]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".wt" 0.67165261507034302;
	setAttr ".dr" no;
	setAttr ".re" 71;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplit -n "polySplit36";
	setAttr -s 2 ".e[0:1]"  0 1;
	setAttr -s 2 ".d[0:1]"  -2147482495 -2147483511;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit37";
	setAttr -s 2 ".e[0:1]"  1 0.60560602;
	setAttr -s 2 ".d[0:1]"  -2147483643 -2147483515;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace25";
	setAttr ".ics" -type "componentList" 2 "f[539:543]" "f[545]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.1287857 -0.56102246 0.83856153 ;
	setAttr ".rs" 62861;
	setAttr ".lt" -type "double3" -2.5587171270657905e-017 3.664603343001005e-017 0.010905723526462229 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0 -0.86368058741443188 0.70356967537488113 ;
	setAttr ".cbx" -type "double3" 0.25757139767278892 -0.25836433840472672 0.9735533666151075 ;
createNode polyTweak -n "polyTweak49";
	setAttr ".uopa" yes;
	setAttr -s 11 ".tk";
	setAttr ".tk[199]" -type "float3" 1.4901161e-008 0 0 ;
	setAttr ".tk[263]" -type "float3" 0.30403826 0 0 ;
	setAttr ".tk[276]" -type "float3" -5.9604645e-008 0 0 ;
	setAttr ".tk[284]" -type "float3" 0.17727688 0 0 ;
	setAttr ".tk[287]" -type "float3" 0.17727688 0 0 ;
	setAttr ".tk[304]" -type "float3" 0.090326376 0 0 ;
	setAttr ".tk[305]" -type "float3" 0.090326376 0 0 ;
	setAttr ".tk[465]" -type "float3" -0.0064237453 -0.012715969 0.0193485 ;
	setAttr ".tk[466]" -type "float3" -0.0064237453 -0.012715969 0.0193485 ;
	setAttr ".tk[491]" -type "float3" -0.0064237453 -0.012715969 0.0193485 ;
	setAttr ".tk[492]" -type "float3" -0.0064237453 -0.012715969 0.0193485 ;
createNode deleteComponent -n "deleteComponent41";
	setAttr ".dc" -type "componentList" 1 "vtx[276]";
createNode polyTweak -n "polyTweak50";
	setAttr ".uopa" yes;
	setAttr -s 12 ".tk";
	setAttr ".tk[254]" -type "float3" 0.10046951 0 0 ;
	setAttr ".tk[263]" -type "float3" -0.3953217 0 0 ;
	setAttr ".tk[283]" -type "float3" -0.074210279 0 0 ;
	setAttr ".tk[288]" -type "float3" 0.065750614 0 0 ;
	setAttr ".tk[289]" -type "float3" 0.065750614 0 0 ;
	setAttr ".tk[303]" -type "float3" 0.08816582 0 0 ;
	setAttr ".tk[304]" -type "float3" 0.095904857 0 0 ;
	setAttr ".tk[464]" -type "float3" 0.10906682 0.0096392771 -0.012239229 ;
	setAttr ".tk[465]" -type "float3" 0.057043295 0.0096392771 -0.012239229 ;
	setAttr ".tk[466]" -type "float3" 0.035132971 0 0 ;
	setAttr ".tk[490]" -type "float3" 0.0576386 0.0072724903 -0.025057519 ;
	setAttr ".tk[491]" -type "float3" 0.13133954 0.0072724903 -0.025064791 ;
createNode deleteComponent -n "deleteComponent42";
	setAttr ".dc" -type "componentList" 1 "e[870]";
createNode deleteComponent -n "deleteComponent43";
	setAttr ".dc" -type "componentList" 1 "e[910]";
createNode deleteComponent -n "deleteComponent44";
	setAttr ".dc" -type "componentList" 2 "vtx[464]" "vtx[491]";
createNode polyCube -n "polyCube2";
	setAttr ".w" 0.3;
	setAttr ".h" 0.3;
	setAttr ".d" 0.3;
	setAttr ".cuv" 4;
createNode groupId -n "groupId1";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts1";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:5]";
createNode groupId -n "groupId2";
	setAttr ".ihi" 0;
createNode groupId -n "groupId3";
	setAttr ".ihi" 0;
createNode groupId -n "groupId4";
	setAttr ".ihi" 0;
createNode polyCube -n "polyCube3";
	setAttr ".w" 0.83843418888307752;
	setAttr ".h" 0.29691853251663025;
	setAttr ".d" 0.32587637986072515;
	setAttr ".sw" 2;
	setAttr ".sh" 2;
	setAttr ".sd" 2;
	setAttr ".cuv" 4;
createNode polyUnite -n "polyUnite1";
	setAttr -s 4 ".ip";
	setAttr -s 4 ".im";
createNode groupId -n "groupId5";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts2";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:23]";
createNode groupId -n "groupId6";
	setAttr ".ihi" 0;
createNode groupId -n "groupId7";
	setAttr ".ihi" 0;
createNode groupId -n "groupId8";
	setAttr ".ihi" 0;
createNode groupId -n "groupId9";
	setAttr ".ihi" 0;
createNode groupId -n "groupId10";
	setAttr ".ihi" 0;
createNode groupId -n "groupId11";
	setAttr ".ihi" 0;
createNode groupId -n "groupId12";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts3";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:95]";
	setAttr ".gi" 13;
createNode deleteComponent -n "deleteComponent45";
	setAttr ".dc" -type "componentList" 4 "f[20:23]" "f[44:47]" "f[68:71]" "f[92:95]";
createNode polyAppend -n "polyAppend2";
	setAttr -s 2 ".d[0:1]"  -2147483529 -2147483632;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:80]";
	setAttr ".gi" 16;
createNode polyAppend -n "polyAppend3";
	setAttr -s 3 ".d[0:2]"  -2147483532 -2147483471 -2147483629;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts5";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:81]";
	setAttr ".gi" 17;
createNode polyAppend -n "polyAppend4";
	setAttr -s 2 ".d[0:1]"  -2147483617 -2147483588;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts6";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:82]";
	setAttr ".gi" 18;
createNode polyAppend -n "polyAppend5";
	setAttr -s 3 ".d[0:2]"  -2147483620 -2147483468 -2147483585;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts7";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:83]";
	setAttr ".gi" 19;
createNode polyAppend -n "polyAppend6";
	setAttr -s 2 ".d[0:1]"  -2147483573 -2147483500;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts8";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:84]";
	setAttr ".gi" 20;
createNode polyAppend -n "polyAppend7";
	setAttr -s 3 ".d[0:2]"  -2147483576 -2147483465 -2147483497;
	setAttr ".tx" 1;
createNode groupParts -n "groupParts9";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:85]";
	setAttr ".gi" 21;
createNode polyExtrudeEdge -n "polyExtrudeEdge2";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 24 "e[22]" "e[25]" "e[34]" "e[37]" "e[66]" "e[69]" "e[78]" "e[81]" "e[104]" "e[107]" "e[110]" "e[113]" "e[122]" "e[125]" "e[154]" "e[157]" "e[160]" "e[163]" "e[166]" "e[169]" "e[176]" "e[178:179]" "e[181:182]" "e[184]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -4.5311393365617754 0 0 ;
	setAttr ".pvt" -type "float3" -0.91006684 -0.072753325 -1.4666054 ;
	setAttr ".rs" 64122;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.9580774307250977 -0.50752758979797363 -3.5826845169067383 ;
	setAttr ".cbx" -type "double3" 4.2840666770935059 0.36202093958854675 0.64947366714477539 ;
createNode groupParts -n "groupParts10";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:111]";
	setAttr ".gi" 22;
createNode polySplitRing -n "polySplitRing27";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[185:186]" "e[188]" "e[190:191]" "e[193]" "e[195:196]" "e[198]" "e[200:201]" "e[203]" "e[205:206]" "e[208]" "e[210]" "e[212]" "e[214:215]" "e[218:219]" "e[221]" "e[223]" "e[225]" "e[227]" "e[229]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1;
	setAttr ".wt" 0.80197429656982422;
	setAttr ".dr" no;
	setAttr ".re" 201;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak51";
	setAttr ".uopa" yes;
	setAttr -s 38 ".tk";
	setAttr ".tk[21]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[22]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[23]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[46]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[47]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[48]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[71]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[72]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[73]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[96]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[97]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[98]" -type "float3" 0 -0.25762731 0 ;
	setAttr ".tk[100]" -type "float3" 0 0.017451737 -0.32080504 ;
	setAttr ".tk[101]" -type "float3" 0 0.017451733 -0.20722935 ;
	setAttr ".tk[102]" -type "float3" 0 0.017451737 -0.093653649 ;
	setAttr ".tk[103]" -type "float3" 0 -0.21235752 -0.093653649 ;
	setAttr ".tk[104]" -type "float3" 0 -0.4699848 -0.20722935 ;
	setAttr ".tk[105]" -type "float3" 0 -0.21235752 -0.32080504 ;
	setAttr ".tk[106]" -type "float3" 0 0.017451737 0.17564785 ;
	setAttr ".tk[107]" -type "float3" 0 0.017451733 0.2874673 ;
	setAttr ".tk[108]" -type "float3" 0 0.017451737 0.39928678 ;
	setAttr ".tk[109]" -type "float3" 0 -0.21235752 0.39928678 ;
	setAttr ".tk[110]" -type "float3" 0 -0.4699848 0.2874673 ;
	setAttr ".tk[111]" -type "float3" 0 -0.21235752 0.17564785 ;
	setAttr ".tk[112]" -type "float3" 0 -0.21235752 -0.76038086 ;
	setAttr ".tk[113]" -type "float3" 0 -0.097452909 -0.76038086 ;
	setAttr ".tk[114]" -type "float3" 0 0.017451737 -0.76038086 ;
	setAttr ".tk[115]" -type "float3" 0 0.017451733 -0.64813071 ;
	setAttr ".tk[116]" -type "float3" 0 0.017451737 -0.53588051 ;
	setAttr ".tk[117]" -type "float3" 0 -0.21235752 -0.53588051 ;
	setAttr ".tk[118]" -type "float3" 0 -0.4699848 -0.64813071 ;
	setAttr ".tk[119]" -type "float3" 0 0.21235755 0.57148492 ;
	setAttr ".tk[120]" -type "float3" 0 0.21235755 0.66593289 ;
	setAttr ".tk[121]" -type "float3" 0 0.21235755 0.76038086 ;
	setAttr ".tk[122]" -type "float3" 0 0.097452886 0.76038086 ;
	setAttr ".tk[123]" -type "float3" 0 -0.017451746 0.76038086 ;
	setAttr ".tk[124]" -type "float3" 0 -0.27507907 0.66593289 ;
	setAttr ".tk[125]" -type "float3" 0 -0.017451746 0.57148492 ;
createNode polySplitRing -n "polySplitRing28";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[185:186]" "e[188]" "e[190:191]" "e[193]" "e[195:196]" "e[198]" "e[200:201]" "e[203]" "e[205:206]" "e[208]" "e[210]" "e[212]" "e[214:215]" "e[218:219]" "e[221]" "e[223]" "e[225]" "e[227]" "e[229]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1;
	setAttr ".wt" 0.62975305318832397;
	setAttr ".dr" no;
	setAttr ".re" 201;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyExtrudeEdge -n "polyExtrudeEdge3";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[187]" "e[189]" "e[192]" "e[194]" "e[197]" "e[199]" "e[202]" "e[204]" "e[207]" "e[209]" "e[211]" "e[213]" "e[216:217]" "e[220]" "e[222]" "e[224]" "e[226]" "e[228]" "e[230:236]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 0 -1.1786469007290434 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -1.5065838997204128 0 0 ;
	setAttr ".pvt" -type "float3" -2.416651 -1.3802139 -1.4159584 ;
	setAttr ".rs" 41994;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -1.5730619430541992 -2.1561592603481841 -2.6233291625976563 ;
	setAttr ".cbx" -type "double3" -0.24707269668579102 -0.60426841028104539 -0.20858770608901978 ;
createNode polyTweak -n "polyTweak52";
	setAttr ".uopa" yes;
	setAttr -s 133 ".tk";
	setAttr ".tk[1]" -type "float3" 0 0.052419767 0 ;
	setAttr ".tk[2]" -type "float3" 0 0.31321824 0 ;
	setAttr ".tk[4]" -type "float3" 0 0.054824535 0 ;
	setAttr ".tk[5]" -type "float3" 0 0.32005155 0 ;
	setAttr ".tk[7]" -type "float3" 0 0.052419767 0 ;
	setAttr ".tk[8]" -type "float3" 0 0.31321824 0 ;
	setAttr ".tk[10]" -type "float3" 0 0.019020783 0 ;
	setAttr ".tk[11]" -type "float3" 0 0.20522524 0 ;
	setAttr ".tk[13]" -type "float3" 0 0.0011935879 0 ;
	setAttr ".tk[14]" -type "float3" 0 0.1098737 0 ;
	setAttr ".tk[16]" -type "float3" 0 0.0015360726 0 ;
	setAttr ".tk[17]" -type "float3" 0 0.11353123 0 ;
	setAttr ".tk[19]" -type "float3" 0 0.0011935879 0 ;
	setAttr ".tk[20]" -type "float3" 0 0.1098737 0 ;
	setAttr ".tk[22]" -type "float3" 0 0.014708379 0 ;
	setAttr ".tk[23]" -type "float3" 0 0.18791303 0 ;
	setAttr ".tk[24]" -type "float3" 0 0.97388774 0 ;
	setAttr ".tk[26]" -type "float3" 0 0.0090818778 0 ;
	setAttr ".tk[27]" -type "float3" 0 0.073384114 0 ;
	setAttr ".tk[29]" -type "float3" 0 0.013587469 0 ;
	setAttr ".tk[30]" -type "float3" 0 0.086622246 0 ;
	setAttr ".tk[32]" -type "float3" 0 0.016450638 0 ;
	setAttr ".tk[33]" -type "float3" 0 0.094366767 0 ;
	setAttr ".tk[35]" -type "float3" 0 0.066525601 0 ;
	setAttr ".tk[36]" -type "float3" 0 0.20223683 0 ;
	setAttr ".tk[38]" -type "float3" 0 0.14189932 0 ;
	setAttr ".tk[39]" -type "float3" 0 0.33629528 0 ;
	setAttr ".tk[41]" -type "float3" 0 0.13204116 0 ;
	setAttr ".tk[42]" -type "float3" 0 0.31958863 0 ;
	setAttr ".tk[44]" -type "float3" 0 0.11501551 0 ;
	setAttr ".tk[45]" -type "float3" 0 0.29027402 0 ;
	setAttr ".tk[47]" -type "float3" 0 0.034661587 0 ;
	setAttr ".tk[48]" -type "float3" 0 0.13756572 0 ;
	setAttr ".tk[49]" -type "float3" 0 0.97388774 0 ;
	setAttr ".tk[51]" -type "float3" 0 0.12490819 0 ;
	setAttr ".tk[52]" -type "float3" 0 0.54121757 0 ;
	setAttr ".tk[54]" -type "float3" 0 0.12884818 0 ;
	setAttr ".tk[55]" -type "float3" 0 0.55085105 0 ;
	setAttr ".tk[57]" -type "float3" 0 0.12490819 0 ;
	setAttr ".tk[58]" -type "float3" 0 0.54121757 0 ;
	setAttr ".tk[60]" -type "float3" 0 0.13204116 0 ;
	setAttr ".tk[61]" -type "float3" 0 0.55868614 0 ;
	setAttr ".tk[63]" -type "float3" 0 0.12490819 0 ;
	setAttr ".tk[64]" -type "float3" 0 0.54121757 0 ;
	setAttr ".tk[66]" -type "float3" 0 0.12884818 0 ;
	setAttr ".tk[67]" -type "float3" 0 0.55085105 0 ;
	setAttr ".tk[69]" -type "float3" 0 0.12490819 0 ;
	setAttr ".tk[70]" -type "float3" 0 0.54121757 0 ;
	setAttr ".tk[72]" -type "float3" 0 0.11881187 0 ;
	setAttr ".tk[73]" -type "float3" 0 0.52617747 0 ;
	setAttr ".tk[74]" -type "float3" 0 0.97388774 0 ;
	setAttr ".tk[76]" -type "float3" 0 0.044047002 0 ;
	setAttr ".tk[77]" -type "float3" 0.12636852 0.30670655 0.22196737 ;
	setAttr ".tk[79]" -type "float3" 0 0.046230894 0 ;
	setAttr ".tk[80]" -type "float3" 0.12636852 0.31321824 0.22196737 ;
	setAttr ".tk[82]" -type "float3" 0 0.044047002 0 ;
	setAttr ".tk[83]" -type "float3" 0.15107091 0.31608102 0.22226375 ;
	setAttr ".tk[85]" -type "float3" 0 0.034432478 0 ;
	setAttr ".tk[86]" -type "float3" 0.12636852 0.29441142 0.22196737 ;
	setAttr ".tk[87]" -type "float3" -0.11047137 0 -0.17082892 ;
	setAttr ".tk[88]" -type "float3" 0 0.020624479 0 ;
	setAttr ".tk[89]" -type "float3" 0.15107091 0.27045277 0.22226375 ;
	setAttr ".tk[90]" -type "float3" -0.11047137 0 -0.17082892 ;
	setAttr ".tk[91]" -type "float3" 0 0.022072261 0 ;
	setAttr ".tk[92]" -type "float3" 0.12636852 0.26610166 0.22196737 ;
	setAttr ".tk[93]" -type "float3" -0.11047137 0 -0.17082892 ;
	setAttr ".tk[94]" -type "float3" 0 0.020624479 0 ;
	setAttr ".tk[95]" -type "float3" 0.12636852 0.26000524 0.22196737 ;
	setAttr ".tk[97]" -type "float3" 0 0.028382739 0 ;
	setAttr ".tk[98]" -type "float3" 0.12636852 0.27277675 0.22196737 ;
	setAttr ".tk[99]" -type "float3" 0.217122 0.97388774 0.56637931 ;
	setAttr ".tk[100]" -type "float3" 0 0.36809823 0.034681544 ;
	setAttr ".tk[101]" -type "float3" 0 0.36809823 0.063331418 ;
	setAttr ".tk[102]" -type "float3" 0 0.36809823 0.091981314 ;
	setAttr ".tk[103]" -type "float3" 0 0 -0.016458761 ;
	setAttr ".tk[104]" -type "float3" 0 0.08030422 -0.045108657 ;
	setAttr ".tk[105]" -type "float3" 0 0 -0.073758557 ;
	setAttr ".tk[106]" -type "float3" 0 0.34288797 0.051473498 ;
	setAttr ".tk[107]" -type "float3" 0 0.34288797 0.079680391 ;
	setAttr ".tk[108]" -type "float3" 0 0.34288797 0.10788727 ;
	setAttr ".tk[109]" -type "float3" 0 0 0.10788727 ;
	setAttr ".tk[110]" -type "float3" 0 0 0.079680391 ;
	setAttr ".tk[111]" -type "float3" 0 0 0.051473498 ;
	setAttr ".tk[112]" -type "float3" 0 0 -0.18464315 ;
	setAttr ".tk[113]" -type "float3" 0 0 -0.097680509 ;
	setAttr ".tk[114]" -type "float3" 0 0.29809886 -0.18464315 ;
	setAttr ".tk[115]" -type "float3" 0 0.29809886 -0.15632756 ;
	setAttr ".tk[116]" -type "float3" 0 0.29809886 -0.12801197 ;
	setAttr ".tk[117]" -type "float3" 0 0 -0.12801197 ;
	setAttr ".tk[118]" -type "float3" 0 0.067739837 -0.15632756 ;
	setAttr ".tk[119]" -type "float3" 0 0 0.15132485 ;
	setAttr ".tk[120]" -type "float3" 0 0 0.17514983 ;
	setAttr ".tk[121]" -type "float3" 0 0 0.19897451 ;
	setAttr ".tk[122]" -type "float3" 0 0 0.19897451 ;
	setAttr ".tk[123]" -type "float3" 0 0 0.19897451 ;
	setAttr ".tk[124]" -type "float3" 0 0 0.17514983 ;
	setAttr ".tk[125]" -type "float3" 0 -0.33381686 0.15132485 ;
	setAttr ".tk[128]" -type "float3" 0 -0.27684969 0 ;
	setAttr ".tk[135]" -type "float3" 0 0.082438156 0 ;
	setAttr ".tk[136]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[137]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[138]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[139]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[140]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[141]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[142]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[143]" -type "float3" 0 0.13223933 0 ;
	setAttr ".tk[152]" -type "float3" 0 0 -0.1495845 ;
	setAttr ".tk[153]" -type "float3" 0 0 -0.2077702 ;
	setAttr ".tk[154]" -type "float3" 0 0 -0.29737401 ;
	setAttr ".tk[155]" -type "float3" 0 0 -0.34652033 ;
	setAttr ".tk[156]" -type "float3" 0 0 -0.39566669 ;
	setAttr ".tk[157]" -type "float3" 0 0 -0.39566669 ;
	setAttr ".tk[158]" -type "float3" 0 0 -0.39566669 ;
	setAttr ".tk[159]" -type "float3" 0 0 -0.34652033 ;
	setAttr ".tk[160]" -type "float3" 0 0 -0.29737401 ;
	setAttr ".tk[161]" -type "float3" 0 0 -0.2077702 ;
	setAttr ".tk[162]" -type "float3" 0 0 -0.1495845 ;
	setAttr ".tk[163]" -type "float3" 0 0 -0.091398887 ;
	setAttr ".tk[164]" -type "float3" 0 0 0.048732992 ;
	setAttr ".tk[165]" -type "float3" 0 0 0.10783247 ;
	setAttr ".tk[166]" -type "float3" 0 0 0.16693193 ;
	setAttr ".tk[167]" -type "float3" 0 0 0.27884719 ;
	setAttr ".tk[168]" -type "float3" 0 0 0.33725691 ;
	setAttr ".tk[169]" -type "float3" 0 0 0.39566669 ;
	setAttr ".tk[170]" -type "float3" 0 0 0.39566669 ;
	setAttr ".tk[171]" -type "float3" 0 0 0.39566669 ;
	setAttr ".tk[172]" -type "float3" 0 0 0.33725691 ;
	setAttr ".tk[173]" -type "float3" 0 0 0.27884719 ;
	setAttr ".tk[174]" -type "float3" 0 0 0.16693193 ;
	setAttr ".tk[175]" -type "float3" 0 0 0.10783247 ;
	setAttr ".tk[176]" -type "float3" 0 0 0.048732992 ;
	setAttr ".tk[177]" -type "float3" 0 0 -0.091398887 ;
createNode groupParts -n "groupParts11";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:189]";
	setAttr ".gi" 23;
createNode polySplitRing -n "polySplitRing29";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[185:186]" "e[188]" "e[190:191]" "e[193]" "e[195:196]" "e[198]" "e[200:201]" "e[203]" "e[205:206]" "e[208]" "e[210]" "e[212]" "e[214:215]" "e[218:219]" "e[221]" "e[223]" "e[225]" "e[227]" "e[229]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 2.2204460492503131e-016 -1 0 0 1 2.2204460492503131e-016 0
		 4.7982317874476603 -1.1786469007290434 0 1;
	setAttr ".wt" 0.34424230456352234;
	setAttr ".dr" no;
	setAttr ".re" 198;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak53";
	setAttr ".uopa" yes;
	setAttr -s 170 ".tk";
	setAttr ".tk[0]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[2]" -type "float3" 2.518738 0.26807594 0 ;
	setAttr ".tk[3]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[5]" -type "float3" 2.477201 0.31475806 0 ;
	setAttr ".tk[6]" -type "float3" 0 0.67791253 4.4408921e-016 ;
	setAttr ".tk[7]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[8]" -type "float3" 2.4476571 0.34796321 0 ;
	setAttr ".tk[9]" -type "float3" 0 0.67791253 4.4408921e-016 ;
	setAttr ".tk[10]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[11]" -type "float3" 2.5659187 0.21504971 0 ;
	setAttr ".tk[12]" -type "float3" 0 0.67791253 4.4408921e-016 ;
	setAttr ".tk[13]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[14]" -type "float3" 2.6649022 0.10380242 0 ;
	setAttr ".tk[17]" -type "float3" 2.6843302 0.08196827 0 ;
	setAttr ".tk[18]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[20]" -type "float3" 2.7066269 0.056908928 0 ;
	setAttr ".tk[21]" -type "float3" 0 7.4505806e-009 0 ;
	setAttr ".tk[23]" -type "float3" 2.6675434 0.10083543 0 ;
	setAttr ".tk[24]" -type "float3" 1.7455842 1.1370094 0 ;
	setAttr ".tk[25]" -type "float3" 0 7.4505806e-009 0 ;
	setAttr ".tk[27]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[28]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[30]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[31]" -type "float3" 0 0.67791253 4.4408921e-016 ;
	setAttr ".tk[32]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[33]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[34]" -type "float3" 0 0.67791253 4.4408921e-016 ;
	setAttr ".tk[35]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[36]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[37]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[38]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[39]" -type "float3" 2.7472224 0.011284492 0 ;
	setAttr ".tk[40]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[42]" -type "float3" 2.7537541 0.003941156 0 ;
	setAttr ".tk[45]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[46]" -type "float3" 0 -3.7252903e-009 0 ;
	setAttr ".tk[48]" -type "float3" 2.7572641 0 0 ;
	setAttr ".tk[49]" -type "float3" 1.7455842 1.1370094 0 ;
	setAttr ".tk[50]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[52]" -type "float3" 2.2625284 0.55602336 0 ;
	setAttr ".tk[53]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[55]" -type "float3" 2.2169893 0.60720539 0 ;
	setAttr ".tk[56]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[57]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[58]" -type "float3" 2.1920969 0.6351825 0 ;
	setAttr ".tk[59]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[60]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[61]" -type "float3" 2.1726756 0.65701008 0 ;
	setAttr ".tk[62]" -type "float3" 0 0.67791253 2.9143354e-016 ;
	setAttr ".tk[63]" -type "float3" 0 0.39019039 -2.7755576e-017 ;
	setAttr ".tk[64]" -type "float3" 2.1920969 0.6351825 0 ;
	setAttr ".tk[65]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[67]" -type "float3" 2.2169893 0.60720539 0 ;
	setAttr ".tk[68]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[70]" -type "float3" 2.2625284 0.55602336 0 ;
	setAttr ".tk[73]" -type "float3" 2.3166518 0.49519563 0 ;
	setAttr ".tk[74]" -type "float3" 1.7455842 1.1370094 0 ;
	setAttr ".tk[75]" -type "float3" 0 -1.4901161e-008 0 ;
	setAttr ".tk[77]" -type "float3" 0.89156759 0.2604304 -0.55046183 ;
	setAttr ".tk[78]" -type "float3" 0 -1.4901161e-008 0 ;
	setAttr ".tk[80]" -type "float3" 0.85042179 0.3066729 -0.55046183 ;
	setAttr ".tk[81]" -type "float3" 0 0.39019045 0 ;
	setAttr ".tk[82]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[83]" -type "float3" 0.8104974 0.35154366 -0.55046183 ;
	setAttr ".tk[84]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[85]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[86]" -type "float3" 0.83456349 0.32449606 -0.55046183 ;
	setAttr ".tk[87]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[88]" -type "float3" 0 0.39019039 0 ;
	setAttr ".tk[89]" -type "float3" 0.86102086 0.29476127 -0.55046183 ;
	setAttr ".tk[90]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[92]" -type "float3" 0.90097827 0.249854 -0.55046183 ;
	setAttr ".tk[93]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[95]" -type "float3" 0.93916523 0.20693588 -0.55046183 ;
	setAttr ".tk[96]" -type "float3" 0 -1.4901161e-008 0 ;
	setAttr ".tk[98]" -type "float3" 0.9585408 0.18515986 -0.55046183 ;
	setAttr ".tk[99]" -type "float3" 0.11161164 1.1370094 -0.55046183 ;
	setAttr ".tk[100]" -type "float3" 0 0.32949328 0 ;
	setAttr ".tk[101]" -type "float3" 0 0.32949328 0 ;
	setAttr ".tk[102]" -type "float3" 0 0.32949322 0 ;
	setAttr ".tk[103]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[104]" -type "float3" 0 0.24123824 0 ;
	setAttr ".tk[105]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[106]" -type "float3" 0 0.32949334 0 ;
	setAttr ".tk[107]" -type "float3" 0 0.41020879 4.4408921e-016 ;
	setAttr ".tk[108]" -type "float3" 0 0.080715358 4.4408921e-016 ;
	setAttr ".tk[110]" -type "float3" 0 0.2412383 0 ;
	setAttr ".tk[112]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[113]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[114]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[115]" -type "float3" 0 0.32949334 0 ;
	setAttr ".tk[116]" -type "float3" 0 0.3294934 0 ;
	setAttr ".tk[118]" -type "float3" 0 0.2412383 0 ;
	setAttr ".tk[119]" -type "float3" 0 0.080715388 4.4408921e-016 ;
	setAttr ".tk[120]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[122]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[123]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[124]" -type "float3" 0 -7.4505806e-009 0 ;
	setAttr ".tk[125]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[127]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[129]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[130]" -type "float3" 0 -1.4901161e-008 0 ;
	setAttr ".tk[131]" -type "float3" 0 1.4901161e-008 0 ;
	setAttr ".tk[133]" -type "float3" 0 0.3382439 0 ;
	setAttr ".tk[134]" -type "float3" 0 0.41895935 4.4408921e-016 ;
	setAttr ".tk[135]" -type "float3" 0 0.88094974 4.4408921e-016 ;
	setAttr ".tk[136]" -type "float3" 0 0.87219882 4.4408921e-016 ;
	setAttr ".tk[137]" -type "float3" 0 0.79148364 0 ;
	setAttr ".tk[138]" -type "float3" 0 0.79148388 0 ;
	setAttr ".tk[139]" -type "float3" 0 0.79148388 0 ;
	setAttr ".tk[140]" -type "float3" 0 0.79148364 0 ;
	setAttr ".tk[141]" -type "float3" 0 0.79148346 0 ;
	setAttr ".tk[142]" -type "float3" 0 0.79148364 0 ;
	setAttr ".tk[143]" -type "float3" 0 0.46199042 -3.469447e-017 ;
	setAttr ".tk[144]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[145]" -type "float3" 0 -1.1920929e-007 0 ;
	setAttr ".tk[146]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[148]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[149]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[150]" -type "float3" 0 -1.7881393e-007 0 ;
	setAttr ".tk[151]" -type "float3" 0 1.1920929e-007 0 ;
	setAttr ".tk[152]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[153]" -type "float3" 0 -1.1920929e-007 0 ;
	setAttr ".tk[154]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[156]" -type "float3" 0 -1.4901161e-008 0 ;
	setAttr ".tk[158]" -type "float3" 0 1.4901161e-008 0 ;
	setAttr ".tk[159]" -type "float3" 0 0.33824396 0 ;
	setAttr ".tk[160]" -type "float3" 0 0.33824393 0 ;
	setAttr ".tk[161]" -type "float3" 0 0.80023432 0 ;
	setAttr ".tk[162]" -type "float3" 0 0.74971253 4.4408921e-016 ;
	setAttr ".tk[163]" -type "float3" 0 0.74971253 4.4408921e-016 ;
	setAttr ".tk[164]" -type "float3" 0 0.74971277 4.4408921e-016 ;
	setAttr ".tk[165]" -type "float3" 0 0.74971277 4.4408921e-016 ;
	setAttr ".tk[166]" -type "float3" 0 0.74971253 4.4408921e-016 ;
	setAttr ".tk[167]" -type "float3" 0 0.74971241 3.6776138e-016 ;
	setAttr ".tk[168]" -type "float3" 0 0.46199048 0 ;
	setAttr ".tk[169]" -type "float3" 0 0.46199042 0 ;
	setAttr ".tk[171]" -type "float3" 0 2.9802322e-008 0 ;
	setAttr ".tk[172]" -type "float3" 0 -2.9802322e-008 0 ;
	setAttr ".tk[173]" -type "float3" 0 -1.1920929e-007 0 ;
	setAttr ".tk[174]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[175]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[176]" -type "float3" 0 5.9604645e-008 0 ;
	setAttr ".tk[177]" -type "float3" 0 -5.9604645e-008 0 ;
	setAttr ".tk[178]" -type "float3" -3.0445747 0.63740236 0 ;
	setAttr ".tk[179]" -type "float3" -3.0445747 0.68229431 0.012469686 ;
	setAttr ".tk[180]" -type "float3" -3.0445747 0.70876849 0 ;
	setAttr ".tk[181]" -type "float3" -3.0445747 -0.6834088 0 ;
	setAttr ".tk[182]" -type "float3" -3.0445747 -0.48962009 0.0039654546 ;
	setAttr ".tk[183]" -type "float3" -3.0445747 -0.6834088 0 ;
	setAttr ".tk[184]" -type "float3" -3.0342674 0.7088303 0 ;
	setAttr ".tk[185]" -type "float3" -2.978899 0.69546264 0 ;
	setAttr ".tk[186]" -type "float3" -2.9235306 0.68597704 0 ;
	setAttr ".tk[187]" -type "float3" -2.9235306 -0.59587926 0 ;
	setAttr ".tk[188]" -type "float3" -2.978899 -0.36992553 0 ;
	setAttr ".tk[189]" -type "float3" -3.0342674 -0.67176247 0 ;
	setAttr ".tk[190]" -type "float3" -2.8971348 -0.36567122 0.086837694 ;
	setAttr ".tk[191]" -type "float3" -2.8971348 0.044085525 0.22660609 ;
	setAttr ".tk[192]" -type "float3" -2.8971348 0.33525035 0.22660609 ;
	setAttr ".tk[193]" -type "float3" -2.9452829 0.53549325 0 ;
	setAttr ".tk[194]" -type "float3" -2.9934311 0.61969495 0 ;
	setAttr ".tk[195]" -type "float3" -2.9934311 -0.59587926 0 ;
	setAttr ".tk[196]" -type "float3" -2.9452829 -0.43444422 0 ;
	setAttr ".tk[197]" -type "float3" -2.0696764 0.43506643 -0.0019796218 ;
	setAttr ".tk[198]" -type "float3" -1.8941307 0.31116962 -0.030990779 ;
	setAttr ".tk[199]" -type "float3" -1.718586 0.13366228 0.014735574 ;
	setAttr ".tk[200]" -type "float3" -1.718586 0.061910748 -0.031683914 ;
	setAttr ".tk[201]" -type "float3" -1.718586 -0.041955613 0 ;
	setAttr ".tk[202]" -type "float3" -1.8941307 -0.26294065 -0.078036353 ;
	setAttr ".tk[203]" -type "float3" -2.0696759 -0.59479672 -0.060309712 ;
createNode polyExtrudeEdge -n "polyExtrudeEdge4";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[343]" "e[345]" "e[348]" "e[350]" "e[353]" "e[355]" "e[358]" "e[360]" "e[363]" "e[365]" "e[367]" "e[369]" "e[372:373]" "e[376]" "e[378]" "e[380]" "e[382]" "e[384]" "e[386:392]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 0 -0.85901640287415659 ;
	setAttr ".pvt" -type "float3" 2.9144351 0.97897118 -1.3284541 ;
	setAttr ".rs" 65164;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.7935551344891638 0.84821236372306608 -0.469437977973302 ;
	setAttr ".cbx" -type "double3" 3.0353151062675843 1.1097300362906337 -0.46943788466999031 ;
createNode polyTweak -n "polyTweak54";
	setAttr ".uopa" yes;
	setAttr -s 196 ".tk";
	setAttr ".tk[0]" -type "float3" 0 -0.48585537 0.21885696 ;
	setAttr ".tk[1]" -type "float3" 0 0.10588761 0.21885696 ;
	setAttr ".tk[2]" -type "float3" 0 0.039975643 0.21885696 ;
	setAttr ".tk[3]" -type "float3" 0 0.083101764 0.21885696 ;
	setAttr ".tk[4]" -type "float3" 0 0.076269165 0.21885696 ;
	setAttr ".tk[5]" -type "float3" 0 0.0039874441 0.21885696 ;
	setAttr ".tk[6]" -type "float3" 0 -0.030703096 0.21885696 ;
	setAttr ".tk[7]" -type "float3" 0 -0.0013780951 0.21885696 ;
	setAttr ".tk[8]" -type "float3" 0 -0.028617952 0.21885696 ;
	setAttr ".tk[9]" -type "float3" 0 -0.030703096 0.17674504 ;
	setAttr ".tk[10]" -type "float3" 0 0.0027843164 0.17674504 ;
	setAttr ".tk[11]" -type "float3" 0 0.0014054751 0.17674504 ;
	setAttr ".tk[12]" -type "float3" 0 -0.030703096 0.13463312 ;
	setAttr ".tk[13]" -type "float3" 0 0.0050060591 0.13463312 ;
	setAttr ".tk[14]" -type "float3" 0 0.027153235 0.13463312 ;
	setAttr ".tk[15]" -type "float3" 0 0.083101764 0.13463312 ;
	setAttr ".tk[16]" -type "float3" 0 0.082910344 0.13463312 ;
	setAttr ".tk[17]" -type "float3" 0 0.058737293 0.13463312 ;
	setAttr ".tk[18]" -type "float3" 0 -0.48585537 0.13463312 ;
	setAttr ".tk[19]" -type "float3" 0 0.11227176 0.13463312 ;
	setAttr ".tk[20]" -type "float3" 0 0.091634937 0.13463312 ;
	setAttr ".tk[21]" -type "float3" 0 -0.45374817 0.17674504 ;
	setAttr ".tk[22]" -type "float3" 0 0.14269476 0.17674504 ;
	setAttr ".tk[23]" -type "float3" 0 0.108542 0.17674504 ;
	setAttr ".tk[24]" -type "float3" 0 -0.17997275 0.17674504 ;
	setAttr ".tk[25]" -type "float3" 0 -0.48585537 0.034780756 ;
	setAttr ".tk[26]" -type "float3" 0 0.11128868 0.011400389 ;
	setAttr ".tk[27]" -type "float3" 0 0.10327488 -0.0108216 ;
	setAttr ".tk[28]" -type "float3" 0 0.083101764 0.034780756 ;
	setAttr ".tk[29]" -type "float3" 0 0.081408404 0.011400389 ;
	setAttr ".tk[30]" -type "float3" 0 0.072306313 -0.0108216 ;
	setAttr ".tk[31]" -type "float3" 0 -0.030703096 0.034780756 ;
	setAttr ".tk[32]" -type "float3" 0 0.0031046267 0.011400389 ;
	setAttr ".tk[33]" -type "float3" 0 0.042022396 -0.0108216 ;
	setAttr ".tk[34]" -type "float3" 0 -0.030703096 -0.0066799866 ;
	setAttr ".tk[35]" -type "float3" 0 -0.003136056 -0.030060358 ;
	setAttr ".tk[36]" -type "float3" 0 0.028578877 -0.052282341 ;
	setAttr ".tk[37]" -type "float3" 0 0.0051548192 -0.048140727 ;
	setAttr ".tk[38]" -type "float3" 0 -0.012529655 -0.071521096 ;
	setAttr ".tk[39]" -type "float3" 0 0.010465244 -0.093743086 ;
	setAttr ".tk[40]" -type "float3" 0 0.083101764 -0.048140727 ;
	setAttr ".tk[41]" -type "float3" 0 0.066645905 -0.071521096 ;
	setAttr ".tk[42]" -type "float3" 0 0.042781275 -0.093743086 ;
	setAttr ".tk[43]" -type "float3" 0 -0.48585537 -0.048140727 ;
	setAttr ".tk[44]" -type "float3" 0 0.098086506 -0.071521096 ;
	setAttr ".tk[45]" -type "float3" 0 0.076244585 -0.093743086 ;
	setAttr ".tk[46]" -type "float3" 0 -0.45374817 -0.0066799866 ;
	setAttr ".tk[47]" -type "float3" 0 0.14020804 -0.030060358 ;
	setAttr ".tk[48]" -type "float3" 0 0.12738341 -0.052282341 ;
	setAttr ".tk[49]" -type "float3" 0 -0.17997275 -0.084322564 ;
	setAttr ".tk[50]" -type "float3" 0 -0.48585537 0.3818441 ;
	setAttr ".tk[51]" -type "float3" 0 0.096853606 0.40217558 ;
	setAttr ".tk[52]" -type "float3" 0 -0.024325188 0.42149964 ;
	setAttr ".tk[53]" -type "float3" 0 0.083101764 0.3818441 ;
	setAttr ".tk[54]" -type "float3" 0 0.067043841 0.40217558 ;
	setAttr ".tk[55]" -type "float3" 0 -0.061223183 0.42149964 ;
	setAttr ".tk[56]" -type "float3" 0 0.0051548192 0.3818441 ;
	setAttr ".tk[57]" -type "float3" 0 -0.010412102 0.40217558 ;
	setAttr ".tk[58]" -type "float3" 0 -0.092828035 0.42149964 ;
	setAttr ".tk[59]" -type "float3" 0 0.0051548192 0.34022364 ;
	setAttr ".tk[60]" -type "float3" 0 -0.011301066 0.36055514 ;
	setAttr ".tk[61]" -type "float3" 0 -0.097725399 0.37987918 ;
	setAttr ".tk[62]" -type "float3" 0 -0.030703096 0.29860324 ;
	setAttr ".tk[63]" -type "float3" 0 -0.010412102 0.31893462 ;
	setAttr ".tk[64]" -type "float3" 0 -0.092828035 0.33825877 ;
	setAttr ".tk[65]" -type "float3" 0 0.083101764 0.29860324 ;
	setAttr ".tk[66]" -type "float3" 0 0.067043841 0.31893462 ;
	setAttr ".tk[67]" -type "float3" 0 -0.061223183 0.33825877 ;
	setAttr ".tk[68]" -type "float3" 0 -0.48585537 0.29860324 ;
	setAttr ".tk[69]" -type "float3" 0 0.096853606 0.31893462 ;
	setAttr ".tk[70]" -type "float3" 0 -0.024325188 0.33825877 ;
	setAttr ".tk[71]" -type "float3" 0 -0.45374817 0.34022364 ;
	setAttr ".tk[72]" -type "float3" 0 0.12972067 0.36055514 ;
	setAttr ".tk[73]" -type "float3" 0 0.017237272 0.37987918 ;
	setAttr ".tk[74]" -type "float3" 0 -0.17997275 0.40774113 ;
	setAttr ".tk[75]" -type "float3" 0 -0.53558701 -0.11198886 ;
	setAttr ".tk[76]" -type "float3" 0 0.057199471 -0.17088081 ;
	setAttr ".tk[77]" -type "float3" 0.90651178 -0.0079916026 -0.36616206 ;
	setAttr ".tk[78]" -type "float3" 0 0.03337016 -0.11198886 ;
	setAttr ".tk[79]" -type "float3" 0 0.027608544 -0.17088081 ;
	setAttr ".tk[80]" -type "float3" 0.90651178 -0.043884944 -0.36616206 ;
	setAttr ".tk[81]" -type "float3" 0 -0.04457682 -0.11198886 ;
	setAttr ".tk[82]" -type "float3" 0 -0.05006624 -0.17088081 ;
	setAttr ".tk[83]" -type "float3" 0.90651178 -0.079152584 -0.36612254 ;
	setAttr ".tk[84]" -type "float3" 0 -0.044576801 -0.14700851 ;
	setAttr ".tk[85]" -type "float3" 0 -0.048868008 -0.20590049 ;
	setAttr ".tk[86]" -type "float3" 0.90651178 -0.073081106 -0.40118173 ;
	setAttr ".tk[87]" -type "float3" 0 -0.044576801 -0.20478858 ;
	setAttr ".tk[88]" -type "float3" 0 -0.047147177 -0.24092017 ;
	setAttr ".tk[89]" -type "float3" 0.90651178 -0.066389456 -0.43616185 ;
	setAttr ".tk[90]" -type "float3" 0 0.03337016 -0.20478858 ;
	setAttr ".tk[91]" -type "float3" 0 0.030619351 -0.24092017 ;
	setAttr ".tk[92]" -type "float3" 0.90651178 -0.030931789 -0.43620139 ;
	setAttr ".tk[93]" -type "float3" 0 -0.53558701 -0.20478858 ;
	setAttr ".tk[94]" -type "float3" 0 0.060118549 -0.24092017 ;
	setAttr ".tk[95]" -type "float3" 0.90651178 0.0044954834 -0.43620139 ;
	setAttr ".tk[96]" -type "float3" 0 -0.50347966 -0.14700851 ;
	setAttr ".tk[97]" -type "float3" 0 0.091258936 -0.20590049 ;
	setAttr ".tk[98]" -type "float3" 0.90651178 0.037724983 -0.40118173 ;
	setAttr ".tk[99]" -type "float3" 0.90651178 -0.22970437 -0.50580692 ;
	setAttr ".tk[100]" -type "float3" 0 -0.50215095 0 ;
	setAttr ".tk[101]" -type "float3" 0 -0.50880045 0 ;
	setAttr ".tk[102]" -type "float3" 0 -0.51573074 0 ;
	setAttr ".tk[103]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[104]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[105]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[106]" -type "float3" 0 -0.50975263 0 ;
	setAttr ".tk[107]" -type "float3" 0 -0.56527507 0 ;
	setAttr ".tk[108]" -type "float3" 0 -0.50470132 0 ;
	setAttr ".tk[109]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[110]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[111]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[112]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[113]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[114]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[115]" -type "float3" 0 -0.49531707 0 ;
	setAttr ".tk[116]" -type "float3" 0 -0.49158216 0 ;
	setAttr ".tk[117]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[118]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[119]" -type "float3" 0 -0.4921259 0 ;
	setAttr ".tk[120]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[121]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[122]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[123]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[124]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[125]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[126]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[127]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[128]" -type "float3" 0 -0.6333313 0 ;
	setAttr ".tk[129]" -type "float3" 0 -0.6333313 0 ;
	setAttr ".tk[130]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[131]" -type "float3" 0 -0.1229718 0 ;
	setAttr ".tk[132]" -type "float3" 0 -0.26436377 0 ;
	setAttr ".tk[133]" -type "float3" 0 -0.47049212 0 ;
	setAttr ".tk[134]" -type "float3" 0 -0.52070379 -4.7683716e-007 ;
	setAttr ".tk[135]" -type "float3" 0 -0.19242209 0 ;
	setAttr ".tk[136]" -type "float3" 0 -0.23531741 0 ;
	setAttr ".tk[137]" -type "float3" 0 -0.32405207 0 ;
	setAttr ".tk[138]" -type "float3" 0 -0.5465349 0 ;
	setAttr ".tk[139]" -type "float3" 0 -0.63470644 0 ;
	setAttr ".tk[140]" -type "float3" 0 -0.68028802 0 ;
	setAttr ".tk[141]" -type "float3" 0 -0.70511532 0 ;
	setAttr ".tk[142]" -type "float3" 0 -0.7074188 0 ;
	setAttr ".tk[143]" -type "float3" 0 -0.56055838 3.469447e-017 ;
	setAttr ".tk[144]" -type "float3" 0 -0.48161945 1.8041124e-016 ;
	setAttr ".tk[145]" -type "float3" 0 -0.48161945 1.8041124e-016 ;
	setAttr ".tk[146]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[147]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[148]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[149]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[150]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[151]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[154]" -type "float3" 0 -0.52276969 0.30234337 ;
	setAttr ".tk[155]" -type "float3" 0 -0.15171179 0.30234337 ;
	setAttr ".tk[168]" -type "float3" 0 0.2858474 0 ;
	setAttr ".tk[169]" -type "float3" 0 0.2858474 0 ;
	setAttr ".tk[178]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[179]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[180]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[181]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[182]" -type "float3" 0 -0.50857955 0 ;
	setAttr ".tk[183]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[184]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[185]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[186]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[187]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[188]" -type "float3" 0 -0.5122757 0 ;
	setAttr ".tk[189]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[190]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[191]" -type "float3" 0 -0.48161945 1.0061396e-016 ;
	setAttr ".tk[192]" -type "float3" 0 -0.48161945 4.1633363e-017 ;
	setAttr ".tk[193]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[194]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[195]" -type "float3" 0 -0.54357737 0 ;
	setAttr ".tk[196]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[197]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[198]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[199]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[200]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[201]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[202]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[203]" -type "float3" 0 -0.48161945 0 ;
	setAttr ".tk[211]" -type "float3" 0 -0.0039567179 0 ;
	setAttr ".tk[212]" -type "float3" 0 -0.0039567179 0 ;
	setAttr ".tk[214]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[215]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[216]" -type "float3" 0 -0.68345249 1.5265567e-016 ;
	setAttr ".tk[217]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[218]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[219]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[220]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[221]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[222]" -type "float3" 0 -0.68345249 0 ;
	setAttr ".tk[223]" -type "float3" 0 -0.68345249 0.30234337 ;
	setAttr ".tk[224]" -type "float3" 0 -0.68345249 0.30234337 ;
	setAttr ".tk[225]" -type "float3" 0 -0.68345249 0 ;
createNode groupParts -n "groupParts12";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:241]";
	setAttr ".gi" 24;
createNode polyExtrudeEdge -n "polyExtrudeEdge5";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[447]" "e[449]" "e[452]" "e[454]" "e[457]" "e[459]" "e[462]" "e[464]" "e[467]" "e[469]" "e[471]" "e[473]" "e[476:477]" "e[480]" "e[482]" "e[484]" "e[486]" "e[488]" "e[490:496]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 0 -0.093549896458718695 ;
	setAttr ".pvt" -type "float3" 2.9144349 0.97897124 -1.4220046 ;
	setAttr ".rs" 64283;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.7385731957506185 0.78873738214661426 -1.3284543232778603 ;
	setAttr ".cbx" -type "double3" 3.0902967417703668 1.1692050659766056 -1.3284542299745488 ;
createNode polyTweak -n "polyTweak55";
	setAttr ".uopa" yes;
	setAttr -s 26 ".tk[230:255]" -type "float3"  1.8221048e-007 0.52952075
		 0.20856604 1.8221048e-007 0.54993838 0.13516453 1.8221048e-007 0.56198084 0.050419755
		 1.8221048e-007 -0.55720752 0.0010961448 1.8221048e-007 -0.56198084 0.081972949 1.8221048e-007
		 -0.55720752 0.1592429 -1.8221047e-007 0.5505411 -0.18639585 -1.8221047e-007 0.54446161
		 -0.26424673 -1.8221047e-007 0.54014629 -0.34209698 -1.8221047e-007 -0.51739591 -0.34209698
		 -1.8221047e-007 -0.54574543 -0.26424673 -1.8221047e-007 -0.55190933 -0.18639585 -1.8221047e-007
		 -0.41268611 0.50478041 -1.8221047e-007 -0.06704241 0.60790789 -1.8221047e-007 0.36024794
		 0.56835324 -1.8221047e-007 0.45132828 0.38713223 -1.8221047e-007 0.48962629 0.30898187
		 -1.8221047e-007 -0.5455761 0.30898187 -1.8221047e-007 -0.5303359 0.38713223 -1.8221047e-007
		 0.54021567 -0.46288469 1.8221048e-007 0.48386142 -0.54183686 -1.8221047e-007 0.40312394
		 -0.58679438 -1.8221047e-007 0.21121944 -0.60790789 -1.8221047e-007 0.0047099185 -0.5934971
		 1.8221048e-007 -0.21298489 -0.56323487 1.8221048e-007 -0.39858234 -0.48941576;
createNode groupParts -n "groupParts13";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:267]";
	setAttr ".gi" 25;
createNode polyExtrudeEdge -n "polyExtrudeEdge6";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[499]" "e[501]" "e[504]" "e[506]" "e[509]" "e[511]" "e[514]" "e[516]" "e[519]" "e[521]" "e[523]" "e[525]" "e[528:529]" "e[532]" "e[534]" "e[536]" "e[538]" "e[540]" "e[542:548]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 0 -0.054849642572146085 ;
	setAttr ".pvt" -type "float3" 2.9144349 0.97897124 -1.4768537 ;
	setAttr ".rs" 32937;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.7631963128942547 0.81537286803049847 -1.4220042355271896 ;
	setAttr ".cbx" -type "double3" 3.0656736479525581 1.1425696763117614 -1.4220040489205663 ;
createNode polyTweak -n "polyTweak56";
	setAttr ".uopa" yes;
	setAttr -s 26 ".tk[256:281]" -type "float3"  -1.4343698e-007 -0.23714192
		 -0.09340474 -1.4343698e-007 -0.24628578 -0.06053241 -1.4343698e-007 -0.25167879 -0.022580044
		 -1.4343698e-007 0.24954095 -0.00049091491 -1.4343698e-007 0.25167879 -0.036710903
		 -1.4343698e-007 0.24954095 -0.071315594 1.4343701e-007 -0.24655592 0.083475865 1.4343701e-007
		 -0.24383287 0.11834092 1.4343701e-007 -0.24190021 0.15320563 1.4343701e-007 0.23171131
		 0.15320563 1.4343701e-007 0.24440768 0.11834092 1.4343701e-007 0.24716817 0.083475865
		 1.4343701e-007 0.18481815 -0.22606197 1.4343701e-007 0.03002429 -0.27224675 1.4343701e-007
		 -0.16133428 -0.25453267 1.4343701e-007 -0.20212413 -0.17337424 1.4343701e-007 -0.2192753
		 -0.13837509 1.4343701e-007 0.24433179 -0.13837509 1.4343701e-007 0.23750667 -0.17337424
		 1.4343701e-007 -0.24193183 0.20729941 -1.4343698e-007 -0.21669389 0.24265735 1.4343701e-007
		 -0.18053596 0.26279137 1.4343701e-007 -0.09459307 0.27224675 1.4343701e-007 -0.0021094743
		 0.265793 -1.4343698e-007 0.095383294 0.25224045 -1.4343698e-007 0.17850204 0.21918105;
createNode groupParts -n "groupParts14";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:293]";
	setAttr ".gi" 26;
createNode polyExtrudeEdge -n "polyExtrudeEdge7";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[551]" "e[553]" "e[556]" "e[558]" "e[561]" "e[563]" "e[566]" "e[568]" "e[571]" "e[573]" "e[575]" "e[577]" "e[580:581]" "e[584]" "e[586]" "e[588]" "e[590]" "e[592]" "e[594:600]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0 0 -0.079442717665001883 ;
	setAttr ".pvt" -type "float3" 2.9144349 0.97897136 -1.5562965 ;
	setAttr ".rs" 44121;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.7631962779055126 0.81537292342933965 -1.476853800192407 ;
	setAttr ".cbx" -type "double3" 3.065673484671763 1.1425698162667288 -1.4768537068890952 ;
createNode groupParts -n "groupParts15";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:319]";
	setAttr ".gi" 27;
createNode polyExtrudeEdge -n "polyExtrudeEdge8";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[603]" "e[605]" "e[608]" "e[610]" "e[613]" "e[615]" "e[618]" "e[620]" "e[623]" "e[625]" "e[627]" "e[629]" "e[632:633]" "e[636]" "e[638]" "e[640]" "e[642]" "e[644]" "e[646:652]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -0.34004818211825505 0 -1.3501626987454842 ;
	setAttr ".pvt" -type "float3" 2.5743866 0.97897142 -2.9064593 ;
	setAttr ".rs" 62785;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.7334570369512625 0.78320335280335818 -1.556296531638238 ;
	setAttr ".cbx" -type "double3" 3.0954125390193901 1.1747394685331081 -1.5562964383349265 ;
createNode polyTweak -n "polyTweak57";
	setAttr ".uopa" yes;
	setAttr -s 26 ".tk[308:333]" -type "float3"  8.7128434e-008 0.28641424
		 0.11281215 8.7128434e-008 0.29745829 0.07310991 8.7128434e-008 0.30397156 0.027271705
		 8.7128434e-008 -0.30139035 0.00059314561 8.7128434e-008 -0.30397156 0.044338521 8.7128434e-008
		 -0.30139035 0.086133398 -8.7128448e-008 0.2977843 -0.10082024 -8.7128448e-008 0.29449603
		 -0.14292964 -8.7128448e-008 0.29216143 -0.18503819 -8.7128448e-008 -0.27985582 -0.18503819
		 -8.7128448e-008 -0.29518992 -0.14292964 -8.7128448e-008 -0.29852414 -0.10082024 -8.7128448e-008
		 -0.22321941 0.27303225 -8.7128448e-008 -0.036262792 0.3288134 -8.7128448e-008 0.19485539
		 0.3074185 -8.7128448e-008 0.24412142 0.20939749 -8.7128448e-008 0.26483545 0.16712606
		 -8.7128448e-008 -0.29509845 0.16712606 -8.7128448e-008 -0.28685537 0.20939749 -8.7128448e-008
		 0.29219916 -0.2503711 8.7128434e-008 0.26171827 -0.29307592 -8.7128448e-008 0.21804705
		 -0.31739295 -8.7128448e-008 0.11424699 -0.3288134 -8.7128448e-008 0.0025481405 -0.32101867
		 8.7128434e-008 -0.1152022 -0.30465034 8.7128434e-008 -0.2155908 -0.26472181;
createNode groupParts -n "groupParts16";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:345]";
	setAttr ".gi" 28;
createNode polyExtrudeEdge -n "polyExtrudeEdge9";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[655]" "e[657]" "e[660]" "e[662]" "e[665]" "e[667]" "e[670]" "e[672]" "e[675]" "e[677]" "e[679]" "e[681]" "e[684:685]" "e[688]" "e[690]" "e[692]" "e[694]" "e[696]" "e[698:704]";
	setAttr ".ix" -type "matrix" 2.1723870094115622e-017 0 0.097835613260904175 0 -0.097835613260904175 2.1723870094115622e-017 2.1723870094115622e-017 0
		 -2.1723870094115622e-017 -0.097835613260904175 0 0 2.8498767338385296 0.84997520296149798 0 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 2.3980817331903381e-014 0 -0.20676298551857331 ;
	setAttr ".pvt" -type "float3" 2.5726378 0.97897142 -3.1132224 ;
	setAttr ".rs" 37588;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.2986794431474151 0.68546054134875101 -2.9064593632120745 ;
	setAttr ".cbx" -type "double3" 2.8465960611107328 1.2724823616281129 -2.9064593632120745 ;
createNode polyTweak -n "polyTweak58";
	setAttr ".uopa" yes;
	setAttr -s 34 ".tk";
	setAttr ".tk[102]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[106]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[180]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[184]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[232]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[236]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[310]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[314]" -type "float3" 0 0.035750207 0 ;
	setAttr ".tk[334]" -type "float3" 0 0.86130404 0.3427639 ;
	setAttr ".tk[335]" -type "float3" 0 0.89486122 0.22213408 ;
	setAttr ".tk[336]" -type "float3" 0 0.96824974 0.08286126 ;
	setAttr ".tk[337]" -type "float3" 0 -0.92465585 0.0018024605 ;
	setAttr ".tk[338]" -type "float3" 0 -0.93249953 0.13471629 ;
	setAttr ".tk[339]" -type "float3" 0 -0.92465585 0.26170403 ;
	setAttr ".tk[340]" -type "float3" 0 0.94945073 -0.30632779 ;
	setAttr ".tk[341]" -type "float3" 0 0.88585943 -0.43427187 ;
	setAttr ".tk[342]" -type "float3" 0 0.87876618 -0.56221205 ;
	setAttr ".tk[343]" -type "float3" 0 -0.8592267 -0.56221205 ;
	setAttr ".tk[344]" -type "float3" 0 -0.90581691 -0.43427187 ;
	setAttr ".tk[345]" -type "float3" 0 -0.91594744 -0.30632779 ;
	setAttr ".tk[346]" -type "float3" 0 -0.68714499 0.8295694 ;
	setAttr ".tk[347]" -type "float3" 0 -0.1191029 0.99905229 ;
	setAttr ".tk[348]" -type "float3" 0 0.58311623 0.93404675 ;
	setAttr ".tk[349]" -type "float3" 0 0.73280245 0.63622463 ;
	setAttr ".tk[350]" -type "float3" 0 0.79574078 0.50778866 ;
	setAttr ".tk[351]" -type "float3" 0 -0.90553975 0.50778866 ;
	setAttr ".tk[352]" -type "float3" 0 -0.88049483 0.63622463 ;
	setAttr ".tk[353]" -type "float3" 0 0.87888032 -0.76071709 ;
	setAttr ".tk[354]" -type "float3" 0 0.7862699 -0.89046949 ;
	setAttr ".tk[355]" -type "float3" 0 0.65358055 -0.96435273 ;
	setAttr ".tk[356]" -type "float3" 0 0.33819985 -0.99905223 ;
	setAttr ".tk[357]" -type "float3" 0 -0.0011815638 -0.97536957 ;
	setAttr ".tk[358]" -type "float3" 0 -0.35895005 -0.92563653 ;
	setAttr ".tk[359]" -type "float3" 0 -0.66396689 -0.80431986 ;
createNode groupParts -n "groupParts17";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:371]";
	setAttr ".gi" 13;
createNode polySplitRing -n "polySplitRing30";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[445:446]" "e[448]" "e[450:451]" "e[453]" "e[455:456]" "e[458]" "e[460:461]" "e[463]" "e[465:466]" "e[468]" "e[470]" "e[472]" "e[474:475]" "e[478:479]" "e[481]" "e[483]" "e[485]" "e[487]" "e[489]";
	setAttr ".ix" -type "matrix" 0.043347464022067128 0 0 0 0 -0.043347464022067128 5.3085333065779564e-018 0
		 0 -5.3085333065779564e-018 -0.043347464022067128 0 1.7350044324795388 0.23803634369043625 0.38462874590388901 1;
	setAttr ".wt" 0.50236392021179199;
	setAttr ".dr" no;
	setAttr ".re" 487;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak59";
	setAttr ".uopa" yes;
	setAttr -s 127 ".tk";
	setAttr ".tk[178]" -type "float3" 2.6645353e-015 0.14320305 -6.6613381e-016 ;
	setAttr ".tk[179]" -type "float3" 4.4408921e-015 0.22047378 -1.110223e-015 ;
	setAttr ".tk[180]" -type "float3" 5.3290705e-015 0.25885201 -1.3322676e-015 ;
	setAttr ".tk[181]" -type "float3" 2.0428104e-014 -0.48755491 1.9984014e-015 ;
	setAttr ".tk[182]" -type "float3" 2.3092639e-014 -0.49324605 1.9984014e-015 ;
	setAttr ".tk[183]" -type "float3" 2.4868996e-014 -0.4984481 1.7763568e-015 ;
	setAttr ".tk[184]" -type "float3" 1.7763568e-015 0.06434112 -0.0071277344 ;
	setAttr ".tk[185]" -type "float3" 2.6645353e-015 0.0074747615 -0.023630941 ;
	setAttr ".tk[186]" -type "float3" 3.5527137e-015 0 -0.035641029 ;
	setAttr ".tk[187]" -type "float3" 4.4408921e-015 -0.0014619555 -0.039113302 ;
	setAttr ".tk[188]" -type "float3" 5.3290705e-015 -0.062801071 -0.016433811 ;
	setAttr ".tk[189]" -type "float3" 8.8817842e-015 -0.21280275 -0.0015808436 ;
	setAttr ".tk[190]" -type "float3" 1.7763568e-014 -0.036870774 -1.0824674e-015 ;
	setAttr ".tk[191]" -type "float3" 4.4408921e-015 -0.009665072 -2.810252e-016 ;
	setAttr ".tk[194]" -type "float3" 8.8817842e-016 0.032401443 -1.110223e-016 ;
	setAttr ".tk[195]" -type "float3" 2.5757174e-014 -0.32356668 3.3306691e-016 ;
	setAttr ".tk[196]" -type "float3" 2.3092639e-014 -0.15704247 -6.6613381e-016 ;
	setAttr ".tk[197]" -type "float3" 4.4408921e-015 0 -0.048402194 ;
	setAttr ".tk[198]" -type "float3" 7.1054274e-015 0 -0.073145486 ;
	setAttr ".tk[199]" -type "float3" 1.0658141e-014 0 -0.10547663 ;
	setAttr ".tk[200]" -type "float3" 1.7763568e-014 0 -0.17292978 ;
	setAttr ".tk[201]" -type "float3" 2.0428104e-014 0 -0.20361091 ;
	setAttr ".tk[202]" -type "float3" 1.687539e-014 0 -0.16926062 ;
	setAttr ".tk[203]" -type "float3" 9.7699626e-015 0 -0.098405831 ;
	setAttr ".tk[233]" -type "float3" -1.0658141e-014 -0.34634429 1.110223e-015 ;
	setAttr ".tk[234]" -type "float3" 0 -0.35584635 8.8817842e-016 ;
	setAttr ".tk[235]" -type "float3" 5.3290705e-015 -0.28314307 4.4408921e-016 ;
	setAttr ".tk[239]" -type "float3" -7.1054274e-015 -0.052062847 4.4408921e-016 ;
	setAttr ".tk[240]" -type "float3" -1.9539925e-014 -0.14907464 8.8817842e-016 ;
	setAttr ".tk[241]" -type "float3" -2.4868996e-014 -0.19412294 1.3322676e-015 ;
	setAttr ".tk[242]" -type "float3" 1.5987212e-014 -0.034598034 -9.9920072e-016 ;
	setAttr ".tk[243]" -type "float3" 0 -0.00076172804 0 ;
	setAttr ".tk[247]" -type "float3" 1.5987212e-014 -0.075814977 -9.4368957e-016 ;
	setAttr ".tk[248]" -type "float3" 2.1316282e-014 -0.043356206 -1.2628787e-015 ;
	setAttr ".tk[250]" -type "float3" 1.7763568e-015 0 -0.0097465226 ;
	setAttr ".tk[251]" -type "float3" 3.5527137e-015 0 -0.039226875 ;
	setAttr ".tk[252]" -type "float3" 1.4210855e-014 3.1225023e-017 -0.14246318 ;
	setAttr ".tk[253]" -type "float3" 2.1316282e-014 0 -0.20361091 ;
	setAttr ".tk[254]" -type "float3" 1.4210855e-014 0 -0.13568291 ;
	setAttr ".tk[255]" -type "float3" 3.5527137e-015 0 -0.031443592 ;
	setAttr ".tk[259]" -type "float3" 0 -0.001628294 0 ;
	setAttr ".tk[260]" -type "float3" 1.7763568e-015 -0.0049220063 -2.220446e-016 ;
	setAttr ".tk[261]" -type "float3" 3.5527137e-015 -0.0088669993 -2.220446e-016 ;
	setAttr ".tk[265]" -type "float3" 0 -0.019330828 -0.010567756 ;
	setAttr ".tk[266]" -type "float3" 0 -0.016569637 -0.0090582715 ;
	setAttr ".tk[267]" -type "float3" 0 -0.010600464 -0.0057950513 ;
	setAttr ".tk[268]" -type "float3" 3.5527137e-015 -0.013221508 0.043013539 ;
	setAttr ".tk[273]" -type "float3" 7.1054274e-015 -0.01606323 0.011554809 ;
	setAttr ".tk[274]" -type "float3" 7.1054274e-015 -0.017918963 0.026525034 ;
	setAttr ".tk[276]" -type "float3" 0 0 -0.0021059145 ;
	setAttr ".tk[277]" -type "float3" 1.7763568e-015 0 -0.014917182 ;
	setAttr ".tk[278]" -type "float3" 5.3290705e-015 0 -0.060698785 ;
	setAttr ".tk[279]" -type "float3" 8.8817842e-015 0 -0.084798828 ;
	setAttr ".tk[280]" -type "float3" 5.3290705e-015 0 -0.052998174 ;
	setAttr ".tk[281]" -type "float3" 0 -0.0097102169 -0.012882523 ;
	setAttr ".tk[285]" -type "float3" 0 -0.020820245 -0.011381991 ;
	setAttr ".tk[286]" -type "float3" 0 -0.0057143946 0.0024252776 ;
	setAttr ".tk[287]" -type "float3" -1.7763568e-015 -0.00023681902 0.030419758 ;
	setAttr ".tk[291]" -type "float3" 0 -0.094966143 -0.051915992 ;
	setAttr ".tk[292]" -type "float3" 0 -0.087584265 -0.047880482 ;
	setAttr ".tk[293]" -type "float3" 0 -0.070422158 -0.038498309 ;
	setAttr ".tk[294]" -type "float3" -1.2434498e-014 -0.00061643712 0.20960829 ;
	setAttr ".tk[295]" -type "float3" -1.7763568e-015 0 0.040777277 ;
	setAttr ".tk[299]" -type "float3" -5.3290705e-015 -0.0018830515 0.11504064 ;
	setAttr ".tk[300]" -type "float3" -8.8817842e-015 -0.0021760918 0.16404516 ;
	setAttr ".tk[304]" -type "float3" 0 0 -0.0039047843 ;
	setAttr ".tk[305]" -type "float3" 1.7763568e-015 0 -0.0097465226 ;
	setAttr ".tk[306]" -type "float3" 0 -0.014455298 -0.010189344 ;
	setAttr ".tk[307]" -type "float3" 0 -0.067663521 -0.036990222 ;
	setAttr ".tk[308]" -type "float3" -5.3290705e-015 0.048767578 5.5511151e-016 ;
	setAttr ".tk[309]" -type "float3" -1.4210855e-014 0.15683828 1.7763568e-015 ;
	setAttr ".tk[310]" -type "float3" -2.1316282e-014 0.22458127 2.6645353e-015 ;
	setAttr ".tk[311]" -type "float3" -3.5527137e-014 -0.25830853 -0.027744552 ;
	setAttr ".tk[312]" -type "float3" -3.7303494e-014 -0.21345702 0.0088396939 ;
	setAttr ".tk[313]" -type "float3" -3.1974423e-014 -0.14975244 0.072459459 ;
	setAttr ".tk[314]" -type "float3" -2.1316282e-014 0.22458127 2.6645353e-015 ;
	setAttr ".tk[315]" -type "float3" -1.5987212e-014 0.16763607 1.7763568e-015 ;
	setAttr ".tk[316]" -type "float3" -5.3290705e-015 0.057389528 4.4408921e-016 ;
	setAttr ".tk[317]" -type "float3" -1.7763568e-015 -0.22392207 -0.10275903 ;
	setAttr ".tk[318]" -type "float3" -7.1054274e-015 -0.28998935 -0.095409214 ;
	setAttr ".tk[319]" -type "float3" -1.4210855e-014 -0.31889582 -0.07912422 ;
	setAttr ".tk[320]" -type "float3" -2.4868996e-014 0 0.41103208 ;
	setAttr ".tk[321]" -type "float3" -7.1054274e-015 0 0.105339 ;
	setAttr ".tk[325]" -type "float3" -1.5987212e-014 -0.00078783534 0.24744791 ;
	setAttr ".tk[326]" -type "float3" -1.9539925e-014 0 0.32348031 ;
	setAttr ".tk[332]" -type "float3" 0 -0.037098046 -0.020280721 ;
	setAttr ".tk[333]" -type "float3" 0 -0.13391839 -0.073210374 ;
	setAttr ".tk[335]" -type "float3" -1.4210855e-014 0.1455112 -1.110223e-015 ;
	setAttr ".tk[336]" -type "float3" -3.5527137e-014 0.35138685 -2.6645353e-015 ;
	setAttr ".tk[337]" -type "float3" -8.5265128e-014 -0.33971047 -0.00022249366 ;
	setAttr ".tk[338]" -type "float3" -1.0658141e-013 -0.41490108 1.3322676e-015 ;
	setAttr ".tk[339]" -type "float3" -6.750156e-014 -0.24432236 1.110223e-015 ;
	setAttr ".tk[340]" -type "float3" -3.5527137e-014 0.35138685 -2.6645353e-015 ;
	setAttr ".tk[341]" -type "float3" -1.7763568e-014 0.17366447 -1.3322676e-015 ;
	setAttr ".tk[343]" -type "float3" -1.7763568e-014 -0.31609368 -0.10275903 ;
	setAttr ".tk[344]" -type "float3" -3.5527137e-014 -0.43391761 -0.085582726 ;
	setAttr ".tk[345]" -type "float3" -2.1316282e-014 -0.26607367 -0.060627691 ;
	setAttr ".tk[346]" -type "float3" -2.4868996e-014 0 0.41103208 ;
	setAttr ".tk[351]" -type "float3" -4.9737992e-014 -0.30575597 0.055628877 ;
	setAttr ".tk[352]" -type "float3" -2.8421709e-014 -0.14146312 0.19475788 ;
	setAttr ".tk[359]" -type "float3" 0 -0.073940858 -0.040421911 ;
	setAttr ".tk[360]" -type "float3" -3.5527137e-015 -0.92907202 -0.36973256 ;
	setAttr ".tk[361]" -type "float3" -3.5527137e-015 -0.9652701 -0.23961186 ;
	setAttr ".tk[362]" -type "float3" -3.5527137e-015 -1.006618 -0.089381017 ;
	setAttr ".tk[363]" -type "float3" -3.5527137e-015 0.99740779 -0.0019441929 ;
	setAttr ".tk[364]" -type "float3" -3.5527137e-015 1.0058689 -0.14531609 ;
	setAttr ".tk[365]" -type "float3" -3.5527137e-015 0.99740779 -0.2822952 ;
	setAttr ".tk[366]" -type "float3" -2.8421709e-014 -1.1797147 0.33043015 ;
	setAttr ".tk[367]" -type "float3" -2.8421709e-014 -1.1496831 0.46844062 ;
	setAttr ".tk[368]" -type "float3" -2.8421709e-014 -1.1420313 0.6064471 ;
	setAttr ".tk[369]" -type "float3" -3.5527137e-015 0.92683089 0.6064471 ;
	setAttr ".tk[370]" -type "float3" -3.5527137e-015 0.97708708 0.46844062 ;
	setAttr ".tk[371]" -type "float3" -3.5527137e-015 0.98801434 0.33043015 ;
	setAttr ".tk[372]" -type "float3" -3.5527137e-015 0.74120975 -0.8948403 ;
	setAttr ".tk[373]" -type "float3" -3.5527137e-015 0.12847401 -1.0776588 ;
	setAttr ".tk[374]" -type "float3" -3.5527137e-015 -0.62899679 -1.0075382 ;
	setAttr ".tk[375]" -type "float3" -3.5527137e-015 -0.79046005 -0.68628311 ;
	setAttr ".tk[376]" -type "float3" -3.5527137e-015 -0.8583498 -0.54774213 ;
	setAttr ".tk[377]" -type "float3" -3.5527137e-015 0.97678792 -0.54774213 ;
	setAttr ".tk[378]" -type "float3" -3.5527137e-015 0.94977236 -0.68628311 ;
	setAttr ".tk[379]" -type "float3" -2.8421709e-014 -1.1421542 0.82057059 ;
	setAttr ".tk[380]" -type "float3" -2.8421709e-014 -1.0422571 0.96053171 ;
	setAttr ".tk[381]" -type "float3" -2.8421709e-014 -0.89912796 1.0402292 ;
	setAttr ".tk[382]" -type "float3" -7.1054274e-015 -0.38668376 1.0776587 ;
	setAttr ".tk[383]" -type "float3" -3.5527137e-015 0.0012736876 1.0521123 ;
	setAttr ".tk[384]" -type "float3" -3.5527137e-015 0.38719264 0.99846607 ;
	setAttr ".tk[385]" -type "float3" -3.5527137e-015 0.71620768 0.86760348 ;
createNode polySplitRing -n "polySplitRing31";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[653:654]" "e[656]" "e[658:659]" "e[661]" "e[663:664]" "e[666]" "e[668:669]" "e[671]" "e[673:674]" "e[676]" "e[678]" "e[680]" "e[682:683]" "e[686:687]" "e[689]" "e[691]" "e[693]" "e[695]" "e[697]";
	setAttr ".ix" -type "matrix" 0.043347464022067128 0 0 0 0 -0.043347464022067128 5.3085333065779564e-018 0
		 0 -5.3085333065779564e-018 -0.043347464022067128 0 1.7350044324795388 0.23803634369043625 0.38462874590388901 1;
	setAttr ".wt" 0.47876656055450439;
	setAttr ".re" 695;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing32";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 19 "e[549:550]" "e[552]" "e[554:555]" "e[557]" "e[559:560]" "e[562]" "e[564:565]" "e[567]" "e[569:570]" "e[572]" "e[574]" "e[576]" "e[578:579]" "e[582:583]" "e[585]" "e[587]" "e[589]" "e[591]" "e[593]";
	setAttr ".ix" -type "matrix" 0.043347464022067128 0 0 0 0 -0.043347464022067128 5.3085333065779564e-018 0
		 0 -5.3085333065779564e-018 -0.043347464022067128 0 1.7350044324795388 0.23803634369043625 0.38462874590388901 1;
	setAttr ".wt" 0.46117350459098816;
	setAttr ".re" 579;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak60";
	setAttr ".uopa" yes;
	setAttr -s 10 ".tk";
	setAttr ".tk[187]" -type "float3" 0 -0.16969475 -0.16172633 ;
	setAttr ".tk[201]" -type "float3" 1.0658141e-014 1.3322676e-015 -0.21735151 ;
	setAttr ".tk[322]" -type "float3" 0 -0.73902529 0.81397349 ;
	setAttr ".tk[348]" -type "float3" 0 0.26611897 0.20769738 ;
	setAttr ".tk[358]" -type "float3" 0 -0.31704631 -0.66916853 ;
	setAttr ".tk[387]" -type "float3" 1.0658141e-014 1.3322676e-015 -0.21735151 ;
	setAttr ".tk[401]" -type "float3" 0 0.15149176 0.48586157 ;
	setAttr ".tk[410]" -type "float3" 0 -0.16969475 -0.16172633 ;
	setAttr ".tk[412]" -type "float3" 0 -0.31704631 -0.66916853 ;
	setAttr ".tk[426]" -type "float3" 0 0.26611897 0.20769738 ;
createNode polyExtrudeFace -n "polyExtrudeFace26";
	setAttr ".ics" -type "componentList" 1 "f[75]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.371676 0.87955076 0.9421612 ;
	setAttr ".rs" 41197;
	setAttr ".lt" -type "double3" 4.9613091412936683e-016 2.4633073358870661e-016 -0.11886161563594598 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.32719845350340759 0.74981900720068473 0.82063066140561025 ;
	setAttr ".cbx" -type "double3" 0.41615356741351628 1.0092825139588188 1.0636917555613721 ;
createNode polyTweak -n "polyTweak61";
	setAttr ".uopa" yes;
	setAttr -s 14 ".tk";
	setAttr ".tk[19]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[20]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[21]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[66]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[67]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[68]" -type "float3" 0 -0.10811588 0.014226481 ;
	setAttr ".tk[283]" -type "float3" -0.059379362 0 0 ;
	setAttr ".tk[286]" -type "float3" -0.059379362 0 0 ;
	setAttr ".tk[288]" -type "float3" -0.059379362 -0.0067682154 -0.056981228 ;
	setAttr ".tk[289]" -type "float3" -0.059379362 -0.0067682154 -0.056981228 ;
	setAttr ".tk[303]" -type "float3" -0.059379362 0 0 ;
	setAttr ".tk[304]" -type "float3" -0.059379362 0 0 ;
	setAttr ".tk[464]" -type "float3" -0.059379362 0 0 ;
	setAttr ".tk[489]" -type "float3" -0.047355838 0 0 ;
createNode polySplitRing -n "polySplitRing33";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 25 "e[809:810]" "e[812]" "e[814]" "e[816]" "e[818]" "e[820]" "e[822]" "e[824]" "e[826]" "e[828]" "e[830]" "e[832]" "e[834]" "e[836]" "e[838]" "e[840]" "e[842]" "e[844]" "e[846]" "e[848]" "e[850]" "e[852]" "e[854]" "e[856]" "e[858]";
	setAttr ".ix" -type "matrix" 0.033041600247020401 -0.0079006443604542741 0.0031402548910052816 0
		 -0.0079819800519465613 -0.033166605353159948 0.00054130654238373674 0 0.0029273497469874806 -0.0012589030987817773 -0.033968728492857196 0
		 1.3470171800270252 0.71820709201314059 0.98759731525041239 1;
	setAttr ".wt" 0.52384531497955322;
	setAttr ".re" 814;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak62";
	setAttr ".uopa" yes;
	setAttr -s 464 ".tk";
	setAttr ".tk[0:165]" -type "float3"  6.078531742 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078529835 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078529835 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078529835 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078529835 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576;
	setAttr ".tk[166:331]" 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788
		 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078530788 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879
		 0.58987576 6.078530788 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078531742
		 1.75349879 0.58987576 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.58987576
		 6.078531742 1.75349879 0.58987576 6.078530788 1.75349879 0.69409388 6.078530788 1.75349879
		 0.63648939 6.078530788 1.75349879 0.56998265 5.86160994 0.84286773 0.48822868 5.86160564
		 0.84286761 0.55170006 5.86160946 0.84286809 0.61234033 6.078530788 1.75349879 0.38413498
		 6.078530788 1.75349879 0.32303843 6.078530788 1.75349879 0.2619428 5.86160994 0.84286821
		 0.21889752 5.86160994 0.84286773 0.27999273 5.86160898 0.84286761 0.34108946 5.86160851
		 0.84286785 0.88351119 6.078532219 1.75349879 1.0074900389 6.078530788 1.75349879
		 0.97644782 6.078530788 1.75349879 0.83422923 6.078530788 1.75349879 0.77289748 5.86160898
		 0.84286809 0.7298519 5.86160994 0.84286797 0.79118335 6.078530788 1.75349879 0.16715069
		 6.078530788 1.75349879 0.10279984 6.078530788 1.75349879 0.060284652 6.078530788
		 1.75349879 0.018385254 6.078530788 1.75349879 0.014691979 6.078530788 1.75349879
		 0.055107016 5.86160851 0.84286797 0.09556973 6.078530788 1.75349879 0.6711762 6.078530788
		 1.75349879 0.62163758 6.078530788 1.75349879 0.56444311 5.69538593 0.14507511 0.45512477
		 5.69538593 0.14507511 0.50970793 5.69538593 0.14507511 0.56185776 6.078531742 1.75349879
		 0.40461552 6.078531742 1.75349879 0.35207349 6.078531742 1.75349879 0.29953253 5.69538784
		 0.14507595 0.22090951 5.69538879 0.14507583 0.27382064 5.69538736 0.14507583 0.32716367
		 5.69538832 0.14507583 0.80561489 6.078531742 1.75349867 0.94069207 6.078531742 1.75349879
		 0.91399688 6.078531742 1.75349879 0.79169071 6.078531742 1.75349879 0.73894614 5.69538784
		 0.14507607 0.6657508 5.69538879 0.14507583 0.72216862 6.078531742 1.75349879 0.21801317
		 6.078530788 1.75349879 0.16421127 6.078531742 1.75349879 0.13072658 6.078531742 1.75349879
		 0.10524385 6.078529835 1.75349891 0.10905648 6.078530788 1.75349867 0.13728242 5.69538689
		 0.14507595 0.1209162 6.28595877 1.75349879 0.6711762 6.28595877 1.75349879 0.62163758
		 6.28595877 1.75349879 0.56444311 5.90281391 0.14507511 0.45233211 5.90281391 0.14507511
		 0.51030296 5.90281391 0.14507511 0.56932145 6.28595877 1.75349879 0.40461552 6.28595877
		 1.75349879 0.35207349 6.28595877 1.75349879 0.29953253 5.90281487 0.14507595 0.21076451
		 5.90281534 0.14507595 0.26429558 5.90281582 0.14507583 0.31913978 5.90281534 0.14507607
		 0.84648985 6.28595877 1.75349879 0.95069712 6.28595877 1.75349879 0.91399688 6.28595877
		 1.75349879 0.79169071 6.28595877 1.75349879 0.73894614 5.90281487 0.14507583 0.69114172
		 5.90281534 0.14507559 0.75591004 6.28595877 1.75349879 0.21801317 6.28595877 1.75349879
		 0.16472799 6.28595877 1.75349879 0.13438654 6.28595877 1.75349879 0.11917861 6.28595877
		 1.75349891 0.12747115 6.28595924 1.75349879 0.14778565 5.9028163 0.1450762 0.11500113
		 6.28595877 1.75349879 0.69885534 6.28595877 1.75349879 0.63957524 6.28595877 1.75349879
		 0.57113379 6.069038391 0.84286785 0.48144749 6.069036484 0.84286785 0.55573988 6.069036007
		 0.84286785 0.63375372 6.28595972 1.75349879 0.37987879 6.28595972 1.75349879 0.31700447
		 6.28595972 1.75349879 0.25413203 6.069037437 0.84286821 0.18587418 6.069035053 0.84286797
		 0.25054973 6.069036961 0.84286785 0.31741974 6.069038391 0.84286785 0.9958846 6.28595972
		 1.75349879 1.047213554 6.28595972 1.75349879 1.18913639 6.28595972 1.75349879 0.84306741
		 6.28595972 1.75349879 0.77995181 6.069036961 0.84286809 0.79761893 6.069039345 0.84286737
		 0.8793897 6.28595972 1.75349879 0.15658283 6.28595877 1.75349879 0.092819974 6.28595972
		 1.75349879 0.056512266 6.28595972 1.75349879 0.039460346 6.28596067 1.75349879 0.051098444;
	setAttr ".tk[332:463]" 6.28595781 1.75349891 0.070562139 6.069036007 0.84286749
		 0.074147716 0.20742829 8.8817842e-016 2.553513e-015 0.20742829 8.8817842e-016 2.553513e-015
		 0.20742829 8.8817842e-016 2.6645353e-015 0.20742829 1.2767565e-015 2.6645353e-015
		 0.20742829 1.2767565e-015 2.553513e-015 0.20742829 1.2767565e-015 2.553513e-015 0.20742829
		 8.8817842e-016 2.6645353e-015 0.25954548 0.18191963 -0.092218518 0.22576803 0.083084911
		 0.019543368 0.20742829 1.2767565e-015 2.6645353e-015 0.20742829 1.2767565e-015 2.6645353e-015
		 0.20742829 1.2767565e-015 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015
		 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 8.8817842e-016 2.6645353e-015
		 0.20742829 8.8817842e-016 2.553513e-015 0.20742829 8.8817842e-016 2.553513e-015 0.20742829
		 1.2767565e-015 2.553513e-015 0.20742829 1.2836954e-015 2.553513e-015 0.17197719 -0.099732459
		 0.12820432 0.17197719 -0.099732459 0.12820432 0.17197719 -0.099732459 0.12820432
		 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015
		 0.21505532 0.13577642 0.28413263 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829
		 8.8817842e-016 2.553513e-015 0.20742829 8.8817842e-016 2.553513e-015 0.20742829 8.8817842e-016
		 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015
		 2.6645353e-015 0.20742829 1.3322676e-015 2.553513e-015 0.20742829 8.8817842e-016
		 2.6645353e-015 0.20742829 8.8817842e-016 2.6645353e-015 0.20742829 8.8817842e-016
		 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015
		 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015
		 2.553513e-015 0.20742829 1.3322676e-015 2.553513e-015 0.20742829 1.3322676e-015 2.553513e-015
		 0.20742829 8.8817842e-016 2.5673907e-015 0.20742829 8.8817842e-016 2.553513e-015
		 0.20742829 1.3322676e-015 2.553513e-015 0.20742829 1.3322676e-015 2.5673907e-015
		 0.20742829 8.8817842e-016 2.6645353e-015 0.20742829 8.8817842e-016 2.6645353e-015
		 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015
		 0.20742829 1.3322676e-015 2.6645353e-015 0.20742829 1.3322676e-015 2.6645353e-015
		 0.20742829 1.3322676e-015 2.6645353e-015 6.078530788 1.75349879 0.11977744 6.078530788
		 1.75349879 0.033828326 6.078530788 1.75349879 0.088889748 6.078530788 1.75349879
		 0.12384205 6.078530788 1.75349879 0.1612161 6.078530788 1.75349879 0.21775854 6.078530788
		 1.75349879 0.29936075 6.078530788 1.75349879 0.35241735 6.078530788 1.75349879 0.40602311
		 6.078530788 1.75349879 0.56382662 6.078530788 1.75349879 0.619986 6.078530788 1.75349879
		 0.66862833 6.078530788 1.75349879 0.73517179 6.078530788 1.75349879 0.78696126 6.078530788
		 1.75349879 0.90705317 6.078530788 1.75349879 1.052474737 6.078530788 1.75349879 0.86492461
		 6.078530788 1.75349879 0.78696126 6.078530788 1.75349879 0.73517179 6.078530788 1.75349879
		 0.63594258 6.078530788 1.75349879 0.584737 6.078530788 1.75349879 0.53114092 6.078530788
		 1.75349879 0.40670034 6.078530788 1.75349879 0.35329613 6.078530788 1.75349879 0.25925639
		 6.078530788 1.75349879 0.19019584 5.9333415 0.32457191 0.67371464 6.0033278465 0.33663613
		 -0.083356716 5.99795055 0.38882267 0.11964066 5.99977446 0.53145891 0.48797911 6.026585102
		 0.61644882 0.41710952 6.049235821 0.69780296 0.38327524 6.061953545 0.74355572 0.36447686
		 6.055260181 0.71947521 0.37437081 6.0359478 0.6500029 0.40291479 5.9674325 0.40351808
		 0.50418806 6.024027348 0.65016466 0.5379166 6.053843975 0.8593536 0.77175462 6.053713322
		 0.85888201 0.77194828 6.041363239 0.80127662 0.75427169 5.94609785 0.32677096 0.53572118
		 5.91486502 0.32138711 0.87357706 5.94609785 0.32677096 1.068936348 5.94609785 0.32677096
		 0.91460884 5.94609785 0.32677096 0.81033915 5.94609785 0.32677096 0.53572118 5.94609785
		 0.32677096 0.53572118 5.94609785 0.32677096 0.53572118 5.94609785 0.32677096 0.53572118
		 5.94609785 0.32677096 0.53572118 5.94609785 0.32677096 0.53572118 5.94207096 0.32607681
		 0.57928187 6.11973715 1.23510158 0.60337299 6.11973715 1.24009871 0.58058357 6.11973572
		 1.24344993 0.53817219 6.11973572 1.24510694 0.51725531 6.11973572 1.24413514 0.496025
		 6.11973667 1.24574494 0.44672698 6.11973619 1.24503136 0.42629433 6.11973858 1.23607624
		 0.40617928 6.11973572 1.19385695 0.3691065 6.28595924 1.82545197 0.38239357 6.28595829
		 1.75126898 0.37310013 6.28595877 1.68167233 0.37087718 6.28595877 1.6169982 0.37872148
		 6.28595877 1.58978796 0.39083463 6.28595877 1.57079649 0.41108853 6.28595877 1.57082009
		 0.44191319 6.28595877 1.56936526 0.4617807 6.28595877 1.56731653 0.48164839 6.28595877
		 1.56346154 0.5420838 6.28595877 1.56751966 0.56371081 6.28595877 1.5744009 0.58244258
		 6.28595877 1.5878458 0.60806835 6.28595877 1.60075235 0.62801272 6.28595877 1.63144779
		 0.67426032 6.28595972 1.7754513 0.68609935 6.11973667 1.1950531 0.63617039;
createNode polyCloseBorder -n "polyCloseBorder3";
	setAttr ".ics" -type "componentList" 19 "e[707]" "e[709]" "e[712]" "e[714]" "e[717]" "e[719]" "e[722]" "e[724]" "e[727]" "e[729]" "e[731]" "e[733]" "e[736:737]" "e[740]" "e[742]" "e[744]" "e[746]" "e[748]" "e[750:756]";
createNode polyTweak -n "polyTweak63";
	setAttr ".uopa" yes;
	setAttr -s 215 ".tk";
	setAttr ".tk[230]" -type "float3" -0.070280582 -0.61276537 -0.011198636 ;
	setAttr ".tk[231]" -type "float3" -0.070280582 -0.62297142 -0.011198636 ;
	setAttr ".tk[232]" -type "float3" -0.070280582 -0.63457793 -0.011198636 ;
	setAttr ".tk[233]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[234]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[235]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[236]" -type "float3" -0.070280582 -0.62886071 -0.011198636 ;
	setAttr ".tk[237]" -type "float3" -0.070280582 -0.62023383 -0.011198636 ;
	setAttr ".tk[238]" -type "float3" -0.070280582 -0.6180765 -0.011198636 ;
	setAttr ".tk[239]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[240]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[241]" -type "float3" 0.040786225 0.17121902 0.0064989519 ;
	setAttr ".tk[242]" -type "float3" 0.040786225 0.39931184 0.0064989519 ;
	setAttr ".tk[243]" -type "float3" 0 -0.065520667 0 ;
	setAttr ".tk[244]" -type "float3" -0.070280582 -0.52815276 -0.011198636 ;
	setAttr ".tk[245]" -type "float3" -0.070280582 -0.57368088 -0.011198636 ;
	setAttr ".tk[246]" -type "float3" -0.070280582 -0.59282351 -0.011198636 ;
	setAttr ".tk[247]" -type "float3" 0.040786225 0.4721795 0.0064989519 ;
	setAttr ".tk[248]" -type "float3" 0.040786225 0.45948911 0.0064989519 ;
	setAttr ".tk[249]" -type "float3" -0.070280582 -0.61811191 -0.011198636 ;
	setAttr ".tk[250]" -type "float3" -0.070280582 -0.58994299 -0.011198636 ;
	setAttr ".tk[251]" -type "float3" -0.070280582 -0.54958463 -0.011198636 ;
	setAttr ".tk[252]" -type "float3" 0 -0.2047317 0 ;
	setAttr ".tk[253]" -type "float3" 0 -0.10150611 0 ;
	setAttr ".tk[254]" -type "float3" 0 0.0073104552 0 ;
	setAttr ".tk[256]" -type "float3" 0 -0.32677773 0 ;
	setAttr ".tk[257]" -type "float3" 0 -0.33555481 0 ;
	setAttr ".tk[258]" -type "float3" 0 -0.3407312 0 ;
	setAttr ".tk[259]" -type "float3" 0.040786225 0.536452 0.0064989519 ;
	setAttr ".tk[260]" -type "float3" 0.040786225 0.53901774 0.0064989519 ;
	setAttr ".tk[261]" -type "float3" 0.040786225 0.53758317 0.0064989519 ;
	setAttr ".tk[262]" -type "float3" 0 -0.33581388 0 ;
	setAttr ".tk[263]" -type "float3" 0 -0.33320066 0 ;
	setAttr ".tk[264]" -type "float3" 0 -0.33134517 0 ;
	setAttr ".tk[265]" -type "float3" 0.040786225 0.52210379 0.0064989519 ;
	setAttr ".tk[266]" -type "float3" 0.040786225 0.53385901 0.0064989519 ;
	setAttr ".tk[267]" -type "float3" 0.040786225 0.53557611 0.0064989519 ;
	setAttr ".tk[268]" -type "float3" 0.040786225 0.4761377 0.0064989519 ;
	setAttr ".tk[269]" -type "float3" 0.040786225 0.07412947 0.0064989519 ;
	setAttr ".tk[270]" -type "float3" 0 -0.25401175 0 ;
	setAttr ".tk[271]" -type "float3" 0 -0.29316565 0 ;
	setAttr ".tk[272]" -type "float3" 0 -0.30962801 0 ;
	setAttr ".tk[273]" -type "float3" 0.040786225 0.53370714 0.0064989519 ;
	setAttr ".tk[274]" -type "float3" 0.040786225 0.52744621 0.0064989519 ;
	setAttr ".tk[275]" -type "float3" 0 -0.33137524 0 ;
	setAttr ".tk[276]" -type "float3" 0 -0.30715069 0 ;
	setAttr ".tk[277]" -type "float3" 0 -0.27244321 0 ;
	setAttr ".tk[278]" -type "float3" 0 -0.18994871 0 ;
	setAttr ".tk[279]" -type "float3" 0 -0.10117677 0 ;
	setAttr ".tk[280]" -type "float3" 0 -0.0075953389 0 ;
	setAttr ".tk[281]" -type "float3" 0.040786225 0.46952614 0.0064989519 ;
	setAttr ".tk[282]" -type "float3" 0 -0.32677773 0 ;
	setAttr ".tk[283]" -type "float3" 0 -0.33555481 0 ;
	setAttr ".tk[284]" -type "float3" 0 -0.3407312 0 ;
	setAttr ".tk[285]" -type "float3" 0.040786225 0.53945118 0.0064989519 ;
	setAttr ".tk[286]" -type "float3" 0.040786225 0.53914154 0.0064989519 ;
	setAttr ".tk[287]" -type "float3" 0.040786225 0.53623444 0.0064989519 ;
	setAttr ".tk[288]" -type "float3" 0 -0.33581388 0 ;
	setAttr ".tk[289]" -type "float3" 0 -0.33320066 0 ;
	setAttr ".tk[290]" -type "float3" 0 -0.33134517 0 ;
	setAttr ".tk[291]" -type "float3" 0.040786225 0.53392386 0.0064989519 ;
	setAttr ".tk[292]" -type "float3" 0.040786225 0.54495698 0.0064989519 ;
	setAttr ".tk[293]" -type "float3" 0.040786225 0.5449248 0.0064989519 ;
	setAttr ".tk[294]" -type "float3" 0.040786225 0.47416782 0.0064989519 ;
	setAttr ".tk[295]" -type "float3" 0.040786225 0.074129447 0.0064989519 ;
	setAttr ".tk[296]" -type "float3" 0 -0.25401175 0 ;
	setAttr ".tk[297]" -type "float3" 0 -0.29316565 0 ;
	setAttr ".tk[298]" -type "float3" 0 -0.30962801 0 ;
	setAttr ".tk[299]" -type "float3" 0.040786225 0.5314911 0.0064989519 ;
	setAttr ".tk[300]" -type "float3" 0.040786225 0.52498585 0.0064989519 ;
	setAttr ".tk[301]" -type "float3" 0 -0.33137524 0 ;
	setAttr ".tk[302]" -type "float3" 0 -0.30715069 0 ;
	setAttr ".tk[303]" -type "float3" 0 -0.27244321 0 ;
	setAttr ".tk[304]" -type "float3" 0 -0.18994871 0 ;
	setAttr ".tk[305]" -type "float3" 0 -0.10117677 0 ;
	setAttr ".tk[306]" -type "float3" 0 -0.0053363251 0 ;
	setAttr ".tk[307]" -type "float3" 0.040786225 0.47858283 0.0064989519 ;
	setAttr ".tk[308]" -type "float3" 0 -0.37915903 0 ;
	setAttr ".tk[309]" -type "float3" 0 -0.40655154 0 ;
	setAttr ".tk[310]" -type "float3" 0 -0.42891929 0 ;
	setAttr ".tk[311]" -type "float3" 0.10879686 0.75550467 0.017335899 ;
	setAttr ".tk[312]" -type "float3" 0.10879686 0.7509498 0.017335899 ;
	setAttr ".tk[313]" -type "float3" 0.10879686 0.73853987 0.017335899 ;
	setAttr ".tk[314]" -type "float3" 0 -0.42303503 0 ;
	setAttr ".tk[315]" -type "float3" 0 -0.40542188 0 ;
	setAttr ".tk[316]" -type "float3" 0 -0.38597223 0 ;
	setAttr ".tk[317]" -type "float3" 0.10879686 0.72965044 0.017335899 ;
	setAttr ".tk[318]" -type "float3" 0.10879686 0.75455821 0.017335899 ;
	setAttr ".tk[319]" -type "float3" 0.10879686 0.76224697 0.017335899 ;
	setAttr ".tk[320]" -type "float3" 0.10879686 0.64079422 0.017335899 ;
	setAttr ".tk[321]" -type "float3" 0 -0.064665601 0 ;
	setAttr ".tk[322]" -type "float3" 0 -0.16897047 0 ;
	setAttr ".tk[323]" -type "float3" 0 -0.3313162 0 ;
	setAttr ".tk[324]" -type "float3" 0 -0.35101566 0 ;
	setAttr ".tk[325]" -type "float3" 0.10879686 0.70927626 0.017335899 ;
	setAttr ".tk[326]" -type "float3" 0.10879686 0.70131415 0.017335899 ;
	setAttr ".tk[327]" -type "float3" 0 -0.37703937 0 ;
	setAttr ".tk[328]" -type "float3" 0 -0.34805131 0 ;
	setAttr ".tk[329]" -type "float3" 0 -0.30651969 0 ;
	setAttr ".tk[330]" -type "float3" 0 -0.20780307 0 ;
	setAttr ".tk[331]" -type "float3" 0 -0.10157496 0 ;
	setAttr ".tk[332]" -type "float3" 0 0.016205 0 ;
	setAttr ".tk[333]" -type "float3" 0.068009377 0.51000667 0.010836944 ;
	setAttr ".tk[334]" -type "float3" -0.36074948 0.40352917 0.11055116 ;
	setAttr ".tk[335]" -type "float3" -0.36074948 0.43345401 0.066536695 ;
	setAttr ".tk[336]" -type "float3" -0.36074948 0.47220257 0.015719779 ;
	setAttr ".tk[337]" -type "float3" -0.36074948 -0.28939706 -0.013883515 ;
	setAttr ".tk[338]" -type "float3" -0.36074948 -0.30139524 0.03464032 ;
	setAttr ".tk[339]" -type "float3" -0.36074948 -0.2778067 0.080974683 ;
	setAttr ".tk[340]" -type "float3" -0.36074948 0.46534353 -0.126285 ;
	setAttr ".tk[341]" -type "float3" -0.35441691 0.45569497 -0.18417348 ;
	setAttr ".tk[342]" -type "float3" -0.35852122 0.41999599 -0.21727547 ;
	setAttr ".tk[343]" -type "float3" -0.36074948 -0.2626541 -0.23213625 ;
	setAttr ".tk[344]" -type "float3" -0.36074948 -0.2939702 -0.18336727 ;
	setAttr ".tk[345]" -type "float3" -0.36074948 -0.27727216 -0.13365173 ;
	setAttr ".tk[346]" -type "float3" -0.36074948 -0.16145825 0.33811703 ;
	setAttr ".tk[347]" -type "float3" -0.36074948 0.045804892 0.35001329 ;
	setAttr ".tk[348]" -type "float3" -0.36074948 0.33436146 0.35153136 ;
	setAttr ".tk[349]" -type "float3" -0.36074948 0.35664234 0.21762711 ;
	setAttr ".tk[350]" -type "float3" -0.36074948 0.37960678 0.17076451 ;
	setAttr ".tk[351]" -type "float3" -0.36074948 -0.27829635 0.17752382 ;
	setAttr ".tk[352]" -type "float3" -0.36074948 -0.24919528 0.24129163 ;
	setAttr ".tk[353]" -type "float3" -0.36505693 0.39782414 -0.27650163 ;
	setAttr ".tk[354]" -type "float3" -0.36505693 0.3640331 -0.32384467 ;
	setAttr ".tk[355]" -type "float3" -0.36505693 0.31561831 -0.3508029 ;
	setAttr ".tk[356]" -type "float3" -0.36074948 0.21266261 -0.37904155 ;
	setAttr ".tk[357]" -type "float3" -0.36074948 0.088831514 -0.37040034 ;
	setAttr ".tk[358]" -type "float3" -0.35982272 -0.063734561 -0.39903879 ;
	setAttr ".tk[359]" -type "float3" -0.36074948 -0.16198562 -0.3129003 ;
	setAttr ".tk[389]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[390]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[391]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[392]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[393]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[394]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[395]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[396]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[397]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[398]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[399]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[400]" -type "float3" -0.070280582 -0.29503521 -0.011198636 ;
	setAttr ".tk[415]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[416]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[417]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[418]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[419]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[420]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[421]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[422]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[423]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[424]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[425]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[426]" -type "float3" -0.14834966 -0.62276626 -0.023638302 ;
	setAttr ".tk[428]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[429]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[430]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[431]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[432]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[433]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[434]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[435]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[436]" -type "float3" 0.068010643 0.28550625 0.010836948 ;
	setAttr ".tk[437]" -type "float3" 0.068009377 0.28550631 0.010836944 ;
	setAttr ".tk[438]" -type "float3" 0.040786225 0.35596567 0.0064989519 ;
	setAttr ".tk[439]" -type "float3" 0.040786225 0.36155844 0.0064989519 ;
	setAttr ".tk[440]" -type "float3" 0.040786225 0.36531058 0.0064989519 ;
	setAttr ".tk[441]" -type "float3" 0.040786225 0.36716527 0.0064989519 ;
	setAttr ".tk[442]" -type "float3" 0.040786225 0.36607736 0.0064989519 ;
	setAttr ".tk[443]" -type "float3" 0.040786225 0.36787835 0.0064989519 ;
	setAttr ".tk[444]" -type "float3" 0.040786225 0.36707953 0.0064989519 ;
	setAttr ".tk[445]" -type "float3" 0.040786225 0.35705671 0.0064989519 ;
	setAttr ".tk[446]" -type "float3" 0 0.16534117 0 ;
	setAttr ".tk[447]" -type "float3" 0 -0.01779817 0 ;
	setAttr ".tk[448]" -type "float3" 0 -0.10082829 0 ;
	setAttr ".tk[449]" -type "float3" 0 -0.17872387 0 ;
	setAttr ".tk[450]" -type "float3" 0 -0.25111133 0 ;
	setAttr ".tk[451]" -type "float3" 0 -0.28156653 0 ;
	setAttr ".tk[452]" -type "float3" 0 -0.30282307 0 ;
	setAttr ".tk[453]" -type "float3" 0 -0.30279666 0 ;
	setAttr ".tk[454]" -type "float3" 0 -0.30442482 0 ;
	setAttr ".tk[455]" -type "float3" 0 -0.30671787 0 ;
	setAttr ".tk[456]" -type "float3" 0 -0.31103277 0 ;
	setAttr ".tk[457]" -type "float3" 0 -0.3064906 0 ;
	setAttr ".tk[458]" -type "float3" 0 -0.29878885 0 ;
	setAttr ".tk[459]" -type "float3" 0 -0.28374028 0 ;
	setAttr ".tk[460]" -type "float3" 0 -0.26929492 0 ;
	setAttr ".tk[461]" -type "float3" 0 -0.23493803 0 ;
	setAttr ".tk[462]" -type "float3" 0 -0.073762663 0 ;
	setAttr ".tk[463]" -type "float3" 0.040786225 0.31114206 0.0064989519 ;
	setAttr ".tk[464]" -type "float3" 0.22191441 -0.47082591 -0.32741648 ;
	setAttr ".tk[465]" -type "float3" 0.22346553 -0.4214952 -0.30678675 ;
	setAttr ".tk[466]" -type "float3" 0.22477615 -0.38579011 -0.26531407 ;
	setAttr ".tk[467]" -type "float3" 0.22893567 -0.36981428 -0.20687507 ;
	setAttr ".tk[468]" -type "float3" 0.23069815 -0.34335303 -0.17059267 ;
	setAttr ".tk[469]" -type "float3" 0.22626373 -0.33168074 -0.12024646 ;
	setAttr ".tk[470]" -type "float3" 0.22229971 -0.33964932 0.015880881 ;
	setAttr ".tk[471]" -type "float3" 0.22557406 -0.35882694 0.064449221 ;
	setAttr ".tk[472]" -type "float3" 0.22729927 -0.37450787 0.11835496 ;
	setAttr ".tk[473]" -type "float3" 0.22729141 -0.39795125 0.17360286 ;
	setAttr ".tk[474]" -type "float3" 0.22657689 -0.42235065 0.21556957 ;
	setAttr ".tk[475]" -type "float3" 0.22106518 -0.46757033 0.3278479 ;
	setAttr ".tk[476]" -type "float3" 0.38563344 -0.036824849 0.37360382 ;
	setAttr ".tk[477]" -type "float3" 0.38744044 -0.22664621 0.37494475 ;
	setAttr ".tk[478]" -type "float3" 0.38744044 -0.30428651 0.27890304 ;
	setAttr ".tk[479]" -type "float3" 0.38744044 -0.32770154 0.21487843 ;
	setAttr ".tk[480]" -type "float3" 0.3874408 -0.33298028 0.10626259 ;
	setAttr ".tk[481]" -type "float3" 0.3874408 -0.35310924 0.061839189 ;
	setAttr ".tk[482]" -type "float3" 0.3874408 -0.34496769 0.01622705 ;
	setAttr ".tk[483]" -type "float3" 0.38744044 -0.33715326 -0.093976751 ;
	setAttr ".tk[484]" -type "float3" 0.38744044 -0.34822336 -0.1395725 ;
	setAttr ".tk[485]" -type "float3" 0.38744044 -0.31987303 -0.18418691 ;
	setAttr ".tk[486]" -type "float3" 0.38720766 -0.22972146 -0.25611833 ;
	setAttr ".tk[487]" -type "float3" 0.38718802 -0.14792123 -0.34919652 ;
	setAttr ".tk[488]" -type "float3" 0.3907516 0.0035277291 -0.34580916 ;
	setAttr ".tk[489]" -type "float3" 0.39044052 0.12014353 -0.34199145 ;
createNode groupParts -n "groupParts18";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:476]";
	setAttr ".gi" 29;
createNode polyTweak -n "polyTweak64";
	setAttr ".uopa" yes;
	setAttr -s 423 ".tk";
	setAttr ".tk[0]" -type "float3" 0.17908736 -0.068581 -6.3057117 ;
	setAttr ".tk[1]" -type "float3" 0.12274538 -0.068581 -6.6369286 ;
	setAttr ".tk[2]" -type "float3" -0.072466224 -0.068581 -7.7845359 ;
	setAttr ".tk[3]" -type "float3" 0.17908736 -0.068581 -6.3057117 ;
	setAttr ".tk[4]" -type "float3" 0.12274538 -0.068581 -6.6369286 ;
	setAttr ".tk[5]" -type "float3" -0.070130557 -0.068581 -7.7708011 ;
	setAttr ".tk[6]" -type "float3" 0.17908736 -0.068581 -6.3057117 ;
	setAttr ".tk[7]" -type "float3" 0.12274538 -0.068581 -6.6369286 ;
	setAttr ".tk[8]" -type "float3" -0.068469375 -0.068581 -7.7610316 ;
	setAttr ".tk[9]" -type "float3" 0.060656376 -0.068581 -6.2855659 ;
	setAttr ".tk[10]" -type "float3" 0.0043155029 -0.068581 -6.6167812 ;
	setAttr ".tk[11]" -type "float3" -0.19354962 -0.068581 -7.7799916 ;
	setAttr ".tk[12]" -type "float3" -0.057773978 -0.068581 -6.2654204 ;
	setAttr ".tk[13]" -type "float3" -0.11411533 -0.068581 -6.5966368 ;
	setAttr ".tk[14]" -type "float3" -0.31754881 -0.068581 -7.7925711 ;
	setAttr ".tk[15]" -type "float3" -0.057773978 -0.068581 -6.2654204 ;
	setAttr ".tk[16]" -type "float3" -0.11411533 -0.068581 -6.5966368 ;
	setAttr ".tk[17]" -type "float3" -0.31864059 -0.068581 -7.798996 ;
	setAttr ".tk[18]" -type "float3" -0.057773978 -0.068581 -6.2654204 ;
	setAttr ".tk[19]" -type "float3" -0.11411533 -0.068581 -6.5966368 ;
	setAttr ".tk[20]" -type "float3" -0.31989449 -0.068581 -7.8063688 ;
	setAttr ".tk[21]" -type "float3" 0.060656376 -0.068581 -6.2855659 ;
	setAttr ".tk[22]" -type "float3" 0.0043155029 -0.068581 -6.6167812 ;
	setAttr ".tk[23]" -type "float3" -0.1992663 -0.068581 -7.813591 ;
	setAttr ".tk[24]" -type "float3" -0.35183209 -0.068581 -8.7104626 ;
	setAttr ".tk[25]" -type "float3" -0.33800626 -0.068581 -6.2142453 ;
	setAttr ".tk[26]" -type "float3" -0.45922846 -0.068581 -6.5291557 ;
	setAttr ".tk[27]" -type "float3" -0.72952276 -0.068581 -7.7401314 ;
	setAttr ".tk[28]" -type "float3" -0.33800626 -0.068581 -6.2142453 ;
	setAttr ".tk[29]" -type "float3" -0.45922846 -0.068581 -6.5291557 ;
	setAttr ".tk[30]" -type "float3" -0.72952276 -0.068581 -7.7401314 ;
	setAttr ".tk[31]" -type "float3" -0.33800626 -0.068581 -6.2142453 ;
	setAttr ".tk[32]" -type "float3" -0.45922846 -0.068581 -6.5291557 ;
	setAttr ".tk[33]" -type "float3" -0.72952276 -0.068581 -7.7401314 ;
	setAttr ".tk[34]" -type "float3" -0.451491 -0.068581 -6.1761026 ;
	setAttr ".tk[35]" -type "float3" -0.57271427 -0.068581 -6.4910145 ;
	setAttr ".tk[36]" -type "float3" -0.84300882 -0.068581 -7.7019892 ;
	setAttr ".tk[37]" -type "float3" -0.56497681 -0.068581 -6.1379623 ;
	setAttr ".tk[38]" -type "float3" -0.68619901 -0.068581 -6.4528723 ;
	setAttr ".tk[39]" -type "float3" -0.95592844 -0.068581 -7.6605282 ;
	setAttr ".tk[40]" -type "float3" -0.56497681 -0.068581 -6.1379623 ;
	setAttr ".tk[41]" -type "float3" -0.68619901 -0.068581 -6.4528723 ;
	setAttr ".tk[42]" -type "float3" -0.95629632 -0.068581 -7.6626873 ;
	setAttr ".tk[43]" -type "float3" -0.56497681 -0.068581 -6.1379623 ;
	setAttr ".tk[44]" -type "float3" -0.68619901 -0.068581 -6.4528723 ;
	setAttr ".tk[45]" -type "float3" -0.9564954 -0.068581 -7.663847 ;
	setAttr ".tk[46]" -type "float3" -0.451491 -0.068581 -6.1761026 ;
	setAttr ".tk[47]" -type "float3" -0.57271427 -0.068581 -6.4910145 ;
	setAttr ".tk[48]" -type "float3" -0.84300882 -0.068581 -7.7019892 ;
	setAttr ".tk[49]" -type "float3" -1.079437 -0.068581 -8.5468445 ;
	setAttr ".tk[50]" -type "float3" 0.64574355 -0.068581 -6.3349304 ;
	setAttr ".tk[51]" -type "float3" 0.64723724 -0.068581 -6.6720085 ;
	setAttr ".tk[52]" -type "float3" 0.52140474 -0.068581 -7.7404718 ;
	setAttr ".tk[53]" -type "float3" 0.64574355 -0.068581 -6.3349304 ;
	setAttr ".tk[54]" -type "float3" 0.64723724 -0.068581 -6.6720085 ;
	setAttr ".tk[55]" -type "float3" 0.5239656 -0.068581 -7.7254157 ;
	setAttr ".tk[56]" -type "float3" 0.64574355 -0.068581 -6.3349304 ;
	setAttr ".tk[57]" -type "float3" 0.64723724 -0.068581 -6.6720085 ;
	setAttr ".tk[58]" -type "float3" 0.52536726 -0.068581 -7.7171831 ;
	setAttr ".tk[59]" -type "float3" 0.5259881 -0.068581 -6.3309412 ;
	setAttr ".tk[60]" -type "float3" 0.52748132 -0.068581 -6.6680183 ;
	setAttr ".tk[61]" -type "float3" 0.40670013 -0.068581 -7.7067728 ;
	setAttr ".tk[62]" -type "float3" 0.40623331 -0.068581 -6.3269501 ;
	setAttr ".tk[63]" -type "float3" 0.40772653 -0.068581 -6.6640282 ;
	setAttr ".tk[64]" -type "float3" 0.28585327 -0.068581 -7.7092037 ;
	setAttr ".tk[65]" -type "float3" 0.40623331 -0.068581 -6.3269501 ;
	setAttr ".tk[66]" -type "float3" 0.40772653 -0.068581 -6.6640282 ;
	setAttr ".tk[67]" -type "float3" 0.2844547 -0.068581 -7.7174339 ;
	setAttr ".tk[68]" -type "float3" 0.40623331 -0.068581 -6.3269501 ;
	setAttr ".tk[69]" -type "float3" 0.40772653 -0.068581 -6.6640282 ;
	setAttr ".tk[70]" -type "float3" 0.28189242 -0.068581 -7.7324915 ;
	setAttr ".tk[71]" -type "float3" 0.5259881 -0.068581 -6.3309412 ;
	setAttr ".tk[72]" -type "float3" 0.52748132 -0.068581 -6.6680183 ;
	setAttr ".tk[73]" -type "float3" 0.3986057 -0.068581 -7.7543774 ;
	setAttr ".tk[74]" -type "float3" 0.43276954 -0.068581 -8.0274878 ;
	setAttr ".tk[75]" -type "float3" -0.69651163 -0.068581 -5.8250995 ;
	setAttr ".tk[76]" -type "float3" -0.89935482 -0.068581 -6.0157528 ;
	setAttr ".tk[77]" -type "float3" -1.3550614 -0.068581 -6.8069515 ;
	setAttr ".tk[78]" -type "float3" -0.69651163 -0.068581 -5.8250995 ;
	setAttr ".tk[79]" -type "float3" -0.89935482 -0.068581 -6.0157528 ;
	setAttr ".tk[80]" -type "float3" -1.3527466 -0.068581 -6.7933483 ;
	setAttr ".tk[81]" -type "float3" -0.69651163 -0.068581 -5.8250995 ;
	setAttr ".tk[82]" -type "float3" -0.89935482 -0.068581 -6.0157528 ;
	setAttr ".tk[83]" -type "float3" -1.3517798 -0.068581 -6.7883329 ;
	setAttr ".tk[84]" -type "float3" -0.78512287 -0.068581 -5.7503047 ;
	setAttr ".tk[85]" -type "float3" -0.98796713 -0.068581 -5.9409585 ;
	setAttr ".tk[86]" -type "float3" -1.4404675 -0.068581 -6.7133055 ;
	setAttr ".tk[87]" -type "float3" -0.93152994 -0.068581 -5.6280975 ;
	setAttr ".tk[88]" -type "float3" -1.0765789 -0.068581 -5.8661633 ;
	setAttr ".tk[89]" -type "float3" -1.531845 -0.068581 -6.6554461 ;
	setAttr ".tk[90]" -type "float3" -0.93152994 -0.068581 -5.6280975 ;
	setAttr ".tk[91]" -type "float3" -1.0765789 -0.068581 -5.8661633 ;
	setAttr ".tk[92]" -type "float3" -1.5328139 -0.068581 -6.6604719 ;
	setAttr ".tk[93]" -type "float3" -0.93152994 -0.068581 -5.6280975 ;
	setAttr ".tk[94]" -type "float3" -1.0765789 -0.068581 -5.8661633 ;
	setAttr ".tk[95]" -type "float3" -1.5349621 -0.068581 -6.6730976 ;
	setAttr ".tk[96]" -type "float3" -0.78512287 -0.068581 -5.7503047 ;
	setAttr ".tk[97]" -type "float3" -0.98796713 -0.068581 -5.9409585 ;
	setAttr ".tk[98]" -type "float3" -1.4474407 -0.068581 -6.7543011 ;
	setAttr ".tk[99]" -type "float3" -1.792648 -0.068581 -7.0039082 ;
	setAttr ".tk[100]" -type "float3" 0.26696819 -0.068581 -4.7791295 ;
	setAttr ".tk[101]" -type "float3" 0.20948465 -0.068581 -4.7693496 ;
	setAttr ".tk[102]" -type "float3" 0.15200566 -0.068581 -4.7595739 ;
	setAttr ".tk[103]" -type "float3" 0.11614834 -0.068581 -4.7534752 ;
	setAttr ".tk[104]" -type "float3" 0.17363234 -0.068581 -4.7632523 ;
	setAttr ".tk[105]" -type "float3" 0.23110993 -0.068581 -4.7730289 ;
	setAttr ".tk[106]" -type "float3" -0.019562207 -0.068581 -4.7268815 ;
	setAttr ".tk[107]" -type "float3" -0.073041886 -0.068581 -4.6989479 ;
	setAttr ".tk[108]" -type "float3" -0.12652072 -0.068581 -4.6710129 ;
	setAttr ".tk[109]" -type "float3" -0.12652072 -0.068581 -4.6710129 ;
	setAttr ".tk[110]" -type "float3" -0.073041886 -0.068581 -4.6989479 ;
	setAttr ".tk[111]" -type "float3" -0.019562207 -0.068581 -4.7268815 ;
	setAttr ".tk[112]" -type "float3" 0.46187502 -0.068581 -4.7621231 ;
	setAttr ".tk[113]" -type "float3" 0.49062949 -0.068581 -4.7670135 ;
	setAttr ".tk[114]" -type "float3" 0.46187502 -0.068581 -4.7621231 ;
	setAttr ".tk[115]" -type "float3" 0.40235758 -0.068581 -4.7683792 ;
	setAttr ".tk[116]" -type "float3" 0.34283972 -0.068581 -4.7746353 ;
	setAttr ".tk[117]" -type "float3" 0.34283972 -0.068581 -4.7746353 ;
	setAttr ".tk[118]" -type "float3" 0.40235758 -0.068581 -4.7683792 ;
	setAttr ".tk[119]" -type "float3" -0.16564545 -0.068581 -4.3738708 ;
	setAttr ".tk[120]" -type "float3" -0.20357452 -0.068581 -4.3076954 ;
	setAttr ".tk[121]" -type "float3" -0.24149983 -0.068581 -4.2415233 ;
	setAttr ".tk[122]" -type "float3" -0.24149983 -0.068581 -4.2415233 ;
	setAttr ".tk[123]" -type "float3" -0.24149983 -0.068581 -4.2415233 ;
	setAttr ".tk[124]" -type "float3" -0.20357452 -0.068581 -4.3076954 ;
	setAttr ".tk[125]" -type "float3" -0.16564545 -0.068581 -4.3738708 ;
	setAttr ".tk[126]" -type "float3" -0.1686748 -0.068581 -4.9879436 ;
	setAttr ".tk[127]" -type "float3" -0.23879898 -0.068581 -4.9571786 ;
	setAttr ".tk[128]" -type "float3" -0.3035652 -0.068581 -4.655674 ;
	setAttr ".tk[129]" -type "float3" -0.35555142 -0.068581 -4.5871081 ;
	setAttr ".tk[130]" -type "float3" -0.4075408 -0.068581 -4.5185432 ;
	setAttr ".tk[131]" -type "float3" -0.4075408 -0.068581 -4.5185432 ;
	setAttr ".tk[132]" -type "float3" -0.4075408 -0.068581 -4.5185432 ;
	setAttr ".tk[133]" -type "float3" -0.35555142 -0.068581 -4.5871081 ;
	setAttr ".tk[134]" -type "float3" -0.3035652 -0.068581 -4.655674 ;
	setAttr ".tk[135]" -type "float3" -0.23879898 -0.068581 -4.9571786 ;
	setAttr ".tk[136]" -type "float3" -0.1686748 -0.068581 -4.9879436 ;
	setAttr ".tk[137]" -type "float3" -0.098550528 -0.068581 -5.0187092 ;
	setAttr ".tk[138]" -type "float3" 0.077260509 -0.068581 -5.0521221 ;
	setAttr ".tk[139]" -type "float3" 0.15164636 -0.068581 -5.064774 ;
	setAttr ".tk[140]" -type "float3" 0.22603746 -0.068581 -5.0774298 ;
	setAttr ".tk[141]" -type "float3" 0.36978483 -0.068581 -5.0844817 ;
	setAttr ".tk[142]" -type "float3" 0.44601542 -0.068581 -5.081069 ;
	setAttr ".tk[143]" -type "float3" 0.5222435 -0.068581 -5.0776553 ;
	setAttr ".tk[144]" -type "float3" 0.5222435 -0.068581 -5.0776553 ;
	setAttr ".tk[145]" -type "float3" 0.5222435 -0.068581 -5.0776553 ;
	setAttr ".tk[146]" -type "float3" 0.44601542 -0.068581 -5.081069 ;
	setAttr ".tk[147]" -type "float3" 0.36978483 -0.068581 -5.0844817 ;
	setAttr ".tk[148]" -type "float3" 0.22603746 -0.068581 -5.0774298 ;
	setAttr ".tk[149]" -type "float3" 0.15164636 -0.068581 -5.064774 ;
	setAttr ".tk[150]" -type "float3" 0.077260509 -0.068581 -5.0521221 ;
	setAttr ".tk[151]" -type "float3" -0.098550528 -0.068581 -5.0187092 ;
	setAttr ".tk[152]" -type "float3" -0.32202947 -0.068581 -5.4195824 ;
	setAttr ".tk[153]" -type "float3" -0.42237097 -0.068581 -5.383677 ;
	setAttr ".tk[154]" -type "float3" -0.43369949 -0.068581 -5.0912604 ;
	setAttr ".tk[155]" -type "float3" -0.51120842 -0.068581 -5.0183549 ;
	setAttr ".tk[156]" -type "float3" -0.68868792 -0.068581 -4.9284415 ;
	setAttr ".tk[157]" -type "float3" -0.68868792 -0.068581 -4.9284415 ;
	setAttr ".tk[158]" -type "float3" -0.68868792 -0.068581 -4.9284415 ;
	setAttr ".tk[159]" -type "float3" -0.61117679 -0.068581 -5.001349 ;
	setAttr ".tk[160]" -type "float3" -0.5336659 -0.068581 -5.0742569 ;
	setAttr ".tk[161]" -type "float3" -0.42237097 -0.068581 -5.383677 ;
	setAttr ".tk[162]" -type "float3" -0.32202947 -0.068581 -5.4195824 ;
	setAttr ".tk[163]" -type "float3" -0.22168563 -0.068581 -5.4554887 ;
	setAttr ".tk[164]" -type "float3" 0.02689416 -0.068581 -5.5012779 ;
	setAttr ".tk[165]" -type "float3" 0.1319754 -0.068581 -5.5191526 ;
	setAttr ".tk[166]" -type "float3" 0.2370574 -0.068581 -5.5370288 ;
	setAttr ".tk[167]" -type "float3" 0.43892372 -0.068581 -5.5539665 ;
	setAttr ".tk[168]" -type "float3" 0.54548573 -0.068581 -5.5557146 ;
	setAttr ".tk[169]" -type "float3" 0.65204996 -0.068581 -5.5574594 ;
	setAttr ".tk[170]" -type "float3" 0.65204996 -0.068581 -5.5574594 ;
	setAttr ".tk[171]" -type "float3" 0.65204996 -0.068581 -5.5574594 ;
	setAttr ".tk[172]" -type "float3" 0.54548573 -0.068581 -5.5557146 ;
	setAttr ".tk[173]" -type "float3" 0.43892372 -0.068581 -5.5539665 ;
	setAttr ".tk[174]" -type "float3" 0.2370574 -0.068581 -5.5370288 ;
	setAttr ".tk[175]" -type "float3" 0.1319754 -0.068581 -5.5191526 ;
	setAttr ".tk[176]" -type "float3" 0.02689416 -0.068581 -5.5012779 ;
	setAttr ".tk[177]" -type "float3" -0.22168563 -0.068581 -5.4554887 ;
	setAttr ".tk[178]" -type "float3" 0.52294159 -0.06858094 -3.2743278 ;
	setAttr ".tk[179]" -type "float3" 0.46958333 -0.06858106 -3.2652512 ;
	setAttr ".tk[180]" -type "float3" 0.40797925 -0.068581 -3.2547717 ;
	setAttr ".tk[181]" -type "float3" 0.37212372 -0.06858094 -3.2486768 ;
	setAttr ".tk[182]" -type "float3" 0.43091595 -0.068581119 -3.2586713 ;
	setAttr ".tk[183]" -type "float3" 0.48708493 -0.06858094 -3.2682295 ;
	setAttr ".tk[184]" -type "float3" 0.23347516 -0.068581119 -3.2250896 ;
	setAttr ".tk[185]" -type "float3" 0.17142136 -0.068581119 -3.2145324 ;
	setAttr ".tk[186]" -type "float3" 0.11086272 -0.068580881 -3.2042308 ;
	setAttr ".tk[187]" -type "float3" 0.056239732 -0.068581 -3.1949363 ;
	setAttr ".tk[188]" -type "float3" 0.17380698 -0.068581 -3.2149401 ;
	setAttr ".tk[189]" -type "float3" 0.23530658 -0.06858106 -3.2253976 ;
	setAttr ".tk[190]" -type "float3" 0.73826522 -0.068581179 -3.3109536 ;
	setAttr ".tk[191]" -type "float3" 0.81323403 -0.068581 -3.3237066 ;
	setAttr ".tk[192]" -type "float3" 0.7844786 -0.06858106 -3.3188176 ;
	setAttr ".tk[193]" -type "float3" 0.65274853 -0.06858094 -3.2964101 ;
	setAttr ".tk[194]" -type "float3" 0.59593678 -0.068581179 -3.2867432 ;
	setAttr ".tk[195]" -type "float3" 0.59592986 -0.06858106 -3.2867422 ;
	setAttr ".tk[196]" -type "float3" 0.65274233 -0.068581179 -3.2964029 ;
	setAttr ".tk[197]" -type "float3" 0.018835373 -0.068581179 -3.1885791 ;
	setAttr ".tk[198]" -type "float3" -0.046740435 -0.068581179 -3.1774235 ;
	setAttr ".tk[199]" -type "float3" -0.090110987 -0.06858106 -3.1700482 ;
	setAttr ".tk[200]" -type "float3" -0.12776062 -0.06858106 -3.1636405 ;
	setAttr ".tk[201]" -type "float3" -0.19929652 -0.068581179 -3.1514702 ;
	setAttr ".tk[202]" -type "float3" -0.094074458 -0.068581 -3.1693721 ;
	setAttr ".tk[203]" -type "float3" -0.016986929 -0.068580881 -3.1824827 ;
	setAttr ".tk[204]" -type "float3" -0.50544721 -0.068581 -5.8800817 ;
	setAttr ".tk[205]" -type "float3" -0.40547669 -0.068581 -5.9159231 ;
	setAttr ".tk[206]" -type "float3" -0.30550522 -0.068581 -5.9517655 ;
	setAttr ".tk[207]" -type "float3" -0.057817608 -0.068581 -5.9974041 ;
	setAttr ".tk[208]" -type "float3" 0.046885796 -0.068581 -6.0152159 ;
	setAttr ".tk[209]" -type "float3" 0.15158986 -0.068581 -6.0330262 ;
	setAttr ".tk[210]" -type "float3" 0.35274351 -0.068581 -6.0498447 ;
	setAttr ".tk[211]" -type "float3" 0.4589327 -0.068581 -6.051527 ;
	setAttr ".tk[212]" -type "float3" 0.56512237 -0.068581 -6.0532093 ;
	setAttr ".tk[213]" -type "float3" 0.56512237 -0.068581 -6.0532093 ;
	setAttr ".tk[214]" -type "float3" 0.56512237 -0.068581 -6.0532093 ;
	setAttr ".tk[215]" -type "float3" 0.4589327 -0.068581 -6.051527 ;
	setAttr ".tk[216]" -type "float3" 0.35274351 -0.068581 -6.0498447 ;
	setAttr ".tk[217]" -type "float3" 0.15158986 -0.068581 -6.0330262 ;
	setAttr ".tk[218]" -type "float3" 0.046885796 -0.068581 -6.0152159 ;
	setAttr ".tk[219]" -type "float3" -0.057817608 -0.068581 -5.9974041 ;
	setAttr ".tk[220]" -type "float3" -0.30550522 -0.068581 -5.9517655 ;
	setAttr ".tk[221]" -type "float3" -0.40547669 -0.068581 -5.9159231 ;
	setAttr ".tk[222]" -type "float3" -0.50544721 -0.068581 -5.8800817 ;
	setAttr ".tk[223]" -type "float3" -0.51620448 -0.068581 -5.5877624 ;
	setAttr ".tk[224]" -type "float3" -0.59340054 -0.068581 -5.5149093 ;
	setAttr ".tk[225]" -type "float3" -0.80353105 -0.068581 -5.3947983 ;
	setAttr ".tk[226]" -type "float3" -0.80353105 -0.068581 -5.3947983 ;
	setAttr ".tk[227]" -type "float3" -0.80353105 -0.068581 -5.3947983 ;
	setAttr ".tk[228]" -type "float3" -0.69336867 -0.068581 -5.4979048 ;
	setAttr ".tk[229]" -type "float3" -0.61617172 -0.068581 -5.5707583 ;
	setAttr ".tk[230]" -type "float3" 1.1204377 -0.06858106 -0.36495411 ;
	setAttr ".tk[231]" -type "float3" 1.023764 -0.06858106 -0.34850991 ;
	setAttr ".tk[232]" -type "float3" 0.91214931 -0.06858106 -0.32952321 ;
	setAttr ".tk[233]" -type "float3" 0.84475988 -0.06858106 -0.28204772 ;
	setAttr ".tk[234]" -type "float3" 0.95128071 -0.068581119 -0.3001661 ;
	setAttr ".tk[235]" -type "float3" 1.0530485 -0.06858106 -0.31748021 ;
	setAttr ".tk[236]" -type "float3" 0.60025239 -0.06858106 -0.27646971 ;
	setAttr ".tk[237]" -type "float3" 0.49771792 -0.06858106 -0.25902602 ;
	setAttr ".tk[238]" -type "float3" 0.39518416 -0.06858106 -0.24158618 ;
	setAttr ".tk[239]" -type "float3" 0.39275718 -0.06858106 -0.20516074 ;
	setAttr ".tk[240]" -type "float3" 0.4952901 -0.06858106 -0.22260155 ;
	setAttr ".tk[241]" -type "float3" 0.59782457 -0.06858106 -0.24004313 ;
	setAttr ".tk[242]" -type "float3" 1.5081397 -0.06858106 -0.39489138 ;
	setAttr ".tk[243]" -type "float3" 1.6461419 -0.06858106 -0.47829208 ;
	setAttr ".tk[244]" -type "float3" 1.5942956 -0.06858106 -0.44556057 ;
	setAttr ".tk[245]" -type "float3" 1.3556186 -0.068581119 -0.40496075 ;
	setAttr ".tk[246]" -type "float3" 1.2526892 -0.06858106 -0.38745129 ;
	setAttr ".tk[247]" -type "float3" 1.2502621 -0.06858106 -0.35102379 ;
	setAttr ".tk[248]" -type "float3" 1.3531908 -0.06858106 -0.36853468 ;
	setAttr ".tk[249]" -type "float3" 0.23610063 -0.06858106 -0.21452393 ;
	setAttr ".tk[250]" -type "float3" 0.12810431 -0.06858106 -0.19615376 ;
	setAttr ".tk[251]" -type "float3" 0.056753643 -0.06858106 -0.1840173 ;
	setAttr ".tk[252]" -type "float3" -0.013813339 -0.06858106 -0.19592345 ;
	setAttr ".tk[253]" -type "float3" -0.020011984 -0.06858106 -0.19487059 ;
	setAttr ".tk[254]" -type "float3" 0.047814198 -0.06858106 -0.20640671 ;
	setAttr ".tk[255]" -type "float3" 0.18592794 -0.06858106 -0.1561048 ;
	setAttr ".tk[256]" -type "float3" 1.1355058 -0.06858106 -0.066123247 ;
	setAttr ".tk[257]" -type "float3" 1.0523683 -0.06858106 -0.051982164 ;
	setAttr ".tk[258]" -type "float3" 0.95638168 -0.06858106 -0.035652861 ;
	setAttr ".tk[259]" -type "float3" 0.8967818 -0.06858106 0.090956405 ;
	setAttr ".tk[260]" -type "float3" 0.98838508 -0.06858106 0.075377658 ;
	setAttr ".tk[261]" -type "float3" 1.0759054 -0.06858106 0.060489371 ;
	setAttr ".tk[262]" -type "float3" 0.68815303 -0.068581119 0.0099742254 ;
	setAttr ".tk[263]" -type "float3" 0.59997487 -0.06858106 0.024974093 ;
	setAttr ".tk[264]" -type "float3" 0.51179838 -0.06858106 0.039972529 ;
	setAttr ".tk[265]" -type "float3" 0.50371289 -0.06858106 0.15782234 ;
	setAttr ".tk[266]" -type "float3" 0.59251046 -0.06858106 0.14271662 ;
	setAttr ".tk[267]" -type "float3" 0.68203235 -0.06858106 0.12748691 ;
	setAttr ".tk[268]" -type "float3" 1.4849888 -0.06858106 -0.0090978006 ;
	setAttr ".tk[269]" -type "float3" 1.5876745 -0.06858106 -0.15691257 ;
	setAttr ".tk[270]" -type "float3" 1.5430177 -0.06858106 -0.13544154 ;
	setAttr ".tk[271]" -type "float3" 1.3377589 -0.06858106 -0.10052651 ;
	setAttr ".tk[272]" -type "float3" 1.2492408 -0.06858106 -0.085468948 ;
	setAttr ".tk[273]" -type "float3" 1.2502638 -0.06858106 0.030829653 ;
	setAttr ".tk[274]" -type "float3" 1.3449463 -0.06858106 0.014723048 ;
	setAttr ".tk[275]" -type "float3" 0.37498975 -0.06858106 0.06324549 ;
	setAttr ".tk[276]" -type "float3" 0.28469706 -0.068581119 0.078603461 ;
	setAttr ".tk[277]" -type "float3" 0.22850151 -0.068581119 0.088164046 ;
	setAttr ".tk[278]" -type "float3" 0.1857353 -0.068581119 0.095438689 ;
	setAttr ".tk[279]" -type "float3" 0.19213386 -0.068581119 0.094349101 ;
	setAttr ".tk[280]" -type "float3" 0.2395037 -0.06858106 0.086291507 ;
	setAttr ".tk[281]" -type "float3" 0.33589983 -0.06858106 0.1863668 ;
	setAttr ".tk[282]" -type "float3" 1.4901161e-008 7.4505806e-009 -2.3841858e-007 ;
	setAttr ".tk[283]" -type "float3" -1.4901161e-008 0 4.7683716e-007 ;
	setAttr ".tk[284]" -type "float3" -1.4901161e-008 7.4505806e-009 7.1525574e-007 ;
	setAttr ".tk[285]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[286]" -type "float3" -1.4901161e-008 0 -2.3841858e-007 ;
	setAttr ".tk[287]" -type "float3" -4.4703484e-008 0 0 ;
	setAttr ".tk[288]" -type "float3" -4.4703484e-008 0 -4.7683716e-007 ;
	setAttr ".tk[289]" -type "float3" -1.4901161e-008 7.4505806e-009 4.7683716e-007 ;
	setAttr ".tk[290]" -type "float3" -4.4703484e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[291]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[292]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[293]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[294]" -type "float3" -4.4703484e-008 7.4505806e-009 0 ;
	setAttr ".tk[295]" -type "float3" -7.4505806e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[296]" -type "float3" 1.4901161e-008 0 2.3841858e-007 ;
	setAttr ".tk[297]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[298]" -type "float3" -4.4703484e-008 7.4505806e-009 -4.7683716e-007 ;
	setAttr ".tk[299]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[300]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[301]" -type "float3" -4.4703484e-008 7.4505806e-009 4.7683716e-007 ;
	setAttr ".tk[302]" -type "float3" -4.4703484e-008 0 2.3841858e-007 ;
	setAttr ".tk[303]" -type "float3" -4.4703484e-008 0 -4.7683716e-007 ;
	setAttr ".tk[304]" -type "float3" -4.4703484e-008 0 -2.3841858e-007 ;
	setAttr ".tk[305]" -type "float3" -4.4703484e-008 0 -2.3841858e-007 ;
	setAttr ".tk[306]" -type "float3" -1.4901161e-008 0 2.3841858e-007 ;
	setAttr ".tk[307]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[308]" -type "float3" -4.4703484e-008 0 2.3841858e-007 ;
	setAttr ".tk[309]" -type "float3" -4.4703484e-008 7.4505806e-009 0 ;
	setAttr ".tk[310]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[311]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[312]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[313]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[314]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[315]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[316]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[317]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[318]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[319]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[320]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[321]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[322]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[323]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[324]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[325]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[326]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[327]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[328]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[329]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[330]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[331]" -type "float3" -1.4901161e-008 7.4505806e-009 -2.3841858e-007 ;
	setAttr ".tk[332]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[333]" -type "float3" -1.4901161e-008 7.4505806e-009 0 ;
	setAttr ".tk[360]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[361]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[362]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[363]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[364]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[365]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[366]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[367]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[368]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[369]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[370]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[371]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[372]" -type "float3" -2.1215813 0.18272927 1.5473547 ;
	setAttr ".tk[373]" -type "float3" -2.1215813 0.18272927 1.5473547 ;
	setAttr ".tk[374]" -type "float3" -2.4679923 1.687025 1.3557603 ;
	setAttr ".tk[375]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[376]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[377]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[378]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[379]" -type "float3" -2.3291664 1.5603038 -0.37256202 ;
	setAttr ".tk[380]" -type "float3" -2.2574809 1.494869 -1.2650121 ;
	setAttr ".tk[381]" -type "float3" -2.2552218 1.4928071 -1.2931376 ;
	setAttr ".tk[382]" -type "float3" -1.8707678 -0.046213463 -1.5751489 ;
	setAttr ".tk[383]" -type "float3" -1.8707678 -0.046213463 -1.5751489 ;
	setAttr ".tk[384]" -type "float3" -1.8707678 -0.046213463 -1.5751489 ;
	setAttr ".tk[385]" -type "float3" -1.6860554 -1.2109842 -0.098089434 ;
	setAttr ".tk[386]" -type "float3" -0.089400023 -0.068581119 -1.6695515 ;
	setAttr ".tk[387]" -type "float3" -0.23364371 -0.068581119 -1.6450192 ;
	setAttr ".tk[388]" -type "float3" -0.14123753 -0.068581119 -1.6607348 ;
	setAttr ".tk[389]" -type "float3" -0.082332104 -0.068581119 -1.6468502 ;
	setAttr ".tk[390]" -type "float3" -0.019604169 -0.068581119 -1.6575161 ;
	setAttr ".tk[391]" -type "float3" 0.075286046 -0.068581119 -1.6736571 ;
	setAttr ".tk[392]" -type "float3" 0.21223421 -0.06858106 -1.696952 ;
	setAttr ".tk[393]" -type "float3" 0.30127537 -0.068581119 -1.7121021 ;
	setAttr ".tk[394]" -type "float3" 0.39124036 -0.068581119 -1.7274045 ;
	setAttr ".tk[395]" -type "float3" 0.6560719 -0.068581 -1.7724522 ;
	setAttr ".tk[396]" -type "float3" 0.75031656 -0.06858106 -1.7884804 ;
	setAttr ".tk[397]" -type "float3" 0.83195227 -0.068581119 -1.8023711 ;
	setAttr ".tk[398]" -type "float3" 0.94362724 -0.06858106 -1.8213698 ;
	setAttr ".tk[399]" -type "float3" 1.0305463 -0.06858106 -1.8361503 ;
	setAttr ".tk[400]" -type "float3" 1.2320834 -0.06858106 -1.870433 ;
	setAttr ".tk[401]" -type "float3" 1.4758855 -0.068581119 -1.9358169 ;
	setAttr ".tk[402]" -type "float3" 1.1611334 -0.06858106 -1.8822738 ;
	setAttr ".tk[403]" -type "float3" 1.030296 -0.068581119 -1.8600198 ;
	setAttr ".tk[404]" -type "float3" 0.94337761 -0.068581119 -1.845234 ;
	setAttr ".tk[405]" -type "float3" 0.77684945 -0.068581119 -1.816908 ;
	setAttr ".tk[406]" -type "float3" 0.69091415 -0.06858106 -1.8022891 ;
	setAttr ".tk[407]" -type "float3" 0.60096478 -0.068581119 -1.7869884 ;
	setAttr ".tk[408]" -type "float3" 0.39212275 -0.068581 -1.7514638 ;
	setAttr ".tk[409]" -type "float3" 0.30249953 -0.068581119 -1.7362207 ;
	setAttr ".tk[410]" -type "float3" 0.1446787 -0.06858106 -1.7093712 ;
	setAttr ".tk[411]" -type "float3" 0.028779812 -0.068581119 -1.6896602 ;
	setAttr ".tk[420]" -type "float3" 0 0 2.3841858e-007 ;
	setAttr ".tk[421]" -type "float3" 0 0 2.3841858e-007 ;
	setAttr ".tk[422]" -type "float3" 0 0 2.3841858e-007 ;
	setAttr ".tk[423]" -type "float3" 0 0 2.3841858e-007 ;
	setAttr ".tk[424]" -type "float3" 0 0 2.3841858e-007 ;
	setAttr ".tk[438]" -type "float3" -1.3411045e-007 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[439]" -type "float3" -4.4703484e-008 7.4505806e-009 4.7683716e-007 ;
	setAttr ".tk[440]" -type "float3" -1.4901161e-008 7.4505806e-009 -2.3841858e-007 ;
	setAttr ".tk[441]" -type "float3" -7.4505806e-008 0 -2.3841858e-007 ;
	setAttr ".tk[442]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[443]" -type "float3" -1.4901161e-008 0 4.7683716e-007 ;
	setAttr ".tk[444]" -type "float3" -1.4901161e-008 0 0 ;
	setAttr ".tk[445]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[446]" -type "float3" -1.4901161e-008 0 2.3841858e-007 ;
	setAttr ".tk[447]" -type "float3" -4.4703484e-008 0 2.3841858e-007 ;
	setAttr ".tk[448]" -type "float3" -4.4703484e-008 0 -4.7683716e-007 ;
	setAttr ".tk[449]" -type "float3" -1.4901161e-008 0 -2.3841858e-007 ;
	setAttr ".tk[450]" -type "float3" -1.4901161e-008 0 2.3841858e-007 ;
	setAttr ".tk[451]" -type "float3" -4.4703484e-008 1.4901161e-008 2.3841858e-007 ;
	setAttr ".tk[452]" -type "float3" -4.4703484e-008 1.4901161e-008 -2.3841858e-007 ;
	setAttr ".tk[453]" -type "float3" -4.4703484e-008 1.4901161e-008 -4.7683716e-007 ;
	setAttr ".tk[454]" -type "float3" 1.4901161e-008 0 -4.7683716e-007 ;
	setAttr ".tk[455]" -type "float3" -1.4901161e-008 0 2.3841858e-007 ;
	setAttr ".tk[456]" -type "float3" 4.4703484e-008 0 2.3841858e-007 ;
	setAttr ".tk[457]" -type "float3" 1.4901161e-008 7.4505806e-009 -2.3841858e-007 ;
	setAttr ".tk[458]" -type "float3" -1.4901161e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[459]" -type "float3" -4.4703484e-008 0 -2.3841858e-007 ;
	setAttr ".tk[460]" -type "float3" -4.4703484e-008 7.4505806e-009 2.3841858e-007 ;
	setAttr ".tk[461]" -type "float3" 1.4901161e-008 0 -4.7683716e-007 ;
	setAttr ".tk[462]" -type "float3" -1.3411045e-007 7.4505806e-009 -4.7683716e-007 ;
	setAttr ".tk[463]" -type "float3" 7.4505806e-008 7.4505806e-009 0 ;
	setAttr ".tk[479]" -type "float3" -0.12052696 -0.50596756 -0.019204987 ;
	setAttr ".tk[480]" -type "float3" -0.12052696 -0.50596756 -0.019204987 ;
	setAttr ".tk[481]" -type "float3" -0.074271552 -0.3117891 -0.011834564 ;
	setAttr ".tk[482]" -type "float3" -0.12052696 -0.50596756 -0.019204987 ;
	setAttr ".tk[483]" -type "float3" -0.12052696 -0.50596756 -0.019204987 ;
	setAttr ".tk[484]" -type "float3" 0.045965582 0.19296177 0.0073242397 ;
createNode deleteComponent -n "deleteComponent46";
	setAttr ".dc" -type "componentList" 7 "f[346:347]" "f[350:351]" "f[356:357]" "f[360]" "f[367]" "f[369]" "f[371]";
createNode polyExtrudeEdge -n "polyExtrudeEdge10";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 17 "e[655]" "e[657]" "e[665]" "e[667]" "e[679]" "e[681]" "e[688]" "e[700]" "e[702]" "e[704:706]" "e[712:713]" "e[722]" "e[724:725]" "e[730:731]" "e[743]" "e[745]" "e[747]";
	setAttr ".ix" -type "matrix" 0.010492730057573431 -0.038497038215048969 0.0037548425748413624 0
		 -0.032767495106127892 -0.0091733546043733065 -0.0024838596472157937 0 0.0032453433812732551 -0.0024196606445113706 -0.033876861095411243 0
		 0.95119091341071682 -0.2204665938170535 1.0141817164616691 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -0.21763434454596176 0 0 ;
	setAttr ".pvt" -type "float3" 0.20399293 0.95852751 0.91792023 ;
	setAttr ".rs" 45844;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.38731670655346628 0.87240297813430068 0.81004600688363915 ;
	setAttr ".cbx" -type "double3" 0.47459984184262216 1.0420582618419056 1.0302301543452743 ;
createNode groupParts -n "groupParts19";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:488]";
	setAttr ".gi" 30;
createNode polyExtrudeEdge -n "polyExtrudeEdge11";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 16 "e[958]" "e[960]" "e[963]" "e[965]" "e[968]" "e[970]" "e[973:976]" "e[979]" "e[981]" "e[984]" "e[986]" "e[988]" "e[990]" "e[992]" "e[994]" "e[996:999]";
	setAttr ".ix" -type "matrix" 0.010492730057573431 -0.038497038215048969 0.0037548425748413624 0
		 -0.032767495106127892 -0.0091733546043733065 -0.0024838596472157937 0 0.0032453433812732551 -0.0024196606445113706 -0.033876861095411243 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" -0.075552555165002783 0 0 ;
	setAttr ".pvt" -type "float3" 0.15747871 0.85947716 0.96047473 ;
	setAttr ".rs" 57652;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.20155394747517308 0.76298440043167748 0.85042492475900533 ;
	setAttr ".cbx" -type "double3" 0.28915488351141916 0.95204439907483485 1.0770913305693099 ;
createNode polyTweak -n "polyTweak65";
	setAttr ".uopa" yes;
	setAttr -s 52 ".tk";
	setAttr ".tk[347]" -type "float3" 0 0 1.7315774 ;
	setAttr ".tk[348]" -type "float3" 0 0 1.9024559 ;
	setAttr ".tk[354]" -type "float3" 0 0 -1.7349067 ;
	setAttr ".tk[355]" -type "float3" 0 0 -1.7273909 ;
	setAttr ".tk[360]" -type "float3" -2.1781871 -0.71620399 -0.18891346 ;
	setAttr ".tk[361]" -type "float3" -2.1320739 -0.70104146 -0.18491408 ;
	setAttr ".tk[362]" -type "float3" -2.0822635 -0.68466353 -0.18059407 ;
	setAttr ".tk[363]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[364]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[365]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[366]" -type "float3" -1.9354798 -0.63640028 -0.16786365 ;
	setAttr ".tk[367]" -type "float3" -1.8075095 -0.59432286 -0.15676484 ;
	setAttr ".tk[368]" -type "float3" -1.6034472 -0.52722555 -0.13906656 ;
	setAttr ".tk[369]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[370]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[371]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[372]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[373]" -type "float3" -1.5010564 -0.49355873 1.5957742 ;
	setAttr ".tk[374]" -type "float3" -1.5010564 -0.49355873 1.5731852 ;
	setAttr ".tk[375]" -type "float3" -2.0161672 -0.66293091 -0.17486165 ;
	setAttr ".tk[376]" -type "float3" -2.1557541 -0.70882803 -0.18696795 ;
	setAttr ".tk[377]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[378]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[379]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[380]" -type "float3" -1.5010564 -0.49355873 -2.004565 ;
	setAttr ".tk[381]" -type "float3" -1.5010564 -0.49355873 -1.9434017 ;
	setAttr ".tk[382]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[383]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[384]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[385]" -type "float3" -1.5010564 -0.49355873 -0.13018624 ;
	setAttr ".tk[490]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[491]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[492]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[493]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[494]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[495]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[496]" -type "float3" 0.10721067 -3.7424433 0.38423362 ;
	setAttr ".tk[497]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[498]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[499]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
	setAttr ".tk[500]" -type "float3" 0.10721067 -3.7424433 0.1861809 ;
	setAttr ".tk[501]" -type "float3" -0.56991893 -3.9650888 0.22755262 ;
	setAttr ".tk[502]" -type "float3" -0.5238058 -3.9499261 0.231552 ;
	setAttr ".tk[503]" -type "float3" -0.47399551 -3.9335487 0.23587203 ;
	setAttr ".tk[504]" -type "float3" -0.3272126 -3.8852849 0.24860248 ;
	setAttr ".tk[505]" -type "float3" -0.19924252 -3.8432078 0.25970131 ;
	setAttr ".tk[506]" -type "float3" 0.004819978 -3.7761104 0.2773996 ;
	setAttr ".tk[507]" -type "float3" 0.10721067 -3.7424433 0.37752959 ;
	setAttr ".tk[508]" -type "float3" -0.40789983 -3.9118156 0.24160451 ;
	setAttr ".tk[509]" -type "float3" -0.5474866 -3.9577129 0.22949815 ;
	setAttr ".tk[510]" -type "float3" 0.10721067 -3.7424433 0.18272297 ;
	setAttr ".tk[511]" -type "float3" 0.10721067 -3.7424433 0.28627989 ;
createNode groupParts -n "groupParts20";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:510]";
createNode polyTweak -n "polyTweak66";
	setAttr ".uopa" yes;
	setAttr -s 4 ".tk";
	setAttr ".tk[356]" -type "float3" 0.061826605 -0.056435395 -0.76971096 ;
	setAttr ".tk[357]" -type "float3" 0.03701387 -0.033786293 -0.46080449 ;
	setAttr ".tk[382]" -type "float3" 0.055409212 -0.050577585 -0.68981749 ;
	setAttr ".tk[383]" -type "float3" 0.029508565 -0.026935445 -0.36736712 ;
createNode deleteComponent -n "deleteComponent47";
	setAttr ".dc" -type "componentList" 1 "e[715]";
createNode deleteComponent -n "deleteComponent48";
	setAttr ".dc" -type "componentList" 1 "e[708]";
createNode deleteComponent -n "deleteComponent49";
	setAttr ".dc" -type "componentList" 1 "e[725]";
createNode deleteComponent -n "deleteComponent50";
	setAttr ".dc" -type "componentList" 1 "vtx[370]";
createNode deleteComponent -n "deleteComponent51";
	setAttr ".dc" -type "componentList" 1 "vtx[364]";
createNode deleteComponent -n "deleteComponent52";
	setAttr ".dc" -type "componentList" 1 "vtx[376]";
createNode polyTweak -n "polyTweak67";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk";
	setAttr ".tk[364]" -type "float3" -0.055152059 0.087232925 0.54675978 ;
	setAttr ".tk[368]" -type "float3" -0.017779617 0.28537235 -0.79902065 ;
	setAttr ".tk[369]" -type "float3" 0.011097276 0.064199984 -0.41995206 ;
	setAttr ".tk[370]" -type "float3" 0.040389106 -0.29483882 0.47519058 ;
	setAttr ".tk[375]" -type "float3" -0.23832107 0.64031935 1.3641496 ;
	setAttr ".tk[382]" -type "float3" -0.056911238 0.52468455 -1.0837073 ;
createNode polySplit -n "polySplit38";
	setAttr -s 2 ".e[0:1]"  1 1;
	setAttr -s 2 ".d[0:1]"  -2147482942 -2147482939;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit39";
	setAttr -s 3 ".e[0:2]"  1 0.59396303 1;
	setAttr -s 3 ".d[0:2]"  -2147482919 -2147482610 -2147482931;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace27";
	setAttr ".ics" -type "componentList" 4 "f[16:17]" "f[36:37]" "f[56:57]" "f[76:77]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.87195855 -0.92061436 1.4849073 ;
	setAttr ".rs" 51250;
	setAttr ".lt" -type "double3" -2.0339632755828063e-016 3.5475095083725705e-016 0.0039392324987309428 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.78283478349603997 -1.0575852743240584 1.3510986779962935 ;
	setAttr ".cbx" -type "double3" 0.92612615316993407 -0.78478764366016063 1.6071109161611208 ;
createNode polyTweak -n "polyTweak68";
	setAttr ".uopa" yes;
	setAttr -s 315 ".tk";
	setAttr ".tk[0]" -type "float3" 0.50191677 -0.02291422 -1.6109755 ;
	setAttr ".tk[1]" -type "float3" 0.50191677 -0.02291422 -1.6959155 ;
	setAttr ".tk[2]" -type "float3" 0.50191677 -0.02291422 -1.9902077 ;
	setAttr ".tk[3]" -type "float3" 0.50191677 -0.02291422 -1.6109776 ;
	setAttr ".tk[4]" -type "float3" 0.50191677 -0.02291422 -1.6959145 ;
	setAttr ".tk[5]" -type "float3" 0.50191677 -0.02291422 -1.9866841 ;
	setAttr ".tk[6]" -type "float3" 0.50191677 -0.02291422 -1.6109776 ;
	setAttr ".tk[7]" -type "float3" 0.50191677 -0.02291422 -1.6959155 ;
	setAttr ".tk[8]" -type "float3" 0.50191677 -0.02291422 -1.9841797 ;
	setAttr ".tk[9]" -type "float3" 0.50191677 -0.02291422 -1.6976645 ;
	setAttr ".tk[10]" -type "float3" 0.50191677 -0.02291422 -1.7826014 ;
	setAttr ".tk[11]" -type "float3" 0.50191677 -0.02291422 -2.0808947 ;
	setAttr ".tk[12]" -type "float3" 0.50191677 -0.02291422 -1.7843504 ;
	setAttr ".tk[13]" -type "float3" 0.50191677 -0.02291422 -1.8692882 ;
	setAttr ".tk[14]" -type "float3" 0.50191677 -0.02291422 -2.1759729 ;
	setAttr ".tk[15]" -type "float3" 0.50191677 -0.02291422 -1.7843504 ;
	setAttr ".tk[16]" -type "float3" 0.50191677 -0.02291422 -1.8692892 ;
	setAttr ".tk[17]" -type "float3" 0.50191677 -0.02291422 -2.1776211 ;
	setAttr ".tk[18]" -type "float3" 0.50191677 -0.02291422 -1.7843523 ;
	setAttr ".tk[19]" -type "float3" 0.50191677 -0.02291422 -1.8692882 ;
	setAttr ".tk[20]" -type "float3" 0.50191677 -0.02291422 -2.1795113 ;
	setAttr ".tk[21]" -type "float3" 0.50191677 -0.02291422 -1.6976635 ;
	setAttr ".tk[22]" -type "float3" 0.50191677 -0.02291422 -1.7826014 ;
	setAttr ".tk[23]" -type "float3" 0.50191677 -0.02291422 -2.0895109 ;
	setAttr ".tk[24]" -type "float3" 0.50191677 -0.02291422 -2.3195057 ;
	setAttr ".tk[25]" -type "float3" 0.50191677 -0.02291422 -1.989022 ;
	setAttr ".tk[26]" -type "float3" 0.50191677 -0.02291422 -2.1207728 ;
	setAttr ".tk[27]" -type "float3" 0.50191677 -0.02291422 -2.4797857 ;
	setAttr ".tk[28]" -type "float3" 0.50191677 -0.02291422 -1.989022 ;
	setAttr ".tk[29]" -type "float3" 0.50191677 -0.02291422 -2.1207728 ;
	setAttr ".tk[30]" -type "float3" 0.50191677 -0.02291422 -2.4797847 ;
	setAttr ".tk[31]" -type "float3" 0.50191677 -0.02291422 -1.9890211 ;
	setAttr ".tk[32]" -type "float3" 0.50191677 -0.02291422 -2.1207728 ;
	setAttr ".tk[33]" -type "float3" 0.50191677 -0.02291422 -2.4797866 ;
	setAttr ".tk[34]" -type "float3" 0.50191677 -0.02291422 -2.0696723 ;
	setAttr ".tk[35]" -type "float3" 0.50191677 -0.02291422 -2.2014258 ;
	setAttr ".tk[36]" -type "float3" 0.50191677 -0.02291422 -2.560436 ;
	setAttr ".tk[37]" -type "float3" 0.50191677 -0.02291422 -2.1503253 ;
	setAttr ".tk[38]" -type "float3" 0.50191677 -0.02291422 -2.2820773 ;
	setAttr ".tk[39]" -type "float3" 0.50191677 -0.02291422 -2.6402385 ;
	setAttr ".tk[40]" -type "float3" 0.50191677 -0.02291422 -2.1503243 ;
	setAttr ".tk[41]" -type "float3" 0.50191677 -0.02291422 -2.2820773 ;
	setAttr ".tk[42]" -type "float3" 0.50191677 -0.02291422 -2.6407912 ;
	setAttr ".tk[43]" -type "float3" 0.50191677 -0.02291422 -2.1503253 ;
	setAttr ".tk[44]" -type "float3" 0.50191677 -0.02291422 -2.2820766 ;
	setAttr ".tk[45]" -type "float3" 0.50191677 -0.02291422 -2.6410887 ;
	setAttr ".tk[46]" -type "float3" 0.50191677 -0.02291422 -2.0696723 ;
	setAttr ".tk[47]" -type "float3" 0.50191677 -0.02291422 -2.2014248 ;
	setAttr ".tk[48]" -type "float3" 0.50191677 -0.02291422 -2.560436 ;
	setAttr ".tk[49]" -type "float3" 0.50191736 -0.022915304 -2.8469768 ;
	setAttr ".tk[50]" -type "float3" 0.50191677 -0.02291422 -1.2629693 ;
	setAttr ".tk[51]" -type "float3" 0.50191677 -0.02291422 -1.305064 ;
	setAttr ".tk[52]" -type "float3" 0.50191677 -0.02291422 -1.536912 ;
	setAttr ".tk[53]" -type "float3" 0.50191677 -0.02291422 -1.2629683 ;
	setAttr ".tk[54]" -type "float3" 0.50191677 -0.02291422 -1.305064 ;
	setAttr ".tk[55]" -type "float3" 0.50191677 -0.02291422 -1.5330508 ;
	setAttr ".tk[56]" -type "float3" 0.50191677 -0.02291422 -1.2629693 ;
	setAttr ".tk[57]" -type "float3" 0.50191677 -0.02291422 -1.305064 ;
	setAttr ".tk[58]" -type "float3" 0.50191677 -0.02291422 -1.5309398 ;
	setAttr ".tk[59]" -type "float3" 0.50191677 -0.02291422 -1.352726 ;
	setAttr ".tk[60]" -type "float3" 0.50191677 -0.02291422 -1.3948216 ;
	setAttr ".tk[61]" -type "float3" 0.50191677 -0.02291422 -1.6190529 ;
	setAttr ".tk[62]" -type "float3" 0.50191677 -0.02291422 -1.4424849 ;
	setAttr ".tk[63]" -type "float3" 0.50191677 -0.02291422 -1.4845788 ;
	setAttr ".tk[64]" -type "float3" 0.50191677 -0.02291422 -1.7104559 ;
	setAttr ".tk[65]" -type "float3" 0.50191677 -0.02291422 -1.4424837 ;
	setAttr ".tk[66]" -type "float3" 0.50191677 -0.02291422 -1.4845788 ;
	setAttr ".tk[67]" -type "float3" 0.50191677 -0.02291422 -1.7125661 ;
	setAttr ".tk[68]" -type "float3" 0.50191677 -0.02291422 -1.4424849 ;
	setAttr ".tk[69]" -type "float3" 0.50191677 -0.02291422 -1.4845779 ;
	setAttr ".tk[70]" -type "float3" 0.50191677 -0.02291422 -1.7164271 ;
	setAttr ".tk[71]" -type "float3" 0.50191677 -0.02291422 -1.3527269 ;
	setAttr ".tk[72]" -type "float3" 0.50191677 -0.02291422 -1.3948216 ;
	setAttr ".tk[73]" -type "float3" 0.50191677 -0.02291422 -1.6312585 ;
	setAttr ".tk[74]" -type "float3" 0.50191677 -0.02291422 -1.6405253 ;
	setAttr ".tk[75]" -type "float3" 0.50191689 -0.022914249 -2.2093563 ;
	setAttr ".tk[76]" -type "float3" 0.50191689 -0.022914249 -2.3867002 ;
	setAttr ".tk[77]" -type "float3" 0.50191689 -0.022914249 -2.8316481 ;
	setAttr ".tk[78]" -type "float3" 0.50191689 -0.022914249 -2.2093563 ;
	setAttr ".tk[79]" -type "float3" 0.50191689 -0.022914249 -2.3867011 ;
	setAttr ".tk[80]" -type "float3" 0.50191689 -0.022914249 -2.8281596 ;
	setAttr ".tk[81]" -type "float3" 0.50191689 -0.022914249 -2.2093573 ;
	setAttr ".tk[82]" -type "float3" 0.50191689 -0.022914249 -2.3867011 ;
	setAttr ".tk[83]" -type "float3" 0.50191689 -0.022914249 -2.8267863 ;
	setAttr ".tk[84]" -type "float3" 0.50191689 -0.022914249 -2.2665594 ;
	setAttr ".tk[85]" -type "float3" 0.50191689 -0.022914249 -2.4439044 ;
	setAttr ".tk[86]" -type "float3" 0.50191689 -0.022914249 -2.8840172 ;
	setAttr ".tk[87]" -type "float3" 0.50191689 -0.022914249 -2.3612483 ;
	setAttr ".tk[88]" -type "float3" 0.50191689 -0.022914249 -2.5011058 ;
	setAttr ".tk[89]" -type "float3" 0.50191689 -0.022914249 -2.9454772 ;
	setAttr ".tk[90]" -type "float3" 0.50191689 -0.022914249 -2.3612494 ;
	setAttr ".tk[91]" -type "float3" 0.50191689 -0.022914249 -2.5011067 ;
	setAttr ".tk[92]" -type "float3" 0.50191689 -0.022914249 -2.9468505 ;
	setAttr ".tk[93]" -type "float3" 0.50191689 -0.022914249 -2.3612504 ;
	setAttr ".tk[94]" -type "float3" 0.50191689 -0.022914249 -2.5011067 ;
	setAttr ".tk[95]" -type "float3" 0.50191689 -0.022914249 -2.9500897 ;
	setAttr ".tk[96]" -type "float3" 0.50191689 -0.022914249 -2.2665603 ;
	setAttr ".tk[97]" -type "float3" 0.50191689 -0.022914249 -2.4439032 ;
	setAttr ".tk[98]" -type "float3" 0.50191689 -0.022914249 -2.8945286 ;
	setAttr ".tk[99]" -type "float3" 0.50191689 -0.022914249 -3.186744 ;
	setAttr ".tk[100]" -type "float3" -0.42755368 -0.15949823 -0.70968544 ;
	setAttr ".tk[101]" -type "float3" -0.42755368 -0.16016638 -0.75175869 ;
	setAttr ".tk[102]" -type "float3" -0.42755368 -0.15726984 -0.79383302 ;
	setAttr ".tk[103]" -type "float3" -0.42755368 -0.29794973 -0.82007825 ;
	setAttr ".tk[104]" -type "float3" -0.42755368 -0.29152453 -0.77800298 ;
	setAttr ".tk[105]" -type "float3" -0.42755368 -0.29794958 -0.73592973 ;
	setAttr ".tk[106]" -type "float3" -0.42755368 -0.15920262 -0.91896582 ;
	setAttr ".tk[107]" -type "float3" -0.42755368 -0.16026416 -0.95569396 ;
	setAttr ".tk[108]" -type "float3" -0.42755368 -0.18729529 -0.9924221 ;
	setAttr ".tk[109]" -type "float3" -0.42755368 -0.29794973 -0.99242103 ;
	setAttr ".tk[110]" -type "float3" -0.42755368 -0.29959682 -0.95569396 ;
	setAttr ".tk[111]" -type "float3" -0.42755368 -0.29794973 -0.91896582 ;
	setAttr ".tk[112]" -type "float3" -0.42755368 -0.29794973 -0.56058872 ;
	setAttr ".tk[113]" -type "float3" -0.42755368 -0.26275215 -0.53954196 ;
	setAttr ".tk[114]" -type "float3" -0.42755368 -0.19759104 -0.56058776 ;
	setAttr ".tk[115]" -type "float3" -0.42755368 -0.16584775 -0.60625386 ;
	setAttr ".tk[116]" -type "float3" -0.42755368 -0.16547216 -0.65191913 ;
	setAttr ".tk[117]" -type "float3" -0.42755368 -0.29794997 -0.65191913 ;
	setAttr ".tk[118]" -type "float3" -0.42755368 -0.29278797 -0.60625386 ;
	setAttr ".tk[119]" -type "float3" -0.42755368 -0.16079523 -0.9838165 ;
	setAttr ".tk[120]" -type "float3" -0.42755368 -0.16785239 -1.0039183 ;
	setAttr ".tk[121]" -type "float3" -0.42755368 -0.16785239 -1.0240213 ;
	setAttr ".tk[122]" -type "float3" -0.42755368 -0.20304942 -1.0240222 ;
	setAttr ".tk[123]" -type "float3" -0.42755368 -0.23824644 -1.0240222 ;
	setAttr ".tk[124]" -type "float3" -0.42755368 -0.26414254 -1.0039173 ;
	setAttr ".tk[125]" -type "float3" -0.42755368 -0.27180114 -0.98381543 ;
	setAttr ".tk[126]" -type "float3" -0.42755368 -0.21271205 -1.0648364 ;
	setAttr ".tk[127]" -type "float3" -0.42755368 -0.21271205 -1.1137494 ;
	setAttr ".tk[128]" -type "float3" -0.42755368 -0.21271205 -1.1239076 ;
	setAttr ".tk[129]" -type "float3" -0.42755368 -0.21271205 -1.1543044 ;
	setAttr ".tk[130]" -type "float3" -0.42755368 -0.21271205 -1.1847004 ;
	setAttr ".tk[131]" -type "float3" -0.42755368 -0.21271205 -1.1846994 ;
	setAttr ".tk[132]" -type "float3" -0.42755368 -0.21271205 -1.1846994 ;
	setAttr ".tk[133]" -type "float3" -0.42755368 -0.21271205 -1.1543034 ;
	setAttr ".tk[134]" -type "float3" -0.42755368 -0.21271205 -1.1239076 ;
	setAttr ".tk[135]" -type "float3" -0.42755368 -0.21271205 -1.1137503 ;
	setAttr ".tk[136]" -type "float3" -0.42755368 -0.21271205 -1.0648364 ;
	setAttr ".tk[137]" -type "float3" -0.42755368 -0.21271205 -1.0159224 ;
	setAttr ".tk[138]" -type "float3" -0.42755368 -0.21271205 -0.88768661 ;
	setAttr ".tk[139]" -type "float3" -0.42755368 -0.21271205 -0.83323467 ;
	setAttr ".tk[140]" -type "float3" -0.42755368 -0.21271205 -0.77878463 ;
	setAttr ".tk[141]" -type "float3" -0.42755368 -0.21271205 -0.67133629 ;
	setAttr ".tk[142]" -type "float3" -0.42755368 -0.21271205 -0.61343813 ;
	setAttr ".tk[143]" -type "float3" -0.42755368 -0.21271205 -0.55554199 ;
	setAttr ".tk[144]" -type "float3" -0.42755368 -0.21271205 -0.55554104 ;
	setAttr ".tk[145]" -type "float3" -0.42755368 -0.21271205 -0.55554199 ;
	setAttr ".tk[146]" -type "float3" -0.42755368 -0.21271205 -0.61343813 ;
	setAttr ".tk[147]" -type "float3" -0.42755368 -0.21271205 -0.67133534 ;
	setAttr ".tk[148]" -type "float3" -0.42755368 -0.21271205 -0.77878559 ;
	setAttr ".tk[149]" -type "float3" -0.42755368 -0.21271205 -0.83323562 ;
	setAttr ".tk[150]" -type "float3" -0.42755368 -0.21271205 -0.88768661 ;
	setAttr ".tk[151]" -type "float3" -0.42755368 -0.21271205 -1.0159224 ;
	setAttr ".tk[152]" -type "float3" -0.42755368 -0.21271205 -1.2357744 ;
	setAttr ".tk[153]" -type "float3" -0.42755368 -0.21271205 -1.3068056 ;
	setAttr ".tk[154]" -type "float3" -0.42755368 -0.21271205 -1.2778505 ;
	setAttr ".tk[155]" -type "float3" -0.42755368 -0.21271205 -1.3269289 ;
	setAttr ".tk[156]" -type "float3" -0.42755368 -0.21271205 -1.449178 ;
	setAttr ".tk[157]" -type "float3" -0.42755368 -0.21271205 -1.4491789 ;
	setAttr ".tk[158]" -type "float3" -0.42755368 -0.21271205 -1.4491789 ;
	setAttr ".tk[159]" -type "float3" -0.42755368 -0.21271205 -1.4001014 ;
	setAttr ".tk[160]" -type "float3" -0.42755368 -0.21271205 -1.351022 ;
	setAttr ".tk[161]" -type "float3" -0.42755368 -0.21271205 -1.3068056 ;
	setAttr ".tk[162]" -type "float3" -0.42755368 -0.21271205 -1.2357733 ;
	setAttr ".tk[163]" -type "float3" -0.42755368 -0.21271205 -1.1647422 ;
	setAttr ".tk[164]" -type "float3" -0.42755368 -0.21271205 -0.98323834 ;
	setAttr ".tk[165]" -type "float3" -0.42755368 -0.21271205 -0.90632403 ;
	setAttr ".tk[166]" -type "float3" -0.42755368 -0.21271205 -0.82940781 ;
	setAttr ".tk[167]" -type "float3" -0.42755368 -0.21271205 -0.67941952 ;
	setAttr ".tk[168]" -type "float3" -0.42755368 -0.21271205 -0.59931815 ;
	setAttr ".tk[169]" -type "float3" -0.42755368 -0.21271205 -0.51921701 ;
	setAttr ".tk[170]" -type "float3" -0.42755368 -0.21271205 -0.51921892 ;
	setAttr ".tk[171]" -type "float3" -0.42755368 -0.21271205 -0.51921701 ;
	setAttr ".tk[172]" -type "float3" -0.42755368 -0.21271205 -0.59931815 ;
	setAttr ".tk[173]" -type "float3" -0.42755368 -0.21271205 -0.67941856 ;
	setAttr ".tk[174]" -type "float3" -0.42755368 -0.21271205 -0.82940876 ;
	setAttr ".tk[175]" -type "float3" -0.42755368 -0.21271205 -0.90632403 ;
	setAttr ".tk[176]" -type "float3" -0.42755368 -0.21271205 -0.98324025 ;
	setAttr ".tk[177]" -type "float3" -0.42755368 -0.21271205 -1.1647414 ;
	setAttr ".tk[178]" -type "float3" -0.42755368 -0.11208861 -0.32379356 ;
	setAttr ".tk[179]" -type "float3" -0.42755368 -0.099809885 -0.36285043 ;
	setAttr ".tk[180]" -type "float3" -0.42755368 -0.089696825 -0.40794194 ;
	setAttr ".tk[181]" -type "float3" -0.42755368 -0.41565272 -0.43418717 ;
	setAttr ".tk[182]" -type "float3" -0.42755368 -0.41728008 -0.39115191 ;
	setAttr ".tk[183]" -type "float3" -0.42755368 -0.41674787 -0.35003734 ;
	setAttr ".tk[184]" -type "float3" -0.42755368 -0.11177744 -0.53567302 ;
	setAttr ".tk[185]" -type "float3" -0.42755368 -0.12243057 -0.58109057 ;
	setAttr ".tk[186]" -type "float3" -0.42755368 -0.12413519 -0.62542057 ;
	setAttr ".tk[187]" -type "float3" -0.42755368 -0.37505102 -0.66540027 ;
	setAttr ".tk[188]" -type "float3" -0.42755368 -0.37042439 -0.57934928 ;
	setAttr ".tk[189]" -type "float3" -0.42755368 -0.38686445 -0.53432977 ;
	setAttr ".tk[190]" -type "float3" -0.42755368 -0.33841282 -0.16618225 ;
	setAttr ".tk[191]" -type "float3" -0.42755368 -0.25929216 -0.1113092 ;
	setAttr ".tk[192]" -type "float3" -0.42755368 -0.16389215 -0.13235566 ;
	setAttr ".tk[193]" -type "float3" -0.42755368 -0.14376386 -0.22878188 ;
	setAttr ".tk[194]" -type "float3" -0.42755368 -0.13204321 -0.27036443 ;
	setAttr ".tk[195]" -type "float3" -0.42755368 -0.39659905 -0.270363 ;
	setAttr ".tk[196]" -type "float3" -0.42755368 -0.37649184 -0.2287789 ;
	setAttr ".tk[197]" -type "float3" -0.42755368 -0.12411986 -0.69277751 ;
	setAttr ".tk[198]" -type "float3" -0.42755368 -0.13657422 -0.74077594 ;
	setAttr ".tk[199]" -type "float3" -0.42755368 -0.15441678 -0.77252281 ;
	setAttr ".tk[200]" -type "float3" -0.42755368 -0.19682683 -0.80008006 ;
	setAttr ".tk[201]" -type "float3" -0.42755368 -0.24246396 -0.85244048 ;
	setAttr ".tk[202]" -type "float3" -0.42755368 -0.29057357 -0.77542329 ;
	setAttr ".tk[203]" -type "float3" -0.42755368 -0.33158976 -0.71899629 ;
	setAttr ".tk[204]" -type "float3" -0.42755368 -0.21271205 -1.4330761 ;
	setAttr ".tk[205]" -type "float3" -0.42755368 -0.21271205 -1.3623159 ;
	setAttr ".tk[206]" -type "float3" -0.42755368 -0.21271205 -1.2915556 ;
	setAttr ".tk[207]" -type "float3" -0.42755368 -0.21271205 -1.1107081 ;
	setAttr ".tk[208]" -type "float3" -0.42755368 -0.21271205 -1.0340687 ;
	setAttr ".tk[209]" -type "float3" -0.42755368 -0.21271205 -0.95742846 ;
	setAttr ".tk[210]" -type "float3" -0.42755368 -0.21271205 -0.80796182 ;
	setAttr ".tk[211]" -type "float3" -0.42755368 -0.21271205 -0.72813308 ;
	setAttr ".tk[212]" -type "float3" -0.42755368 -0.21271205 -0.64830554 ;
	setAttr ".tk[213]" -type "float3" -0.42755368 -0.21271205 -0.64830554 ;
	setAttr ".tk[214]" -type "float3" -0.42755368 -0.21271205 -0.64830649 ;
	setAttr ".tk[215]" -type "float3" -0.42755368 -0.21271205 -0.72813308 ;
	setAttr ".tk[216]" -type "float3" -0.42755368 -0.21271205 -0.80796182 ;
	setAttr ".tk[217]" -type "float3" -0.42755368 -0.21271205 -0.95742846 ;
	setAttr ".tk[218]" -type "float3" -0.42755368 -0.21271205 -1.0340677 ;
	setAttr ".tk[219]" -type "float3" -0.42755368 -0.21271205 -1.1107081 ;
	setAttr ".tk[220]" -type "float3" -0.42755368 -0.21271205 -1.2915556 ;
	setAttr ".tk[221]" -type "float3" -0.42755368 -0.21271205 -1.3623149 ;
	setAttr ".tk[222]" -type "float3" -0.42755368 -0.21271205 -1.4330751 ;
	setAttr ".tk[223]" -type "float3" -0.42755368 -0.21271205 -1.4037033 ;
	setAttr ".tk[224]" -type "float3" -0.42755368 -0.21271205 -1.4525509 ;
	setAttr ".tk[225]" -type "float3" -0.42755368 -0.21271205 -1.59554 ;
	setAttr ".tk[226]" -type "float3" -0.42755368 -0.21271205 -1.595541 ;
	setAttr ".tk[227]" -type "float3" -0.42755368 -0.21271205 -1.595541 ;
	setAttr ".tk[228]" -type "float3" -0.42755368 -0.21271205 -1.5257225 ;
	setAttr ".tk[229]" -type "float3" -0.42755368 -0.21271205 -1.4768748 ;
	setAttr ".tk[230]" -type "float3" -0.42755368 -0.13485101 0.49962592 ;
	setAttr ".tk[231]" -type "float3" -0.42755368 -0.12931271 0.42886376 ;
	setAttr ".tk[232]" -type "float3" -0.42755368 -0.1230138 0.34716487 ;
	setAttr ".tk[233]" -type "float3" -0.42755368 -0.53179258 0.30245692 ;
	setAttr ".tk[234]" -type "float3" -0.42755368 -0.53428274 0.38042557 ;
	setAttr ".tk[235]" -type "float3" -0.42755368 -0.52543986 0.45491588 ;
	setAttr ".tk[236]" -type "float3" -0.42755368 -0.12611647 0.11886775 ;
	setAttr ".tk[237]" -type "float3" -0.42755368 -0.13079816 0.04381758 ;
	setAttr ".tk[238]" -type "float3" -0.42755368 -0.13196884 -0.031232752 ;
	setAttr ".tk[239]" -type "float3" -0.42755368 -0.4894115 -0.028393365 ;
	setAttr ".tk[240]" -type "float3" -0.42755368 -0.50827831 0.046658337 ;
	setAttr ".tk[241]" -type "float3" -0.42755368 -0.51478827 0.12170945 ;
	setAttr ".tk[242]" -type "float3" -0.42755368 -0.43106312 0.78802657 ;
	setAttr ".tk[243]" -type "float3" -0.42755368 -0.27172253 0.88135445 ;
	setAttr ".tk[244]" -type "float3" -0.42755368 -0.18076961 0.84647179 ;
	setAttr ".tk[245]" -type "float3" -0.42755368 -0.15606198 0.67176914 ;
	setAttr ".tk[246]" -type "float3" -0.42755368 -0.14567342 0.59642869 ;
	setAttr ".tk[247]" -type "float3" -0.42755368 -0.47060782 0.59926981 ;
	setAttr ".tk[248]" -type "float3" -0.42755368 -0.46372074 0.67460954 ;
	setAttr ".tk[249]" -type "float3" -0.42755368 -0.13194965 -0.14767727 ;
	setAttr ".tk[250]" -type "float3" -0.42755368 -0.14723693 -0.22672659 ;
	setAttr ".tk[251]" -type "float3" -0.42755368 -0.16913888 -0.27895257 ;
	setAttr ".tk[252]" -type "float3" -0.42755368 -0.19617441 -0.33367136 ;
	setAttr ".tk[253]" -type "float3" -0.42755368 -0.25219357 -0.33820751 ;
	setAttr ".tk[254]" -type "float3" -0.42755368 -0.31124729 -0.28856125 ;
	setAttr ".tk[255]" -type "float3" -0.42755368 -0.46318942 -0.17800519 ;
	setAttr ".tk[256]" -type "float3" 0 0.10415236 0 ;
	setAttr ".tk[268]" -type "float3" 0 -0.23866239 0 ;
	setAttr ".tk[269]" -type "float3" -0.42755368 -0.25459048 0.87849092 ;
	setAttr ".tk[270]" -type "float3" -0.42755368 -0.16943069 0.84758377 ;
	setAttr ".tk[271]" -type "float3" -0.42755368 -0.14818251 0.69734025 ;
	setAttr ".tk[272]" -type "float3" 0 0.094845518 0 ;
	setAttr ".tk[383]" -type "float3" -0.42755368 -0.30132848 -0.57959485 ;
	setAttr ".tk[384]" -type "float3" -0.42755368 -0.24222586 -0.68517649 ;
	setAttr ".tk[385]" -type "float3" -0.42755368 -0.18616068 -0.61753786 ;
	setAttr ".tk[386]" -type "float3" -0.42755368 -0.16371693 -0.57135522 ;
	setAttr ".tk[387]" -type "float3" -0.42755368 -0.14179678 -0.52544308 ;
	setAttr ".tk[388]" -type "float3" -0.42755368 -0.12649722 -0.45598638 ;
	setAttr ".tk[389]" -type "float3" -0.42755368 -0.1265166 -0.35574532 ;
	setAttr ".tk[390]" -type "float3" -0.42755368 -0.12497091 -0.29057005 ;
	setAttr ".tk[391]" -type "float3" -0.42755368 -0.1168815 -0.22472078 ;
	setAttr ".tk[392]" -type "float3" -0.42755368 -0.1040464 -0.030871727 ;
	setAttr ".tk[393]" -type "float3" -0.42755368 -0.11282946 0.038116395 ;
	setAttr ".tk[394]" -type "float3" -0.42755368 -0.12223771 0.097867422 ;
	setAttr ".tk[395]" -type "float3" -0.42755368 -0.1386115 0.17960934 ;
	setAttr ".tk[396]" -type "float3" -0.42755368 -0.15062928 0.24322979 ;
	setAttr ".tk[397]" -type "float3" -0.42755368 -0.17535704 0.39075136 ;
	setAttr ".tk[398]" -type "float3" -0.42755368 -0.24700035 0.5661388 ;
	setAttr ".tk[399]" -type "float3" -0.42755368 -0.35913718 0.33575177 ;
	setAttr ".tk[400]" -type "float3" -0.42755368 -0.39753139 0.23997943 ;
	setAttr ".tk[401]" -type "float3" -0.42755368 -0.41163829 0.17636161 ;
	setAttr ".tk[402]" -type "float3" -0.42755368 -0.43401298 0.054467142 ;
	setAttr ".tk[403]" -type "float3" -0.42755368 -0.43871999 -0.0084343031 ;
	setAttr ".tk[404]" -type "float3" -0.42755368 -0.43665931 -0.074271947 ;
	setAttr ".tk[405]" -type "float3" -0.42755368 -0.41379094 -0.22713655 ;
	setAttr ".tk[406]" -type "float3" -0.42755368 -0.40233943 -0.2927393 ;
	setAttr ".tk[407]" -type "float3" -0.42755368 -0.40373272 -0.40825796 ;
	setAttr ".tk[408]" -type "float3" -0.42755368 -0.35171655 -0.49309397 ;
	setAttr ".tk[435]" -type "float3" -0.0059456853 -0.31330943 0.29419664 ;
	setAttr ".tk[436]" -type "float3" -0.0059456853 -0.32052764 0.23001966 ;
	setAttr ".tk[437]" -type "float3" -0.0059456853 -0.32537153 0.11058602 ;
	setAttr ".tk[438]" -type "float3" -0.0059459116 -0.32776511 0.051681161 ;
	setAttr ".tk[439]" -type "float3" -0.0059456853 -0.32636055 -0.008103393 ;
	setAttr ".tk[440]" -type "float3" -0.0059459116 -0.32868573 -0.14693139 ;
	setAttr ".tk[441]" -type "float3" -0.0059459116 -0.32765433 -0.20446965 ;
	setAttr ".tk[442]" -type "float3" -0.0059454697 -0.31471753 -0.26111594 ;
	setAttr ".tk[443]" -type "float3" -0.015697142 -0.28826094 -0.36706927 ;
	setAttr ".tk[444]" -type "float3" 0.024044208 -0.051866591 -0.414653 ;
	setAttr ".tk[445]" -type "float3" 0.024043974 0.055307541 -0.44082421 ;
	setAttr ".tk[446]" -type "float3" 0.024043974 0.15585484 -0.44708437 ;
	setAttr ".tk[447]" -type "float3" 0.024043746 0.24929108 -0.42499503 ;
	setAttr ".tk[448]" -type "float3" 0.024043974 0.28860191 -0.39088243 ;
	setAttr ".tk[449]" -type "float3" 0.024043746 0.31603992 -0.3338457 ;
	setAttr ".tk[450]" -type "float3" 0.024043746 0.31600574 -0.2470414 ;
	setAttr ".tk[451]" -type "float3" 0.024043746 0.31810752 -0.19109334 ;
	setAttr ".tk[452]" -type "float3" 0.024043974 0.32106653 -0.13514388 ;
	setAttr ".tk[453]" -type "float3" 0.024043974 0.32663637 0.035047077 ;
	setAttr ".tk[454]" -type "float3" 0.024043746 0.32077429 0.095949762 ;
	setAttr ".tk[455]" -type "float3" 0.024043746 0.31083265 0.14870027 ;
	setAttr ".tk[456]" -type "float3" 0.024043974 0.29140732 0.22086471 ;
	setAttr ".tk[457]" -type "float3" 0.024043974 0.27276179 0.27702904 ;
	setAttr ".tk[458]" -type "float3" 0.024043974 0.22841465 0.40726611 ;
	setAttr ".tk[459]" -type "float3" 0.024043746 0.020371746 0.44060534 ;
	setAttr ".tk[460]" -type "float3" -0.0059459116 -0.25545061 0.38655654 ;
	setAttr ".tk[531]" -type "float3" -2.5567358 -0.84067392 -0.22174504 ;
createNode polyExtrudeFace -n "polyExtrudeFace28";
	setAttr ".ics" -type "componentList" 4 "f[16:17]" "f[36:37]" "f[56:57]" "f[76:77]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.87392896 -0.92075831 1.485045 ;
	setAttr ".rs" 37229;
	setAttr ".lt" -type "double3" 2.4633073358870661e-016 -6.3967928176644762e-018 0.0047532235268132527 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.78447816194202646 -1.0587152547727785 1.3495291617473786 ;
	setAttr ".cbx" -type "double3" 0.92858235007610301 -0.78364630854615713 1.6091890025102285 ;
createNode polySplitRing -n "polySplitRing34";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1074:1075]" "e[1077]" "e[1079]" "e[1081]" "e[1083]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.87324172258377075;
	setAttr ".dr" no;
	setAttr ".re" 1083;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak69";
	setAttr ".uopa" yes;
	setAttr -s 26 ".tk";
	setAttr ".tk[99]" -type "float3" -0.16700813 -0.0002069578 0.37814334 ;
	setAttr ".tk[553]" -type "float3" -0.22713941 -0.33837432 0.46578878 ;
	setAttr ".tk[556]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[557]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[558]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[559]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[560]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[561]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[562]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[563]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[564]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[565]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[566]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[567]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[568]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[569]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[570]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[571]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[572]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[573]" -type "float3" -1.1920929e-007 1.7881393e-007 0 ;
	setAttr ".tk[574]" -type "float3" 0.43932524 1.0293701 -0.87198168 ;
	setAttr ".tk[575]" -type "float3" 0.43932524 1.0293701 -0.9624517 ;
	setAttr ".tk[576]" -type "float3" 0.43932524 1.0293701 -0.87557858 ;
	setAttr ".tk[577]" -type "float3" 0.26488844 1.5076005 -0.055829566 ;
	setAttr ".tk[578]" -type "float3" 0.43932524 1.0293701 -1.0489247 ;
	setAttr ".tk[579]" -type "float3" 0.43932524 1.0293701 -1.0527953 ;
createNode polySplitRing -n "polySplitRing35";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1074:1075]" "e[1077]" "e[1079]" "e[1081]" "e[1083]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.16301624476909637;
	setAttr ".re" 1083;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing36";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 42 "e[151:153]" "e[166:168]" "e[170]" "e[216]" "e[226]" "e[239]" "e[249]" "e[291]" "e[301]" "e[372]" "e[382]" "e[429]" "e[439]" "e[476]" "e[486]" "e[528]" "e[538]" "e[580]" "e[590]" "e[632]" "e[642]" "e[684]" "e[694]" "e[731]" "e[748]" "e[789]" "e[800]" "e[841]" "e[860]" "e[870]" "e[898]" "e[940]" "e[963]" "e[1007]" "e[1082]" "e[1084]" "e[1134]" "e[1136]" "e[1140]" "e[1148]" "e[1152]" "e[1160]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.076559342443943024;
	setAttr ".re" 1134;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing37";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 37 "e[68:70]" "e[77:79]" "e[83]" "e[195]" "e[198]" "e[235]" "e[253]" "e[287]" "e[305]" "e[351]" "e[354]" "e[391]" "e[425]" "e[455]" "e[458]" "e[507]" "e[510]" "e[559]" "e[562]" "e[611]" "e[614]" "e[663]" "e[666]" "e[752]" "e[786]" "e[804]" "e[838]" "e[856]" "e[874]" "e[902]" "e[936]" "e[955]" "e[999]" "e[1052]" "e[1056]" "e[1101]" "e[1105]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.7861095666885376;
	setAttr ".dr" no;
	setAttr ".re" 78;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing38";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 37 "e[25:27]" "e[34:36]" "e[40]" "e[185]" "e[188]" "e[259]" "e[281]" "e[311]" "e[333]" "e[341]" "e[344]" "e[397]" "e[419]" "e[445]" "e[448]" "e[497]" "e[500]" "e[549]" "e[552]" "e[601]" "e[604]" "e[653]" "e[656]" "e[758]" "e[780]" "e[810]" "e[832]" "e[850]" "e[880]" "e[908]" "e[930]" "e[950]" "e[994]" "e[1040]" "e[1044]" "e[1088]" "e[1092]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.76233899593353271;
	setAttr ".dr" no;
	setAttr ".re" 34;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing39";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 37 "e[108:110]" "e[123:125]" "e[127]" "e[207]" "e[213]" "e[267]" "e[273]" "e[319]" "e[325]" "e[363]" "e[369]" "e[405]" "e[411]" "e[467]" "e[473]" "e[519]" "e[525]" "e[571]" "e[577]" "e[623]" "e[629]" "e[675]" "e[681]" "e[766]" "e[772]" "e[818]" "e[824]" "e[888]" "e[893]" "e[916]" "e[922]" "e[958]" "e[1002]" "e[1070]" "e[1072]" "e[1121]" "e[1123]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.75002044439315796;
	setAttr ".re" 411;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing40";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[1050:1051]" "e[1053]" "e[1055]" "e[1057]" "e[1059]" "e[1293]" "e[1301]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.36438098549842834;
	setAttr ".re" 1059;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak70";
	setAttr ".uopa" yes;
	setAttr -s 17 ".tk";
	setAttr ".tk[53]" -type "float3" 0.13700569 -0.59614092 0.39272559 ;
	setAttr ".tk[56]" -type "float3" 0.13519742 -0.52729219 0.082044274 ;
	setAttr ".tk[144]" -type "float3" -0.022325628 0.029107878 0.27684608 ;
	setAttr ".tk[170]" -type "float3" -0.0363326 0.047369994 0.45053762 ;
	setAttr ".tk[212]" -type "float3" 0.03986134 -0.15546587 0.024189787 ;
	setAttr ".tk[213]" -type "float3" -0.023333825 0.030422358 0.2893481 ;
	setAttr ".tk[214]" -type "float3" -0.11747275 0.45816305 -0.071288094 ;
	setAttr ".tk[215]" -type "float3" -0.11747275 0.45816305 -0.071288094 ;
	setAttr ".tk[562]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[563]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[564]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[565]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[566]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[567]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[659]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[660]" -type "float3" 0.94394362 0.56065029 -0.56952661 ;
	setAttr ".tk[733]" -type "float3" -0.11747275 0.45816305 -0.071288094 ;
createNode polySplitRing -n "polySplitRing41";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[1038:1039]" "e[1041]" "e[1043]" "e[1045]" "e[1047]" "e[1374]" "e[1382]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.56199604272842407;
	setAttr ".dr" no;
	setAttr ".re" 1047;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak71";
	setAttr ".uopa" yes;
	setAttr -s 91 ".tk";
	setAttr ".tk[2]" -type "float3" -2.9802322e-008 -1.8626451e-009 0 ;
	setAttr ".tk[5]" -type "float3" -2.9802322e-008 -1.8626451e-009 0 ;
	setAttr ".tk[8]" -type "float3" 0 1.8626451e-009 -3.7252903e-009 ;
	setAttr ".tk[11]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[14]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[17]" -type "float3" -2.9802322e-008 -1.8626451e-009 0 ;
	setAttr ".tk[20]" -type "float3" 0 -5.5879354e-009 0 ;
	setAttr ".tk[23]" -type "float3" 0 5.5879354e-009 0 ;
	setAttr ".tk[24]" -type "float3" 0.0014904439 -0.0014689025 0.00035249442 ;
	setAttr ".tk[27]" -type "float3" 1.4901161e-008 -5.1222742e-009 3.7252903e-009 ;
	setAttr ".tk[30]" -type "float3" 1.4901161e-008 -5.1222742e-009 3.7252903e-009 ;
	setAttr ".tk[33]" -type "float3" 1.4901161e-008 1.8626451e-009 0 ;
	setAttr ".tk[36]" -type "float3" 0 -9.3132257e-010 9.3132257e-010 ;
	setAttr ".tk[39]" -type "float3" 0 -1.1641532e-010 -4.6566129e-010 ;
	setAttr ".tk[42]" -type "float3" 0 5.8207661e-010 0 ;
	setAttr ".tk[45]" -type "float3" 0 1.7462298e-009 0 ;
	setAttr ".tk[48]" -type "float3" 0 4.6566129e-010 9.3132257e-010 ;
	setAttr ".tk[49]" -type "float3" -0.394045 -0.2632384 0.65553141 ;
	setAttr ".tk[52]" -type "float3" 7.4505806e-009 2.0954758e-009 9.3132257e-010 ;
	setAttr ".tk[55]" -type "float3" 0 1.1641532e-010 9.3132257e-010 ;
	setAttr ".tk[58]" -type "float3" 3.7252903e-009 1.1641532e-009 0 ;
	setAttr ".tk[61]" -type "float3" -7.4505806e-009 2.3283064e-010 0 ;
	setAttr ".tk[64]" -type "float3" 1.4901161e-008 4.6566129e-010 1.8626451e-009 ;
	setAttr ".tk[67]" -type "float3" 1.4901161e-008 2.3283064e-009 0 ;
	setAttr ".tk[70]" -type "float3" -1.4901161e-008 1.8626451e-009 0 ;
	setAttr ".tk[73]" -type "float3" 0 4.6566129e-010 0 ;
	setAttr ".tk[74]" -type "float3" -3.7252903e-009 0 -4.6566129e-010 ;
	setAttr ".tk[532]" -type "float3" -2.9802322e-008 2.7939677e-009 0 ;
	setAttr ".tk[533]" -type "float3" 5.9604645e-008 9.3132257e-010 3.7252903e-009 ;
	setAttr ".tk[534]" -type "float3" -2.9802322e-008 2.7939677e-009 0 ;
	setAttr ".tk[535]" -type "float3" 5.9604645e-008 9.3132257e-010 3.7252903e-009 ;
	setAttr ".tk[536]" -type "float3" -2.9802322e-008 2.7939677e-009 0 ;
	setAttr ".tk[537]" -type "float3" -2.9802322e-008 2.7939677e-009 0 ;
	setAttr ".tk[538]" -type "float3" 0 -2.3283064e-010 0 ;
	setAttr ".tk[539]" -type "float3" 1.4901161e-008 9.3132257e-010 -9.3132257e-010 ;
	setAttr ".tk[540]" -type "float3" 0 -5.8207661e-010 -4.6566129e-010 ;
	setAttr ".tk[541]" -type "float3" -0.41442019 -0.23772216 0.66527539 ;
	setAttr ".tk[542]" -type "float3" 0 1.3969839e-009 0 ;
	setAttr ".tk[543]" -type "float3" 0 1.3969839e-009 0 ;
	setAttr ".tk[544]" -type "float3" 1.4901161e-008 7.4505806e-009 -1.8626451e-009 ;
	setAttr ".tk[545]" -type "float3" 0 0 1.8626451e-009 ;
	setAttr ".tk[546]" -type "float3" 1.4901161e-008 1.3969839e-009 0 ;
	setAttr ".tk[547]" -type "float3" -3.7252903e-009 0 -4.6566129e-010 ;
	setAttr ".tk[548]" -type "float3" 7.4505806e-009 2.3283064e-010 -9.3132257e-010 ;
	setAttr ".tk[549]" -type "float3" 0 -1.1641532e-010 0 ;
	setAttr ".tk[556]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[557]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[558]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[559]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[560]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[561]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[562]" -type "float3" 0 -2.910383e-011 0 ;
	setAttr ".tk[563]" -type "float3" 0 -5.8207661e-010 0 ;
	setAttr ".tk[564]" -type "float3" 0.0051282523 -0.0050541633 0.0012128602 ;
	setAttr ".tk[565]" -type "float3" -0.46471748 0.72878343 0.94910979 ;
	setAttr ".tk[566]" -type "float3" 1.4901161e-008 -1.1641532e-009 0 ;
	setAttr ".tk[567]" -type "float3" 0 -2.3283064e-010 -9.3132257e-010 ;
	setAttr ".tk[568]" -type "float3" 1.4901161e-008 -4.1909516e-009 0 ;
	setAttr ".tk[569]" -type "float3" -2.9802322e-008 -1.8626451e-009 -1.8626451e-009 ;
	setAttr ".tk[570]" -type "float3" 1.4901161e-008 9.3132257e-010 -1.8626451e-009 ;
	setAttr ".tk[571]" -type "float3" 0 6.9849193e-010 0 ;
	setAttr ".tk[572]" -type "float3" 0 -4.6566129e-010 0 ;
	setAttr ".tk[573]" -type "float3" -3.7252903e-009 9.3132257e-010 -4.6566129e-010 ;
	setAttr ".tk[656]" -type "float3" 0 -6.9849193e-010 9.3132257e-010 ;
	setAttr ".tk[657]" -type "float3" 0.059492592 0.023607984 0.23441097 ;
	setAttr ".tk[658]" -type "float3" 0.040009655 0.047454666 0.24224827 ;
	setAttr ".tk[659]" -type "float3" -0.35071823 0.62121278 0.82563186 ;
	setAttr ".tk[660]" -type "float3" -1.8626451e-009 2.3283064e-010 2.3283064e-010 ;
	setAttr ".tk[661]" -type "float3" 0 0 9.3132257e-010 ;
	setAttr ".tk[662]" -type "float3" 7.4505806e-009 -2.3283064e-010 0 ;
	setAttr ".tk[697]" -type "float3" 0 1.3969839e-009 1.8626451e-009 ;
	setAttr ".tk[698]" -type "float3" 0 5.5879354e-009 0 ;
	setAttr ".tk[699]" -type "float3" 5.9604645e-008 9.3132257e-010 3.7252903e-009 ;
	setAttr ".tk[700]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[701]" -type "float3" 0.86743611 0.51205844 -0.3965413 ;
	setAttr ".tk[702]" -type "float3" 5.9604645e-008 9.3132257e-010 3.7252903e-009 ;
	setAttr ".tk[703]" -type "float3" 0 5.5879354e-009 0 ;
	setAttr ".tk[736]" -type "float3" 0 1.1641532e-009 0 ;
	setAttr ".tk[737]" -type "float3" 0 -2.3283064e-009 0 ;
	setAttr ".tk[738]" -type "float3" 0 -4.4237822e-009 0 ;
	setAttr ".tk[739]" -type "float3" -7.4505806e-009 6.9849193e-010 0 ;
	setAttr ".tk[741]" -type "float3" 0 5.8207661e-010 -4.6566129e-010 ;
	setAttr ".tk[742]" -type "float3" 0 -3.4924597e-009 0 ;
	setAttr ".tk[761]" -type "float3" 1.4901161e-008 1.3969839e-009 0 ;
	setAttr ".tk[762]" -type "float3" -0.40149796 -0.25387192 0.6591832 ;
	setAttr ".tk[763]" -type "float3" 0.052360982 0.032376137 0.23738477 ;
	setAttr ".tk[764]" -type "float3" 3.7252903e-009 -2.3283064e-010 -4.6566129e-010 ;
	setAttr ".tk[765]" -type "float3" 0 2.3283064e-010 0 ;
	setAttr ".tk[766]" -type "float3" 7.4505806e-009 1.8626451e-009 9.3132257e-010 ;
	setAttr ".tk[767]" -type "float3" 7.4505806e-009 -3.259629e-009 9.3132257e-010 ;
	setAttr ".tk[768]" -type "float3" 1.4901161e-008 1.3969839e-009 0 ;
createNode polySplitRing -n "polySplitRing42";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[1062:1063]" "e[1065]" "e[1067]" "e[1069]" "e[1071]" "e[1449]" "e[1457]";
	setAttr ".ix" -type "matrix" 0.010492730057573445 -0.038497038215048962 0.0037548425748413624 0
		 -0.035841081887064322 -0.010187013327616829 -0.0042875417110682188 0 0.0046145306003912909 -0.0020334338799398101 -0.033743147200116418 0
		 0.85837794457155714 -0.35939586013968122 1.0576519002529159 1;
	setAttr ".wt" 0.51394474506378174;
	setAttr ".dr" no;
	setAttr ".re" 1071;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak72";
	setAttr ".uopa" yes;
	setAttr -s 60 ".tk";
	setAttr ".tk[17]" -type "float3" -0.066103548 0.25781471 -0.040114801 ;
	setAttr ".tk[20]" -type "float3" -0.066103548 0.25781471 -0.040114801 ;
	setAttr ".tk[24]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[27]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[30]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[33]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[36]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[39]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[42]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[45]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[48]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[49]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[532]" -type "float3" -0.066103555 0.25781474 -0.040114798 ;
	setAttr ".tk[534]" -type "float3" -0.066103555 0.25781474 -0.040114798 ;
	setAttr ".tk[535]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[538]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[539]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[540]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[541]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[542]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[543]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[556]" -type "float3" -0.066103555 0.25781474 -0.040114798 ;
	setAttr ".tk[558]" -type "float3" -0.066103555 0.25781474 -0.040114798 ;
	setAttr ".tk[559]" -type "float3" -0.11328684 0.44183722 -0.068747878 ;
	setAttr ".tk[562]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[563]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[564]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[565]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[566]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[567]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[568]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[569]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[570]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[571]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[572]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[573]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[656]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[657]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[658]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[659]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[660]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[661]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[662]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[698]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[699]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[700]" -type "float3" -0.13501374 0.5265758 -0.081932805 ;
	setAttr ".tk[738]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[739]" -type "float3" 1.0647507 0.92297548 -0.30112037 ;
	setAttr ".tk[761]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[762]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[763]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[764]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[765]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[766]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[767]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[768]" -type "float3" -0.96267945 -0.28695986 -0.039834294 ;
	setAttr ".tk[770]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[771]" -type "float3" -0.068910189 0.26876104 -0.041818004 ;
	setAttr ".tk[772]" -type "float3" -0.066103548 0.25781471 -0.040114801 ;
	setAttr ".tk[773]" -type "float3" -0.066103548 0.25781471 -0.040114801 ;
createNode polyExtrudeFace -n "polyExtrudeFace29";
	setAttr ".ics" -type "componentList" 2 "f[48]" "f[414]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.28374779 -0.8394016 0.29490477 ;
	setAttr ".rs" 50027;
	setAttr ".ls" -type "double3" 0.53333335002930682 0.53333335002930682 0.53333335002930682 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.20958477684441784 -1.0064423323412557 0.081518328856223385 ;
	setAttr ".cbx" -type "double3" 0.35791082686574743 -0.672360826913451 0.50829120613786272 ;
createNode polyTweak -n "polyTweak73";
	setAttr ".uopa" yes;
	setAttr -s 20 ".tk";
	setAttr ".tk[63]" -type "float3" 5.5511151e-016 0.038270324 0.09939459 ;
	setAttr ".tk[124]" -type "float3" -0.14663155 -0.037274987 0.054511778 ;
	setAttr ".tk[129]" -type "float3" -0.11226521 0.042749852 0.11860027 ;
	setAttr ".tk[132]" -type "float3" -0.10568684 0.0014514095 -0.0048654857 ;
	setAttr ".tk[134]" -type "float3" -0.089411736 -0.041074023 -0.048019677 ;
	setAttr ".tk[380]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[381]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[384]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[385]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[387]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[388]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[390]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[391]" -type "float3" 0 -0.093400404 -0.052829158 ;
	setAttr ".tk[594]" -type "float3" 5.5511151e-016 0.023705514 0.09939459 ;
	setAttr ".tk[605]" -type "float3" 5.5511151e-016 0.023705514 0.09939459 ;
	setAttr ".tk[606]" -type "float3" 5.5511151e-016 0.038270324 0.09939459 ;
	setAttr ".tk[632]" -type "float3" -0.16367845 -0.037492629 -0.059349254 ;
	setAttr ".tk[633]" -type "float3" -0.22089812 -0.033693612 0.043182183 ;
	setAttr ".tk[634]" -type "float3" -0.17995369 0.005032762 -0.016195031 ;
	setAttr ".tk[635]" -type "float3" -0.18653212 0.046331249 0.10727065 ;
createNode polyExtrudeFace -n "polyExtrudeFace30";
	setAttr ".ics" -type "componentList" 2 "f[48]" "f[414]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.27931738 -0.84041756 0.29699215 ;
	setAttr ".rs" 34325;
	setAttr ".lt" -type "double3" 9.9312918999672206e-017 1.1102230246251565e-016 -0.15542406755757765 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.2365154795414067 -0.9529645926306719 0.189396590082299 ;
	setAttr ".cbx" -type "double3" 0.32211929629280589 -0.72787052317650891 0.4045877168176113 ;
createNode polyTweak -n "polyTweak74";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[636:641]" -type "float3"  0 -0.027158378 -0.006263542
		 0 -0.023820372 -0.079958901 0 0.026499314 -0.0016988605 0 0.027051251 -0.060667127
		 0 -0.024404334 0.067070983 0 0.027158378 0.079958893;
createNode groupId -n "groupId13";
	setAttr ".ihi" 0;
createNode polyCube -n "polyCube4";
	setAttr ".w" 0.45606094342787307;
	setAttr ".h" 0.17363437716361008;
	setAttr ".d" 0.090166282728733727;
	setAttr ".sw" 2;
	setAttr ".sh" 2;
	setAttr ".sd" 2;
	setAttr ".cuv" 4;
createNode polySplitRing -n "polySplitRing43";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 8 "e[0]" "e[2]" "e[4]" "e[6]" "e[8]" "e[10]" "e[12]" "e[14]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".wt" 0.40698185563087463;
	setAttr ".re" 8;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak75";
	setAttr ".uopa" yes;
	setAttr -s 21 ".tk[0:20]" -type "float3"  0.001482485 0.02332342 -0.012111574
		 -2.8872694e-018 0.02332342 -0.012111574 -0.001482485 0.02332342 -0.012111574 7.4505806e-008
		 1.7763568e-015 0 -5.2939559e-023 1.7763568e-015 0 -7.4505806e-008 1.7763568e-015
		 0 0.001482485 -0.023323435 -0.012111574 -2.8872694e-018 -0.023323435 -0.012111574
		 -0.001482485 -0.023323435 -0.012111574 7.4505806e-008 1.1175871e-008 0 -5.2939559e-023
		 1.1175871e-008 0 -7.4505806e-008 1.1175871e-008 0 0.001482485 -0.023323435 0.012111574
		 -2.8872694e-018 -0.023323435 0.012111574 -0.001482485 -0.023323435 0.012111574 7.4505806e-008
		 1.7763568e-015 0 -5.2939559e-023 1.7763568e-015 0 -7.4505806e-008 1.7763568e-015
		 0 0.001482485 0.02332342 0.012111574 -2.8872694e-018 0.02332342 0.012111574 -0.001482485
		 0.02332342 0.012111574;
createNode polyExtrudeFace -n "polyExtrudeFace31";
	setAttr ".ics" -type "componentList" 2 "f[4]" "f[6]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 3.0626574 0.1269405 2.0793242 ;
	setAttr ".rs" 62180;
	setAttr ".lt" -type "double3" 0 2.3071822230491534e-016 0.011631086514612581 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 3.0145967335372825 0.12071464738973826 2.0463525727923755 ;
	setAttr ".cbx" -type "double3" 3.1107180528620519 0.13316635267276969 2.1122957096036319 ;
createNode polySplitRing -n "polySplitRing44";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[63:64]" "e[66]" "e[68]" "e[71]" "e[73]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".wt" 0.065706506371498108;
	setAttr ".re" 71;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak76";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[0]" -type "float3" 0.053395484 4.1205712e-005 0 ;
	setAttr ".tk[3]" -type "float3" 0.042658884 -0.030779487 0 ;
	setAttr ".tk[6]" -type "float3" 0.014757713 -0.061151214 0.0093111303 ;
	setAttr ".tk[9]" -type "float3" 0.014523163 -0.030503189 0 ;
	setAttr ".tk[12]" -type "float3" 0.019145546 -0.055054061 -0.0087885885 ;
	setAttr ".tk[15]" -type "float3" 0.045601144 -0.030687952 0 ;
	setAttr ".tk[18]" -type "float3" 0.053395484 4.1205712e-005 0 ;
	setAttr ".tk[21]" -type "float3" 0.053402793 6.7414425e-005 0 ;
	setAttr ".tk[25]" -type "float3" 0.035462633 -0.023866534 0 ;
	setAttr ".tk[28]" -type "float3" 0.0016013681 -1.3877788e-017 0 ;
	setAttr ".tk[29]" -type "float3" 0.0016013681 -1.3877788e-017 0 ;
	setAttr ".tk[30]" -type "float3" 0.0016013681 -1.3877788e-017 0 ;
	setAttr ".tk[34]" -type "float3" -0.05277526 -0.065469012 0 ;
	setAttr ".tk[35]" -type "float3" -0.036868896 -5.4935623e-005 0 ;
	setAttr ".tk[36]" -type "float3" -0.12311192 -0.017472273 0 ;
	setAttr ".tk[37]" -type "float3" -0.152889 -0.13520344 0 ;
	setAttr ".tk[38]" -type "float3" -0.036868896 -5.4935623e-005 0 ;
	setAttr ".tk[39]" -type "float3" -0.05277526 -0.065469012 0 ;
createNode polyExtrudeFace -n "polyExtrudeFace32";
	setAttr ".ics" -type "componentList" 4 "f[4]" "f[6]" "f[38:40]" "f[43]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 2.9829807 0.10585191 2.0795681 ;
	setAttr ".rs" 65515;
	setAttr ".lt" -type "double3" -1.0555792351318871e-015 -1.700029006457271e-016 0.0048640216651804555 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 2.857728936258634 0.074425301141075567 2.0378713869090919 ;
	setAttr ".cbx" -type "double3" 3.1082323303866608 0.13727852354942635 2.1212651059563998 ;
createNode polyTweak -n "polyTweak77";
	setAttr ".uopa" yes;
	setAttr -s 11 ".tk";
	setAttr ".tk[34]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[35]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[36]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[37]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[38]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[39]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[40]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[41]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[42]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[43]" -type "float3" 0 0.0047934395 0 ;
	setAttr ".tk[45]" -type "float3" 0 0.0047934395 0 ;
createNode polySplitRing -n "polySplitRing45";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[47:48]" "e[50]" "e[52]" "e[54]" "e[56]" "e[58]" "e[60]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".wt" 0.92060196399688721;
	setAttr ".dr" no;
	setAttr ".re" 47;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak78";
	setAttr ".uopa" yes;
	setAttr -s 33 ".tk";
	setAttr ".tk[1]" -type "float3" 0.074258827 0 0 ;
	setAttr ".tk[2]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[4]" -type "float3" 0.074258827 3.7252903e-009 0 ;
	setAttr ".tk[5]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[7]" -type "float3" 0.074258827 3.7252903e-009 0 ;
	setAttr ".tk[8]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[10]" -type "float3" 0.074258827 1.4901161e-008 0 ;
	setAttr ".tk[11]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[13]" -type "float3" 0.074258827 3.7252903e-009 0 ;
	setAttr ".tk[14]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[16]" -type "float3" 0.074258827 3.7252903e-009 0 ;
	setAttr ".tk[17]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[19]" -type "float3" 0.074258827 0 0 ;
	setAttr ".tk[20]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[22]" -type "float3" 0.074258827 0 0 ;
	setAttr ".tk[23]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[24]" -type "float3" 0.06360472 0 0 ;
	setAttr ".tk[26]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[27]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[28]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[29]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[30]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[31]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[32]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[33]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[35]" -type "float3" 0.014478676 -0.029629249 0 ;
	setAttr ".tk[37]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[38]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[39]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[46]" -type "float3" 0.014478676 -0.029629249 0 ;
	setAttr ".tk[49]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[50]" -type "float3" 0.031413101 0 0 ;
	setAttr ".tk[51]" -type "float3" 0.031413101 0 0 ;
createNode polySplitRing -n "polySplitRing46";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[1]" "e[3]" "e[5:6]" "e[8]" "e[10]" "e[12]" "e[14]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".wt" 0.06296936422586441;
	setAttr ".re" 8;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing47";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[120:121]" "e[123]" "e[125]" "e[127]" "e[129]" "e[131]" "e[133]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1.1073316073422086 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".wt" 0.82451707124710083;
	setAttr ".dr" no;
	setAttr ".re" 120;
	setAttr ".sma" 29.999999999999996;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyTweak -n "polyTweak79";
	setAttr ".uopa" yes;
	setAttr -s 18 ".tk";
	setAttr ".tk[2]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[5]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[7]" -type "float3" 0 9.3132257e-009 0 ;
	setAttr ".tk[8]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[10]" -type "float3" 0 -5.5879354e-009 0 ;
	setAttr ".tk[11]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[13]" -type "float3" 0 9.3132257e-009 0 ;
	setAttr ".tk[14]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[17]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[20]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[23]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[24]" -type "float3" 0.092822224 0 0 ;
	setAttr ".tk[54]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[60]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[61]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[62]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[68]" -type "float3" 0 3.7252903e-009 0 ;
	setAttr ".tk[69]" -type "float3" 0 3.7252903e-009 0 ;
createNode polyTweak -n "polyTweak80";
	setAttr ".uopa" yes;
	setAttr -s 9 ".tk";
	setAttr ".tk[2]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[5]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[8]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[11]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[14]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[17]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[20]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[23]" -type "float3" 0.078819014 0 0 ;
	setAttr ".tk[24]" -type "float3" 0.078819014 0 0 ;
createNode deleteComponent -n "deleteComponent53";
	setAttr ".dc" -type "componentList" 1 "f[74:75]";
createNode polyExtrudeEdge -n "polyExtrudeEdge12";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[23]" "e[26]" "e[136]" "e[147]" "e[149:150]";
	setAttr ".ix" -type "matrix" 1.0260237020030476 0 0 0 0 0.53387072431624949 0 0 0 0 1.1073316073422086 0
		 3.2485613271632161 0.086817188581805038 2.0793241411980037 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 4.2632564145606011e-014 0.10424471067294364 0 ;
	setAttr ".pvt" -type "float3" 3.6561301 0.23118518 2.0795479 ;
	setAttr ".rs" 46196;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 3.5883661622664444 0.12071465534503198 2.0302796749631344 ;
	setAttr ".cbx" -type "double3" 3.7238938800453072 0.13316634869512284 2.1288159779650884 ;
createNode polyTweak -n "polyTweak81";
	setAttr ".uopa" yes;
	setAttr -s 2 ".tk";
	setAttr ".tk[8]" -type "float3" 0 0 0.011723062 ;
	setAttr ".tk[14]" -type "float3" 0 0 -0.011319054 ;
createNode groupId -n "groupId14";
	setAttr ".ihi" 0;
createNode groupId -n "groupId15";
	setAttr ".ihi" 0;
createNode groupId -n "groupId16";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts21";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:79]";
createNode groupId -n "groupId17";
	setAttr ".ihi" 0;
createNode polyTweak -n "polyTweak82";
	setAttr ".uopa" yes;
	setAttr -s 8 ".tk";
	setAttr ".tk[637]" -type "float3" 0 0.03640328 -0.037430979 ;
	setAttr ".tk[639]" -type "float3" 0 -0.064392366 -0.0027408958 ;
	setAttr ".tk[640]" -type "float3" 0 0.037499383 -0.020682568 ;
	setAttr ".tk[641]" -type "float3" 3.3306691e-016 -0.056130733 0.0038570203 ;
	setAttr ".tk[643]" -type "float3" 0 0.03640328 -0.037430979 ;
	setAttr ".tk[645]" -type "float3" 0 -0.064392366 -0.0027408958 ;
	setAttr ".tk[646]" -type "float3" 0 0.037499383 -0.020682568 ;
	setAttr ".tk[647]" -type "float3" 1.6653345e-016 -0.056130733 0.0038570203 ;
createNode deleteComponent -n "deleteComponent54";
	setAttr ".dc" -type "componentList" 1 "f[414]";
createNode deleteComponent -n "deleteComponent55";
	setAttr ".dc" -type "componentList" 1 "f[48]";
createNode deleteComponent -n "deleteComponent56";
	setAttr ".dc" -type "componentList" 1 "f[567]";
createNode deleteComponent -n "deleteComponent57";
	setAttr ".dc" -type "componentList" 1 "f[570]";
createNode deleteComponent -n "deleteComponent58";
	setAttr ".dc" -type "componentList" 1 "f[569]";
createNode deleteComponent -n "deleteComponent59";
	setAttr ".dc" -type "componentList" 1 "f[568]";
createNode deleteComponent -n "deleteComponent60";
	setAttr ".dc" -type "componentList" 1 "f[566]";
createNode deleteComponent -n "deleteComponent61";
	setAttr ".dc" -type "componentList" 1 "f[566]";
createNode polyExtrudeEdge -n "polyExtrudeEdge13";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1199]" "e[1202:1203]" "e[1205]" "e[1207:1208]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0.27931738 -0.84178317 0.28667283 ;
	setAttr ".rs" 47638;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.2365154795414067 -0.9529645926306719 0.19176758073984873 ;
	setAttr ".cbx" -type "double3" 0.32211929629280589 -0.73060178493945294 0.38157807872375676 ;
createNode deleteComponent -n "deleteComponent62";
	setAttr ".dc" -type "componentList" 1 "f[565]";
createNode deleteComponent -n "deleteComponent63";
	setAttr ".dc" -type "componentList" 1 "f[564]";
createNode deleteComponent -n "deleteComponent64";
	setAttr ".dc" -type "componentList" 1 "f[563]";
createNode deleteComponent -n "deleteComponent65";
	setAttr ".dc" -type "componentList" 1 "f[560]";
createNode deleteComponent -n "deleteComponent66";
	setAttr ".dc" -type "componentList" 1 "f[561]";
createNode deleteComponent -n "deleteComponent67";
	setAttr ".dc" -type "componentList" 1 "f[560]";
createNode deleteComponent -n "deleteComponent68";
	setAttr ".dc" -type "componentList" 1 "f[560:565]";
createNode polyExtrudeEdge -n "polyExtrudeEdge14";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[56]" "e[64]" "e[881]" "e[883:884]" "e[1111]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".s" -type "double3" 0.79999999905690666 0.79999999905690666 0.79999999905690666 ;
	setAttr ".pvt" -type "float3" 0.28374779 -0.8394016 0.29490483 ;
	setAttr ".rs" 51161;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.20958477684441784 -1.0064423323412557 0.081518328856223385 ;
	setAttr ".cbx" -type "double3" 0.35791082686574743 -0.672360826913451 0.50829135269886772 ;
createNode polyExtrudeEdge -n "polyExtrudeEdge15";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1199]" "e[1202]" "e[1204]" "e[1206:1208]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.18263842134870928 -0.032921842787096534 0 ;
	setAttr ".ro" -type "double3" 2.6892695825106929 -1.4079992804578894 -20.813093013863021 ;
	setAttr ".pvt" -type "float3" 0.46638677 -0.87232327 0.29490486 ;
	setAttr ".rs" 60591;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.22441738939519743 -0.97303421921448441 0.12419562024841244 ;
	setAttr ".cbx" -type "double3" 0.34307821431496782 -0.705768993491664 0.46561410710699269 ;
createNode polyExtrudeEdge -n "polyExtrudeEdge16";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1211]" "e[1214]" "e[1216]" "e[1218:1220]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.19208453273601611 -0.062677005621839865 0 ;
	setAttr ".pvt" -type "float3" 0.66044372 -0.92830098 0.29536545 ;
	setAttr ".rs" 60702;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.36292846260629896 -0.97672504125705528 0.13188431132868658 ;
	setAttr ".cbx" -type "double3" 0.57378974075833078 -0.75452290859928994 0.4588465794230065 ;
createNode polyExtrudeEdge -n "polyExtrudeEdge17";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1223]" "e[1226]" "e[1228]" "e[1230:1232]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.19412536978047645 -0.17840995348434785 0 ;
	setAttr ".pvt" -type "float3" 0.85257709 -1.1045687 0.29536545 ;
	setAttr ".rs" 57220;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.52702184892868409 -1.0158874158779745 0.13188431132868658 ;
	setAttr ".cbx" -type "double3" 0.789881727783178 -0.8364298665543658 0.4588465794230065 ;
createNode polyTweak -n "polyTweak83";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[648:653]" -type "float3"  -0.066306062 0.040014237 -3.3306691e-015
		 -0.061456986 0.035757449 -6.6613381e-015 0.07082954 -0.022091676 -3.3306691e-015
		 0.072232582 -0.021443672 -6.6613381e-015 0.056869347 -0.039346844 0 -0.070310809
		 0.024977639 0;
createNode polyExtrudeEdge -n "polyExtrudeEdge18";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1235]" "e[1238]" "e[1240]" "e[1242:1244]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.080254634083767096 -0.21568415288168219 0 ;
	setAttr ".pvt" -type "float3" 0.93008572 -1.3192723 0.29536545 ;
	setAttr ".rs" 64033;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.70335289987350269 -1.1617901813190583 0.13188431132868658 ;
	setAttr ".cbx" -type "double3" 0.99630933349810391 -1.0453858767602595 0.4588465794230065 ;
createNode polyTweak -n "polyTweak84";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[654:659]" -type "float3"  -0.042151406 0.051169612 -3.1086245e-015
		 -0.040144917 0.046009228 -6.2172489e-015 0.055765655 -0.034512848 -3.1086245e-015
		 0.057674114 -0.034062501 -6.2172489e-015 0.029141953 -0.050168306 0 -0.056914516
		 0.03624953 0;
createNode polyExtrudeEdge -n "polyExtrudeEdge19";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[1247]" "e[1250]" "e[1252]" "e[1254:1256]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 9.4368957093138306e-015 -1.1082414502956868 0 ;
	setAttr ".ro" -type "double3" 4.8490165304862494 1.3940535672324839 16.583536695839452 ;
	setAttr ".pvt" -type "float3" 0.92785144 -2.4274716 0.29536545 ;
	setAttr ".rs" 61451;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.7801164965542543 -1.3491875146810095 0.13188431132868658 ;
	setAttr ".cbx" -type "double3" 1.0755864282100431 -1.2892728316641455 0.4588465794230065 ;
createNode polyTweak -n "polyTweak85";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[660:665]" -type "float3"  -0.0082695289 0.040963527
		 -3.3306691e-015 -0.009153978 0.036987029 -6.6613381e-015 0.024289411 -0.031585913
		 -3.3306691e-015 0.025890343 -0.031449314 -6.6613381e-015 -0.0023155315 -0.040346064
		 0 -0.025865598 0.0315433 0;
createNode polyCloseBorder -n "polyCloseBorder4";
	setAttr ".ics" -type "componentList" 4 "e[1259]" "e[1262]" "e[1264]" "e[1266:1268]";
createNode polyTweak -n "polyTweak86";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[666:671]" -type "float3"  0.27236745 0.038972907 -0.020120928
		 0.23031099 0.048463687 -0.22161826 -0.21322919 -0.050715417 -0.014693938 -0.22139192
		 -0.045751136 -0.15903544 -0.27236745 -0.026455296 0.22161826 0.21124929 0.050715417
		 0.18214576;
createNode polySplit -n "polySplit40";
	setAttr -s 2 ".e[0:1]"  0 0;
	setAttr -s 2 ".d[0:1]"  -2147482386 -2147482389;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyExtrudeFace -n "polyExtrudeFace33";
	setAttr ".ics" -type "componentList" 2 "f[453]" "f[476]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".s" -type "double3" 0.73333334153920382 0.73333334153920382 0.73333334153920382 ;
	setAttr ".pvt" -type "float3" 0.31836811 -0.76650399 -0.41728401 ;
	setAttr ".rs" 56276;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.24599278022563328 -0.92819049086576111 -0.62554503241787163 ;
	setAttr ".cbx" -type "double3" 0.39074341376975152 -0.60481750069980567 -0.20902296158457145 ;
createNode polyTweak -n "polyTweak87";
	setAttr ".uopa" yes;
	setAttr -s 41 ".tk";
	setAttr ".tk[510]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[511]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[518]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[519]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[529]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[530]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[531]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[532]" -type "float3" 0 0 0.10487106 ;
	setAttr ".tk[543]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[544]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[549]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[550]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[557]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[558]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[559]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[560]" -type "float3" 0 0.033948082 -0.099923015 ;
	setAttr ".tk[645]" -type "float3" 0 -0.031100579 -0.026499113 ;
	setAttr ".tk[648]" -type "float3" 0.10127558 0.00026754901 -0.0033725994 ;
	setAttr ".tk[649]" -type "float3" 0.096206591 0.00028224627 -0.054023933 ;
	setAttr ".tk[650]" -type "float3" 0.022145243 0.00076143793 -0.0035453236 ;
	setAttr ".tk[651]" -type "float3" 0.022749992 -0.070455126 -0.040914942 ;
	setAttr ".tk[652]" -type "float3" 0.0042175977 -0.061359104 0.078937821 ;
	setAttr ".tk[653]" -type "float3" 0.085016958 0.00023048912 0.046060693 ;
	setAttr ".tk[654]" -type "float3" 0.036167365 -0.00012954784 -0.0033725994 ;
	setAttr ".tk[655]" -type "float3" 0.030785589 -0.00012871611 -0.054023933 ;
	setAttr ".tk[656]" -type "float3" -0.058225766 0.00013410905 -0.0035453236 ;
	setAttr ".tk[657]" -type "float3" -0.2334334 0.00014210143 -0.059405763 ;
	setAttr ".tk[658]" -type "float3" -0.17326924 1.0085016e-005 0.076559685 ;
	setAttr ".tk[659]" -type "float3" 0.02220995 -0.00020669797 0.046060693 ;
	setAttr ".tk[660]" -type "float3" 0.11874364 -0.00066575781 -0.0033725994 ;
	setAttr ".tk[661]" -type "float3" 0.11349972 -0.00067560561 -0.054023933 ;
	setAttr ".tk[662]" -type "float3" 0.077233627 -0.00059704506 -0.0035453236 ;
	setAttr ".tk[663]" -type "float3" -0.11837218 -0.00058869086 -0.056559138 ;
	setAttr ".tk[664]" -type "float3" -0.077185407 -0.00074460334 0.12473506 ;
	setAttr ".tk[665]" -type "float3" 0.10752898 -0.00076822424 0.046060693 ;
	setAttr ".tk[666]" -type "float3" 0.47801712 0 0.10925084 ;
	setAttr ".tk[667]" -type "float3" 0.47801712 0 0.10925084 ;
	setAttr ".tk[668]" -type "float3" 0.47801712 0 0.10925084 ;
	setAttr ".tk[669]" -type "float3" 0.47801712 0 0.10925084 ;
	setAttr ".tk[670]" -type "float3" 0.47801712 0 0.10925084 ;
	setAttr ".tk[671]" -type "float3" 0.47801712 0 0.10925084 ;
createNode polyTweak -n "polyTweak88";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[672:677]" -type "float3"  -0.014270989 -0.015008103
		 0.028200768 0.009634003 0.0080541698 0.022839159 -0.013473169 -0.012176557 0.0033075865
		 0.011039568 0.0080541698 0.0011094508 -0.010181838 -0.0046440368 -0.022051983 0.014270989
		 0.015008105 -0.028200772;
createNode deleteComponent -n "deleteComponent69";
	setAttr ".dc" -type "componentList" 2 "f[453]" "f[476]";
createNode polyExtrudeEdge -n "polyExtrudeEdge20";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1271]" "e[1273]" "e[1275]" "e[1277]" "e[1279:1280]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.19842490552777414 -0.077611814623611663 0 ;
	setAttr ".pvt" -type "float3" 0.51679295 -0.84411579 -0.41728398 ;
	setAttr ".rs" 49279;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.25926838375995653 -0.89853285159038776 -0.58734434616113484 ;
	setAttr ".cbx" -type "double3" 0.37746783539758372 -0.63447513997517901 -0.24722362952118265 ;
createNode polyExtrudeEdge -n "polyExtrudeEdge21";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1283]" "e[1285]" "e[1287]" "e[1289]" "e[1291:1292]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.1817112078692098 -0.12627160916976765 0 ;
	setAttr ".pvt" -type "float3" 0.69850391 -0.97038728 -0.41728401 ;
	setAttr ".rs" 41241;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.42408191097102726 -0.95515203942676419 -0.58734434616113484 ;
	setAttr ".cbx" -type "double3" 0.6095040990005387 -0.73307952651488195 -0.24722364784130829 ;
createNode polyTweak -n "polyTweak89";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[678:683]" -type "float3"  -0.079619236 0.023409195 1.2212453e-015
		 0.042000897 -0.015038259 2.4424907e-015 -0.06390015 0.021367006 2.4424907e-015 0.041483484
		 -0.016799683 2.4424907e-015 -0.022514446 0.014469418 4.8849813e-015 0.079619259 -0.023409195
		 9.7699626e-015;
createNode polyExtrudeEdge -n "polyExtrudeEdge22";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1295]" "e[1297]" "e[1299]" "e[1301]" "e[1303:1304]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.14402117415980809 -0.26328988909049889 0 ;
	setAttr ".pvt" -type "float3" 0.8425256 -1.2336773 -0.41728401 ;
	setAttr ".rs" 33994;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.5791003646368228 -1.0520397260165577 -0.58734434616113484 ;
	setAttr ".cbx" -type "double3" 0.81790809137663534 -0.88873498853909993 -0.24722364784130829 ;
createNode polyTweak -n "polyTweak90";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[684:689]" -type "float3"  -0.063230388 0.032766461 1.3877788e-015
		 0.031800963 -0.019877832 2.7755576e-015 -0.049256112 0.028784251 2.7755576e-015 0.030284123
		 -0.021509746 2.7755576e-015 -0.013343113 0.016833575 5.5511151e-015 0.063230388 -0.032766461
		 1.110223e-014;
createNode polyExtrudeEdge -n "polyExtrudeEdge23";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 5 "e[1307]" "e[1309]" "e[1311]" "e[1313]" "e[1315:1316]";
	setAttr ".ix" -type "matrix" 0.42215091683826994 0 0 0 0 0.89676638125666508 0 0
		 0 0 0.61472140929830843 0 0 0.16300540231280791 0.041168307141795424 1;
	setAttr ".ws" yes;
	setAttr ".t" -type "double3" 0.28755775828702146 -1.1753506315338407 -4.4408920985006262e-016 ;
	setAttr ".pvt" -type "float3" 1.1300813 -2.4090283 -0.41728401 ;
	setAttr ".rs" 61870;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 0.70001262373887574 -1.2584667347145264 -0.58734434616113484 ;
	setAttr ".cbx" -type "double3" 0.98503809694180033 -1.2088879569601088 -0.24722364784130829 ;
createNode polyTweak -n "polyTweak91";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[690:695]" -type "float3"  -0.05474088 0.063409001 2.220446e-015
		 0.023688884 -0.036824077 4.4408921e-015 -0.038957521 0.054126754 4.4408921e-015 0.019641817
		 -0.038812999 4.4408921e-015 -0.00033630244 0.027779931 8.8817842e-015 0.05474088
		 -0.063408993 1.7763568e-014;
createNode polyCloseBorder -n "polyCloseBorder5";
	setAttr ".ics" -type "componentList" 5 "e[1319]" "e[1321]" "e[1323]" "e[1325]" "e[1327:1328]";
createNode polyTweak -n "polyTweak92";
	setAttr ".uopa" yes;
	setAttr -s 6 ".tk[696:701]" -type "float3"  0.28086644 0.022998525 -0.23016468
		 -0.15973975 -0.0060488828 -0.18640509 0.23651896 0.012623324 -0.026995333 -0.16615185
		 -0.001570913 -0.0090548731 0.11321304 -0.011252859 0.17998034 -0.28086647 -0.022998512
		 0.23016468;
createNode polyUnite -n "polyUnite2";
	setAttr -s 2 ".ip";
	setAttr -s 2 ".im";
createNode groupId -n "groupId18";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts22";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:626]";
createNode groupId -n "groupId19";
	setAttr ".ihi" 0;
createNode groupId -n "groupId20";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts23";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 7 "f[0:706]" "f[1138:1197]" "f[1214:1227]" "f[1259:1268]" "f[1299:1308]" "f[1337:1346]" "f[1363:1386]";
createNode polyMirror -n "polyMirror1";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[*]";
	setAttr ".ix" -type "matrix" 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1;
	setAttr ".ws" yes;
	setAttr ".p" -type "double3" 0 -0.47793114185333252 0.35298675298690796 ;
	setAttr ".d" 1;
	setAttr ".mm" 1;
	setAttr ".mt" 0.001;
createNode polyTweak -n "polyTweak93";
	setAttr ".uopa" yes;
	setAttr -s 139 ".tk";
	setAttr ".tk[34]" -type "float3" 1.3877788e-017 0 0 ;
	setAttr ".tk[104]" -type "float3" -0.018330302 0 0 ;
	setAttr ".tk[184]" -type "float3" 4.4408921e-016 0 0 ;
	setAttr ".tk[210]" -type "float3" 4.4408921e-016 0 0 ;
	setAttr ".tk[319]" -type "float3" -0.005923816 0 0 ;
	setAttr ".tk[320]" -type "float3" -0.0045461147 0 0 ;
	setAttr ".tk[406]" -type "float3" 0.00087775989 0 0 ;
	setAttr ".tk[407]" -type "float3" 0.00087775989 0 0 ;
	setAttr ".tk[408]" -type "float3" 0.0027880061 0 0 ;
	setAttr ".tk[411]" -type "float3" 0.0027880061 0 0 ;
	setAttr ".tk[426]" -type "float3" 0.0014932383 0 0 ;
	setAttr ".tk[429]" -type "float3" 0.0014932383 0 0 ;
	setAttr ".tk[432]" -type "float3" 0.00044349331 0 0 ;
	setAttr ".tk[435]" -type "float3" 0.00044349331 0 0 ;
	setAttr ".tk[443]" -type "float3" 3.6908608e-016 0 0 ;
	setAttr ".tk[450]" -type "float3" -0.00077439228 0 0 ;
	setAttr ".tk[453]" -type "float3" -0.00077439228 0 0 ;
	setAttr ".tk[462]" -type "float3" -0.0013619495 0 0 ;
	setAttr ".tk[463]" -type "float3" -0.0013619495 0 0 ;
	setAttr ".tk[476]" -type "float3" -0.03393035 0 0 ;
	setAttr ".tk[477]" -type "float3" -0.027424522 0 0 ;
	setAttr ".tk[490]" -type "float3" -0.028679516 0 0 ;
	setAttr ".tk[493]" -type "float3" -0.035185341 0 0 ;
	setAttr ".tk[525]" -type "float3" 0.00060946419 0 0 ;
	setAttr ".tk[528]" -type "float3" 0.00060946419 0 0 ;
	setAttr ".tk[563]" -type "float3" 0.0020397408 0 0 ;
	setAttr ".tk[564]" -type "float3" 0.0020397408 0 0 ;
	setAttr ".tk[588]" -type "float3" 0.002825371 0 0 ;
	setAttr ".tk[589]" -type "float3" 0.002825371 0 0 ;
	setAttr ".tk[596]" -type "float3" 3.3079722e-018 0 0 ;
	setAttr ".tk[599]" -type "float3" -0.00087885204 0 0 ;
	setAttr ".tk[600]" -type "float3" -0.00087885204 0 0 ;
	setAttr ".tk[609]" -type "float3" -0.00085915346 0 0 ;
	setAttr ".tk[610]" -type "float3" -0.00085915346 0 0 ;
	setAttr ".tk[628]" -type "float3" 2.7755576e-017 0 0 ;
	setAttr ".tk[629]" -type "float3" 2.7755576e-017 0 0 ;
	setAttr ".tk[630]" -type "float3" -0.00077514624 0 0 ;
	setAttr ".tk[631]" -type "float3" -0.00077514624 0 0 ;
select -ne :time1;
	setAttr ".o" 105;
	setAttr ".unw" 105;
select -ne :renderPartition;
	setAttr -s 2 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 2 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 20 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 20 ".gn";
select -ne :initialParticleSE;
	setAttr ".ro" yes;
select -ne :defaultResolution;
	setAttr ".pa" 1;
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
select -ne :defaultHardwareRenderGlobals;
	setAttr ".res" -type "string" "ntsc_4d 646 485 1.333";
connectAttr "groupParts22.og" "pCubeShape1.i";
connectAttr "groupId18.id" "pCubeShape1.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape1.iog.og[0].gco";
connectAttr "groupId19.id" "pCubeShape1.ciog.cog[0].cgid";
connectAttr "groupId1.id" "pCubeShape2.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape2.iog.og[0].gco";
connectAttr "groupParts1.og" "pCubeShape2.i";
connectAttr "groupId2.id" "pCubeShape2.ciog.cog[0].cgid";
connectAttr "groupId3.id" "pCubeShape3.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape3.iog.og[0].gco";
connectAttr "groupId4.id" "pCubeShape3.ciog.cog[0].cgid";
connectAttr "groupId5.id" "pCubeShape4.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape4.iog.og[0].gco";
connectAttr "groupParts2.og" "pCubeShape4.i";
connectAttr "groupId6.id" "pCubeShape4.ciog.cog[0].cgid";
connectAttr "groupId7.id" "pCubeShape5.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape5.iog.og[0].gco";
connectAttr "groupId8.id" "pCubeShape5.ciog.cog[0].cgid";
connectAttr "groupId9.id" "pCubeShape6.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape6.iog.og[0].gco";
connectAttr "groupId10.id" "pCubeShape6.ciog.cog[0].cgid";
connectAttr "groupId11.id" "pCubeShape7.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape7.iog.og[0].gco";
connectAttr "groupId12.id" "pCubeShape7.ciog.cog[0].cgid";
connectAttr "polySplitRing42.out" "pCube8Shape.i";
connectAttr "groupId13.id" "pCube8Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCube8Shape.iog.og[0].gco";
connectAttr "groupId16.id" "pCubeShape8.iog.og[2].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape8.iog.og[2].gco";
connectAttr "groupParts21.og" "pCubeShape8.i";
connectAttr "groupId17.id" "pCubeShape8.ciog.cog[2].cgid";
connectAttr "groupId14.id" "pCubeShape13.iog.og[2].gid";
connectAttr ":initialShadingGroup.mwc" "pCubeShape13.iog.og[2].gco";
connectAttr "groupId15.id" "pCubeShape13.ciog.cog[2].cgid";
connectAttr "polyMirror1.out" "pCube14Shape.i";
connectAttr "groupId20.id" "pCube14Shape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "pCube14Shape.iog.og[0].gco";
connectAttr ":mentalrayGlobals.msg" ":mentalrayItemsList.glb";
connectAttr ":miDefaultOptions.msg" ":mentalrayItemsList.opt" -na;
connectAttr ":miDefaultFramebuffer.msg" ":mentalrayItemsList.fb" -na;
connectAttr ":miDefaultOptions.msg" ":mentalrayGlobals.opt";
connectAttr ":miDefaultFramebuffer.msg" ":mentalrayGlobals.fb";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "layerManager.dli[1]" "lado.id";
connectAttr "layerManager.dli[2]" "frebte.id";
connectAttr "polyCube1.out" "deleteComponent1.ig";
connectAttr "deleteComponent1.og" "polyTweak1.ip";
connectAttr "polyTweak1.out" "deleteComponent2.ig";
connectAttr "deleteComponent2.og" "deleteComponent3.ig";
connectAttr "deleteComponent3.og" "deleteComponent4.ig";
connectAttr "polyTweak2.out" "polySplitRing1.ip";
connectAttr "pCubeShape1.wm" "polySplitRing1.mp";
connectAttr "deleteComponent4.og" "polyTweak2.ip";
connectAttr "polySplitRing1.out" "polySplitRing2.ip";
connectAttr "pCubeShape1.wm" "polySplitRing2.mp";
connectAttr "polyTweak3.out" "polySplitRing3.ip";
connectAttr "pCubeShape1.wm" "polySplitRing3.mp";
connectAttr "polySplitRing2.out" "polyTweak3.ip";
connectAttr "polySplitRing3.out" "polySplitRing4.ip";
connectAttr "pCubeShape1.wm" "polySplitRing4.mp";
connectAttr "polyTweak4.out" "polySplitRing5.ip";
connectAttr "pCubeShape1.wm" "polySplitRing5.mp";
connectAttr "polySplitRing4.out" "polyTweak4.ip";
connectAttr "polyTweak5.out" "polyAppend1.ip";
connectAttr "polySplitRing5.out" "polyTweak5.ip";
connectAttr "polyAppend1.out" "polyCloseBorder1.ip";
connectAttr "polyCloseBorder1.out" "polySplit1.ip";
connectAttr "polySplit1.out" "polySplit2.ip";
connectAttr "polySplit2.out" "polySplit3.ip";
connectAttr "polySplit3.out" "polySplit4.ip";
connectAttr "polySplit4.out" "polySplit5.ip";
connectAttr "polySplit5.out" "polySplit6.ip";
connectAttr "polySplit6.out" "polySplit7.ip";
connectAttr "polySplit7.out" "deleteComponent5.ig";
connectAttr "deleteComponent5.og" "polyExtrudeEdge1.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge1.mp";
connectAttr "polyExtrudeEdge1.out" "polyTweak6.ip";
connectAttr "polyTweak6.out" "deleteComponent6.ig";
connectAttr "deleteComponent6.og" "deleteComponent7.ig";
connectAttr "deleteComponent7.og" "deleteComponent8.ig";
connectAttr "deleteComponent8.og" "polyTweak7.ip";
connectAttr "polyTweak7.out" "deleteComponent9.ig";
connectAttr "deleteComponent9.og" "deleteComponent10.ig";
connectAttr "polyTweak8.out" "polyExtrudeFace1.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace1.mp";
connectAttr "deleteComponent10.og" "polyTweak8.ip";
connectAttr "polyExtrudeFace1.out" "polyExtrudeFace2.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace2.mp";
connectAttr "polyExtrudeFace2.out" "polyExtrudeFace3.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace3.mp";
connectAttr "polyExtrudeFace3.out" "polyTweak9.ip";
connectAttr "polyTweak9.out" "deleteComponent11.ig";
connectAttr "polyTweak10.out" "polySplitRing6.ip";
connectAttr "pCubeShape1.wm" "polySplitRing6.mp";
connectAttr "deleteComponent11.og" "polyTweak10.ip";
connectAttr "polyTweak11.out" "polySplitRing7.ip";
connectAttr "pCubeShape1.wm" "polySplitRing7.mp";
connectAttr "polySplitRing6.out" "polyTweak11.ip";
connectAttr "polyTweak12.out" "polySplitRing8.ip";
connectAttr "pCubeShape1.wm" "polySplitRing8.mp";
connectAttr "polySplitRing7.out" "polyTweak12.ip";
connectAttr "polyTweak13.out" "polySplitRing9.ip";
connectAttr "pCubeShape1.wm" "polySplitRing9.mp";
connectAttr "polySplitRing8.out" "polyTweak13.ip";
connectAttr "polySplitRing9.out" "polyTweak14.ip";
connectAttr "polyTweak14.out" "polySplitRing10.ip";
connectAttr "pCubeShape1.wm" "polySplitRing10.mp";
connectAttr "polySplitRing10.out" "polyExtrudeFace4.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace4.mp";
connectAttr "polyExtrudeFace4.out" "polyTweak15.ip";
connectAttr "polyTweak15.out" "deleteComponent12.ig";
connectAttr "polyTweak16.out" "polyExtrudeFace5.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace5.mp";
connectAttr "deleteComponent12.og" "polyTweak16.ip";
connectAttr "polyTweak17.out" "polySplitRing11.ip";
connectAttr "pCubeShape1.wm" "polySplitRing11.mp";
connectAttr "polyExtrudeFace5.out" "polyTweak17.ip";
connectAttr "polySplitRing11.out" "polySplitRing12.ip";
connectAttr "pCubeShape1.wm" "polySplitRing12.mp";
connectAttr "polySplitRing12.out" "polyTweak18.ip";
connectAttr "polyTweak18.out" "deleteComponent13.ig";
connectAttr "polyTweak19.out" "polyExtrudeFace6.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace6.mp";
connectAttr "deleteComponent13.og" "polyTweak19.ip";
connectAttr "polyExtrudeFace6.out" "polyTweak20.ip";
connectAttr "polyTweak20.out" "deleteComponent14.ig";
connectAttr "deleteComponent14.og" "deleteComponent15.ig";
connectAttr "deleteComponent15.og" "polyTweak21.ip";
connectAttr "polyTweak21.out" "deleteComponent16.ig";
connectAttr "deleteComponent16.og" "polyTweak22.ip";
connectAttr "polyTweak22.out" "polySplit8.ip";
connectAttr "polyTweak23.out" "polyExtrudeFace7.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace7.mp";
connectAttr "polySplit8.out" "polyTweak23.ip";
connectAttr "polyExtrudeFace7.out" "polyExtrudeFace8.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace8.mp";
connectAttr "polyExtrudeFace8.out" "polySplit9.ip";
connectAttr "polyTweak24.out" "polyExtrudeFace9.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace9.mp";
connectAttr "polySplit9.out" "polyTweak24.ip";
connectAttr "polyExtrudeFace9.out" "polyExtrudeFace10.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace10.mp";
connectAttr "polyExtrudeFace10.out" "polyTweak25.ip";
connectAttr "polyTweak25.out" "deleteComponent17.ig";
connectAttr "deleteComponent17.og" "deleteComponent18.ig";
connectAttr "polyTweak26.out" "polySplitRing13.ip";
connectAttr "pCubeShape1.wm" "polySplitRing13.mp";
connectAttr "deleteComponent18.og" "polyTweak26.ip";
connectAttr "polySplitRing13.out" "polyTweak27.ip";
connectAttr "polyTweak27.out" "deleteComponent19.ig";
connectAttr "deleteComponent19.og" "polyTweak28.ip";
connectAttr "polyTweak28.out" "deleteComponent20.ig";
connectAttr "deleteComponent20.og" "deleteComponent21.ig";
connectAttr "polyTweak29.out" "polyExtrudeFace11.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace11.mp";
connectAttr "deleteComponent21.og" "polyTweak29.ip";
connectAttr "polyExtrudeFace11.out" "polySplit10.ip";
connectAttr "polySplit10.out" "polyTweak30.ip";
connectAttr "polyTweak30.out" "polySplit11.ip";
connectAttr "polySplit11.out" "polySplit12.ip";
connectAttr "polySplit12.out" "polyTweak31.ip";
connectAttr "polyTweak31.out" "polySplit13.ip";
connectAttr "polySplit13.out" "polySplit14.ip";
connectAttr "polySplit14.out" "polyExtrudeFace12.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace12.mp";
connectAttr "polyExtrudeFace12.out" "polySplitRing14.ip";
connectAttr "pCubeShape1.wm" "polySplitRing14.mp";
connectAttr "polySplitRing14.out" "polyTweak32.ip";
connectAttr "polyTweak32.out" "polySplit15.ip";
connectAttr "polySplit15.out" "polySplit16.ip";
connectAttr "polySplit16.out" "polySplit17.ip";
connectAttr "polySplit17.out" "polySplit18.ip";
connectAttr "polyTweak33.out" "polyExtrudeFace13.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace13.mp";
connectAttr "polySplit18.out" "polyTweak33.ip";
connectAttr "polyExtrudeFace13.out" "polySplitRing15.ip";
connectAttr "pCubeShape1.wm" "polySplitRing15.mp";
connectAttr "polySplitRing15.out" "polyTweak34.ip";
connectAttr "polyTweak34.out" "deleteComponent22.ig";
connectAttr "deleteComponent22.og" "deleteComponent23.ig";
connectAttr "deleteComponent23.og" "deleteComponent24.ig";
connectAttr "deleteComponent24.og" "deleteComponent25.ig";
connectAttr "deleteComponent25.og" "polySplit19.ip";
connectAttr "polySplit19.out" "polySplit20.ip";
connectAttr "polySplit20.out" "polyTweak35.ip";
connectAttr "polyTweak35.out" "polySplit21.ip";
connectAttr "polySplit21.out" "polySplit22.ip";
connectAttr "polySplit22.out" "polyTweak36.ip";
connectAttr "polyTweak36.out" "polySplit23.ip";
connectAttr "polySplit23.out" "polySplit24.ip";
connectAttr "polySplit24.out" "polySplit25.ip";
connectAttr "polyTweak37.out" "polyExtrudeFace14.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace14.mp";
connectAttr "polySplit25.out" "polyTweak37.ip";
connectAttr "polyExtrudeFace14.out" "polySplitRing16.ip";
connectAttr "pCubeShape1.wm" "polySplitRing16.mp";
connectAttr "polySplitRing16.out" "polyTweak38.ip";
connectAttr "polyTweak38.out" "polySplit26.ip";
connectAttr "polySplit26.out" "polySplit27.ip";
connectAttr "polySplit27.out" "polyExtrudeFace15.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace15.mp";
connectAttr "polyExtrudeFace15.out" "polyTweak39.ip";
connectAttr "polyTweak39.out" "polySplit28.ip";
connectAttr "polySplit28.out" "polySplit29.ip";
connectAttr "polySplit29.out" "polyExtrudeFace16.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace16.mp";
connectAttr "polyExtrudeFace16.out" "polyTweak40.ip";
connectAttr "polyTweak40.out" "polySplit30.ip";
connectAttr "polySplit30.out" "polySplit31.ip";
connectAttr "polySplit31.out" "polyExtrudeFace17.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace17.mp";
connectAttr "polyExtrudeFace17.out" "deleteComponent26.ig";
connectAttr "deleteComponent26.og" "deleteComponent27.ig";
connectAttr "deleteComponent27.og" "polySplit32.ip";
connectAttr "polySplit32.out" "polySplit33.ip";
connectAttr "polyTweak41.out" "polyExtrudeFace18.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace18.mp";
connectAttr "polySplit33.out" "polyTweak41.ip";
connectAttr "polyExtrudeFace18.out" "deleteComponent28.ig";
connectAttr "deleteComponent28.og" "deleteComponent29.ig";
connectAttr "deleteComponent29.og" "polyTweak42.ip";
connectAttr "polyTweak42.out" "polySplit34.ip";
connectAttr "polySplit34.out" "polyExtrudeFace19.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace19.mp";
connectAttr "polyExtrudeFace19.out" "polyTweak43.ip";
connectAttr "polyTweak43.out" "deleteComponent30.ig";
connectAttr "deleteComponent30.og" "deleteComponent31.ig";
connectAttr "polyTweak44.out" "polyCloseBorder2.ip";
connectAttr "deleteComponent31.og" "polyTweak44.ip";
connectAttr "polyCloseBorder2.out" "polySplit35.ip";
connectAttr "polySplit35.out" "polySplitRing17.ip";
connectAttr "pCubeShape1.wm" "polySplitRing17.mp";
connectAttr "polyTweak45.out" "polySplitRing18.ip";
connectAttr "pCubeShape1.wm" "polySplitRing18.mp";
connectAttr "polySplitRing17.out" "polyTweak45.ip";
connectAttr "polySplitRing18.out" "polyExtrudeFace20.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace20.mp";
connectAttr "polyTweak46.out" "polySplitRing19.ip";
connectAttr "pCubeShape1.wm" "polySplitRing19.mp";
connectAttr "polyExtrudeFace20.out" "polyTweak46.ip";
connectAttr "polySplitRing19.out" "polySplitRing20.ip";
connectAttr "pCubeShape1.wm" "polySplitRing20.mp";
connectAttr "polySplitRing20.out" "deleteComponent32.ig";
connectAttr "deleteComponent32.og" "deleteComponent33.ig";
connectAttr "deleteComponent33.og" "deleteComponent34.ig";
connectAttr "deleteComponent34.og" "polyExtrudeFace21.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace21.mp";
connectAttr "polyExtrudeFace21.out" "polySplitRing21.ip";
connectAttr "pCubeShape1.wm" "polySplitRing21.mp";
connectAttr "polySplitRing21.out" "polySplitRing22.ip";
connectAttr "pCubeShape1.wm" "polySplitRing22.mp";
connectAttr "polySplitRing22.out" "polyExtrudeFace22.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace22.mp";
connectAttr "polyTweak47.out" "polySplitRing23.ip";
connectAttr "pCubeShape1.wm" "polySplitRing23.mp";
connectAttr "polyExtrudeFace22.out" "polyTweak47.ip";
connectAttr "polySplitRing23.out" "polySplitRing24.ip";
connectAttr "pCubeShape1.wm" "polySplitRing24.mp";
connectAttr "polySplitRing24.out" "polyExtrudeFace23.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace23.mp";
connectAttr "polyExtrudeFace23.out" "deleteComponent35.ig";
connectAttr "deleteComponent35.og" "deleteComponent36.ig";
connectAttr "deleteComponent36.og" "deleteComponent37.ig";
connectAttr "deleteComponent37.og" "deleteComponent38.ig";
connectAttr "polyTweak48.out" "polySplitRing25.ip";
connectAttr "pCubeShape1.wm" "polySplitRing25.mp";
connectAttr "deleteComponent38.og" "polyTweak48.ip";
connectAttr "polySplitRing25.out" "polyExtrudeFace24.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace24.mp";
connectAttr "polyExtrudeFace24.out" "deleteComponent39.ig";
connectAttr "deleteComponent39.og" "deleteComponent40.ig";
connectAttr "deleteComponent40.og" "polySplitRing26.ip";
connectAttr "pCubeShape1.wm" "polySplitRing26.mp";
connectAttr "polySplitRing26.out" "polySplit36.ip";
connectAttr "polySplit36.out" "polySplit37.ip";
connectAttr "polySplit37.out" "polyExtrudeFace25.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace25.mp";
connectAttr "polyExtrudeFace25.out" "polyTweak49.ip";
connectAttr "polyTweak49.out" "deleteComponent41.ig";
connectAttr "deleteComponent41.og" "polyTweak50.ip";
connectAttr "polyTweak50.out" "deleteComponent42.ig";
connectAttr "deleteComponent42.og" "deleteComponent43.ig";
connectAttr "deleteComponent43.og" "deleteComponent44.ig";
connectAttr "polyCube2.out" "groupParts1.ig";
connectAttr "groupId1.id" "groupParts1.gi";
connectAttr "pCubeShape4.o" "polyUnite1.ip[0]";
connectAttr "pCubeShape5.o" "polyUnite1.ip[1]";
connectAttr "pCubeShape6.o" "polyUnite1.ip[2]";
connectAttr "pCubeShape7.o" "polyUnite1.ip[3]";
connectAttr "pCubeShape4.wm" "polyUnite1.im[0]";
connectAttr "pCubeShape5.wm" "polyUnite1.im[1]";
connectAttr "pCubeShape6.wm" "polyUnite1.im[2]";
connectAttr "pCubeShape7.wm" "polyUnite1.im[3]";
connectAttr "polyCube3.out" "groupParts2.ig";
connectAttr "groupId5.id" "groupParts2.gi";
connectAttr "polyUnite1.out" "groupParts3.ig";
connectAttr "groupParts3.og" "deleteComponent45.ig";
connectAttr "deleteComponent45.og" "polyAppend2.ip";
connectAttr "polyAppend2.out" "groupParts4.ig";
connectAttr "groupParts4.og" "polyAppend3.ip";
connectAttr "polyAppend3.out" "groupParts5.ig";
connectAttr "groupParts5.og" "polyAppend4.ip";
connectAttr "polyAppend4.out" "groupParts6.ig";
connectAttr "groupParts6.og" "polyAppend5.ip";
connectAttr "polyAppend5.out" "groupParts7.ig";
connectAttr "groupParts7.og" "polyAppend6.ip";
connectAttr "polyAppend6.out" "groupParts8.ig";
connectAttr "groupParts8.og" "polyAppend7.ip";
connectAttr "polyAppend7.out" "groupParts9.ig";
connectAttr "groupParts9.og" "polyExtrudeEdge2.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge2.mp";
connectAttr "polyExtrudeEdge2.out" "groupParts10.ig";
connectAttr "polyTweak51.out" "polySplitRing27.ip";
connectAttr "pCube8Shape.wm" "polySplitRing27.mp";
connectAttr "groupParts10.og" "polyTweak51.ip";
connectAttr "polySplitRing27.out" "polySplitRing28.ip";
connectAttr "pCube8Shape.wm" "polySplitRing28.mp";
connectAttr "polyTweak52.out" "polyExtrudeEdge3.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge3.mp";
connectAttr "polySplitRing28.out" "polyTweak52.ip";
connectAttr "polyExtrudeEdge3.out" "groupParts11.ig";
connectAttr "polyTweak53.out" "polySplitRing29.ip";
connectAttr "pCube8Shape.wm" "polySplitRing29.mp";
connectAttr "groupParts11.og" "polyTweak53.ip";
connectAttr "polyTweak54.out" "polyExtrudeEdge4.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge4.mp";
connectAttr "polySplitRing29.out" "polyTweak54.ip";
connectAttr "polyExtrudeEdge4.out" "groupParts12.ig";
connectAttr "polyTweak55.out" "polyExtrudeEdge5.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge5.mp";
connectAttr "groupParts12.og" "polyTweak55.ip";
connectAttr "polyExtrudeEdge5.out" "groupParts13.ig";
connectAttr "polyTweak56.out" "polyExtrudeEdge6.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge6.mp";
connectAttr "groupParts13.og" "polyTweak56.ip";
connectAttr "polyExtrudeEdge6.out" "groupParts14.ig";
connectAttr "groupParts14.og" "polyExtrudeEdge7.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge7.mp";
connectAttr "polyExtrudeEdge7.out" "groupParts15.ig";
connectAttr "polyTweak57.out" "polyExtrudeEdge8.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge8.mp";
connectAttr "groupParts15.og" "polyTweak57.ip";
connectAttr "polyExtrudeEdge8.out" "groupParts16.ig";
connectAttr "polyTweak58.out" "polyExtrudeEdge9.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge9.mp";
connectAttr "groupParts16.og" "polyTweak58.ip";
connectAttr "polyExtrudeEdge9.out" "groupParts17.ig";
connectAttr "polyTweak59.out" "polySplitRing30.ip";
connectAttr "pCube8Shape.wm" "polySplitRing30.mp";
connectAttr "groupParts17.og" "polyTweak59.ip";
connectAttr "polySplitRing30.out" "polySplitRing31.ip";
connectAttr "pCube8Shape.wm" "polySplitRing31.mp";
connectAttr "polyTweak60.out" "polySplitRing32.ip";
connectAttr "pCube8Shape.wm" "polySplitRing32.mp";
connectAttr "polySplitRing31.out" "polyTweak60.ip";
connectAttr "polyTweak61.out" "polyExtrudeFace26.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace26.mp";
connectAttr "deleteComponent44.og" "polyTweak61.ip";
connectAttr "polyTweak62.out" "polySplitRing33.ip";
connectAttr "pCube8Shape.wm" "polySplitRing33.mp";
connectAttr "polySplitRing32.out" "polyTweak62.ip";
connectAttr "polyTweak63.out" "polyCloseBorder3.ip";
connectAttr "polySplitRing33.out" "polyTweak63.ip";
connectAttr "polyCloseBorder3.out" "groupParts18.ig";
connectAttr "groupParts18.og" "polyTweak64.ip";
connectAttr "polyTweak64.out" "deleteComponent46.ig";
connectAttr "deleteComponent46.og" "polyExtrudeEdge10.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge10.mp";
connectAttr "polyExtrudeEdge10.out" "groupParts19.ig";
connectAttr "polyTweak65.out" "polyExtrudeEdge11.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeEdge11.mp";
connectAttr "groupParts19.og" "polyTweak65.ip";
connectAttr "polyExtrudeEdge11.out" "groupParts20.ig";
connectAttr "groupId13.id" "groupParts20.gi";
connectAttr "groupParts20.og" "polyTweak66.ip";
connectAttr "polyTweak66.out" "deleteComponent47.ig";
connectAttr "deleteComponent47.og" "deleteComponent48.ig";
connectAttr "deleteComponent48.og" "deleteComponent49.ig";
connectAttr "deleteComponent49.og" "deleteComponent50.ig";
connectAttr "deleteComponent50.og" "deleteComponent51.ig";
connectAttr "deleteComponent51.og" "deleteComponent52.ig";
connectAttr "deleteComponent52.og" "polyTweak67.ip";
connectAttr "polyTweak67.out" "polySplit38.ip";
connectAttr "polySplit38.out" "polySplit39.ip";
connectAttr "polyTweak68.out" "polyExtrudeFace27.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeFace27.mp";
connectAttr "polySplit39.out" "polyTweak68.ip";
connectAttr "polyExtrudeFace27.out" "polyExtrudeFace28.ip";
connectAttr "pCube8Shape.wm" "polyExtrudeFace28.mp";
connectAttr "polyTweak69.out" "polySplitRing34.ip";
connectAttr "pCube8Shape.wm" "polySplitRing34.mp";
connectAttr "polyExtrudeFace28.out" "polyTweak69.ip";
connectAttr "polySplitRing34.out" "polySplitRing35.ip";
connectAttr "pCube8Shape.wm" "polySplitRing35.mp";
connectAttr "polySplitRing35.out" "polySplitRing36.ip";
connectAttr "pCube8Shape.wm" "polySplitRing36.mp";
connectAttr "polySplitRing36.out" "polySplitRing37.ip";
connectAttr "pCube8Shape.wm" "polySplitRing37.mp";
connectAttr "polySplitRing37.out" "polySplitRing38.ip";
connectAttr "pCube8Shape.wm" "polySplitRing38.mp";
connectAttr "polySplitRing38.out" "polySplitRing39.ip";
connectAttr "pCube8Shape.wm" "polySplitRing39.mp";
connectAttr "polyTweak70.out" "polySplitRing40.ip";
connectAttr "pCube8Shape.wm" "polySplitRing40.mp";
connectAttr "polySplitRing39.out" "polyTweak70.ip";
connectAttr "polyTweak71.out" "polySplitRing41.ip";
connectAttr "pCube8Shape.wm" "polySplitRing41.mp";
connectAttr "polySplitRing40.out" "polyTweak71.ip";
connectAttr "polyTweak72.out" "polySplitRing42.ip";
connectAttr "pCube8Shape.wm" "polySplitRing42.mp";
connectAttr "polySplitRing41.out" "polyTweak72.ip";
connectAttr "polyTweak73.out" "polyExtrudeFace29.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace29.mp";
connectAttr "polyExtrudeFace26.out" "polyTweak73.ip";
connectAttr "polyTweak74.out" "polyExtrudeFace30.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace30.mp";
connectAttr "polyExtrudeFace29.out" "polyTweak74.ip";
connectAttr "polyTweak75.out" "polySplitRing43.ip";
connectAttr "pCubeShape8.wm" "polySplitRing43.mp";
connectAttr "polyCube4.out" "polyTweak75.ip";
connectAttr "polySplitRing43.out" "polyExtrudeFace31.ip";
connectAttr "pCubeShape8.wm" "polyExtrudeFace31.mp";
connectAttr "polyTweak76.out" "polySplitRing44.ip";
connectAttr "pCubeShape8.wm" "polySplitRing44.mp";
connectAttr "polyExtrudeFace31.out" "polyTweak76.ip";
connectAttr "polyTweak77.out" "polyExtrudeFace32.ip";
connectAttr "pCubeShape8.wm" "polyExtrudeFace32.mp";
connectAttr "polySplitRing44.out" "polyTweak77.ip";
connectAttr "polyTweak78.out" "polySplitRing45.ip";
connectAttr "pCubeShape8.wm" "polySplitRing45.mp";
connectAttr "polyExtrudeFace32.out" "polyTweak78.ip";
connectAttr "polySplitRing45.out" "polySplitRing46.ip";
connectAttr "pCubeShape8.wm" "polySplitRing46.mp";
connectAttr "polyTweak79.out" "polySplitRing47.ip";
connectAttr "pCubeShape8.wm" "polySplitRing47.mp";
connectAttr "polySplitRing46.out" "polyTweak79.ip";
connectAttr "polySplitRing47.out" "polyTweak80.ip";
connectAttr "polyTweak80.out" "deleteComponent53.ig";
connectAttr "polyTweak81.out" "polyExtrudeEdge12.ip";
connectAttr "pCubeShape8.wm" "polyExtrudeEdge12.mp";
connectAttr "deleteComponent53.og" "polyTweak81.ip";
connectAttr "polyExtrudeEdge12.out" "groupParts21.ig";
connectAttr "groupId16.id" "groupParts21.gi";
connectAttr "polyExtrudeFace30.out" "polyTweak82.ip";
connectAttr "polyTweak82.out" "deleteComponent54.ig";
connectAttr "deleteComponent54.og" "deleteComponent55.ig";
connectAttr "deleteComponent55.og" "deleteComponent56.ig";
connectAttr "deleteComponent56.og" "deleteComponent57.ig";
connectAttr "deleteComponent57.og" "deleteComponent58.ig";
connectAttr "deleteComponent58.og" "deleteComponent59.ig";
connectAttr "deleteComponent59.og" "deleteComponent60.ig";
connectAttr "deleteComponent60.og" "deleteComponent61.ig";
connectAttr "deleteComponent61.og" "polyExtrudeEdge13.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge13.mp";
connectAttr "polyExtrudeEdge13.out" "deleteComponent62.ig";
connectAttr "deleteComponent62.og" "deleteComponent63.ig";
connectAttr "deleteComponent63.og" "deleteComponent64.ig";
connectAttr "deleteComponent64.og" "deleteComponent65.ig";
connectAttr "deleteComponent65.og" "deleteComponent66.ig";
connectAttr "deleteComponent66.og" "deleteComponent67.ig";
connectAttr "deleteComponent67.og" "deleteComponent68.ig";
connectAttr "deleteComponent68.og" "polyExtrudeEdge14.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge14.mp";
connectAttr "polyExtrudeEdge14.out" "polyExtrudeEdge15.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge15.mp";
connectAttr "polyExtrudeEdge15.out" "polyExtrudeEdge16.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge16.mp";
connectAttr "polyTweak83.out" "polyExtrudeEdge17.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge17.mp";
connectAttr "polyExtrudeEdge16.out" "polyTweak83.ip";
connectAttr "polyTweak84.out" "polyExtrudeEdge18.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge18.mp";
connectAttr "polyExtrudeEdge17.out" "polyTweak84.ip";
connectAttr "polyTweak85.out" "polyExtrudeEdge19.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge19.mp";
connectAttr "polyExtrudeEdge18.out" "polyTweak85.ip";
connectAttr "polyTweak86.out" "polyCloseBorder4.ip";
connectAttr "polyExtrudeEdge19.out" "polyTweak86.ip";
connectAttr "polyCloseBorder4.out" "polySplit40.ip";
connectAttr "polyTweak87.out" "polyExtrudeFace33.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeFace33.mp";
connectAttr "polySplit40.out" "polyTweak87.ip";
connectAttr "polyExtrudeFace33.out" "polyTweak88.ip";
connectAttr "polyTweak88.out" "deleteComponent69.ig";
connectAttr "deleteComponent69.og" "polyExtrudeEdge20.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge20.mp";
connectAttr "polyTweak89.out" "polyExtrudeEdge21.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge21.mp";
connectAttr "polyExtrudeEdge20.out" "polyTweak89.ip";
connectAttr "polyTweak90.out" "polyExtrudeEdge22.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge22.mp";
connectAttr "polyExtrudeEdge21.out" "polyTweak90.ip";
connectAttr "polyTweak91.out" "polyExtrudeEdge23.ip";
connectAttr "pCubeShape1.wm" "polyExtrudeEdge23.mp";
connectAttr "polyExtrudeEdge22.out" "polyTweak91.ip";
connectAttr "polyTweak92.out" "polyCloseBorder5.ip";
connectAttr "polyExtrudeEdge23.out" "polyTweak92.ip";
connectAttr "pCubeShape1.o" "polyUnite2.ip[0]";
connectAttr "pCube8Shape.o" "polyUnite2.ip[1]";
connectAttr "pCubeShape1.wm" "polyUnite2.im[0]";
connectAttr "pCube8Shape.wm" "polyUnite2.im[1]";
connectAttr "polyCloseBorder5.out" "groupParts22.ig";
connectAttr "groupId18.id" "groupParts22.gi";
connectAttr "polyUnite2.out" "groupParts23.ig";
connectAttr "groupId20.id" "groupParts23.gi";
connectAttr "polyTweak93.out" "polyMirror1.ip";
connectAttr "pCube14Shape.wm" "polyMirror1.mp";
connectAttr "groupParts23.og" "polyTweak93.ip";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "pCubeShape2.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape2.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape3.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape3.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape4.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape4.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape5.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape5.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape6.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape6.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape7.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape7.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCube8Shape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape13.iog.og[2]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape13.ciog.cog[2]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape8.iog.og[2]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape8.ciog.cog[2]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape1.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape1.ciog.cog[0]" ":initialShadingGroup.dsm" -na;
connectAttr "pCube14Shape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId1.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId2.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId3.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId4.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId5.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId6.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId7.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId8.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId9.msg" ":initialShadingGroup.gn" -na;
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
// End of cria alien.ma
