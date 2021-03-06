//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMClientCapabilities, ASMClientVersions, NSMutableArray, NSString;

@interface ASMRequestContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASMClientCapabilities *clientCapabilities; // @dynamic clientCapabilities;
@property(retain, nonatomic) ASMClientVersions *clientVersions; // @dynamic clientVersions;
@property(retain, nonatomic) NSMutableArray *consistencyTokenJarArray; // @dynamic consistencyTokenJarArray;
@property(readonly, nonatomic) unsigned long long consistencyTokenJarArray_Count; // @dynamic consistencyTokenJarArray_Count;
@property(nonatomic) _Bool hasClientCapabilities; // @dynamic hasClientCapabilities;
@property(nonatomic) _Bool hasClientVersions; // @dynamic hasClientVersions;
@property(nonatomic) _Bool hasIsAuto; // @dynamic hasIsAuto;
@property(nonatomic) _Bool hasIsDarkModeEnabled; // @dynamic hasIsDarkModeEnabled;
@property(nonatomic) _Bool hasIsFeaturePhone; // @dynamic hasIsFeaturePhone;
@property(nonatomic) _Bool hasIsRtl; // @dynamic hasIsRtl;
@property(nonatomic) _Bool hasLogicalScreenDensity; // @dynamic hasLogicalScreenDensity;
@property(nonatomic) _Bool hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(nonatomic) _Bool hasUsesAllImageUrls; // @dynamic hasUsesAllImageUrls;
@property(nonatomic) _Bool isAuto; // @dynamic isAuto;
@property(nonatomic) _Bool isDarkModeEnabled; // @dynamic isDarkModeEnabled;
@property(nonatomic) _Bool isFeaturePhone; // @dynamic isFeaturePhone;
@property(nonatomic) _Bool isRtl; // @dynamic isRtl;
@property(nonatomic) int logicalScreenDensity; // @dynamic logicalScreenDensity;
@property(nonatomic) int platform; // @dynamic platform;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(nonatomic) _Bool usesAllImageUrls; // @dynamic usesAllImageUrls;

@end

