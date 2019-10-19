//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEComposerBeautyEffectItem : MTLModel <MTLJSONSerializing>
{
    _Bool _isDoubleDirection;
    float _maxValue;
    float _minValue;
    float _defaultValue;
    float _maxPercent;
    float _minPercent;
    float _defaultPercent;
    NSString *_tag;
    NSString *_name;
    NSString *_resource;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *resource; // @synthesize resource=_resource;
@property(nonatomic) float defaultPercent; // @synthesize defaultPercent=_defaultPercent;
@property(nonatomic) float minPercent; // @synthesize minPercent=_minPercent;
@property(nonatomic) float maxPercent; // @synthesize maxPercent=_maxPercent;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
@property(nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isDoubleDirection; // @synthesize isDoubleDirection=_isDoubleDirection;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

