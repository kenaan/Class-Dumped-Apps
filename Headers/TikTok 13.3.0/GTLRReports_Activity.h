//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRReports_Activity_Actor, GTLRReports_Activity_Id, NSArray, NSString;

@interface GTLRReports_Activity : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(retain, nonatomic) GTLRReports_Activity_Actor *actor; // @dynamic actor;
@property(retain, nonatomic) NSArray *events; // @dynamic events;
@property(retain, nonatomic) GTLRReports_Activity_Id *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *ownerDomain; // @dynamic ownerDomain;

@end

