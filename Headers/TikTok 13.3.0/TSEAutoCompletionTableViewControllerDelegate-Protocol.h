//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSEAutoCompletionTableViewController;

@protocol TSEAutoCompletionTableViewControllerDelegate <NSObject>
- (void)autoCompletionTableViewController:(TSEAutoCompletionTableViewController *)arg1 wantsToUpdateText:(NSString *)arg2 proposedCursorLocation:(long long)arg3;
- (void)autoCompletionTableViewController:(TSEAutoCompletionTableViewController *)arg1 wantsAutoCompletionResultsVisible:(_Bool)arg2;
@end

