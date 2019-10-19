//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWEWalletBalanceModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_diamondCount;
    NSNumber *_totalIncome;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *totalIncome; // @synthesize totalIncome=_totalIncome;
@property(retain, nonatomic) NSNumber *diamondCount; // @synthesize diamondCount=_diamondCount;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

