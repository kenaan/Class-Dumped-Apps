//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue, NSMutableArray;

@interface ARIPhotosAutoBackupSettingChange_AutoBackupOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool backupPhotosOverCellularData; // @dynamic backupPhotosOverCellularData;
@property(nonatomic) _Bool backupVideosOverCellularData; // @dynamic backupVideosOverCellularData;
@property(nonatomic) _Bool backupWhileRoaming; // @dynamic backupWhileRoaming;
@property(nonatomic) long long cellDataLimitMbs; // @dynamic cellDataLimitMbs;
@property(nonatomic) int cellDataLimitType; // @dynamic cellDataLimitType;
@property(retain, nonatomic) NSMutableArray *deviceFoldersArray; // @dynamic deviceFoldersArray;
@property(readonly, nonatomic) unsigned long long deviceFoldersArray_Count; // @dynamic deviceFoldersArray_Count;
@property(nonatomic) _Bool hasBackupPhotosOverCellularData; // @dynamic hasBackupPhotosOverCellularData;
@property(nonatomic) _Bool hasBackupVideosOverCellularData; // @dynamic hasBackupVideosOverCellularData;
@property(nonatomic) _Bool hasBackupWhileRoaming; // @dynamic hasBackupWhileRoaming;
@property(nonatomic) _Bool hasCellDataLimitMbs; // @dynamic hasCellDataLimitMbs;
@property(nonatomic) _Bool hasCellDataLimitType; // @dynamic hasCellDataLimitType;
@property(nonatomic) _Bool hasRecoverStorageEnabled; // @dynamic hasRecoverStorageEnabled;
@property(nonatomic) _Bool hasUploadQuality; // @dynamic hasUploadQuality;
@property(retain, nonatomic) ARITwoStateSettingValue *recoverStorageEnabled; // @dynamic recoverStorageEnabled;
@property(nonatomic) int uploadQuality; // @dynamic uploadQuality;

@end
