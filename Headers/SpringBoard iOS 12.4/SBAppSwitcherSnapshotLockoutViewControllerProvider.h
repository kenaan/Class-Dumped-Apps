//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject
{
    NSMutableArray *_availableControllers;
}

- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)recycleLockoutViewController:(id)arg1;
- (id)lockoutViewControllerForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

