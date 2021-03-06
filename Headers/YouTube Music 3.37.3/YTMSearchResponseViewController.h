//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTLightweightScrollable-Protocol.h"
#import "YTResponseViewController-Protocol.h"

@class GIMMe, NSString, UIScrollView, YTISearchResponse, YTMBaseInnerTubeViewController;
@protocol YTInnerTubeUIService, YTLightweightScrollableDelegate, YTMSearchResponseViewControllerDelegate, YTResponder, YTResponseViewController;

@interface YTMSearchResponseViewController : UIViewController <YTLightweightScrollable, YTResponseViewController>
{
    _Bool _modelLoaded;
    UIViewController<YTResponseViewController> *_contentViewController;
    YTMBaseInnerTubeViewController *_baseViewController;
    id <YTInnerTubeUIService> _service;
    YTISearchResponse *_response;
    _Bool _scrollableAllowsRefresh;
    id <YTResponder> _parentResponder;
    id <YTLightweightScrollableDelegate> _scrollableDelegate;
    GIMMe *_gimme;
    id <YTMSearchResponseViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMSearchResponseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool scrollableAllowsRefresh; // @synthesize scrollableAllowsRefresh=_scrollableAllowsRefresh;
@property(nonatomic) __weak id <YTLightweightScrollableDelegate> scrollableDelegate; // @synthesize scrollableDelegate=_scrollableDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg1;
- (void)maybeUpdateContentViewControllerInsets;
- (void)loadLightweightContentViewController:(id)arg1;
- (void)unloadModel;
- (void)loadWithError:(id)arg1;
- (void)loadContentWithModel:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)loadDefaultContent;
- (void)willMakeRequest:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIScrollView *scrollableView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

