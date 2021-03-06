//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData, NSString;

@interface SCImpalaPublisherProfileViewModel : SCComposerMarshallableObject
{
    _Bool _notificationsABTestEnabled;
    NSData *_encodedLaunchInfo;
    NSString *_bitmojiAvatarId;
    NSString *_sourcePageType;
    NSString *_pageEntryType;
}

@property(copy, nonatomic) NSString *pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(nonatomic) _Bool notificationsABTestEnabled; // @synthesize notificationsABTestEnabled=_notificationsABTestEnabled;
@property(copy, nonatomic) NSData *encodedLaunchInfo; // @synthesize encodedLaunchInfo=_encodedLaunchInfo;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithEncodedLaunchInfo:(id)arg1 notificationsABTestEnabled:(_Bool)arg2 bitmojiAvatarId:(id)arg3 sourcePageType:(id)arg4 pageEntryType:(id)arg5;

@end

