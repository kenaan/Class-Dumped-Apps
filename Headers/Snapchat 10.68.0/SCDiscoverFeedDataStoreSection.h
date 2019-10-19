//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, SCDiscoverFeedSectionDataModel, SCDiscoverFeedSectionMetadata;

@interface SCDiscoverFeedDataStoreSection : NSObject <NSCopying, NSCoding>
{
    unsigned long long _feedType;
    NSArray *_stories;
    SCDiscoverFeedSectionDataModel *_sectionDataModel;
    SCDiscoverFeedSectionMetadata *_sectionMetadata;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedSectionMetadata *sectionMetadata; // @synthesize sectionMetadata=_sectionMetadata;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionDataModel *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(readonly, copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(readonly, nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedType:(unsigned long long)arg1 stories:(id)arg2 sectionDataModel:(id)arg3 sectionMetadata:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
