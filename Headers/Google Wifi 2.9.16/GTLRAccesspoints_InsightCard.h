//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRAccesspoints_AnalyticsId, GTLRAccesspoints_VisualCard, GTLRDateTime, NSArray, NSNumber, NSString;

@interface GTLRAccesspoints_InsightCard : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) GTLRAccesspoints_AnalyticsId *analyticsId; // @dynamic analyticsId;
@property(retain, nonatomic) GTLRAccesspoints_VisualCard *card; // @dynamic card;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSString *dismissalType; // @dynamic dismissalType;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *inProgress; // @dynamic inProgress;
@property(retain, nonatomic) GTLRDateTime *lastUserActionTime; // @dynamic lastUserActionTime;

@end

