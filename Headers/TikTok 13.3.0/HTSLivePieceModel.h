//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveGiftPieceModel, HTSLiveHeartPieceModel, HTSLivePatternPieceModel, HTSLiveTextFormatModel, HTSLiveUserPieceModel, NSNumber, NSString;

@interface HTSLivePieceModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_type;
    HTSLiveTextFormatModel *_format;
    NSString *_stringValue;
    HTSLiveHeartPieceModel *_heartValue;
    HTSLiveGiftPieceModel *_giftValue;
    HTSLiveUserPieceModel *_userValue;
    HTSLivePatternPieceModel *_patternValue;
}

+ (id)patternValueJSONTransformer;
+ (id)userValueJSONTransformer;
+ (id)giftValueJSONTransformer;
+ (id)heartValueJSONTransformer;
+ (id)formatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) HTSLivePatternPieceModel *patternValue; // @synthesize patternValue=_patternValue;
@property(retain, nonatomic) HTSLiveUserPieceModel *userValue; // @synthesize userValue=_userValue;
@property(retain, nonatomic) HTSLiveGiftPieceModel *giftValue; // @synthesize giftValue=_giftValue;
@property(retain, nonatomic) HTSLiveHeartPieceModel *heartValue; // @synthesize heartValue=_heartValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) HTSLiveTextFormatModel *format; // @synthesize format=_format;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

