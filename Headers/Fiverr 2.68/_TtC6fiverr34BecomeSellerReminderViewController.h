//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6fiverr23LoginBaseViewController.h"

@class UIButton, UILabel, _TtC6fiverr10BaseButton;

@interface _TtC6fiverr34BecomeSellerReminderViewController : _TtC6fiverr23LoginBaseViewController
{
    // Error parsing type: , name: mainTitleLabel
    // Error parsing type: , name: gotItButton
    // Error parsing type: , name: remindMeLaterButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remindMeLaterClicked:(id)arg1;
- (void)gotItClicked:(id)arg1;
- (id)analyticsManagerScreenName;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool verticalSlideHideTitleBar;
@property(nonatomic) __weak UIButton *remindMeLaterButton; // @synthesize remindMeLaterButton;
@property(nonatomic) __weak _TtC6fiverr10BaseButton *gotItButton; // @synthesize gotItButton;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel;

@end
