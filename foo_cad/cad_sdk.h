#ifndef CADSDK_H_
#define CADSDK_H_

enum CadMessage
{
	CM_PLAY = 100,
	CM_PLAYPAUSE = 101,
	CM_PAUSE = 102,
	CM_STOP = 103,
	CM_NEXT = 104,
	CM_PREVIOUS = 105,
	CM_SETVOLUME = 108,
	CM_GETVOLUME = 109,
	CM_GETCURRENTTRACK = 110,
	CM_GETDURATION = 113,
	CM_SETPOSITION = 114,
	CM_SETCALLBACKHWND = 120,
	CM_GETPOSITION = 122,
	CM_SHOWWINDOW = 124,
	CM_GETSTATE = 125,
	CM_SETREPEAT = 128,
	PM_SHUTDOWN = 129,
	CM_GETREPEAT = 130,
	CM_CLOSE = 131,
	CM_GETSHUFFLE = 140,
	CM_SETSHUFFLE = 141,
	CM_SETRATING = 639,
	CM_GETLYRICS = 801
};

enum PlayerMessage
{
	PM_VOLUMECHANGED = 108,
	PM_TRACKCHANGED = 123,
	PM_STATECHANGED = 126,
	PM_REPEATCHANGED = 128,
	PM_SHUFFLECHANGED = 140,
	PM_RATINGCHANGED = 639,
	PM_REGISTER = 700,
	PM_TRACKDATA = 701,
	PM_LYRICSDATA = 702
};

enum PlayerState
{
	PS_STOPPED,
	PS_PLAYING,
	PS_PAUSED
};

#endif
