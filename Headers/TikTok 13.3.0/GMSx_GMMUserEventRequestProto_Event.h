//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapsSuggestLog, NSString;

@interface GMSx_GMMUserEventRequestProto_Event : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *data_p; // @dynamic data_p;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasMapsSuggestLog; // @dynamic hasMapsSuggestLog;
@property(nonatomic) _Bool hasReferenceTimeMs; // @dynamic hasReferenceTimeMs;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTimeDelta; // @dynamic hasTimeDelta;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUndroppableLogEvent; // @dynamic hasUndroppableLogEvent;
@property(retain, nonatomic) GMSx_GMMMapsSuggestLog *mapsSuggestLog; // @dynamic mapsSuggestLog;
@property(nonatomic) unsigned long long referenceTimeMs; // @dynamic referenceTimeMs;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) unsigned int timeDelta; // @dynamic timeDelta;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) _Bool undroppableLogEvent; // @dynamic undroppableLogEvent;

@end

