//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol YTOfflineModeProvider <NSObject>
@property(readonly, nonatomic, getter=isOfflineMode) _Bool offlineMode;
- (void)removeOfflineModeObserver:(id <YTOfflineModeObserver>)arg1;
- (void)addOfflineModeObserver:(id <YTOfflineModeObserver>)arg1;
@end

