//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyHandler-Protocol.h"

@class MPMovieAccessLog, MPMovieErrorLog, NSString, NSURL, UIView;
@protocol TTMediaWriter;

@interface TTMoviePlayerController : NSObject <NotifyHandler>
{
    // Error parsing type: ^{TTPlayer=^^?^^?{atomic<com::ss::ttm::utils::AVState::States>=Ai}iiiB*^{AVSource}^{AVHandler}^^?^v^?^?{_opaque_pthread_rwlock_t=q[192c]}^{AVHandler}BBii{list<com::ss::ttm::AVSource *, std::__1::allocator<com::ss::ttm::AVSource *> >={__list_node_base<com::ss::ttm::AVSource *, void *>=^{__list_node_base<com::ss::ttm::AVSource *, void *>}^{__list_node_base<com::ss::ttm::AVSource *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<com::ss::ttm::AVSource *, void *> > >=Q}}^{AVBasePlayer}*[3^{AVSource}]^{AVSource}^{VideoOut}^{AudioOut}^{VideoOutlet}^{AudioOutlet}^{AVFactory}^^?^{APPWRAPPER}^{AVLooper}^{AVWindow}{SeekInfo=q{atomic<long long>=Aq}qqqq}{SwitchStreamInfo=ii}{NextPlayInfo=*i*i*i{_opaque_pthread_mutex_t=q[56c]}}^{SocketPool}BqB{atomic<bool>=AB}iiiii*iiiiiiiifqqq{TTPlayerConfig=^^?iifffB******iiiiiiiiiiiiiiiiiiiiii***iiifiiiiiiiiiiiiiiiiiiiiiiiifffii**iiffiiii}{SpeedSampler2=qqqqq}^?}, name: _player
    struct AVWindow *_window;
    struct ApApp *_wrapper;
    struct APPWRAPPER *_appWrapper;
    // Error parsing type: ^{PCMWriter=^^?^^?{atomic<com::ss::ttm::utils::AVState::States>=Ai}iiiB*^{AVSource}^{AVHandler}^^?ii{AVQueue<com::ss::ttm::AVBuffer *>=B^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}iiiiii*^{AVBufferCallback}i}{AVStack<com::ss::ttm::AVBuffer *>=B^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}iiiiii*}{AVThread={atomic<int>=Ai}*^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}B^{AVProcessor}{AVTHREAD_INFO=^?^?^v}}B^{__sFILE}*^{AVFilter}iiiii}, name: _pcmWriter
    // Error parsing type: ^{YUVWriter=^^?^^?{atomic<com::ss::ttm::utils::AVState::States>=Ai}iiiB*^{AVSource}^{AVHandler}^^?ii{AVQueue<com::ss::ttm::AVBuffer *>=B^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}iiiiii*^{AVBufferCallback}i}{AVStack<com::ss::ttm::AVBuffer *>=B^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}iiiiii*}{AVThread={atomic<int>=Ai}*^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}B^{AVProcessor}{AVTHREAD_INFO=^?^?^v}}B^{__sFILE}*^{AVFilter}[4i][4i]iiiii{AVRationalN=ii}}, name: _yuvWriter
    _Bool _prepared;
    int _playerErrorCode;
    int _sysErrorCode;
    NSString *_playerErrorInfo;
    _Bool _readyForDisplay;
    _Bool _shouldAutoplay;
    _Bool _allowsAirPlay;
    _Bool _airPlayVideoActive;
    int _errorCode;
    struct UIView *_view;
    NSURL *_contentURL;
    long long _playbackState;
    long long _repeatMode;
    double _endPlaybackTime;
    unsigned long long _loadState;
    long long _mediaType;
    TTMoviePlayerController *_moviePlayer;
    long long _controlStyle;
    long long _scalingMode;
    unsigned long long _movieMediaTypes;
    long long _movieSourceType;
    double _initialPlaybackTime;
    MPMovieAccessLog *_accessLog;
    MPMovieErrorLog *_errorLog;
    NSString *_audioFilePath;
    NSString *_videoFilePath;
    NSString *_mp4FilePath;
    id <TTMediaWriter> _mediaWriter;
}

@property(retain, nonatomic) id <TTMediaWriter> mediaWriter; // @synthesize mediaWriter=_mediaWriter;
@property(copy, nonatomic) NSString *mp4FilePath; // @synthesize mp4FilePath=_mp4FilePath;
@property(copy, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(readonly, nonatomic) MPMovieErrorLog *errorLog; // @synthesize errorLog=_errorLog;
@property(readonly, nonatomic) MPMovieAccessLog *accessLog; // @synthesize accessLog=_accessLog;
@property(readonly, nonatomic, getter=isAirPlayVideoActive) _Bool airPlayVideoActive; // @synthesize airPlayVideoActive=_airPlayVideoActive;
@property(nonatomic) _Bool allowsAirPlay; // @synthesize allowsAirPlay=_allowsAirPlay;
@property(nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(nonatomic) long long movieSourceType; // @synthesize movieSourceType=_movieSourceType;
@property(readonly, nonatomic) unsigned long long movieMediaTypes; // @synthesize movieMediaTypes=_movieMediaTypes;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
@property(readonly, nonatomic) TTMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) double endPlaybackTime; // @synthesize endPlaybackTime=_endPlaybackTime;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)setDrmCreater:(CDUnknownFunctionPointerType)arg1;
- (void)buildFilePath;
- (void)endRecording:(CDUnknownBlockType)arg1;
- (void)startToRecord;
- (void)paseLogInfo:(id)arg1;
- (void)audioSessionDidChangeInterruptionType:(id)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void *)getPtrValue:(int)arg1;
- (int)getIntValue:(int)arg1 forKey:(int)arg2;
- (long long)getInt64Value:(long long)arg1 forKey:(int)arg2;
- (void)setHurryTime:(int)arg1;
- (void)setValue:(int)arg1 forKey:(int)arg2;
- (void)setValueString:(id)arg1 forKey:(int)arg2;
- (id)getOption:(int)arg1;
- (void)setOption:(id)arg1 forKey:(int)arg2;
- (void)testRendfer;
- (void)gestureDrag:(int)arg1 Y:(int)arg2;
- (long long)getVideoType;
- (void)setOriSource:(long long)arg1;
- (void)appWillEnterBackgroundNotification:(_Bool)arg1;
- (void)appWillEnterForegroundNotification:(_Bool)arg1;
- (void)setupRecognizer;
- (void)move:(id)arg1;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (void)handleNotify:(id)arg1;
- (void)setReadyForDisplay:(_Bool)arg1;
- (void)setLoadState:(unsigned long long)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)mouseEvent:(int)arg1 x:(int)arg2 y:(int)arg3;
- (void)onNotify:(id)arg1 userInfo:(id)arg2;
- (void)onNotify:(id)arg1;
- (void)setIsMute:(_Bool)arg1;
- (void)setLoop:(_Bool)arg1;
- (void)seek:(int)arg1;
- (void)close;
- (void)reset;
- (void)endSeeking;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
- (void)play;
@property(nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
- (void)setCacheFile:(id)arg1 openFileModel:(int)arg2;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void)dealloc;
- (void)playNext:(id)arg1 StartTime:(int)arg2;
- (id)initWithContentURL:(id)arg1;
- (id)initWithWindow:(struct AVWindow *)arg1;
- (id)init;
- (void)create;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
