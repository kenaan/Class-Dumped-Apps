//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPOIInfoProtocol-Protocol.h"

@class NSString;

@interface ACCPOIInfoModel : NSObject <ACCPOIInfoProtocol>
{
    _Bool userFavorited;
    _Bool recommendFromMedia;
    NSString *poiName;
    NSString *poiID;
    NSString *backendType;
    NSString *typeCode;
    NSString *distance;
    double longitude;
    double latitude;
}

+ (id)convertPOIInfoModelWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(copy, nonatomic) NSString *distance; // @synthesize distance;
@property(copy, nonatomic) NSString *typeCode; // @synthesize typeCode;
@property(nonatomic) _Bool recommendFromMedia; // @synthesize recommendFromMedia;
@property(nonatomic) _Bool userFavorited; // @synthesize userFavorited;
@property(copy, nonatomic) NSString *backendType; // @synthesize backendType;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

