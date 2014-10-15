setMode -bs
setMode -bs
setMode -bs
setMode -bs
setCable -port auto
Identify -inferir 
identifyMPM 
assignFile -p 1 -file "/home/c/projects/memory/memory_top.bit"
Program -p 1 
readdna -p 1 
Program -p 1 
Identify -inferir 
identifyMPM 
setMode -bs
deleteDevice -position 1
