ICACHE_RAM_ATTR void ch1() {
  tempcha1 = micros() - CT1;
  if (tempcha1 > 900 && tempcha1 < 2200){
  cha1 = tempcha1;
  }
  else{  cha1 = cha1; }
  CT1 = micros();
  
}

ICACHE_RAM_ATTR void ch2() {
  tempcha2 = micros() - CT2;
  if (tempcha2 > 900 && tempcha1 < 2200){
  cha2 = tempcha2;
  }
    else{  cha2 = cha2; }
  CT2 = micros();
  
}
