//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidAlertDialogComplexTextDetails, ARIAndroidTextDetails;

@interface ARIGoogleOneHomeTabBackupStatusCardTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidAlertDialogComplexTextDetails *androidBackupEnableDialog; // @dynamic androidBackupEnableDialog;
@property(retain, nonatomic) ARIAndroidTextDetails *description_p; // @dynamic description_p;
@property(retain, nonatomic) ARIAndroidTextDetails *enableButtonText; // @dynamic enableButtonText;
@property(nonatomic) _Bool hasAndroidBackupEnableDialog; // @dynamic hasAndroidBackupEnableDialog;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasEnableButtonText; // @dynamic hasEnableButtonText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ARIAndroidTextDetails *title; // @dynamic title;

@end
