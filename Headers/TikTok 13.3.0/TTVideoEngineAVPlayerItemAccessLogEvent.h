//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTVideoEngineAVPlayerItemAccessLogEvent : NSObject
{
    NSString *_URI;
    NSString *_serverAddress;
    double _durationWatched;
}

@property(nonatomic) double durationWatched; // @synthesize durationWatched=_durationWatched;
@property(retain, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain, nonatomic) NSString *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;

@end

