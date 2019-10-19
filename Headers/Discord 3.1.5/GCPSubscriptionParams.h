//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCPStrategy, GCPTimeToLive, NSString;

@interface GCPSubscriptionParams : NSObject
{
    NSString *_messageNamespace;
    NSString *_type;
    GCPTimeToLive *_timeToLive;
    CDUnknownBlockType _statusHandler;
    GCPStrategy *_strategy;
    NSString *_identifier;
}

+ (id)paramsWithMessageType:(id)arg1 strategy:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;
+ (id)paramsWithMessageType:(id)arg1 strategy:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) GCPStrategy *strategy; // @synthesize strategy=_strategy;
@property(readonly, copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(readonly, nonatomic) GCPTimeToLive *timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *messageNamespace; // @synthesize messageNamespace=_messageNamespace;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageType:(id)arg1 strategy:(id)arg2 optionalParams:(id)arg3;

@end
