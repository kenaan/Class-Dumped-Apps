//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSNumber, SOJUSnapCreatorAttribution;

@interface SCMediaSendTaskStoriesConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _postToMyStory;
    _Bool _shouldShowStatusMessageWhenPostComplete;
    NSArray *_ourStoriesMetadata;
    NSArray *_customStoriesMetadata;
    NSNumber *_myStoryPrivacyOverride;
    NSDate *_storyUserPostedTimestamp;
    SOJUSnapCreatorAttribution *_repostAttribution;
    NSDate *_startRecordingTimestamp;
}

@property(readonly, copy, nonatomic) NSDate *startRecordingTimestamp; // @synthesize startRecordingTimestamp=_startRecordingTimestamp;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *repostAttribution; // @synthesize repostAttribution=_repostAttribution;
@property(readonly, nonatomic) _Bool shouldShowStatusMessageWhenPostComplete; // @synthesize shouldShowStatusMessageWhenPostComplete=_shouldShowStatusMessageWhenPostComplete;
@property(readonly, copy, nonatomic) NSDate *storyUserPostedTimestamp; // @synthesize storyUserPostedTimestamp=_storyUserPostedTimestamp;
@property(readonly, copy, nonatomic) NSNumber *myStoryPrivacyOverride; // @synthesize myStoryPrivacyOverride=_myStoryPrivacyOverride;
@property(readonly, nonatomic) _Bool postToMyStory; // @synthesize postToMyStory=_postToMyStory;
@property(readonly, copy, nonatomic) NSArray *customStoriesMetadata; // @synthesize customStoriesMetadata=_customStoriesMetadata;
@property(readonly, copy, nonatomic) NSArray *ourStoriesMetadata; // @synthesize ourStoriesMetadata=_ourStoriesMetadata;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOurStoriesMetadata:(id)arg1 customStoriesMetadata:(id)arg2 postToMyStory:(_Bool)arg3 myStoryPrivacyOverride:(id)arg4 storyUserPostedTimestamp:(id)arg5 shouldShowStatusMessageWhenPostComplete:(_Bool)arg6 repostAttribution:(id)arg7 startRecordingTimestamp:(id)arg8;
- (id)initWithCoder:(id)arg1;

@end
