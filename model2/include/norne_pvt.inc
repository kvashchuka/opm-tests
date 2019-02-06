-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2



--================================================================================
--Eclipse Black-oil PVT table(s)
--================================================================================

--       Sm3/Sm3      bara           m3/Sm3           cp
--       RS           P              BO               VISO
PVTO
       18.90000       50.00000     1.09923000        1.20400
                      75.00000     1.09498000        1.25700
                     100.00000     1.09102000        1.31000
                     125.00000     1.08732000        1.36100
                     150.00000     1.08385000        1.41100
                     175.00000     1.08058000        1.46100
                     200.00000     1.07751000        1.51000
                     225.00000     1.07460000        1.55800
                     250.00000     1.07184000        1.60600
                     275.00000     1.06923000        1.65300
                     300.00000     1.06674000        1.69900
                     325.00000     1.06438000        1.74400
                     350.00000     1.06213000        1.78900
                     375.00000     1.05997000        1.83300
                     400.00000     1.05792000        1.87700
                     425.00000     1.05595000        1.92000
                     450.00000     1.05406000        1.96200  /

       28.80000       75.00000     1.12493000        1.09900
                     100.00000     1.12036000        1.14800
                     125.00000     1.11610000        1.19700
                     150.00000     1.11211000        1.24600
                     175.00000     1.10837000        1.29400
                     200.00000     1.10485000        1.34100
                     225.00000     1.10153000        1.38700
                     250.00000     1.09840000        1.43300
                     275.00000     1.09543000        1.47800
                     300.00000     1.09261000        1.52300
                     325.00000     1.08994000        1.56700
                     350.00000     1.08739000        1.61100
                     375.00000     1.08496000        1.65400
                     400.00000     1.08264000        1.69600
                     425.00000     1.08043000        1.73800
                     450.00000     1.07830000        1.77900  /

       39.10000      100.00000     1.15053000        1.00400
                     125.00000     1.14565000        1.05000
                     150.00000     1.14110000        1.09600
                     175.00000     1.13684000        1.14200
                     200.00000     1.13284000        1.18700
                     225.00000     1.12908000        1.23100
                     250.00000     1.12553000        1.27500
                     275.00000     1.12218000        1.31800
                     300.00000     1.11900000        1.36100
                     325.00000     1.11599000        1.40300
                     350.00000     1.11313000        1.44500
                     375.00000     1.11040000        1.48600
                     400.00000     1.10780000        1.52700
                     425.00000     1.10532000        1.56800
                     450.00000     1.10295000        1.60700  /

       49.60000      125.00000     1.17648000        0.91800
                     150.00000     1.17129000        0.96200
                     175.00000     1.16645000        1.00400
                     200.00000     1.16192000        1.04700
                     225.00000     1.15767000        1.08900
                     250.00000     1.15367000        1.13000
                     275.00000     1.14990000        1.17200
                     300.00000     1.14633000        1.21200
                     325.00000     1.14296000        1.25300
                     350.00000     1.13975000        1.29200
                     375.00000     1.13670000        1.33200
                     400.00000     1.13380000        1.37100
                     425.00000     1.13103000        1.41000
                     450.00000     1.12839000        1.44800  /

       60.60000      150.00000     1.20304000        0.84100
                     175.00000     1.19755000        0.88100
                     200.00000     1.19243000        0.92100
                     225.00000     1.18763000        0.96000
                     250.00000     1.18313000        0.99900
                     275.00000     1.17889000        1.03800
                     300.00000     1.17490000        1.07600
                     325.00000     1.17111000        1.11500
                     350.00000     1.16753000        1.15200
                     375.00000     1.16413000        1.19000
                     400.00000     1.16090000        1.22700
                     425.00000     1.15782000        1.26400
                     450.00000     1.15488000        1.30000  /

       72.00000      175.00000     1.23042000        0.77100
                     200.00000     1.22463000        0.80800
                     225.00000     1.21922000        0.84400
                     250.00000     1.21416000        0.88100
                     275.00000     1.20941000        0.91700
                     300.00000     1.20493000        0.95300
                     325.00000     1.20070000        0.98900
                     350.00000     1.19671000        1.02500
                     375.00000     1.19292000        1.06000
                     400.00000     1.18932000        1.09500
                     425.00000     1.18590000        1.13000
                     450.00000     1.18264000        1.16400  /

       84.00000      200.00000     1.25879000        0.70700
                     225.00000     1.25270000        0.74100
                     250.00000     1.24701000        0.77500
                     275.00000     1.24168000        0.80900
                     300.00000     1.23667000        0.84200
                     325.00000     1.23195000        0.87600
                     350.00000     1.22749000        0.90900
                     375.00000     1.22328000        0.94200
                     400.00000     1.21928000        0.97500
                     425.00000     1.21548000        1.00800
                     450.00000     1.21187000        1.04000  /

       96.60000      225.00000     1.28834000        0.64900
                     250.00000     1.28194000        0.68000
                     275.00000     1.27596000        0.71200
                     300.00000     1.27036000        0.74300
                     325.00000     1.26509000        0.77400
                     350.00000     1.26012000        0.80500
                     375.00000     1.25543000        0.83600
                     400.00000     1.25099000        0.86600
                     425.00000     1.24678000        0.89700
                     450.00000     1.24277000        0.92700  /

      110.40000      251.10000     1.32061000        0.61400
                     275.00000     1.31417000        0.62100
                     300.00000     1.30786000        0.65000
                     325.00000     1.30195000        0.67900
                     350.00000     1.29639000        0.70700
                     375.00000     1.29115000        0.73600
                     400.00000     1.28619000        0.76400
                     425.00000     1.28150000        0.79200
                     450.00000     1.27705000        0.82100  /

      126.76250      275.00000     1.35536054        0.60127
                     300.00000     1.34850797        0.63066
                     325.00000     1.34210625        0.65998
                     350.00000     1.33610680        0.68921
                     375.00000     1.33046830        0.71835
                     400.00000     1.32515529        0.74738
                     425.00000     1.32013715        0.77631
                     450.00000     1.31538723        0.80512  /

      145.95479      300.00000     1.39634977        0.59898
                     325.00000     1.38882555        0.63029
                     350.00000     1.38180073        0.66164
                     375.00000     1.37522109        0.69301
                     400.00000     1.36904056        0.72438
                     425.00000     1.36321966        0.75575
                     450.00000     1.35772430        0.78710  /

      167.58502      325.00000     1.44287612        0.58627
                     350.00000     1.43457426        0.61894
                     375.00000     1.42682851        0.65178
                     400.00000     1.41957803        0.68477
                     425.00000     1.41277119        0.71789
                     450.00000     1.40636377        0.75111  /

      192.00758      350.00000     1.49575462        0.56355
                     375.00000     1.48655392        0.59690
                     400.00000     1.47797528        0.63057
                     425.00000     1.46995016        0.66453
                     450.00000     1.46242042        0.69874  /

      219.61513      375.00000     1.55587341        0.53212
                     400.00000     1.54563738        0.56541
                     425.00000     1.53609955        0.59915
                     450.00000     1.52718249        0.63332  /

      250.84133      400.00000     1.62419059        0.49400
                     425.00000     1.61276798        0.52646
                     450.00000     1.60213068        0.55950  /

      286.16345      425.00000     1.70172854        0.45166
                     450.00000     1.68895490        0.48259  /

--      326.10500      450.00000     1.78956674        0.40766
--                     450.10000     1.78950740        0.40777  /
 /


--       bara         Sm3/Sm3        m3/Sm3           cp
--       P            RV             BG               VISG
PVTG
       50.00000    0.000006150     0.02505000     0.01375300
                   0.000000000     0.02504600     0.01375900  /

       75.00000    0.000006590     0.01646600     0.01428400  /

      100.00000    0.000008440     0.01223000     0.01493700  /

      125.00000    0.000011480     0.00973100     0.01573000  /

      150.00000    0.000015840     0.00810000     0.01667000  /

      175.00000    0.000021750     0.00696400     0.01775500  /

      200.00000    0.000029430     0.00613600     0.01897600  /

      225.00000    0.000039140     0.00551300     0.02031900  /

      251.10000    0.000051690     0.00501300     0.02183400
                   0.000000000     0.00500900     0.02183900  /

      275.00000    0.000077191     0.00468039     0.02343518  
                    0              0.00448039    0.02323518 /

      300.00000    0.000112319     0.00435637     0.02561585
                   0.000077191     0.00435680     0.02485907  /

      325.00000    0.000157253     0.00409410     0.02823784
                   0.000112319     0.00409042     0.02712667
                   0.000077191     0.00408759     0.02629041  /

      350.00000    0.000213008     0.00388322     0.03140336
                   0.000157253     0.00387354     0.02984042
                   0.000112319     0.00386606     0.02863235
                   0.000077191     0.00386035     0.02772051  /

      375.00000    0.000280386     0.00371691     0.03524343
                   0.000213008     0.00369913     0.03311210
                   0.000157253     0.00368519     0.03143059
                   0.000112319     0.00367437     0.03012872
                   0.000077191     0.00366612     0.02914420  /

      400.00000    0.000359957     0.00359066     0.03995291
                   0.000280386     0.00356257     0.03709296
                   0.000213008     0.00354020     0.03480953
                   0.000157253     0.00352254     0.03300917
                   0.000112319     0.00350877     0.03161470
                   0.000077191     0.00349825     0.03055916  /

      425.00000    0.000452048     0.00350133     0.04585229
                   0.000359957     0.00346083     0.04201382
                   0.000280386     0.00342800     0.03894387
                   0.000213008     0.00340162     0.03650144
                   0.000157253     0.00338067     0.03457936
                   0.000112319     0.00336430     0.03309163
                   0.000077191     0.00335177     0.03196541  /

      450.00000    0.000556755     0.00344657     0.05346838
                   0.000452048     0.00339181     0.04824922
                   0.000359957     0.00334657     0.04410294
                   0.000280386     0.00330958     0.04080630
                   0.000213008     0.00327969     0.03819505
                   0.000157253     0.00325584     0.03614602
                   0.000112319     0.00323716     0.03456257
                   0.000077191     0.00322285     0.03336476  /
 / 



PVTW
--     RefPres        Bw          Cw           Vw         dVw
--       bara       rm3/m3       1/bara        cP        1/bara
        277.0      1.038    4.67E-05   0.318    0.00 /



--  Kg/m3          Kg/m3          Kg/m3
--  oil            wat            gas
DENSITY
   856.50000    1033.0      0.85204 /
