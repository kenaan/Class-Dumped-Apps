//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SCMediaDataPackage : NSObject <NSCopying, NSCoding>
{
    NSString *_packageId;
    NSData *_mediaData;
    NSData *_overlayData;
}

@property(readonly, copy, nonatomic) NSData *overlayData; // @synthesize overlayData=_overlayData;
@property(readonly, copy, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(readonly, copy, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPackageId:(id)arg1 mediaData:(id)arg2 overlayData:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

