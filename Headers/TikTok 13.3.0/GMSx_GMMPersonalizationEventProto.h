//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMGEOMLocation, NSString;

@interface GMSx_GMMPersonalizationEventProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationLabel; // @dynamic applicationLabel;
@property(copy, nonatomic) NSString *applicationPackageName; // @dynamic applicationPackageName;
@property(nonatomic) _Bool causedLocationHistoryImpression; // @dynamic causedLocationHistoryImpression;
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(copy, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasApplicationLabel; // @dynamic hasApplicationLabel;
@property(nonatomic) _Bool hasApplicationPackageName; // @dynamic hasApplicationPackageName;
@property(nonatomic) _Bool hasCausedLocationHistoryImpression; // @dynamic hasCausedLocationHistoryImpression;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(retain, nonatomic) GMSx_GMGEOMLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end

