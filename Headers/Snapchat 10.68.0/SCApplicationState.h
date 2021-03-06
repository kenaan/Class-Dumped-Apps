//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCApplicationState : NSObject
{
    _Bool _protectedDataAvailable;
    long long _applicationState;
    long long _nextApplicationState;
}

+ (id)shared;
@property(readonly) long long nextApplicationState; // @synthesize nextApplicationState=_nextApplicationState;
@property(readonly) long long applicationState; // @synthesize applicationState=_applicationState;
@property(readonly) _Bool protectedDataAvailable; // @synthesize protectedDataAvailable=_protectedDataAvailable;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)appDidFinishLaunching;
- (void)_protectedDataWillBecomeUnavailable;
- (void)_protectedDataDidBecomeAvailable;
- (id)init;

@end

