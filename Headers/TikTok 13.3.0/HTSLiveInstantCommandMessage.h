//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveOpenSchemaCommand;

@interface HTSLiveInstantCommandMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int commandType; // @dynamic commandType;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasOpenSchemaCommand; // @dynamic hasOpenSchemaCommand;
@property(retain, nonatomic) HTSLiveOpenSchemaCommand *openSchemaCommand; // @dynamic openSchemaCommand;

@end

