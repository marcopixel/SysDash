[MeasureState]
Measure=Plugin
Plugin=NowPlaying
Playername=Spotify
PlayerType=State
UpdateDivider=10

[MeasureStateButton]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
CoverPath=#@#images\coverSpotify.png
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length
UpdateDivider=10

[MeasureProgressPrecent]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
UpdateDivider=10

[MeasureProgress]
Measure=Calc
Formula=MeasureProgressPrecent*100
