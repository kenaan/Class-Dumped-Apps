//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMGEOMCamera, NSString;

@interface GMSx_GMTTLoggingContext_ClientState : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMGEOMCamera *camera; // @dynamic camera;
@property(nonatomic) int entryPoint; // @dynamic entryPoint;
@property(nonatomic) _Bool fromMoveClosure; // @dynamic fromMoveClosure;
@property(nonatomic) _Bool hasCamera; // @dynamic hasCamera;
@property(nonatomic) _Bool hasEntryPoint; // @dynamic hasEntryPoint;
@property(nonatomic) _Bool hasFromMoveClosure; // @dynamic hasFromMoveClosure;
@property(nonatomic) _Bool hasPhotosAdded; // @dynamic hasPhotosAdded;
@property(nonatomic) _Bool hasReportCompletionTimeMs; // @dynamic hasReportCompletionTimeMs;
@property(nonatomic) _Bool hasRevealKey; // @dynamic hasRevealKey;
@property(nonatomic) int photosAdded; // @dynamic photosAdded;
@property(nonatomic) int reportCompletionTimeMs; // @dynamic reportCompletionTimeMs;
@property(copy, nonatomic) NSString *revealKey; // @dynamic revealKey;

@end

