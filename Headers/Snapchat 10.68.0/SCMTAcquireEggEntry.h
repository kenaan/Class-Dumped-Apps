//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, ObjectID, SPCGPoint;

@interface SCMTAcquireEggEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *eggId; // @dynamic eggId;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLatLng; // @dynamic hasLatLng;
@property(retain, nonatomic) ObjectID *id_p; // @dynamic id_p;
@property(retain, nonatomic) SPCGPoint *latLng; // @dynamic latLng;
@property(nonatomic) int pointValue; // @dynamic pointValue;
@property(nonatomic) long long timeMs; // @dynamic timeMs;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

