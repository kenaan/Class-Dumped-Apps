//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveUserRocketSchema, NSString;

@interface IESLiveUserXiguaExtendInfo : MTLModel <MTLJSONSerializing>
{
    NSString *_shareUrl;
    NSString *_rSchemaUrl;
    IESLiveUserRocketSchema *_rocketSchemaInfo;
}

+ (id)rocketSchemaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) IESLiveUserRocketSchema *rocketSchemaInfo; // @synthesize rocketSchemaInfo=_rocketSchemaInfo;
@property(readonly, nonatomic) NSString *rSchemaUrl; // @synthesize rSchemaUrl=_rSchemaUrl;
@property(readonly, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

