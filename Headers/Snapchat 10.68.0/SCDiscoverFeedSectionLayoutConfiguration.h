//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCDiscoverFeedSectionLayoutType;

@interface SCDiscoverFeedSectionLayoutConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldShowHeader;
    _Bool _canHide;
    SCDiscoverFeedSectionLayoutType *_layoutType;
    struct UIEdgeInsets _sectionInsets;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedSectionLayoutType *layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, nonatomic) _Bool canHide; // @synthesize canHide=_canHide;
@property(readonly, nonatomic) _Bool shouldShowHeader; // @synthesize shouldShowHeader=_shouldShowHeader;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShouldShowHeader:(_Bool)arg1 canHide:(_Bool)arg2 sectionInsets:(struct UIEdgeInsets)arg3 layoutType:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
