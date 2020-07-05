[MeasureState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=State
UpdateDivider=10

[MeasureStateButton]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=ARTIST
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=COVER
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=DURATION
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Progress
UpdateDivider=10

[MeasureRating]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Rating
UpdateDivider=50
IfCondition=MeasureRating = 0
IfTrueAction=[!SetOption "MeterRatingStar1" "GreyScale" "1"][!SetOption "MeterRatingStar2" "GreyScale" "1"][!SetOption "MeterRatingStar3" "GreyScale" "1"][!SetOption "MeterRatingStar4" "GreyScale" "1"][!SetOption "MeterRatingStar5" "GreyScale" "1"]
IfCondition2=MeasureRating = 1
IfTrueAction2=[!SetOption "MeterRatingStar1" "GreyScale" "0"][!SetOption "MeterRatingStar2" "GreyScale" "1"][!SetOption "MeterRatingStar3" "GreyScale" "1"][!SetOption "MeterRatingStar4" "GreyScale" "1"][!SetOption "MeterRatingStar5" "GreyScale" "1"]
IfCondition3=MeasureRating = 2
IfTrueAction3=[!SetOption "MeterRatingStar1" "GreyScale" "0"][!SetOption "MeterRatingStar2" "GreyScale" "0"][!SetOption "MeterRatingStar3" "GreyScale" "1"][!SetOption "MeterRatingStar4" "GreyScale" "1"][!SetOption "MeterRatingStar5" "GreyScale" "1"]
IfCondition4=MeasureRating = 3
IfTrueAction4=[!SetOption "MeterRatingStar1" "GreyScale" "0"][!SetOption "MeterRatingStar2" "GreyScale" "0"][!SetOption "MeterRatingStar3" "GreyScale" "0"][!SetOption "MeterRatingStar4" "GreyScale" "1"][!SetOption "MeterRatingStar5" "GreyScale" "1"]
IfCondition5=MeasureRating = 4
IfTrueAction5=[!SetOption "MeterRatingStar1" "GreyScale" "0"][!SetOption "MeterRatingStar2" "GreyScale" "0"][!SetOption "MeterRatingStar3" "GreyScale" "0"][!SetOption "MeterRatingStar4" "GreyScale" "0"][!SetOption "MeterRatingStar5" "GreyScale" "1"]
IfCondition6=MeasureRating = 5
IfTrueAction6=[!SetOption "MeterRatingStar1" "GreyScale" "0"][!SetOption "MeterRatingStar2" "GreyScale" "0"][!SetOption "MeterRatingStar3" "GreyScale" "0"][!SetOption "MeterRatingStar4" "GreyScale" "0"][!SetOption "MeterRatingStar5" "GreyScale" "0"]