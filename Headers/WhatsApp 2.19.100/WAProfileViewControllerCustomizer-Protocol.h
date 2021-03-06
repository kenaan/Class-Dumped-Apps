//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITableView, WAProfileViewController;

@protocol WAProfileViewControllerCustomizer <NSObject>
@property(nonatomic) __weak WAProfileViewController *profileViewController;
- (void)loadAdditionalViews;
- (void)addAdditionalSections;
- (_Bool)isUserInputValid;
- (NSString *)headerViewTextFieldPlaceholder;
- (NSString *)headerViewHelperText;
- (void)customizeTableView:(UITableView *)arg1;
- (void)finishProfileEditing;
- (_Bool)shouldBecomeFirstResponder;
- (NSString *)prefilledName;
- (unsigned long long)maxNameLength;
@end

