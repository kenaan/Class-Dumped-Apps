//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Apollo25ApolloTableViewController.h"

#import "SKProductsRequestDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@interface _TtC6Apollo31SettingsApolloProViewController : _TtC6Apollo25ApolloTableViewController <SKProductsRequestDelegate, UIViewControllerTransitioningDelegate, UINavigationBarDelegate>
{
    // Error parsing type: , name: proFeatures
    // Error parsing type: , name: proDescriptionLabel
    // Error parsing type: , name: kindTipButton
    // Error parsing type: , name: generousTipButton
    // Error parsing type: , name: amazingTipButton
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: successView
    // Error parsing type: , name: confettiView
    // Error parsing type: , name: productIDs
    // Error parsing type: , name: products
    // Error parsing type: , name: featureDescription
    // Error parsing type: , name: navigationBar
    // Error parsing type: , name: restoreBarButtonItem
    // Error parsing type: , name: cancelBarButtonItem
    // Error parsing type: , name: tipButtonSize
    // Error parsing type: , name: transactionInProgress
    // Error parsing type: , name: productInProgress
    // Error parsing type: , name: $__lazy_storage_$_biometricsCapable
}

- (void).cxx_destruct;
- (void)amazingTipButtonTapped:(id)arg1;
- (void)generousTipButtonTapped:(id)arg1;
- (void)kindTipButtonTapped:(id)arg1;
- (void)restoreBarButtonItemTapped:(id)arg1;
- (void)cancelBarButtonItemTappedWithSender:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
