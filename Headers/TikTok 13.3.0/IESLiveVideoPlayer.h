//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveVideoPlayerControllerDelegate-Protocol.h"
#import "IESLiveVideoPlayerProvider-Protocol.h"

@class IESLiveVideoPlayerController, NSString, UIView;
@protocol IESLiveRoomService, IESLiveVideoPlayerDelegate;

@interface IESLiveVideoPlayer : NSObject <IESLiveVideoPlayerControllerDelegate, IESLiveVideoPlayerProvider>
{
    id <IESLiveVideoPlayerDelegate> _delegate;
    IESLiveVideoPlayerController *_player;
    UIView *_view;
    unsigned long long _loadState;
    unsigned long long _playbackState;
    double _progress;
    double _cacheProgress;
    double _duration;
    id <IESLiveRoomService> _roomService;
}

@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) IESLiveVideoPlayerController *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IESLiveVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changePlayerContentFrame;
- (void)prepareForReuse;
- (void)close;
- (void)pause;
- (void)stop;
- (void)play;
- (void)seekToProgress:(double)arg1;
- (void)reloadVideoId:(id)arg1;
- (void)renderOnView:(id)arg1;
- (void)playerController:(id)arg1 userStop:(id)arg2;
- (void)playerController:(id)arg1 playerDidFinishError:(id)arg2;
- (void)playerController:(id)arg1 playbackStateDidChange:(unsigned long long)arg2;
- (void)playerController:(id)arg1 loadStateDidChange:(unsigned long long)arg2;
- (void)playerController:(id)arg1 updateProgress:(double)arg2 duration:(double)arg3;
- (void)playerController:(id)arg1 updateCacheProgress:(double)arg2;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg1;
- (void)_loadPlayerIfNeed;
@property(readonly, copy, nonatomic) NSString *vid;
- (_Bool)_shouldMoveTopPlayerView;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

