//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, SOJUStickerMetadata;

@interface SCChatStickerPackageRefreshHint : NSObject <NSCopying>
{
    SOJUStickerMetadata *_stickerMetadata;
    NSNumber *_index;
}

@property(readonly, copy, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) SOJUStickerMetadata *stickerMetadata; // @synthesize stickerMetadata=_stickerMetadata;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStickerMetadata:(id)arg1 index:(id)arg2;

@end

