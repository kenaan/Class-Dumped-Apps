//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCSelectMusicProtocol-Protocol.h"

@class NSString;

@interface AWEACCSelectMusicImpl : NSObject <ACCSelectMusicProtocol>
{
}

- (id)selectMusicNewStylePageWithType:(unsigned long long)arg1 inputData:(id)arg2 pick:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)selectMusicPageWithInputData:(id)arg1 pick:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

