//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString;
@protocol NSFetchedResultsSectionInfo;

@protocol NSFetchedResultsControllerDelegate <NSObject>

@optional
- (NSString *)controller:(id)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
@end
