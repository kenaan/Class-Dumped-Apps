//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveRemoteCommand.h"

@class NSAttributedString, NSDictionary, NSNumber;

@interface HTSLiveChangeRoomCommand : HTSLiveRemoteCommand
{
    NSNumber *_ownerID;
    NSAttributedString *_prompts;
    NSDictionary *_extraParmas;
    long long _source;
    NSDictionary *_eventParams;
}

@property(retain, nonatomic) NSDictionary *eventParams; // @synthesize eventParams=_eventParams;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *extraParmas; // @synthesize extraParmas=_extraParmas;
@property(retain, nonatomic) NSAttributedString *prompts; // @synthesize prompts=_prompts;
@property(retain, nonatomic) NSNumber *ownerID; // @synthesize ownerID=_ownerID;
- (void).cxx_destruct;
- (id)contextParams;

@end

