N <- _                        #Especificar el tamaño de la muestra
contador <- _                 #reiniciar contador
for(_ _ rnorm(N)){            #iterar sobre vector de números
  if(_ _ _ & _ _ _){          #revisar dónde cae la variable iterada
    contador <- _ _ _         #incrementar el contador si se cumple la condición
  }
}
respuesta <- contador / N     #calcular el ratio de éxito
respuesta                     #imprimir el resultado en la consola


N <- 10000                       #Especificar el tamaño de la muestra
contador <- 0                 #reiniciar contador
for(i in rnorm(N)){            #iterar sobre vector de números
  if(i > -1 & i < 1){          #revisar dónde cae la variable iterada
    contador <- contador + 1         #incrementar el contador si se cumple la condición
  }
}
respuesta <- contador / N     #calcular el ratio de éxito
respuesta  
