//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveUserModel, NSNumber, NSString;

@interface IESLiveAudienceModel : MTLModel <MTLJSONSerializing>
{
    _Bool _rankInTotal;
    IESLiveUserModel *_user;
    NSNumber *_rank;
    NSNumber *_firePowerCount;
    NSString *_gapDescription;
    NSNumber *_delta;
    NSNumber *_isRich;
}

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool rankInTotal; // @synthesize rankInTotal=_rankInTotal;
@property(readonly, nonatomic) NSNumber *isRich; // @synthesize isRich=_isRich;
@property(retain, nonatomic) NSNumber *delta; // @synthesize delta=_delta;
@property(copy, nonatomic) NSString *gapDescription; // @synthesize gapDescription=_gapDescription;
@property(retain, nonatomic) NSNumber *firePowerCount; // @synthesize firePowerCount=_firePowerCount;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) IESLiveUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

