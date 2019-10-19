//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendsFeedScreenshotMessage : NSObject <NSCopying>
{
    _Bool _isUnread;
    _Bool _isScreenRecording;
    NSString *_actionPerformer;
}

@property(readonly, nonatomic) _Bool isScreenRecording; // @synthesize isScreenRecording=_isScreenRecording;
@property(readonly, nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActionPerformer:(id)arg1 isUnread:(_Bool)arg2 isScreenRecording:(_Bool)arg3;

@end
