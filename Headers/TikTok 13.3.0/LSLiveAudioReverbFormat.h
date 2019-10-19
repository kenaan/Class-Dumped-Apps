//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface LSLiveAudioReverbFormat : NSObject <NSCopying>
{
    _Bool _dryOnly;
    _Bool _wetOnly;
    float _roomSize;
    float _hfDamping;
    float _stereoDepth;
    float _dry;
    float _wet;
    float _dryGainDB;
    float _wetGainDB;
}

@property(nonatomic) _Bool wetOnly; // @synthesize wetOnly=_wetOnly;
@property(nonatomic) _Bool dryOnly; // @synthesize dryOnly=_dryOnly;
@property(nonatomic) float wetGainDB; // @synthesize wetGainDB=_wetGainDB;
@property(nonatomic) float dryGainDB; // @synthesize dryGainDB=_dryGainDB;
@property(nonatomic) float wet; // @synthesize wet=_wet;
@property(nonatomic) float dry; // @synthesize dry=_dry;
@property(nonatomic) float stereoDepth; // @synthesize stereoDepth=_stereoDepth;
@property(nonatomic) float hfDamping; // @synthesize hfDamping=_hfDamping;
@property(nonatomic) float roomSize; // @synthesize roomSize=_roomSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

