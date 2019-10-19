//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HTSLiveKTVProtocol, HTSLiveMediaStreamEngineDelegate;

@protocol HTSLiveMediaStreamEngine <NSObject>
@property(nonatomic) __weak id <HTSLiveMediaStreamEngineDelegate> delegate;
@property(readonly, nonatomic) long long engineState;
- (void)stopLiveStream;
- (void)startLiveStream;

@optional
@property(nonatomic) long long bitrate;
@property(nonatomic) _Bool mute;
- (void)hideIndicatorView;
- (void)showIndicatorView;
- (void)prepare;
- (long long)rtmpTime;
- (id <HTSLiveKTVProtocol>)liveKTV;
@end

