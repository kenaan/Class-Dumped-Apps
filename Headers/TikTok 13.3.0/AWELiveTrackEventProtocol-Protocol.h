//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol AWELiveTrackEventProtocol <NSObject>
- (void)trackLiveShow:(NSNumber *)arg1 anchorId:(NSString *)arg2 roomId:(NSString *)arg3 groupId:(NSString *)arg4 requestId:(NSString *)arg5 enterFrom:(NSString *)arg6 order:(NSNumber *)arg7 roomType:(NSNumber *)arg8;
- (void)trackLiveShow:(NSNumber *)arg1 anchorId:(NSString *)arg2 roomId:(NSString *)arg3 requestId:(NSString *)arg4 enterFrom:(NSString *)arg5 order:(NSNumber *)arg6 roomType:(NSNumber *)arg7;
- (void)trackLiveShow:(NSNumber *)arg1 anchorId:(NSString *)arg2 roomId:(NSString *)arg3 groupId:(NSString *)arg4 requestId:(NSString *)arg5 enterFrom:(NSString *)arg6 enterMethod:(NSString *)arg7 order:(NSNumber *)arg8 roomType:(NSNumber *)arg9;
@end

