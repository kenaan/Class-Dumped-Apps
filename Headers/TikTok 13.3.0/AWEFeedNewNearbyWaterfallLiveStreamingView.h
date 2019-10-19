//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveNewPlayerControllerDelegate-Protocol.h"

@class IESLiveNewPlayerController, NSString, NSURL;

@interface AWEFeedNewNearbyWaterfallLiveStreamingView : UIView <IESLiveNewPlayerControllerDelegate>
{
    double _width;
    IESLiveNewPlayerController *_playerController;
    NSString *_currentStreamingPullURL;
    CDUnknownBlockType _startLiveCompletion;
    NSURL *_waitedUrl;
}

@property(retain, nonatomic) NSURL *waitedUrl; // @synthesize waitedUrl=_waitedUrl;
@property(copy, nonatomic) CDUnknownBlockType startLiveCompletion; // @synthesize startLiveCompletion=_startLiveCompletion;
@property(retain, nonatomic) NSString *currentStreamingPullURL; // @synthesize currentStreamingPullURL=_currentStreamingPullURL;
@property(retain, nonatomic) IESLiveNewPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)player:(id)arg1 mediaSizeDidChange:(struct CGSize)arg2;
- (void)player:(id)arg1 loadStateDidChange:(unsigned long long)arg2;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)play;
- (void)close;
- (void)updateWithRtmpURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

