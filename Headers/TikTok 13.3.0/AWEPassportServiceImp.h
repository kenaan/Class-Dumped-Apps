//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEPassportService-Protocol.h"

@class NSString;

@interface AWEPassportServiceImp : HTSService <AWEPassportService>
{
}

+ (void)load;
- (void)login:(CDUnknownBlockType)arg1 withTrackerInformation:(id)arg2;
- (void)login:(CDUnknownBlockType)arg1;
- (id)currentUser;
- (_Bool)isLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

