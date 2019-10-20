//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveDisplayTextModel, IESLiveGiftChainsFreeCellSubData, NSArray, NSNumber, NSString;

@interface IESLiveGiftChainsFreeCellData : MTLModel <MTLJSONSerializing>
{
    NSNumber *_giftId;
    NSNumber *_fanTicketCount;
    NSString *_describeStr;
    NSNumber *_comboCount;
    NSNumber *_leftDiamond;
    NSNumber *_msgId;
    NSNumber *_proDefId;
    NSNumber *_repeatCount;
    NSNumber *_propType;
    HTSLiveDisplayTextModel *_displayText;
    NSNumber *_groupCount;
    NSArray *_props;
    IESLiveGiftChainsFreeCellSubData *_freeCell;
}

+ (id)freeCellJSONTransformer;
+ (id)displayTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) IESLiveGiftChainsFreeCellSubData *freeCell; // @synthesize freeCell=_freeCell;
@property(retain, nonatomic) NSArray *props; // @synthesize props=_props;
@property(retain, nonatomic) NSNumber *groupCount; // @synthesize groupCount=_groupCount;
@property(retain, nonatomic) HTSLiveDisplayTextModel *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) NSNumber *propType; // @synthesize propType=_propType;
@property(retain, nonatomic) NSNumber *repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSNumber *proDefId; // @synthesize proDefId=_proDefId;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSNumber *leftDiamond; // @synthesize leftDiamond=_leftDiamond;
@property(retain, nonatomic) NSNumber *comboCount; // @synthesize comboCount=_comboCount;
@property(copy, nonatomic) NSString *describeStr; // @synthesize describeStr=_describeStr;
@property(retain, nonatomic) NSNumber *fanTicketCount; // @synthesize fanTicketCount=_fanTicketCount;
@property(retain, nonatomic) NSNumber *giftId; // @synthesize giftId=_giftId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
