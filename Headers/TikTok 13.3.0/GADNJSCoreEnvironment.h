//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNJSCoreEnvironmentProtocol-Protocol.h"

@class GADNJSCoreConsole, GADNJSCoreInterface, GADNJSCoreLocalStorage, GADNJSCoreNavigator, GADNJSCorePinger, GADNJSCoreTimers, NSString;

@interface GADNJSCoreEnvironment : NSObject <GADNJSCoreEnvironmentProtocol>
{
    NSString *_environment;
    NSString *_platform;
    NSString *_sdkVersion;
    GADNJSCoreNavigator *_navigator;
    GADNJSCoreInterface *_googleAdsJsInterface;
    GADNJSCoreConsole *_console;
    GADNJSCoreTimers *_timers;
    GADNJSCorePinger *_pinger;
    GADNJSCoreLocalStorage *_localStorage;
}

@property(readonly, nonatomic) GADNJSCoreLocalStorage *localStorage; // @synthesize localStorage=_localStorage;
@property(readonly, nonatomic) GADNJSCorePinger *pinger; // @synthesize pinger=_pinger;
@property(readonly, nonatomic) GADNJSCoreTimers *timers; // @synthesize timers=_timers;
@property(readonly, nonatomic) GADNJSCoreConsole *console; // @synthesize console=_console;
@property(readonly, nonatomic) GADNJSCoreInterface *googleAdsJsInterface; // @synthesize googleAdsJsInterface=_googleAdsJsInterface;
@property(readonly, nonatomic) GADNJSCoreNavigator *navigator; // @synthesize navigator=_navigator;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSCoreJSContext:(id)arg1 eventContext:(id)arg2;

@end

