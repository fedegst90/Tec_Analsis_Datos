install.packages("ggplot2")
datos <- read.csv(file.choose())
ggplot(data=datos[datos$quilates<2.5,],
       aes(x=quilates, y=precio, color=claridad)) + 
  geom_point(alpha=0.1) + 
  geom_smooth()
