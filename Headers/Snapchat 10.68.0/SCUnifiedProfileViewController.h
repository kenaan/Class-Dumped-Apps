//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileHeaderViewDelegate-Protocol.h"
#import "SCUnifiedProfileSectionDescriptorProvidingDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCSearchQueryResultController, SCUnifiedProfileHeaderCoordinator, SCUnifiedProfileView, SCUnifiedProfileViewControllerLifecycleListenerAnnouncer, SCUnifiedProfileViewLayoutConfiguration, UIView;
@protocol SCActionHandling, SCProfileViewControllerDelegate, SCUnifiedProfileHeaderDataProviding, SCUnifiedProfileSectionCreating, SCUnifiedProfileSectionDescriptorProviding;

@interface SCUnifiedProfileViewController : UIViewController <SCUnifiedProfileHeaderViewDelegate, SCShakeToReportDelegate, SCUnifiedProfileSectionDescriptorProvidingDelegate, UINavigationControllerDelegate, SCTraceEnabled, SCPageNameLogging>
{
    SCUnifiedProfileViewControllerLifecycleListenerAnnouncer *_announcer;
    double _unifiedProfileViewContentCollectionViewBottomContentInset;
    _Bool _startingNavBarHidden;
    _Bool _startingStatusBarHidden;
    long long _startingStatusBarStyle;
    SCUnifiedProfileView *_unifiedProfileView;
    NSArray *_unifiedProfileViewInjectedViewProviders;
    SCUnifiedProfileViewLayoutConfiguration *_layoutConfiguration;
    id <SCUnifiedProfileHeaderDataProviding> _headerDataProvider;
    SCUnifiedProfileHeaderCoordinator *_headerCoordinator;
    id <SCActionHandling> _actionHandler;
    id <SCUnifiedProfileSectionDescriptorProviding> _sectionDescriptorProvider;
    id <SCUnifiedProfileSectionCreating> _sectionCreator;
    SCSearchQueryResultController *_queryResultController;
    NSString *_profilePageViewName;
    id <SCProfileViewControllerDelegate> _delegate;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

@property(readonly, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(nonatomic) __weak id <SCProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldDismissViewControllerLater;
- (void)sectionDescriptorProviderDidUpdateSectionDesciptors:(id)arg1;
- (id)defaultProjectNameV2;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) UIView *unifiedProfileView;
- (void)dismissUnifiedProfileAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissUnifiedProfile;
- (_Bool)canPanDownToDismiss;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)unifiedProfileHeaderViewDidTapDismissButton:(id)arg1;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithHeaderDataProvider:(id)arg1 sectionDescriptorProvider:(id)arg2 sectionCreator:(id)arg3 actionHandler:(id)arg4 unifiedProfileViewInjectedViewProviders:(id)arg5 unifiedProfileViewContentCollectionViewBottomContentInset:(double)arg6 pageViewName:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

