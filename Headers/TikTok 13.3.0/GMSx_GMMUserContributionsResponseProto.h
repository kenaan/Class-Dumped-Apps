//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMMUserContributionsResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *ei; // @dynamic ei;
@property(nonatomic) _Bool forCurrentUser; // @dynamic forCurrentUser;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasForCurrentUser; // @dynamic hasForCurrentUser;
@property(nonatomic) _Bool hasShareURL; // @dynamic hasShareURL;
@property(nonatomic) _Bool hasShowLocalGuideOptInEntryPoints; // @dynamic hasShowLocalGuideOptInEntryPoints;
@property(nonatomic) _Bool hasShowLocalGuideOptInPromptBanner; // @dynamic hasShowLocalGuideOptInPromptBanner;
@property(copy, nonatomic) NSString *shareURL; // @dynamic shareURL;
@property(nonatomic) _Bool showLocalGuideOptInEntryPoints; // @dynamic showLocalGuideOptInEntryPoints;
@property(nonatomic) _Bool showLocalGuideOptInPromptBanner; // @dynamic showLocalGuideOptInPromptBanner;
@property(retain, nonatomic) NSMutableArray *tabItemArray; // @dynamic tabItemArray;
@property(readonly, nonatomic) unsigned long long tabItemArray_Count; // @dynamic tabItemArray_Count;

@end

