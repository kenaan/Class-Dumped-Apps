//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary, HTSLiveUser_FansClub_FansClubData;

@interface HTSLiveUser_FansClub : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveUser_FansClub_FansClubData *data_p; // @dynamic data_p;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(retain, nonatomic) GPBInt32ObjectDictionary *preferData; // @dynamic preferData;
@property(readonly, nonatomic) unsigned long long preferData_Count; // @dynamic preferData_Count;

@end

