//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEOAuthManageDetailViewController, UIButton;

@interface AWEOAuthManageDetailButtonTableViewCell : UITableViewCell
{
    AWEOAuthManageDetailViewController *_parent;
    UIButton *_actionButton;
}

+ (id)identifier;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak AWEOAuthManageDetailViewController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)configureWithItem:(id)arg1;

@end

