//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface BTAnalyticsSession : NSObject
{
    NSString *_sessionID;
    NSString *_source;
    NSString *_integration;
    NSMutableArray *_events;
    NSDictionary *_metadataParameters;
}

+ (id)sessionWithID:(id)arg1 source:(id)arg2 integration:(id)arg3;
@property(retain, nonatomic) NSDictionary *metadataParameters; // @synthesize metadataParameters=_metadataParameters;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(copy, nonatomic) NSString *integration; // @synthesize integration=_integration;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)init;

@end
