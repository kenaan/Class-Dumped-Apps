//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCUnauthenticatedBaseView;
@protocol SCPasswordResetSuccessDelegate, SCUnauthenticatedStyleHelper;

@interface SCPasswordResetSuccessViewController : UIViewController
{
    id <SCPasswordResetSuccessDelegate> _delegate;
    SCUnauthenticatedBaseView *_baseView;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_backButtonTapped;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

@end

