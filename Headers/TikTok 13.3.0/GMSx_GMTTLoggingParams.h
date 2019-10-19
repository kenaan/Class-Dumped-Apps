//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBEnumArray, GMSx_LOGClickTrackingCGI, GMSx_LOGSBSearchboxStats, GMSx_LOGUIState, NSMutableArray, NSString;

@interface GMSx_GMTTLoggingParams : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *apiReferer; // @dynamic apiReferer;
@property(retain, nonatomic) GMSx_LOGClickTrackingCGI *clickTracking; // @dynamic clickTracking;
@property(retain, nonatomic) NSMutableArray *clientVeTreeArray; // @dynamic clientVeTreeArray;
@property(readonly, nonatomic) unsigned long long clientVeTreeArray_Count; // @dynamic clientVeTreeArray_Count;
@property(nonatomic) _Bool disableLogging; // @dynamic disableLogging;
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(copy, nonatomic) NSString *eventId; // @dynamic eventId;
@property(copy, nonatomic) NSString *gsL; // @dynamic gsL;
@property(nonatomic) _Bool hasApiReferer; // @dynamic hasApiReferer;
@property(nonatomic) _Bool hasClickTracking; // @dynamic hasClickTracking;
@property(nonatomic) _Bool hasDisableLogging; // @dynamic hasDisableLogging;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasEventId; // @dynamic hasEventId;
@property(nonatomic) _Bool hasGsL; // @dynamic hasGsL;
@property(nonatomic) _Bool hasIsInternalBatchRequestForExternalUsers; // @dynamic hasIsInternalBatchRequestForExternalUsers;
@property(nonatomic) _Bool hasIsPrefetch; // @dynamic hasIsPrefetch;
@property(nonatomic) _Bool hasLogicalParentId; // @dynamic hasLogicalParentId;
@property(nonatomic) _Bool hasOq; // @dynamic hasOq;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) _Bool hasQuantizeLocations; // @dynamic hasQuantizeLocations;
@property(nonatomic) _Bool hasSearchboxStats; // @dynamic hasSearchboxStats;
@property(nonatomic) _Bool hasTypeId; // @dynamic hasTypeId;
@property(nonatomic) _Bool hasUserAction; // @dynamic hasUserAction;
@property(nonatomic) _Bool hasVeUiState; // @dynamic hasVeUiState;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(nonatomic) _Bool isInternalBatchRequestForExternalUsers; // @dynamic isInternalBatchRequestForExternalUsers;
@property(nonatomic) _Bool isPrefetch; // @dynamic isPrefetch;
@property(copy, nonatomic) NSString *logicalParentId; // @dynamic logicalParentId;
@property(copy, nonatomic) NSString *oq; // @dynamic oq;
@property(retain, nonatomic) GMSx_GPBEnumArray *otherUserActionsArray; // @dynamic otherUserActionsArray;
@property(readonly, nonatomic) unsigned long long otherUserActionsArray_Count; // @dynamic otherUserActionsArray_Count;
@property(nonatomic) int productId; // @dynamic productId;
@property(nonatomic) _Bool quantizeLocations; // @dynamic quantizeLocations;
@property(retain, nonatomic) GMSx_LOGSBSearchboxStats *searchboxStats; // @dynamic searchboxStats;
@property(nonatomic) int typeId; // @dynamic typeId;
@property(nonatomic) int userAction; // @dynamic userAction;
@property(retain, nonatomic) GMSx_LOGUIState *veUiState; // @dynamic veUiState;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end

