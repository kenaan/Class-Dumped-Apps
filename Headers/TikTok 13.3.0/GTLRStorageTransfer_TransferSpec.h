//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRStorageTransfer_AwsS3Data, GTLRStorageTransfer_GcsData, GTLRStorageTransfer_HttpData, GTLRStorageTransfer_ObjectConditions, GTLRStorageTransfer_TransferOptions;

@interface GTLRStorageTransfer_TransferSpec : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRStorageTransfer_AwsS3Data *awsS3DataSource; // @dynamic awsS3DataSource;
@property(retain, nonatomic) GTLRStorageTransfer_GcsData *gcsDataSink; // @dynamic gcsDataSink;
@property(retain, nonatomic) GTLRStorageTransfer_GcsData *gcsDataSource; // @dynamic gcsDataSource;
@property(retain, nonatomic) GTLRStorageTransfer_HttpData *httpDataSource; // @dynamic httpDataSource;
@property(retain, nonatomic) GTLRStorageTransfer_ObjectConditions *objectConditions; // @dynamic objectConditions;
@property(retain, nonatomic) GTLRStorageTransfer_TransferOptions *transferOptions; // @dynamic transferOptions;
@end
