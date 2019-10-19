//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesContentMetadata-Protocol.h"

@class NSString, VLKVideoMetadata;

@interface SCSpectaclesLagunaContentMetadata : NSObject <SCSpectaclesContentMetadata>
{
    VLKVideoMetadata *_underlyingProto;
}

@property(retain, nonatomic) VLKVideoMetadata *underlyingProto; // @synthesize underlyingProto=_underlyingProto;
- (void).cxx_destruct;
- (id)location;
- (unsigned long long)buttonSide;
- (id)userAssociated;
- (id)snapcodeDetected;
- (unsigned long long)buttonPressType;
- (id)bleConnected;
- (id)bleUUID;
- (id)nordicLastBootSession;
- (id)droppedFramesVin1;
- (id)droppedFramesVin0;
- (id)endEvIndex;
- (id)startEvIndex;
- (id)sensorCurrentAgc;
- (id)sensorCurrentDgc;
- (id)sensorEndTemperature;
- (id)sensorBeginTemperature;
- (id)ambientLightIntensity;
- (id)wifiTemperature;
- (id)nordicTemperature;
- (id)ambaTemperature;
- (id)storagePercentage;
- (_Bool)charging;
- (_Bool)hasCharging;
- (id)batterySoc;
- (id)firmwareVersion;
- (_Bool)isHEVC;
- (id)multisnapIndex;
- (id)multisnapGroupID;
- (id)randBytes;
- (id)timeOfCapture;
- (id)videoDuration;
- (unsigned long long)contentType;
- (id)rawData;
- (unsigned long long)serializedSize;
@property(readonly, copy) NSString *description;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
