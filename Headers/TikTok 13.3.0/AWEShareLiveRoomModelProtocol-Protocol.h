//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol AWEShareLiveRoomModelProtocol <NSObject>
- (NSString *)awes_ownerAvatarURLString;
- (NSString *)awes_ownerSignature;
- (NSString *)awes_ownerDisplayID;
- (NSString *)awes_ownerNickname;

@optional
- (NSString *)anchorShareText;
- (NSString *)userShareText;
- (NSString *)requestId;
- (NSNumber *)roomID;
@end

