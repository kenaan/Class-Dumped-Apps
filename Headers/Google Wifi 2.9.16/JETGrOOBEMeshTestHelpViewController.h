//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBECollectionViewController.h"

@class NSString;
@protocol JETGrOOBEMeshTestHelpViewControllerDelegate;

@interface JETGrOOBEMeshTestHelpViewController : JETOOBECollectionViewController
{
    id <JETGrOOBEMeshTestHelpViewControllerDelegate> _delegate;
    NSString *_retestText;
}

@property(copy, nonatomic) NSString *retestText; // @synthesize retestText=_retestText;
@property(nonatomic) __weak id <JETGrOOBEMeshTestHelpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onContactSupport;
- (void)onRetestButton;
- (void)onSkipButton;
- (void)constructModel;
- (id)analyticsScreenName;
- (void)viewDidLoad;
- (void)loadView;

@end
