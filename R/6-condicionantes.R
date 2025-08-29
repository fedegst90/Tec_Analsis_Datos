
rm(respuesta)
x <- rnorm(1)
if(x > 1){
  respuesta <- "Mayor que 1"
}else if (x > -1){
  respuesta <- "Entre -1 y 1"
}else {
  respuesta <- "Menor o igual que -1"
}
respuesta