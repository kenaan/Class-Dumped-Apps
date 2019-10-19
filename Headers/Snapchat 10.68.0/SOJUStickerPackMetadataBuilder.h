//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUStickerPackMetadataBuilder : NSObject
{
    NSString *_packId;
    NSString *_categoryId;
    NSString *_packType;
    NSNumber *_version;
    NSArray *_target;
    NSNumber *_active;
    NSNumber *_hasBanner;
    NSArray *_stickers;
    NSNumber *_priority;
}

+ (id)withJUStickerPackMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setPriority:(id)arg1;
- (id)setStickers:(id)arg1;
- (id)setHasBanner:(id)arg1;
- (id)setActive:(id)arg1;
- (id)setTarget:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setPackType:(id)arg1;
- (id)setCategoryId:(id)arg1;
- (id)setPackId:(id)arg1;
- (id)build;
- (id)setPriorityValue:(int)arg1;
- (id)setHasBannerValue:(_Bool)arg1;
- (id)setActiveValue:(_Bool)arg1;
- (id)setVersionValue:(int)arg1;
- (id)setPackTypeEnum:(long long)arg1;

@end
