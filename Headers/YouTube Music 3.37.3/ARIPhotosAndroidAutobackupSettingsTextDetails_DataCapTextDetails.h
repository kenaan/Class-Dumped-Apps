//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidTextDetails, NSMutableArray;

@interface ARIPhotosAndroidAutobackupSettingsTextDetails_DataCapTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidTextDetails *cellDataUsageTitleText; // @dynamic cellDataUsageTitleText;
@property(retain, nonatomic) NSMutableArray *dataCapOptionTextArray; // @dynamic dataCapOptionTextArray;
@property(readonly, nonatomic) unsigned long long dataCapOptionTextArray_Count; // @dynamic dataCapOptionTextArray_Count;
@property(retain, nonatomic) ARIAndroidTextDetails *dataCapOptionsFooterText; // @dynamic dataCapOptionsFooterText;
@property(retain, nonatomic) ARIAndroidTextDetails *dataCapOptionsHeaderText; // @dynamic dataCapOptionsHeaderText;
@property(nonatomic) _Bool hasCellDataUsageTitleText; // @dynamic hasCellDataUsageTitleText;
@property(nonatomic) _Bool hasDataCapOptionsFooterText; // @dynamic hasDataCapOptionsFooterText;
@property(nonatomic) _Bool hasDataCapOptionsHeaderText; // @dynamic hasDataCapOptionsHeaderText;
@property(nonatomic) _Bool hasUploadCellularVideosSwitchText; // @dynamic hasUploadCellularVideosSwitchText;
@property(nonatomic) _Bool hasUploadRoamingSwitchText; // @dynamic hasUploadRoamingSwitchText;
@property(retain, nonatomic) ARIAndroidTextDetails *uploadCellularVideosSwitchText; // @dynamic uploadCellularVideosSwitchText;
@property(retain, nonatomic) ARIAndroidTextDetails *uploadRoamingSwitchText; // @dynamic uploadRoamingSwitchText;

@end
