//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class Contact, RUIActionSheetViewController;

@protocol ContactActionSheetDelegate <RUIActionSheetViewControllerDelegate>
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapStartChat:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapDeleteAllMessagesFor:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapBanFromChat:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapBanFromSubredditForContact:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapKick:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapBlock:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapReport:(Contact *)arg2;
- (void)contactActionSheetViewController:(RUIActionSheetViewController *)arg1 didTapShowProfileOf:(Contact *)arg2;
@end
