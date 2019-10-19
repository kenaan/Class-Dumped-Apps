//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "AWEDouyinLabIdea-Protocol.h"

@class AWEDouYinLabIdeaSupportedVersion, AWEURLModel, NSArray, NSString;

@interface AWEDouYinLabIdeaModel : AWEBaseApiModel <AWEDouyinLabIdea>
{
    NSString *_ideaId;
    AWEURLModel *_icon;
    NSString *_title;
    NSString *_abstract;
    NSString *_desc;
    double _rating;
    long long _userCount;
    long long _status;
    long long _type;
    long long _tag;
    NSArray *_snapshots;
    NSArray *_videos;
    NSString *_feedbackUrl;
    AWEDouYinLabIdeaSupportedVersion *_supportedVersions;
    long long _publishTime;
}

+ (id)videosJSONTransformer;
+ (id)snapshotsJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)supportedVersionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) AWEDouYinLabIdeaSupportedVersion *supportedVersions; // @synthesize supportedVersions=_supportedVersions;
@property(copy, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(copy, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(copy, nonatomic) NSArray *snapshots; // @synthesize snapshots=_snapshots;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEURLModel *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *ideaId; // @synthesize ideaId=_ideaId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isExternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

