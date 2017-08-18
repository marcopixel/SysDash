[MeterShape]
Meter=Shape
Shape=Rectangle 0,0,700,500,5 | Fill Color 10,10,10,225 | StrokeWidth 0

[MeterGeneral]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 255,255,255,150
X=20
Y=15
AntiAlias=1
Text="General"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "general.ini"]
[MeterStyling]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 255,255,255,150
X=20
Y=5R
AntiAlias=1
Text="Styling"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "styling.ini"]
[MeterDrives]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 255,255,255,150
X=20
Y=5R
AntiAlias=1
Text="Drives"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "drives.ini"]
[MeterMediaPlayer]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 255,255,255,150
X=20
Y=5R
AntiAlias=1
Text="Media Player"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "mediaplayer.ini"]
[MeterTemperatures]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 255,255,255,150
X=20
Y=5R
AntiAlias=1
Text="System temperatures"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "temperatures.ini"]
[MeterMenuDividier]
Meter=Image
SolidColor=255,255,255,100
X=20
Y=15R
H=1
W=178
[MeterClose]
Meter=String
InlineSetting=Face | Uni Neue
InlineSetting2=Size | 14
InlineSetting3=Weight | 100
InlineSetting4=Color | 213,23,23,255
X=20
Y=10R
AntiAlias=1
Text="Close"
LeftMouseDownAction=[!DeactivateConfig]
