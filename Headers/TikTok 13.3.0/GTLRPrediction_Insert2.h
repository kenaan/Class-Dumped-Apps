//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRPrediction_Insert2_ModelInfo, NSString;

@interface GTLRPrediction_Insert2 : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRDateTime *created; // @dynamic created;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRPrediction_Insert2_ModelInfo *modelInfo; // @dynamic modelInfo;
@property(copy, nonatomic) NSString *modelType; // @dynamic modelType;
@property(copy, nonatomic) NSString *selfLink; // @dynamic selfLink;
@property(copy, nonatomic) NSString *storageDataLocation; // @dynamic storageDataLocation;
@property(copy, nonatomic) NSString *storagePMMLLocation; // @dynamic storagePMMLLocation;
@property(copy, nonatomic) NSString *storagePMMLModelLocation; // @dynamic storagePMMLModelLocation;
@property(retain, nonatomic) GTLRDateTime *trainingComplete; // @dynamic trainingComplete;
@property(copy, nonatomic) NSString *trainingStatus; // @dynamic trainingStatus;

@end

