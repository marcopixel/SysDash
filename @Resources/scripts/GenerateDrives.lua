function Initialize()
	local File = io.open(SKIN:GetVariable('@')..'include\\SkinDrives.inc','w')
	local DriveCount = tonumber(SKIN:GetVariable('DriveCount'))
		for i=1,DriveCount do
		-- generate measures
			-- MeasureDriveTotal
			File:write('[MeasureDriveTotal'..(i == 1 and '1' or i)..']\n'
							,'Measure=FreeDiskSpace\n'
							,'Drive=#Drive'..(i == 1 and '1' or i)..'#\n'
							,'Total=1\n'
							,'UpdateDivider=5\n'
							,'Substitute="G":"GB"\n')
		  -- MeasureDriveFree
		  File:write('[MeasureDriveFree'..(i == 1 and '1' or i)..']\n'
						  ,'Measure=FreeDiskSpace\n'
						  ,'Drive=#Drive'..(i == 1 and '1' or i)..'#\n'
						  ,'UpdateDivider=5\n'
						  ,'Substitute="G":"GB"\n')
		  -- MeasureDriveUsed
		  File:write('[MeasureDriveUsed'..(i == 1 and '1' or i)..']\n'
						  ,'Measure=FreeDiskSpace\n'
						  ,'Drive=#Drive'..(i == 1 and '1' or i)..'#\n'
						  ,'UpdateDivider=5\n'
						  ,'InvertMeasure=1\n'
						  ,'Substitute="G":"GB"\n')
		  -- MeasureDriveCalc
		  File:write('[MeasureDriveCalc'..(i == 1 and '1' or i)..']\n'
						  ,'Measure=Calc\n'
						  ,'Formula=[MeasureDriveUsed'..(i == 1 and '1' or i)..':%]\n'
						  ,'MinValue=0\n'
						  ,'MaxValue=100\n'
						  ,'DynamicVariables=1\n'
					    ,'UpdateDivider=5\n')

    -- generate meters
		  -- MeterDriveLetter
			File:write('[MeterDriveLetter'..(i == 1 and '1' or i)..']\n'
							,'Meter=String\n'
							,'MeterStyle=StylePrimary\n'
							,'X=(#Margin#*#Scale#)\n'
							,'Y=(17*#Scale#)R\n'
							,'Text=#Drive'..(i == 1 and '1' or i)..'#\n'
							,'LeftMouseDownAction=["#Drive'..(i == 1 and '1' or i)..'#"]\n')
			-- MeterDriveValue
			File:write('[MeterDriveValue'..(i == 1 and '1' or i)..']\n'
							,'Meter=String\n'
							,'MeterStyle=StyleSecondary | MeterDriveValueStyle\n'
							,'MeasureName=MeasureDriveFree'..(i == 1 and '1' or i)..'\n'
							,'MeasureName2=MeasureDriveTotal'..(i == 1 and '1' or i)..'\n'
							,'X=((#Width#+#Margin#)*#Scale#)\n'
							,'Y=0r\n')
			-- MeterDriveBar
		  File:write('[MeterDriveBar'..(i == 1 and '1' or i)..']\n'
						  ,'Meter=Shape\n'
						  ,'X=(#Margin#*#Scale#)\n'
						  ,'Y=(-7*#Scale#)R\n'
						  ,'Shape=Rectangle 0,0,(#Width#*#Scale#),(4*#Scale#),(2*#Scale#) | Fill Color #MainColor#,50 | StrokeWidth 0\n'
						  ,'Shape2=Rectangle 0,0,((#Width#*#Scale#)*([MeasureDriveCalc'..(i == 1 and '1' or i)..':%]/100)),(4*#Scale#),(2*#Scale#) | Fill Color #MainColor#,245 | StrokeWidth 0\n'
						  ,'DynamicVariables=1\n'
							,'UpdateDivider=10\n')
	end
	-- save file
	File:close()
end
