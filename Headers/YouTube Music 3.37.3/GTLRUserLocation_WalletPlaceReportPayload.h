//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserLocation_WalletPlaceReportPayloadInstoreTransactionDetails, GTLRUserLocation_WalletUserEventId, NSArray, NSString;

@interface GTLRUserLocation_WalletPlaceReportPayload : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRUserLocation_WalletUserEventId *eventId; // @dynamic eventId;
@property(retain, nonatomic) GTLRUserLocation_WalletPlaceReportPayloadInstoreTransactionDetails *instoreTransactionDetails; // @dynamic instoreTransactionDetails;
@property(retain, nonatomic) NSArray *placeLikelihoodBuffers; // @dynamic placeLikelihoodBuffers;
@property(copy, nonatomic) NSString *userEvent; // @dynamic userEvent;

@end
