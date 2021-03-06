//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface NFUICellNotifier : NSObject
{
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)notifyCellsForEvent:(id)arg1 withPayload:(id)arg2;
- (void)unregisterAllCells;
- (void)unregisterCell:(id)arg1;
- (void)registerCellIfNeeded:(id)arg1;
- (id)init;

@end

