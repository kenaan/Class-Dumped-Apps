//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUnionJumpPageProtocol-Protocol.h"

@class NSString;

@interface TUnionUrlPage : NSObject <TUnionJumpPageProtocol>
{
    NSString *_uri;
    NSString *_backUrl;
}

@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)initWithURI:(id)arg1 backUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

