//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "IESVideoBSModelProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSArray, NSNumber, NSString;

@interface AWEVideoBSModel : MTLModel <MTLJSONSerializing, IESVideoBSModelProtocol>
{
    _Bool _isH265;
    NSString *_gearName;
    NSNumber *_qualityType;
    NSNumber *_bitrate;
    AWEURLModel *_playAddr;
}

+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isH265; // @synthesize isH265=_isH265;
@property(retain, nonatomic) AWEURLModel *playAddr; // @synthesize playAddr=_playAddr;
@property(retain, nonatomic) NSNumber *bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSNumber *qualityType; // @synthesize qualityType=_qualityType;
@property(copy, nonatomic) NSString *gearName; // @synthesize gearName=_gearName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *prefetchURL;
@property(readonly, nonatomic) NSArray *playURLList;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

