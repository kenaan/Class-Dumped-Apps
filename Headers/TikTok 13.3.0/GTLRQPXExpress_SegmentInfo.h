//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRQPXExpress_FlightInfo, NSArray, NSNumber, NSString;

@interface GTLRQPXExpress_SegmentInfo : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *bookingCode; // @dynamic bookingCode;
@property(retain, nonatomic) NSNumber *bookingCodeCount; // @dynamic bookingCodeCount;
@property(copy, nonatomic) NSString *cabin; // @dynamic cabin;
@property(retain, nonatomic) NSNumber *connectionDuration; // @dynamic connectionDuration;
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) GTLRQPXExpress_FlightInfo *flight; // @dynamic flight;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) NSArray *leg; // @dynamic leg;
@property(copy, nonatomic) NSString *marriedSegmentGroup; // @dynamic marriedSegmentGroup;
@property(retain, nonatomic) NSNumber *subjectToGovernmentApproval; // @dynamic subjectToGovernmentApproval;

@end

