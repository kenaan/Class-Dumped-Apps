//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@interface RKGilding : MTLModel <MTLJSONSerializing>
{
    long long _totalSilver;
    long long _totalGold;
    long long _totalPlatinum;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long totalPlatinum; // @synthesize totalPlatinum=_totalPlatinum;
@property(nonatomic) long long totalGold; // @synthesize totalGold=_totalGold;
@property(nonatomic) long long totalSilver; // @synthesize totalSilver=_totalSilver;

@end

