//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TVLAdvising-Protocol.h"

@class NSDictionary, NSError, NSNumber, TVLManager;

@protocol TVLDelegate <TVLAdvising>
- (void)itemStatusChanged:(NSNumber *)arg1;
- (void)loadStateChanged:(NSNumber *)arg1;
- (void)onMonitorLog:(NSDictionary *)arg1;
- (void)liveStatusResponse:(unsigned long long)arg1;
- (void)onStreamDryup:(NSError *)arg1;
- (void)stallEnd;
- (void)stallStart;
- (void)startRender;
- (void)recieveError:(NSError *)arg1;

@optional
- (void)manager:(TVLManager *)arg1 didCloseInAsyncMode:(_Bool)arg2;
- (void)manager:(TVLManager *)arg1 videoSizeDidChange:(struct CGSize)arg2;
- (void)manager:(TVLManager *)arg1 didReceiveSEI:(NSDictionary *)arg2;
- (void)manager:(TVLManager *)arg1 playerItemStatusDidChange:(long long)arg2;
@end

