//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTLatLng, NSMutableArray, NSString;

@interface GMSx_GMTTTransitStation : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *agencyArray; // @dynamic agencyArray;
@property(readonly, nonatomic) unsigned long long agencyArray_Count; // @dynamic agencyArray_Count;
@property(nonatomic) long long departureTimeAnchorUtcSeconds; // @dynamic departureTimeAnchorUtcSeconds;
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(copy, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasDepartureTimeAnchorUtcSeconds; // @dynamic hasDepartureTimeAnchorUtcSeconds;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasHasTicketUrls; // @dynamic hasHasTicketUrls;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasIsDetailedCard; // @dynamic hasIsDetailedCard;
@property(nonatomic) _Bool hasLatLng; // @dynamic hasLatLng;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRealtimeAlertsSummary; // @dynamic hasRealtimeAlertsSummary;
@property(nonatomic) _Bool hasShowRealtimeLegend; // @dynamic hasShowRealtimeLegend;
@property(nonatomic) _Bool hasStopCode; // @dynamic hasStopCode;
@property(nonatomic) _Bool hasTicketUrls; // @dynamic hasTicketUrls;
@property(nonatomic) _Bool hasTimezoneId; // @dynamic hasTimezoneId;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(nonatomic) _Bool hasWheelChairAccess; // @dynamic hasWheelChairAccess;
@property(nonatomic) _Bool hasWheelchairAccessibility; // @dynamic hasWheelchairAccessibility;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(nonatomic) _Bool isDetailedCard; // @dynamic isDetailedCard;
@property(retain, nonatomic) GMSx_GMTTLatLng *latLng; // @dynamic latLng;
@property(retain, nonatomic) NSMutableArray *lineGroupArray; // @dynamic lineGroupArray;
@property(readonly, nonatomic) unsigned long long lineGroupArray_Count; // @dynamic lineGroupArray_Count;
@property(retain, nonatomic) NSMutableArray *lineGroupSummaryArray; // @dynamic lineGroupSummaryArray;
@property(readonly, nonatomic) unsigned long long lineGroupSummaryArray_Count; // @dynamic lineGroupSummaryArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *realtimeAlertsSummary; // @dynamic realtimeAlertsSummary;
@property(retain, nonatomic) NSMutableArray *serviceAlertArray; // @dynamic serviceAlertArray;
@property(readonly, nonatomic) unsigned long long serviceAlertArray_Count; // @dynamic serviceAlertArray_Count;
@property(nonatomic) _Bool showRealtimeLegend; // @dynamic showRealtimeLegend;
@property(copy, nonatomic) NSString *stopCode; // @dynamic stopCode;
@property(copy, nonatomic) NSString *timezoneId; // @dynamic timezoneId;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;
@property(retain, nonatomic) NSMutableArray *vehicleTypeIconArray; // @dynamic vehicleTypeIconArray;
@property(readonly, nonatomic) unsigned long long vehicleTypeIconArray_Count; // @dynamic vehicleTypeIconArray_Count;
@property(nonatomic) _Bool wheelChairAccess; // @dynamic wheelChairAccess;
@property(nonatomic) int wheelchairAccessibility; // @dynamic wheelchairAccessibility;

@end

