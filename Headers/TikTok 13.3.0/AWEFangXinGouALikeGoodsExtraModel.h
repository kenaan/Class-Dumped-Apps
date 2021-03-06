//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEFangXinGouALikeGoodsExtraModel : MTLModel <MTLJSONSerializing>
{
    NSArray *_couponRuleNameList;
    long long _postFeeType;
    NSString *_consultUrlStr;
    NSString *_shopCartUrlStr;
    NSString *_purchaseNowUrl;
    NSString *_originType;
    NSString *_originID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSString *originType; // @synthesize originType=_originType;
@property(copy, nonatomic) NSString *purchaseNowUrl; // @synthesize purchaseNowUrl=_purchaseNowUrl;
@property(copy, nonatomic) NSString *shopCartUrlStr; // @synthesize shopCartUrlStr=_shopCartUrlStr;
@property(copy, nonatomic) NSString *consultUrlStr; // @synthesize consultUrlStr=_consultUrlStr;
@property(nonatomic) long long postFeeType; // @synthesize postFeeType=_postFeeType;
@property(retain, nonatomic) NSArray *couponRuleNameList; // @synthesize couponRuleNameList=_couponRuleNameList;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

