-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor


DENSITY
-- OilDens   WaterDens    GasDens
-- kg/m3       kg/m3       kg/m3
   924.1      1026.0      1.03446 /
--
--Density of added gas at Std Conditions  0.000000 kg/m3
--
PVTW
--     RefPres        Bw          Cw           Vw         dVw
--       bara       rm3/m3       1/bara        cP        1/bara
         79.0      1.02643    0.37876E-04   0.39831    0.74714E-04 /
PVTO
-- Table number: 1
     3.9140      10.000   1.102358     2.8625
                 15.000   1.101766     2.9007
                 25.000   1.100611     2.9695
                 45.000   1.098386     3.0960
                 65.000   1.096264     3.2159
                 84.000   1.094340     3.3266
                100.000   1.092790     3.4196
                115.000   1.091386     3.5061
                145.000   1.088703     3.6800
                175.000   1.086197     3.8558
                205.000   1.083836     4.0325
                235.000   1.081610     4.2138
                265.000   1.079499     4.3980
                305.000   1.076868     4.6491
                355.000   1.073821     4.9755
                405.000   1.071023     5.3150
                455.000   1.068434     5.6693
                505.000   1.066021     6.0404
                555.000   1.063785     6.4282
                605.000   1.061694     6.8346  /

     7.0500      15.000   1.112540     2.6589
                 25.000   1.111313     2.7221
                 45.000   1.108952     2.8374
                 65.000   1.106706     2.9472
                 84.000   1.104678     3.0504
                100.000   1.103034     3.1350
                115.000   1.101547     3.2150
                145.000   1.098718     3.3740
                175.000   1.096077     3.5349
                205.000   1.093581     3.6977
                235.000   1.091241     3.8632
                265.000   1.089026     4.0316
                305.000   1.086259     4.2622
                355.000   1.083056     4.5607
                405.000   1.080113     4.8723
                455.000   1.077398     5.1968
                505.000   1.074871     5.5354
                555.000   1.072531     5.8906
                605.000   1.070337     6.2617  /

    12.4430      25.000   1.129045     2.4329
                 45.000   1.126476     2.5370
                 65.000   1.124032     2.6356
                 84.000   1.121827     2.7277
                100.000   1.120049     2.8040
                115.000   1.118437     2.8756
                145.000   1.115379     3.0188
                175.000   1.112519     3.1639
                205.000   1.109836     3.3089
                235.000   1.107298     3.4577
                265.000   1.104917     3.6084
                305.000   1.101942     3.8149
                355.000   1.098510     4.0818
                405.000   1.095349     4.3589
                455.000   1.092437     4.6491
                505.000   1.089733     4.9513
                555.000   1.087226     5.2675
                605.000   1.084886     5.5986  /

    22.0220      45.000   1.156844     2.1297
                 65.000   1.154036     2.2143
                 84.000   1.151498     2.2934
                100.000   1.149460     2.3594
                115.000   1.147619     2.4208
                145.000   1.144135     2.5445
                175.000   1.140880     2.6682
                205.000   1.137822     2.7928
                235.000   1.134962     2.9183
                265.000   1.132269     3.0467
                305.000   1.128910     3.2215
                355.000   1.125041     3.4466
                405.000   1.121494     3.6800
                455.000   1.118229     3.9227
                505.000   1.115213     4.1766
                555.000   1.112415     4.4408
                605.000   1.109805     4.7170  /

    30.9290      65.000   1.181544     1.8870
                 84.000   1.178674     1.9567
                100.000   1.176375     2.0153
                115.000   1.174306     2.0693
                145.000   1.170374     2.1790
                175.000   1.166724     2.2887
                205.000   1.163313     2.3994
                235.000   1.160120     2.5110
                265.000   1.157114     2.6235
                305.000   1.153381     2.7761
                355.000   1.149086     2.9723
                405.000   1.145154     3.1732
                455.000   1.141546     3.3815
                505.000   1.138218     3.5982
                555.000   1.135129     3.8232
                605.000   1.132258     4.0576  /

    39.1850      84.000   1.203821     1.6703
                100.000   1.201252     1.7224
                115.000   1.198943     1.7707
                145.000   1.194586     1.8674
                175.000   1.190540     1.9651
                205.000   1.186765     2.0637
                235.000   1.183239     2.1623
                265.000   1.179922     2.2618
                305.000   1.175814     2.3966
                355.000   1.171102     2.5668
                405.000   1.166807     2.7416
                455.000   1.162866     2.9211
                505.000   1.159226     3.1062
                555.000   1.155866     3.2969
                605.000   1.152736     3.4949  /

    48.3540     100.000   1.230434     1.4071
                115.000   1.227834     1.4471
                145.000   1.222946     1.5261
                175.000   1.218422     1.6061
                205.000   1.214221     1.6861
                235.000   1.210290     1.7679
                265.000   1.206618     1.8488
                305.000   1.202063     1.9586
                355.000   1.196863     2.0962
                405.000   1.192121     2.2367
                455.000   1.187784     2.3789
                505.000   1.183790     2.5240
                555.000   1.180098     2.6728
                605.000   1.176677     2.8244  /

    57.5250     115.000   1.257038     1.2109
                145.000   1.251588     1.2769
                175.000   1.246565     1.3420
                205.000   1.241895     1.4080
                235.000   1.237548     1.4750
                265.000   1.233492     1.5410
                305.000   1.228479     1.6312
                355.000   1.222759     1.7438
                405.000   1.217559     1.8563
                455.000   1.212806     1.9697
                505.000   1.208449     2.0851
                555.000   1.204424     2.1995
                605.000   1.200701     2.3166  /

    77.6080     145.000   1.315288     0.9216
                175.000   1.309038     0.9681
                205.000   1.303276     1.0146
                235.000   1.297941     1.0611
                265.000   1.292980     1.1086
                305.000   1.286875     1.1699
                355.000   1.279949     1.2481
                405.000   1.273688     1.3253
                455.000   1.267989     1.4024
                505.000   1.262778     1.4778
                555.000   1.257984     1.5531
                605.000   1.253554     1.6368  /

   100.2200     175.000   1.380787     0.7152
                205.000   1.373642     0.7496
                235.000   1.367059     0.7840
                265.000   1.360965     0.8184
                305.000   1.353508     0.8640
                355.000   1.345094     0.9216
                405.000   1.337534     0.9774
                455.000   1.330690     1.0342
                505.000   1.324450     1.0900
                555.000   1.318741     1.1458
                605.000   1.313478     1.2006  /

   125.6310     205.000   1.454242     0.5515
                235.000   1.446089     0.5766
                265.000   1.438580     0.6008
                305.000   1.429449     0.6352
                355.000   1.419215     0.6761
                405.000   1.410063     0.7180
                455.000   1.401826     0.7598
                505.000   1.394359     0.8007
                555.000   1.387537     0.8417
                605.000   1.381286     0.8826  /

   154.1310     235.000   1.536392     0.4659
                265.000   1.527105     0.4845
                305.000   1.515894     0.5106
                355.000   1.503403     0.5441
                405.000   1.492327     0.5766
                455.000   1.482406     0.6110
                505.000   1.473451     0.6445
                555.000   1.465308     0.6780
                605.000   1.457872     0.7115  /

   186.0330     265.000   1.627974     0.3832
                305.000   1.614163     0.4008
                355.000   1.598906     0.4222
                405.000   1.585470     0.4445
                455.000   1.573510     0.4669
                505.000   1.562766     0.4892
                555.000   1.553053     0.5115
                605.000   1.544202     0.5329  /

   234.4690     305.000   1.766201     0.3097
                355.000   1.746243     0.3255
                405.000   1.728854     0.3413
                455.000   1.713504     0.3571
                505.000   1.699828     0.3720
                555.000   1.687525     0.3869
                605.000   1.676397     0.4018  /

/
PVDG
-- Table number: 1
    10.0000    0.266161     0.0108 
    15.0000    0.127259     0.0116 
    25.0000    0.062022     0.0123 
    45.0000    0.030190     0.0131 
    65.0000    0.019752     0.0137 
    84.0000    0.014799     0.0144 
   100.0000    0.012136     0.0149 
   115.0000    0.010358     0.0155 
   145.0000    0.007993     0.0170 
   175.0000    0.006524     0.0191 
   205.0000    0.005556     0.0218 
   235.0000    0.004901     0.0254 
   265.0000    0.004461     0.0301 
   305.0000    0.004112     0.0388 
   355.0000    0.003966     0.0568 
   405.0000    0.003850     0.0884 
   455.0000    0.003763     0.1363 
   505.0000    0.003699     0.1746 
/