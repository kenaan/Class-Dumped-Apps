//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCDiscoverFeedAdToLens : NSObject <NSCopying, NSCoding>
{
    NSArray *_lensItems;
}

@property(readonly, copy, nonatomic) NSArray *lensItems; // @synthesize lensItems=_lensItems;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensItems:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
