//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SGMSelasOptionProtocol-Protocol.h"

@class NSString;

@interface SEOption : NSObject <SGMSelasOptionProtocol>
{
    NSString *_url;
    NSString *_region;
    NSString *_appId;
}

@property(retain) NSString *appId; // @synthesize appId=_appId;
@property(retain) NSString *region; // @synthesize region=_region;
@property(retain) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

