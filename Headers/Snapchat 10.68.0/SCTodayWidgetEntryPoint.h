//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCBitmojiSelfieServices, SCLazy, SCLoggerServices, SCServicesExposer, SCSnapchatterServices;

@interface SCTodayWidgetEntryPoint : SCEntryPoint
{
    SCLazy *_lazyTodayWidgetService;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCLoggerServices *_loggerServices;
    SCSnapchatterServices *_snapchatterServices;
    SCServicesExposer *_todayWidgetServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *todayWidgetServicesExposer; // @synthesize todayWidgetServicesExposer=_todayWidgetServicesExposer;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)_warmupTodayWidgetService;
- (id)_todayWidgetService;
- (id)end;
- (void)begin;

@end
