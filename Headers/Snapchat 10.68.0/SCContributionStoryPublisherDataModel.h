//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSummary.h"

@class NSString;

@interface SCContributionStoryPublisherDataModel : SCSummary
{
    NSString *_liveStoryThumbnailUrl;
    NSString *_displayName;
    NSString *_subtext;
    NSString *_profileDescription;
    NSString *_userName;
    NSString *_cacheId;
    long long _storyType;
}

@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)failedToLoad;
- (long long)mediaMetadataAvailable;
- (id)defaultThumbnailImage;
- (void)fetchThumbnailImageFromServerWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContributionStoryPublisher:(id)arg1 storyType:(long long)arg2;
- (id)initWithUserName:(id)arg1 displayName:(id)arg2 subtext:(id)arg3 profileDescription:(id)arg4 thumbnailUrl:(id)arg5 cacheId:(id)arg6 storyType:(long long)arg7;

@end
