//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveMRoomHistoryMsgResponse_Extra, HTSLiveRoomMessage, NSMutableArray, NSString;

@interface HTSLiveMRoomHistoryMsgResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cursor; // @dynamic cursor;
@property(retain, nonatomic) NSMutableArray *dataArray; // @dynamic dataArray;
@property(readonly, nonatomic) unsigned long long dataArray_Count; // @dynamic dataArray_Count;
@property(retain, nonatomic) HTSLiveMRoomHistoryMsgResponse_Extra *extra; // @dynamic extra;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasWelcomeMsg; // @dynamic hasWelcomeMsg;
@property(nonatomic) long long statusCode; // @dynamic statusCode;
@property(retain, nonatomic) HTSLiveRoomMessage *welcomeMsg; // @dynamic welcomeMsg;

@end

