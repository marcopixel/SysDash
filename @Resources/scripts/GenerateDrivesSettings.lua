function Initialize()
	local File = io.open(SKIN:GetVariable('@')..'include\\SkinDrivesSettings.inc','w')
	local DriveCount = tonumber(SKIN:GetVariable('DriveCount'))
		for i=1,DriveCount do

			File:write('[MeterTitleDrive'..(i == 1 and '1' or i)..']\n'
							,'Meter=String\n'
							,'MeterStyle=StyleTitleDrive\n'
							,'X=225\n'
							,'Y=5R\n'
							,'Text=Drive '..(i == 1 and '1' or i)..'\n')

			File:write('[MeterInputDrive'..(i == 1 and '1' or i)..']\n'
							,'Meter=String\n'
							,'MeterStyle=StyleInputDrive\n'
							,'X=625\n'
							,'Y=([MeterTitleDrive'..(i == 1 and '1' or i)..':Y]-2)\n'
							,'H=25\n'
							,'W=80\n'
							,'LeftMouseUpAction=[!CommandMeasure MeasureInputDrive'..(i == 1 and '1' or i)..' "ExecuteBatch ALL"]\n'
							,'Text=#Drive'..(i == 1 and '1' or i)..'#\n')

			File:write('[MeasureInputDrive'..(i == 1 and '1' or i)..']\n'
							,'Measure=Plugin\n'
							,'Plugin=InputText\n'
							,'X=([MeterInputDrive'..(i == 1 and '1' or i)..':X]+5)\n'
							,'Y=([MeterInputDrive'..(i == 1 and '1' or i)..':Y]+5)\n'
							,'H=25\n'
							,'W=90\n'
							,'FontSize=14\n'
							,'FontColor=255,255,255\n'
							,'SolidColor=26,26,26\n'
							,'AntiAlias=1\n'
							,'FocusDismiss=1\n'
							,'DefaultValue=#Drive'..(i == 1 and '1' or i)..'#\n'
							,'Command1=[!WriteKeyValue Variables Drive'..(i == 1 and '1' or i)..' "$UserInput$:/" "#@#variables.ini"][!RefreshGroup "Drive"][!Refresh]\n'
							,'DynamicVariables=1\n')
	end
	-- save file
	File:close()
end
