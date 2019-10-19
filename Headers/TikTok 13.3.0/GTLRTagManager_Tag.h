//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRTagManager_Parameter, NSArray, NSNumber, NSString;

@interface GTLRTagManager_Tag : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *accountId; // @dynamic accountId;
@property(retain, nonatomic) NSArray *blockingRuleId; // @dynamic blockingRuleId;
@property(retain, nonatomic) NSArray *blockingTriggerId; // @dynamic blockingTriggerId;
@property(copy, nonatomic) NSString *containerId; // @dynamic containerId;
@property(copy, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(retain, nonatomic) NSArray *firingRuleId; // @dynamic firingRuleId;
@property(retain, nonatomic) NSArray *firingTriggerId; // @dynamic firingTriggerId;
@property(retain, nonatomic) NSNumber *liveOnly; // @dynamic liveOnly;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *notes; // @dynamic notes;
@property(retain, nonatomic) NSArray *parameter; // @dynamic parameter;
@property(copy, nonatomic) NSString *parentFolderId; // @dynamic parentFolderId;
@property(retain, nonatomic) GTLRTagManager_Parameter *priority; // @dynamic priority;
@property(retain, nonatomic) NSNumber *scheduleEndMs; // @dynamic scheduleEndMs;
@property(retain, nonatomic) NSNumber *scheduleStartMs; // @dynamic scheduleStartMs;
@property(retain, nonatomic) NSArray *setupTag; // @dynamic setupTag;
@property(copy, nonatomic) NSString *tagFiringOption; // @dynamic tagFiringOption;
@property(copy, nonatomic) NSString *tagId; // @dynamic tagId;
@property(retain, nonatomic) NSArray *teardownTag; // @dynamic teardownTag;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

